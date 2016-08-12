/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/autoscaling/AutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribePolicies.</p>
   */
  class AWS_AUTOSCALING_API DescribePoliciesRequest : public AutoScalingRequest
  {
  public:
    DescribePoliciesRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetAutoScalingGroupName() const{ return m_autoScalingGroupName; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetAutoScalingGroupName(const Aws::String& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetAutoScalingGroupName(Aws::String&& value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName = value; }

    /**
     * <p>The name of the group.</p>
     */
    inline void SetAutoScalingGroupName(const char* value) { m_autoScalingGroupNameHasBeenSet = true; m_autoScalingGroupName.assign(value); }

    /**
     * <p>The name of the group.</p>
     */
    inline DescribePoliciesRequest& WithAutoScalingGroupName(const Aws::String& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline DescribePoliciesRequest& WithAutoScalingGroupName(Aws::String&& value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>The name of the group.</p>
     */
    inline DescribePoliciesRequest& WithAutoScalingGroupName(const char* value) { SetAutoScalingGroupName(value); return *this;}

    /**
     * <p>One or more policy names or policy ARNs to be described. If you omit this
     * parameter, all policy names are described. If an group name is provided, the
     * results are limited to that group. This list is limited to 50 items. If you
     * specify an unknown policy name, it is ignored with no error.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyNames() const{ return m_policyNames; }

    /**
     * <p>One or more policy names or policy ARNs to be described. If you omit this
     * parameter, all policy names are described. If an group name is provided, the
     * results are limited to that group. This list is limited to 50 items. If you
     * specify an unknown policy name, it is ignored with no error.</p>
     */
    inline void SetPolicyNames(const Aws::Vector<Aws::String>& value) { m_policyNamesHasBeenSet = true; m_policyNames = value; }

    /**
     * <p>One or more policy names or policy ARNs to be described. If you omit this
     * parameter, all policy names are described. If an group name is provided, the
     * results are limited to that group. This list is limited to 50 items. If you
     * specify an unknown policy name, it is ignored with no error.</p>
     */
    inline void SetPolicyNames(Aws::Vector<Aws::String>&& value) { m_policyNamesHasBeenSet = true; m_policyNames = value; }

    /**
     * <p>One or more policy names or policy ARNs to be described. If you omit this
     * parameter, all policy names are described. If an group name is provided, the
     * results are limited to that group. This list is limited to 50 items. If you
     * specify an unknown policy name, it is ignored with no error.</p>
     */
    inline DescribePoliciesRequest& WithPolicyNames(const Aws::Vector<Aws::String>& value) { SetPolicyNames(value); return *this;}

    /**
     * <p>One or more policy names or policy ARNs to be described. If you omit this
     * parameter, all policy names are described. If an group name is provided, the
     * results are limited to that group. This list is limited to 50 items. If you
     * specify an unknown policy name, it is ignored with no error.</p>
     */
    inline DescribePoliciesRequest& WithPolicyNames(Aws::Vector<Aws::String>&& value) { SetPolicyNames(value); return *this;}

    /**
     * <p>One or more policy names or policy ARNs to be described. If you omit this
     * parameter, all policy names are described. If an group name is provided, the
     * results are limited to that group. This list is limited to 50 items. If you
     * specify an unknown policy name, it is ignored with no error.</p>
     */
    inline DescribePoliciesRequest& AddPolicyNames(const Aws::String& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

    /**
     * <p>One or more policy names or policy ARNs to be described. If you omit this
     * parameter, all policy names are described. If an group name is provided, the
     * results are limited to that group. This list is limited to 50 items. If you
     * specify an unknown policy name, it is ignored with no error.</p>
     */
    inline DescribePoliciesRequest& AddPolicyNames(Aws::String&& value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

    /**
     * <p>One or more policy names or policy ARNs to be described. If you omit this
     * parameter, all policy names are described. If an group name is provided, the
     * results are limited to that group. This list is limited to 50 items. If you
     * specify an unknown policy name, it is ignored with no error.</p>
     */
    inline DescribePoliciesRequest& AddPolicyNames(const char* value) { m_policyNamesHasBeenSet = true; m_policyNames.push_back(value); return *this; }

    /**
     * <p>One or more policy types. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPolicyTypes() const{ return m_policyTypes; }

    /**
     * <p>One or more policy types. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline void SetPolicyTypes(const Aws::Vector<Aws::String>& value) { m_policyTypesHasBeenSet = true; m_policyTypes = value; }

    /**
     * <p>One or more policy types. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline void SetPolicyTypes(Aws::Vector<Aws::String>&& value) { m_policyTypesHasBeenSet = true; m_policyTypes = value; }

    /**
     * <p>One or more policy types. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline DescribePoliciesRequest& WithPolicyTypes(const Aws::Vector<Aws::String>& value) { SetPolicyTypes(value); return *this;}

    /**
     * <p>One or more policy types. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline DescribePoliciesRequest& WithPolicyTypes(Aws::Vector<Aws::String>&& value) { SetPolicyTypes(value); return *this;}

    /**
     * <p>One or more policy types. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline DescribePoliciesRequest& AddPolicyTypes(const Aws::String& value) { m_policyTypesHasBeenSet = true; m_policyTypes.push_back(value); return *this; }

    /**
     * <p>One or more policy types. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
     */
    inline DescribePoliciesRequest& AddPolicyTypes(Aws::String&& value) { m_policyTypesHasBeenSet = true; m_policyTypes.push_back(value); return *this; }

    /**
     * <p>One or more policy types. Valid values are <code>SimpleScaling</code> and
     * <code>StepScaling</code>.</p>
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
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

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
    inline DescribePoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribePoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of items to be returned with each call.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }

    /**
     * <p>The maximum number of items to be returned with each call.</p>
     */
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }

    /**
     * <p>The maximum number of items to be returned with each call.</p>
     */
    inline DescribePoliciesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}

  private:
    Aws::String m_autoScalingGroupName;
    bool m_autoScalingGroupNameHasBeenSet;
    Aws::Vector<Aws::String> m_policyNames;
    bool m_policyNamesHasBeenSet;
    Aws::Vector<Aws::String> m_policyTypes;
    bool m_policyTypesHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxRecords;
    bool m_maxRecordsHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
