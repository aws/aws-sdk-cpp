/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/autoscaling/model/TrafficSourceIdentifier.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class DetachTrafficSourcesRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DetachTrafficSourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachTrafficSources"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const { return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    template<typename AutoScalingGroupNameT = Aws::String>
    void SetAutoScalingGroupName(AutoScalingGroupNameT&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::forward<AutoScalingGroupNameT>(value); }
    template<typename AutoScalingGroupNameT = Aws::String>
    DetachTrafficSourcesRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of one or more traffic sources. You can specify up to
     * 10 traffic sources.</p>
     */
    inline const Aws::Vector<TrafficSourceIdentifier>& GetTrafficSources() const { return m_trafficSources; }
    inline bool TrafficSourcesHasBeenSet() const { return m_trafficSourcesHasBeenSet; }
    template<typename TrafficSourcesT = Aws::Vector<TrafficSourceIdentifier>>
    void SetTrafficSources(TrafficSourcesT&& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources = std::forward<TrafficSourcesT>(value); }
    template<typename TrafficSourcesT = Aws::Vector<TrafficSourceIdentifier>>
    DetachTrafficSourcesRequest& WithTrafficSources(TrafficSourcesT&& value) { SetTrafficSources(std::forward<TrafficSourcesT>(value)); return *this;}
    template<typename TrafficSourcesT = TrafficSourceIdentifier>
    DetachTrafficSourcesRequest& AddTrafficSources(TrafficSourcesT&& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources.emplace_back(std::forward<TrafficSourcesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<TrafficSourceIdentifier> m_trafficSources;
    bool m_trafficSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
