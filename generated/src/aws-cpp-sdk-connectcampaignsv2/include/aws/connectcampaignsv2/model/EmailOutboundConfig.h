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
    AWS_CONNECTCAMPAIGNSV2_API EmailOutboundConfig() = default;
    AWS_CONNECTCAMPAIGNSV2_API EmailOutboundConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API EmailOutboundConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetConnectSourceEmailAddress() const { return m_connectSourceEmailAddress; }
    inline bool ConnectSourceEmailAddressHasBeenSet() const { return m_connectSourceEmailAddressHasBeenSet; }
    template<typename ConnectSourceEmailAddressT = Aws::String>
    void SetConnectSourceEmailAddress(ConnectSourceEmailAddressT&& value) { m_connectSourceEmailAddressHasBeenSet = true; m_connectSourceEmailAddress = std::forward<ConnectSourceEmailAddressT>(value); }
    template<typename ConnectSourceEmailAddressT = Aws::String>
    EmailOutboundConfig& WithConnectSourceEmailAddress(ConnectSourceEmailAddressT&& value) { SetConnectSourceEmailAddress(std::forward<ConnectSourceEmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetSourceEmailAddressDisplayName() const { return m_sourceEmailAddressDisplayName; }
    inline bool SourceEmailAddressDisplayNameHasBeenSet() const { return m_sourceEmailAddressDisplayNameHasBeenSet; }
    template<typename SourceEmailAddressDisplayNameT = Aws::String>
    void SetSourceEmailAddressDisplayName(SourceEmailAddressDisplayNameT&& value) { m_sourceEmailAddressDisplayNameHasBeenSet = true; m_sourceEmailAddressDisplayName = std::forward<SourceEmailAddressDisplayNameT>(value); }
    template<typename SourceEmailAddressDisplayNameT = Aws::String>
    EmailOutboundConfig& WithSourceEmailAddressDisplayName(SourceEmailAddressDisplayNameT&& value) { SetSourceEmailAddressDisplayName(std::forward<SourceEmailAddressDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWisdomTemplateArn() const { return m_wisdomTemplateArn; }
    inline bool WisdomTemplateArnHasBeenSet() const { return m_wisdomTemplateArnHasBeenSet; }
    template<typename WisdomTemplateArnT = Aws::String>
    void SetWisdomTemplateArn(WisdomTemplateArnT&& value) { m_wisdomTemplateArnHasBeenSet = true; m_wisdomTemplateArn = std::forward<WisdomTemplateArnT>(value); }
    template<typename WisdomTemplateArnT = Aws::String>
    EmailOutboundConfig& WithWisdomTemplateArn(WisdomTemplateArnT&& value) { SetWisdomTemplateArn(std::forward<WisdomTemplateArnT>(value)); return *this;}
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
