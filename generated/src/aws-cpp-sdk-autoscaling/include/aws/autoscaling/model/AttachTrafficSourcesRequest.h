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
  class AttachTrafficSourcesRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API AttachTrafficSourcesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachTrafficSources"; }

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
    AttachTrafficSourcesRequest& WithAutoScalingGroupName(AutoScalingGroupNameT&& value) { SetAutoScalingGroupName(std::forward<AutoScalingGroupNameT>(value)); return *this;}
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
    AttachTrafficSourcesRequest& WithTrafficSources(TrafficSourcesT&& value) { SetTrafficSources(std::forward<TrafficSourcesT>(value)); return *this;}
    template<typename TrafficSourcesT = TrafficSourceIdentifier>
    AttachTrafficSourcesRequest& AddTrafficSources(TrafficSourcesT&& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources.emplace_back(std::forward<TrafficSourcesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> If you enable zonal shift with cross-zone disabled load balancers, capacity
     * could become imbalanced across Availability Zones. To skip the validation,
     * specify <code>true</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/ec2-auto-scaling-zonal-shift.html">Auto
     * Scaling group zonal shift</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.
     * </p>
     */
    inline bool GetSkipZonalShiftValidation() const { return m_skipZonalShiftValidation; }
    inline bool SkipZonalShiftValidationHasBeenSet() const { return m_skipZonalShiftValidationHasBeenSet; }
    inline void SetSkipZonalShiftValidation(bool value) { m_skipZonalShiftValidationHasBeenSet = true; m_skipZonalShiftValidation = value; }
    inline AttachTrafficSourcesRequest& WithSkipZonalShiftValidation(bool value) { SetSkipZonalShiftValidation(value); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<TrafficSourceIdentifier> m_trafficSources;
    bool m_trafficSourcesHasBeenSet = false;

    bool m_skipZonalShiftValidation{false};
    bool m_skipZonalShiftValidationHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
