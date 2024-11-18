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
    AWS_AUTOSCALING_API AttachTrafficSourcesRequest();

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
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }
    inline AttachTrafficSourcesRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline AttachTrafficSourcesRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline AttachTrafficSourcesRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifiers of one or more traffic sources. You can specify up to
     * 10 traffic sources.</p>
     */
    inline const Aws::Vector<TrafficSourceIdentifier>& GetTrafficSources() const{ return m_trafficSources; }
    inline bool TrafficSourcesHasBeenSet() const { return m_trafficSourcesHasBeenSet; }
    inline void SetTrafficSources(const Aws::Vector<TrafficSourceIdentifier>& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources = value; }
    inline void SetTrafficSources(Aws::Vector<TrafficSourceIdentifier>&& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources = std::move(value); }
    inline AttachTrafficSourcesRequest& WithTrafficSources(const Aws::Vector<TrafficSourceIdentifier>& value) { SetTrafficSources(value); return *this;}
    inline AttachTrafficSourcesRequest& WithTrafficSources(Aws::Vector<TrafficSourceIdentifier>&& value) { SetTrafficSources(std::move(value)); return *this;}
    inline AttachTrafficSourcesRequest& AddTrafficSources(const TrafficSourceIdentifier& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources.push_back(value); return *this; }
    inline AttachTrafficSourcesRequest& AddTrafficSources(TrafficSourceIdentifier&& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources.push_back(std::move(value)); return *this; }
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
    inline bool GetSkipZonalShiftValidation() const{ return m_skipZonalShiftValidation; }
    inline bool SkipZonalShiftValidationHasBeenSet() const { return m_skipZonalShiftValidationHasBeenSet; }
    inline void SetSkipZonalShiftValidation(bool value) { m_skipZonalShiftValidationHasBeenSet = true; m_skipZonalShiftValidation = value; }
    inline AttachTrafficSourcesRequest& WithSkipZonalShiftValidation(bool value) { SetSkipZonalShiftValidation(value); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<TrafficSourceIdentifier> m_trafficSources;
    bool m_trafficSourcesHasBeenSet = false;

    bool m_skipZonalShiftValidation;
    bool m_skipZonalShiftValidationHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
