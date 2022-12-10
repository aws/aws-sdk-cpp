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
    AWS_AUTOSCALING_API DetachTrafficSourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DetachTrafficSources"; }

    AWS_AUTOSCALING_API Aws::String SerializePayload() const override;

  protected:
    AWS_AUTOSCALING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline bool AutoScalingGroupNameHasBeenSet() const { return m_autoScalingGroupNameHasBeenSet; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = std::move(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DetachTrafficSourcesRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DetachTrafficSourcesRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DetachTrafficSourcesRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The unique identifiers of one or more traffic sources you are detaching. You
     * can specify up to 10 traffic sources.</p> <p>Currently, you must specify an
     * Amazon Resource Name (ARN) for an existing VPC Lattice target group. When you
     * detach a target group, it enters the <code>Removing</code> state while
     * deregistering the instances in the group. When all instances are deregistered,
     * then you can no longer describe the target group using the
     * <a>DescribeTrafficSources</a> API call. The instances continue to run.</p>
     */
    inline const Aws::Vector<TrafficSourceIdentifier>& GetTrafficSources() const{ return m_trafficSources; }

    /**
     * <p>The unique identifiers of one or more traffic sources you are detaching. You
     * can specify up to 10 traffic sources.</p> <p>Currently, you must specify an
     * Amazon Resource Name (ARN) for an existing VPC Lattice target group. When you
     * detach a target group, it enters the <code>Removing</code> state while
     * deregistering the instances in the group. When all instances are deregistered,
     * then you can no longer describe the target group using the
     * <a>DescribeTrafficSources</a> API call. The instances continue to run.</p>
     */
    inline bool TrafficSourcesHasBeenSet() const { return m_trafficSourcesHasBeenSet; }

    /**
     * <p>The unique identifiers of one or more traffic sources you are detaching. You
     * can specify up to 10 traffic sources.</p> <p>Currently, you must specify an
     * Amazon Resource Name (ARN) for an existing VPC Lattice target group. When you
     * detach a target group, it enters the <code>Removing</code> state while
     * deregistering the instances in the group. When all instances are deregistered,
     * then you can no longer describe the target group using the
     * <a>DescribeTrafficSources</a> API call. The instances continue to run.</p>
     */
    inline void SetTrafficSources(const Aws::Vector<TrafficSourceIdentifier>& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources = value; }

    /**
     * <p>The unique identifiers of one or more traffic sources you are detaching. You
     * can specify up to 10 traffic sources.</p> <p>Currently, you must specify an
     * Amazon Resource Name (ARN) for an existing VPC Lattice target group. When you
     * detach a target group, it enters the <code>Removing</code> state while
     * deregistering the instances in the group. When all instances are deregistered,
     * then you can no longer describe the target group using the
     * <a>DescribeTrafficSources</a> API call. The instances continue to run.</p>
     */
    inline void SetTrafficSources(Aws::Vector<TrafficSourceIdentifier>&& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources = std::move(value); }

    /**
     * <p>The unique identifiers of one or more traffic sources you are detaching. You
     * can specify up to 10 traffic sources.</p> <p>Currently, you must specify an
     * Amazon Resource Name (ARN) for an existing VPC Lattice target group. When you
     * detach a target group, it enters the <code>Removing</code> state while
     * deregistering the instances in the group. When all instances are deregistered,
     * then you can no longer describe the target group using the
     * <a>DescribeTrafficSources</a> API call. The instances continue to run.</p>
     */
    inline DetachTrafficSourcesRequest& WithTrafficSources(const Aws::Vector<TrafficSourceIdentifier>& value) { SetTrafficSources(value); return *this;}

    /**
     * <p>The unique identifiers of one or more traffic sources you are detaching. You
     * can specify up to 10 traffic sources.</p> <p>Currently, you must specify an
     * Amazon Resource Name (ARN) for an existing VPC Lattice target group. When you
     * detach a target group, it enters the <code>Removing</code> state while
     * deregistering the instances in the group. When all instances are deregistered,
     * then you can no longer describe the target group using the
     * <a>DescribeTrafficSources</a> API call. The instances continue to run.</p>
     */
    inline DetachTrafficSourcesRequest& WithTrafficSources(Aws::Vector<TrafficSourceIdentifier>&& value) { SetTrafficSources(std::move(value)); return *this;}

    /**
     * <p>The unique identifiers of one or more traffic sources you are detaching. You
     * can specify up to 10 traffic sources.</p> <p>Currently, you must specify an
     * Amazon Resource Name (ARN) for an existing VPC Lattice target group. When you
     * detach a target group, it enters the <code>Removing</code> state while
     * deregistering the instances in the group. When all instances are deregistered,
     * then you can no longer describe the target group using the
     * <a>DescribeTrafficSources</a> API call. The instances continue to run.</p>
     */
    inline DetachTrafficSourcesRequest& AddTrafficSources(const TrafficSourceIdentifier& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources.push_back(value); return *this; }

    /**
     * <p>The unique identifiers of one or more traffic sources you are detaching. You
     * can specify up to 10 traffic sources.</p> <p>Currently, you must specify an
     * Amazon Resource Name (ARN) for an existing VPC Lattice target group. When you
     * detach a target group, it enters the <code>Removing</code> state while
     * deregistering the instances in the group. When all instances are deregistered,
     * then you can no longer describe the target group using the
     * <a>DescribeTrafficSources</a> API call. The instances continue to run.</p>
     */
    inline DetachTrafficSourcesRequest& AddTrafficSources(TrafficSourceIdentifier&& value) { m_trafficSourcesHasBeenSet = true; m_trafficSources.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<TrafficSourceIdentifier> m_trafficSources;
    bool m_trafficSourcesHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
