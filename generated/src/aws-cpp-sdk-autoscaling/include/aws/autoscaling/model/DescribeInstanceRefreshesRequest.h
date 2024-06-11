/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   */
  class DescribeInstanceRefreshesRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DescribeInstanceRefreshesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstanceRefreshes"; }

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
    inline DescribeInstanceRefreshesRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}
    inline DescribeInstanceRefreshesRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}
    inline DescribeInstanceRefreshesRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more instance refresh IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceRefreshIds() const{ return m_instanceRefreshIds; }
    inline bool InstanceRefreshIdsHasBeenSet() const { return m_instanceRefreshIdsHasBeenSet; }
    inline void SetInstanceRefreshIds(const Aws::Vector<Aws::String>& value) { m_instanceRefreshIdsHasBeenSet = true; m_instanceRefreshIds = value; }
    inline void SetInstanceRefreshIds(Aws::Vector<Aws::String>&& value) { m_instanceRefreshIdsHasBeenSet = true; m_instanceRefreshIds = std::move(value); }
    inline DescribeInstanceRefreshesRequest& WithInstanceRefreshIds(const Aws::Vector<Aws::String>& value) { SetInstanceRefreshIds(value); return *this;}
    inline DescribeInstanceRefreshesRequest& WithInstanceRefreshIds(Aws::Vector<Aws::String>&& value) { SetInstanceRefreshIds(std::move(value)); return *this;}
    inline DescribeInstanceRefreshesRequest& AddInstanceRefreshIds(const Aws::String& value) { m_instanceRefreshIdsHasBeenSet = true; m_instanceRefreshIds.push_back(value); return *this; }
    inline DescribeInstanceRefreshesRequest& AddInstanceRefreshIds(Aws::String&& value) { m_instanceRefreshIdsHasBeenSet = true; m_instanceRefreshIds.push_back(std::move(value)); return *this; }
    inline DescribeInstanceRefreshesRequest& AddInstanceRefreshIds(const char* value) { m_instanceRefreshIdsHasBeenSet = true; m_instanceRefreshIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeInstanceRefreshesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeInstanceRefreshesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeInstanceRefreshesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return with this call. The default value is
     * <code>50</code> and the maximum value is <code>100</code>.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeInstanceRefreshesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}
  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceRefreshIds;
    bool m_instanceRefreshIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
