/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
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
namespace ConnectCampaignsV2
{
namespace Model
{

  /**
   * <p>Default SMS Outbound config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/SmsOutboundConfig">AWS
   * API Reference</a></p>
   */
  class SmsOutboundConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API SmsOutboundConfig() = default;
    AWS_CONNECTCAMPAIGNSV2_API SmsOutboundConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API SmsOutboundConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetConnectSourcePhoneNumberArn() const { return m_connectSourcePhoneNumberArn; }
    inline bool ConnectSourcePhoneNumberArnHasBeenSet() const { return m_connectSourcePhoneNumberArnHasBeenSet; }
    template<typename ConnectSourcePhoneNumberArnT = Aws::String>
    void SetConnectSourcePhoneNumberArn(ConnectSourcePhoneNumberArnT&& value) { m_connectSourcePhoneNumberArnHasBeenSet = true; m_connectSourcePhoneNumberArn = std::forward<ConnectSourcePhoneNumberArnT>(value); }
    template<typename ConnectSourcePhoneNumberArnT = Aws::String>
    SmsOutboundConfig& WithConnectSourcePhoneNumberArn(ConnectSourcePhoneNumberArnT&& value) { SetConnectSourcePhoneNumberArn(std::forward<ConnectSourcePhoneNumberArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWisdomTemplateArn() const { return m_wisdomTemplateArn; }
    inline bool WisdomTemplateArnHasBeenSet() const { return m_wisdomTemplateArnHasBeenSet; }
    template<typename WisdomTemplateArnT = Aws::String>
    void SetWisdomTemplateArn(WisdomTemplateArnT&& value) { m_wisdomTemplateArnHasBeenSet = true; m_wisdomTemplateArn = std::forward<WisdomTemplateArnT>(value); }
    template<typename WisdomTemplateArnT = Aws::String>
    SmsOutboundConfig& WithWisdomTemplateArn(WisdomTemplateArnT&& value) { SetWisdomTemplateArn(std::forward<WisdomTemplateArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectSourcePhoneNumberArn;
    bool m_connectSourcePhoneNumberArnHasBeenSet = false;

    Aws::String m_wisdomTemplateArn;
    bool m_wisdomTemplateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
