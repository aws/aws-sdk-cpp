/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Firehose
{
namespace Model
{

  /**
   * <p>Configure a Snowflake VPC</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SnowflakeVpcConfiguration">AWS
   * API Reference</a></p>
   */
  class SnowflakeVpcConfiguration
  {
  public:
    AWS_FIREHOSE_API SnowflakeVpcConfiguration() = default;
    AWS_FIREHOSE_API SnowflakeVpcConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SnowflakeVpcConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The VPCE ID for Firehose to privately connect with Snowflake. The ID format
     * is com.amazonaws.vpce.[region].vpce-svc-&lt;[id]&gt;. For more information, see
     * <a
     * href="https://docs.snowflake.com/en/user-guide/admin-security-privatelink">Amazon
     * PrivateLink &amp; Snowflake</a> </p>
     */
    inline const Aws::String& GetPrivateLinkVpceId() const { return m_privateLinkVpceId; }
    inline bool PrivateLinkVpceIdHasBeenSet() const { return m_privateLinkVpceIdHasBeenSet; }
    template<typename PrivateLinkVpceIdT = Aws::String>
    void SetPrivateLinkVpceId(PrivateLinkVpceIdT&& value) { m_privateLinkVpceIdHasBeenSet = true; m_privateLinkVpceId = std::forward<PrivateLinkVpceIdT>(value); }
    template<typename PrivateLinkVpceIdT = Aws::String>
    SnowflakeVpcConfiguration& WithPrivateLinkVpceId(PrivateLinkVpceIdT&& value) { SetPrivateLinkVpceId(std::forward<PrivateLinkVpceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_privateLinkVpceId;
    bool m_privateLinkVpceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
