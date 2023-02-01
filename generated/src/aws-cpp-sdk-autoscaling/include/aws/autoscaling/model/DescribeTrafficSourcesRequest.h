/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class DescribeTrafficSourcesRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DescribeTrafficSourcesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrafficSources"; }

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
    inline DescribeTrafficSourcesRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DescribeTrafficSourcesRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DescribeTrafficSourcesRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The type of traffic source you are describing. Currently, the only valid
     * value is <code>vpc-lattice</code>.</p>
     */
    inline const Aws::String& GetTrafficSourceType() const{ return m_trafficSourceType; }

    /**
     * <p>The type of traffic source you are describing. Currently, the only valid
     * value is <code>vpc-lattice</code>.</p>
     */
    inline bool TrafficSourceTypeHasBeenSet() const { return m_trafficSourceTypeHasBeenSet; }

    /**
     * <p>The type of traffic source you are describing. Currently, the only valid
     * value is <code>vpc-lattice</code>.</p>
     */
    inline void SetTrafficSourceType(const Aws::String& value) { m_trafficSourceTypeHasBeenSet = true; m_trafficSourceType = value; }

    /**
     * <p>The type of traffic source you are describing. Currently, the only valid
     * value is <code>vpc-lattice</code>.</p>
     */
    inline void SetTrafficSourceType(Aws::String&& value) { m_trafficSourceTypeHasBeenSet = true; m_trafficSourceType = std::move(value); }

    /**
     * <p>The type of traffic source you are describing. Currently, the only valid
     * value is <code>vpc-lattice</code>.</p>
     */
    inline void SetTrafficSourceType(const char* value) { m_trafficSourceTypeHasBeenSet = true; m_trafficSourceType.assign(value); }

    /**
     * <p>The type of traffic source you are describing. Currently, the only valid
     * value is <code>vpc-lattice</code>.</p>
     */
    inline DescribeTrafficSourcesRequest& WithTrafficSourceType(const Aws::String& value) { SetTrafficSourceType(value); return *this;}

    /**
     * <p>The type of traffic source you are describing. Currently, the only valid
     * value is <code>vpc-lattice</code>.</p>
     */
    inline DescribeTrafficSourcesRequest& WithTrafficSourceType(Aws::String&& value) { SetTrafficSourceType(std::move(value)); return *this;}

    /**
     * <p>The type of traffic source you are describing. Currently, the only valid
     * value is <code>vpc-lattice</code>.</p>
     */
    inline DescribeTrafficSourcesRequest& WithTrafficSourceType(const char* value) { SetTrafficSourceType(value); return *this;}


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeTrafficSourcesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeTrafficSourcesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeTrafficSourcesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to return with this call. The maximum value is
     * <code>50</code>.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of items to return with this call. The maximum value is
     * <code>50</code>.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of items to return with this call. The maximum value is
     * <code>50</code>.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of items to return with this call. The maximum value is
     * <code>50</code>.</p>
     */
    inline DescribeTrafficSourcesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::String m_trafficSourceType;
    bool m_trafficSourceTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
