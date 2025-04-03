/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IpType.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>Specifies the network configuration for the public ingress
   * point.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/PublicNetworkConfiguration">AWS
   * API Reference</a></p>
   */
  class PublicNetworkConfiguration
  {
  public:
    AWS_MAILMANAGER_API PublicNetworkConfiguration() = default;
    AWS_MAILMANAGER_API PublicNetworkConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API PublicNetworkConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address type for the public ingress point. Valid values are IPV4 and
     * DUAL_STACK.</p>
     */
    inline IpType GetIpType() const { return m_ipType; }
    inline bool IpTypeHasBeenSet() const { return m_ipTypeHasBeenSet; }
    inline void SetIpType(IpType value) { m_ipTypeHasBeenSet = true; m_ipType = value; }
    inline PublicNetworkConfiguration& WithIpType(IpType value) { SetIpType(value); return *this;}
    ///@}
  private:

    IpType m_ipType{IpType::NOT_SET};
    bool m_ipTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
