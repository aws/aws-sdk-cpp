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
   * <p>Default Email Outbound config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/EmailOutboundConfig">AWS
   * API Reference</a></p>
   */
  class EmailOutboundConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API EmailOutboundConfig();
    AWS_CONNECTCAMPAIGNSV2_API EmailOutboundConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API EmailOutboundConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetConnectSourceEmailAddress() const{ return m_connectSourceEmailAddress; }
    inline bool ConnectSourceEmailAddressHasBeenSet() const { return m_connectSourceEmailAddressHasBeenSet; }
    inline void SetConnectSourceEmailAddress(const Aws::String& value) { m_connectSourceEmailAddressHasBeenSet = true; m_connectSourceEmailAddress = value; }
    inline void SetConnectSourceEmailAddress(Aws::String&& value) { m_connectSourceEmailAddressHasBeenSet = true; m_connectSourceEmailAddress = std::move(value); }
    inline void SetConnectSourceEmailAddress(const char* value) { m_connectSourceEmailAddressHasBeenSet = true; m_connectSourceEmailAddress.assign(value); }
    inline EmailOutboundConfig& WithConnectSourceEmailAddress(const Aws::String& value) { SetConnectSourceEmailAddress(value); return *this;}
    inline EmailOutboundConfig& WithConnectSourceEmailAddress(Aws::String&& value) { SetConnectSourceEmailAddress(std::move(value)); return *this;}
    inline EmailOutboundConfig& WithConnectSourceEmailAddress(const char* value) { SetConnectSourceEmailAddress(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSourceEmailAddressDisplayName() const{ return m_sourceEmailAddressDisplayName; }
    inline bool SourceEmailAddressDisplayNameHasBeenSet() const { return m_sourceEmailAddressDisplayNameHasBeenSet; }
    inline void SetSourceEmailAddressDisplayName(const Aws::String& value) { m_sourceEmailAddressDisplayNameHasBeenSet = true; m_sourceEmailAddressDisplayName = value; }
    inline void SetSourceEmailAddressDisplayName(Aws::String&& value) { m_sourceEmailAddressDisplayNameHasBeenSet = true; m_sourceEmailAddressDisplayName = std::move(value); }
    inline void SetSourceEmailAddressDisplayName(const char* value) { m_sourceEmailAddressDisplayNameHasBeenSet = true; m_sourceEmailAddressDisplayName.assign(value); }
    inline EmailOutboundConfig& WithSourceEmailAddressDisplayName(const Aws::String& value) { SetSourceEmailAddressDisplayName(value); return *this;}
    inline EmailOutboundConfig& WithSourceEmailAddressDisplayName(Aws::String&& value) { SetSourceEmailAddressDisplayName(std::move(value)); return *this;}
    inline EmailOutboundConfig& WithSourceEmailAddressDisplayName(const char* value) { SetSourceEmailAddressDisplayName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWisdomTemplateArn() const{ return m_wisdomTemplateArn; }
    inline bool WisdomTemplateArnHasBeenSet() const { return m_wisdomTemplateArnHasBeenSet; }
    inline void SetWisdomTemplateArn(const Aws::String& value) { m_wisdomTemplateArnHasBeenSet = true; m_wisdomTemplateArn = value; }
    inline void SetWisdomTemplateArn(Aws::String&& value) { m_wisdomTemplateArnHasBeenSet = true; m_wisdomTemplateArn = std::move(value); }
    inline void SetWisdomTemplateArn(const char* value) { m_wisdomTemplateArnHasBeenSet = true; m_wisdomTemplateArn.assign(value); }
    inline EmailOutboundConfig& WithWisdomTemplateArn(const Aws::String& value) { SetWisdomTemplateArn(value); return *this;}
    inline EmailOutboundConfig& WithWisdomTemplateArn(Aws::String&& value) { SetWisdomTemplateArn(std::move(value)); return *this;}
    inline EmailOutboundConfig& WithWisdomTemplateArn(const char* value) { SetWisdomTemplateArn(value); return *this;}
    ///@}
  private:

    Aws::String m_connectSourceEmailAddress;
    bool m_connectSourceEmailAddressHasBeenSet = false;

    Aws::String m_sourceEmailAddressDisplayName;
    bool m_sourceEmailAddressDisplayNameHasBeenSet = false;

    Aws::String m_wisdomTemplateArn;
    bool m_wisdomTemplateArnHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
