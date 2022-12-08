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
  class DescribePoliciesRequest : public AutoScalingRequest
  {
  public:
    AWS_AUTOSCALING_API DescribePoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribePolicies"; }

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
    inline DescribePoliciesRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DescribePoliciesRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the Auto Scaling group.</p>
     */
    inline DescribePoliciesRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}


    /**
     * <p>The names of one or more policies. If you omit this property, all policies
     * are described. If a group name is provided, the results are limited to that
     * group. If you specify an unknown policy name, it is ignored with no error.</p>
     * <p>Array Members: Maximum number of 50 items.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const{ return m_policyNames; }

    /**
     * <p>The names of one or more policies. If you omit this property, all policies
     * are described. If a group name is provided, the results are limited to that
     * group. If you specify an unknown policy name, it is ignored with no error.</p>
     * <p>Array Members: Maximum number of 50 items.</p>
     */
    inline bool PolicyNamesHasBeenSet() const { return m_policyNamesHasBeenSet; }

    /**
     * <p>The names of one or more policies. If you omit this property, all policies
     * are described. If a group name is provided, the results are limited to that
     * group. If you specify an unknown policy name, it is ignored with no error.</p>
     * <p>Array Members: Maximum number of 50 items.</p>
     */
    inline void SetPolicyNames(const Aws::Vector<Aws::String>& value) { m_policyNamesHasBeenSet = true; m_policyNames = value; }

    /**
     * <p>The names of one or more policies. If you omit this property, all policies
     * are described. If a group name is provided, the results are limited to that
     * group. If you specify an unknown policy name, it is ignored with no error.</p>
     * <p>Array Members: Maximum number of 50 items.</p>
     */
    inline void SetPolicyNames(Aws::Vector<Aws::String>&& value) { m_policyNamesHasBeenSet = true; m_policyNames = std::move(value); }

    /**
     * <p>The names of one or more policies. If you omit this property, all policies
     * are described. If a group name is provided, the results are limited to that
     * group. If you specify an unknown policy name, it is ignored with no error.</p>
     * <p>Array Members: Maximum number of 50 items.</p>
     */
    inline DescribePoliciesRequest& WithPolicyNames(const Aws::Vector<Aws::String>& value) { SetPolicyNames(value); return *this;}

    /**
     * <p>The names of one or more policies. If you omit this property, all policies
     * are described. If a group name is provided, the results are limited to that
     * group. If you specify an unknown policy name, it is ignored with no error.</p>
     * <p>Array Members: Maximum number of 50 items.</p>
     */
    inline DescribePoliciesRequest& WithPolicyNames(Aws::Vector<Aws::String>&& value) { SetPolicyNames(std::move(value)); return *this;}

    /**
     * <p>The names of one or more policies. If you omit this property, all policies
     * are described. If a group name is provided, the results are limited to that
     * group. If you specify an unknown policy name, it is ignored with no error.</p>
     * <p>Array Members: Maximum number of 50 items.</p>
     */
    inline DescribePoliciesRequest& AddPolicyNames(const Aws::String& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

    /**
     * <p>The names of one or more policies. If you omit this property, all policies
     * are described. If a group name is provided, the results are limited to that
     * group. If you specify an unknown policy name, it is ignored with no error.</p>
     * <p>Array Members: Maximum number of 50 items.</p>
     */
    inline DescribePoliciesRequest& AddPolicyNames(Aws::String&& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of one or more policies. If you omit this property, all policies
     * are described. If a group name is provided, the results are limited to that
     * group. If you specify an unknown policy name, it is ignored with no error.</p>
     * <p>Array Members: Maximum number of 50 items.</p>
     */
    inline DescribePoliciesRequest& AddPolicyNames(const char* value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }


    /**
     * <p>One or more policy types. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, <code>TargetTrackingScaling</code>, and
     * <code>PredictiveScaling</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyTypes() const{ return m_policyTypes; }

    /**
     * <p>One or more policy types. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, <code>TargetTrackingScaling</code>, and
     * <code>PredictiveScaling</code>.</p>
     */
    inline bool PolicyTypesHasBeenSet() const { return m_policyTypesHasBeenSet; }

    /**
     * <p>One or more policy types. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, <code>TargetTrackingScaling</code>, and
     * <code>PredictiveScaling</code>.</p>
     */
    inline void SetPolicyTypes(const Aws::Vector<Aws::String>& value) { m_policyTypesHasBeenSet = true; m_policyTypes = value; }

    /**
     * <p>One or more policy types. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, <code>TargetTrackingScaling</code>, and
     * <code>PredictiveScaling</code>.</p>
     */
    inline void SetPolicyTypes(Aws::Vector<Aws::String>&& value) { m_policyTypesHasBeenSet = true; m_policyTypes = std::move(value); }

    /**
     * <p>One or more policy types. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, <code>TargetTrackingScaling</code>, and
     * <code>PredictiveScaling</code>.</p>
     */
    inline DescribePoliciesRequest& WithPolicyTypes(const Aws::Vector<Aws::String>& value) { SetPolicyTypes(value); return *this;}

    /**
     * <p>One or more policy types. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, <code>TargetTrackingScaling</code>, and
     * <code>PredictiveScaling</code>.</p>
     */
    inline DescribePoliciesRequest& WithPolicyTypes(Aws::Vector<Aws::String>&& value) { SetPolicyTypes(std::move(value)); return *this;}

    /**
     * <p>One or more policy types. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, <code>TargetTrackingScaling</code>, and
     * <code>PredictiveScaling</code>.</p>
     */
    inline DescribePoliciesRequest& AddPolicyTypes(const Aws::String& value) { m_policyTypesHasBeenSet = true; m_policyTypes.push_back(value); return *this; }

    /**
     * <p>One or more policy types. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, <code>TargetTrackingScaling</code>, and
     * <code>PredictiveScaling</code>.</p>
     */
    inline DescribePoliciesRequest& AddPolicyTypes(Aws::String&& value) { m_policyTypesHasBeenSet = true; m_policyTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more policy types. The valid values are <code>SimpleScaling</code>,
     * <code>StepScaling</code>, <code>TargetTrackingScaling</code>, and
     * <code>PredictiveScaling</code>.</p>
     */
    inline DescribePoliciesRequest& AddPolicyTypes(const char* value) { m_policyTypesHasBeenSet = true; m_policyTypes.push_back(value); return *this; }


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
    inline DescribePoliciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribePoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribePoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of items to be returned with each call. The default value
     * is <code>50</code> and the maximum value is <code>100</code>.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of items to be returned with each call. The default value
     * is <code>50</code> and the maximum value is <code>100</code>.</p>
     */
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }

    /**
     * <p>The maximum number of items to be returned with each call. The default value
     * is <code>50</code> and the maximum value is <code>100</code>.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of items to be returned with each call. The default value
     * is <code>50</code> and the maximum value is <code>100</code>.</p>
     */
    inline DescribePoliciesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

  private:

    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_policyTypes;
    bool m_policyTypesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
