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
    AWS_CONNECTCAMPAIGNSV2_API SmsOutboundConfig();
    AWS_CONNECTCAMPAIGNSV2_API SmsOutboundConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API SmsOutboundConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetConnectSourcePhoneNumberArn() const{ return m_connectSourcePhoneNumberArn; }
    inline bool ConnectSourcePhoneNumberArnHasBeenSet() const { return m_connectSourcePhoneNumberArnHasBeenSet; }
    inline void SetConnectSourcePhoneNumberArn(const Aws::String& value) { m_connectSourcePhoneNumberArnHasBeenSet = true; m_connectSourcePhoneNumberArn = value; }
    inline void SetConnectSourcePhoneNumberArn(Aws::String&& value) { m_connectSourcePhoneNumberArnHasBeenSet = true; m_connectSourcePhoneNumberArn = std::move(value); }
    inline void SetConnectSourcePhoneNumberArn(const char* value) { m_connectSourcePhoneNumberArnHasBeenSet = true; m_connectSourcePhoneNumberArn.assign(value); }
    inline SmsOutboundConfig& WithConnectSourcePhoneNumberArn(const Aws::String& value) { SetConnectSourcePhoneNumberArn(value); return *this;}
    inline SmsOutboundConfig& WithConnectSourcePhoneNumberArn(Aws::String&& value) { SetConnectSourcePhoneNumberArn(std::move(value)); return *this;}
    inline SmsOutboundConfig& WithConnectSourcePhoneNumberArn(const char* value) { SetConnectSourcePhoneNumberArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWisdomTemplateArn() const{ return m_wisdomTemplateArn; }
    inline bool WisdomTemplateArnHasBeenSet() const { return m_wisdomTemplateArnHasBeenSet; }
    inline void SetWisdomTemplateArn(const Aws::String& value) { m_wisdomTemplateArnHasBeenSet = true; m_wisdomTemplateArn = value; }
    inline void SetWisdomTemplateArn(Aws::String&& value) { m_wisdomTemplateArnHasBeenSet = true; m_wisdomTemplateArn = std::move(value); }
    inline void SetWisdomTemplateArn(const char* value) { m_wisdomTemplateArnHasBeenSet = true; m_wisdomTemplateArn.assign(value); }
    inline SmsOutboundConfig& WithWisdomTemplateArn(const Aws::String& value) { SetWisdomTemplateArn(value); return *this;}
    inline SmsOutboundConfig& WithWisdomTemplateArn(Aws::String&& value) { SetWisdomTemplateArn(std::move(value)); return *this;}
    inline SmsOutboundConfig& WithWisdomTemplateArn(const char* value) { SetWisdomTemplateArn(value); return *this;}
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
