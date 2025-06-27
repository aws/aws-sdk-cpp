/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>The outbound email address ID.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/OutboundEmailConfig">AWS
   * API Reference</a></p>
   */
  class OutboundEmailConfig
  {
  public:
    AWS_CONNECT_API OutboundEmailConfig() = default;
    AWS_CONNECT_API OutboundEmailConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API OutboundEmailConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the email address.</p>
     */
    inline const Aws::String& GetOutboundEmailAddressId() const { return m_outboundEmailAddressId; }
    inline bool OutboundEmailAddressIdHasBeenSet() const { return m_outboundEmailAddressIdHasBeenSet; }
    template<typename OutboundEmailAddressIdT = Aws::String>
    void SetOutboundEmailAddressId(OutboundEmailAddressIdT&& value) { m_outboundEmailAddressIdHasBeenSet = true; m_outboundEmailAddressId = std::forward<OutboundEmailAddressIdT>(value); }
    template<typename OutboundEmailAddressIdT = Aws::String>
    OutboundEmailConfig& WithOutboundEmailAddressId(OutboundEmailAddressIdT&& value) { SetOutboundEmailAddressId(std::forward<OutboundEmailAddressIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_outboundEmailAddressId;
    bool m_outboundEmailAddressIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
