/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcampaignsv2/ConnectCampaignsV2_EXPORTS.h>
#include <aws/connectcampaignsv2/model/CommunicationLimits.h>
#include <aws/connectcampaignsv2/model/InstanceLimitsHandling.h>
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
   * <p>Communication limits config</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connectcampaignsv2-2024-04-23/CommunicationLimitsConfig">AWS
   * API Reference</a></p>
   */
  class CommunicationLimitsConfig
  {
  public:
    AWS_CONNECTCAMPAIGNSV2_API CommunicationLimitsConfig() = default;
    AWS_CONNECTCAMPAIGNSV2_API CommunicationLimitsConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API CommunicationLimitsConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECTCAMPAIGNSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const CommunicationLimits& GetAllChannelSubtypes() const { return m_allChannelSubtypes; }
    inline bool AllChannelSubtypesHasBeenSet() const { return m_allChannelSubtypesHasBeenSet; }
    template<typename AllChannelSubtypesT = CommunicationLimits>
    void SetAllChannelSubtypes(AllChannelSubtypesT&& value) { m_allChannelSubtypesHasBeenSet = true; m_allChannelSubtypes = std::forward<AllChannelSubtypesT>(value); }
    template<typename AllChannelSubtypesT = CommunicationLimits>
    CommunicationLimitsConfig& WithAllChannelSubtypes(AllChannelSubtypesT&& value) { SetAllChannelSubtypes(std::forward<AllChannelSubtypesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline InstanceLimitsHandling GetInstanceLimitsHandling() const { return m_instanceLimitsHandling; }
    inline bool InstanceLimitsHandlingHasBeenSet() const { return m_instanceLimitsHandlingHasBeenSet; }
    inline void SetInstanceLimitsHandling(InstanceLimitsHandling value) { m_instanceLimitsHandlingHasBeenSet = true; m_instanceLimitsHandling = value; }
    inline CommunicationLimitsConfig& WithInstanceLimitsHandling(InstanceLimitsHandling value) { SetInstanceLimitsHandling(value); return *this;}
    ///@}
  private:

    CommunicationLimits m_allChannelSubtypes;
    bool m_allChannelSubtypesHasBeenSet = false;

    InstanceLimitsHandling m_instanceLimitsHandling{InstanceLimitsHandling::NOT_SET};
    bool m_instanceLimitsHandlingHasBeenSet = false;
  };

} // namespace Model
} // namespace ConnectCampaignsV2
} // namespace Aws
