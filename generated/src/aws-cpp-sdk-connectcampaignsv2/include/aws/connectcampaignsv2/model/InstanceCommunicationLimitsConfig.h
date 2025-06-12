/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/CommunicationLimits.h>
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
   * <p>Instance Communication limits config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/InstanceCommunicationLimitsConfig">AWS
   * API Reference</a></p>
   */
  class InstanceCommunicationLimitsConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API InstanceCommunicationLimitsConfig() = default;
    AWS_CONNECTCAMPAIGNSV2_API InstanceCommunicationLimitsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API InstanceCommunicationLimitsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const CommunicationLimits& GetAllChannelSubtypes() const { return m_allChannelSubtypes; }
    inline bool AllChannelSubtypesHasBeenSet() const { return m_allChannelSubtypesHasBeenSet; }
    template<typename AllChannelSubtypesT = CommunicationLimits>
    void SetAllChannelSubtypes(AllChannelSubtypesT&& value) { m_allChannelSubtypesHasBeenSet = true; m_allChannelSubtypes = std::forward<AllChannelSubtypesT>(value); }
    template<typename AllChannelSubtypesT = CommunicationLimits>
    InstanceCommunicationLimitsConfig& WithAllChannelSubtypes(AllChannelSubtypesT&& value) { SetAllChannelSubtypes(std::forward<AllChannelSubtypesT>(value)); return *this;}
    ///@}
  private:

    CommunicationLimits m_allChannelSubtypes;
    bool m_allChannelSubtypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
