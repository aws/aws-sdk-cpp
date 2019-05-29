/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dlm/DLM_EXPORTS.h>
#include <aws/dlm/model/PolicyTypeValues.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dlm/model/Parameters.h>
#include <aws/dlm/model/ResourceTypeValues.h>
#include <aws/dlm/model/Tag.h>
#include <aws/dlm/model/Schedule.h>
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
namespace DLM
{
namespace Model
{

  /**
   * <p>Specifies the configuration of a lifecycle policy.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/PolicyDetails">AWS
   * API Reference</a></p>
   */
  class AWS_DLM_API PolicyDetails
  {
  public:
    PolicyDetails();
    PolicyDetails(Aws::Utils::Json::JsonView jsonValue);
    PolicyDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This field determines the valid target resource types and actions a policy
     * can manage. This field defaults to EBS_SNAPSHOT_MANAGEMENT if not present.</p>
     */
    inline const PolicyTypeValues& GetPolicyType() const{ return m_policyType; }

    /**
     * <p>This field determines the valid target resource types and actions a policy
     * can manage. This field defaults to EBS_SNAPSHOT_MANAGEMENT if not present.</p>
     */
    inline bool PolicyTypeHasBeenSet() const { return m_policyTypeHasBeenSet; }

    /**
     * <p>This field determines the valid target resource types and actions a policy
     * can manage. This field defaults to EBS_SNAPSHOT_MANAGEMENT if not present.</p>
     */
    inline void SetPolicyType(const PolicyTypeValues& value) { m_policyTypeHasBeenSet = true; m_policyType = value; }

    /**
     * <p>This field determines the valid target resource types and actions a policy
     * can manage. This field defaults to EBS_SNAPSHOT_MANAGEMENT if not present.</p>
     */
    inline void SetPolicyType(PolicyTypeValues&& value) { m_policyTypeHasBeenSet = true; m_policyType = std::move(value); }

    /**
     * <p>This field determines the valid target resource types and actions a policy
     * can manage. This field defaults to EBS_SNAPSHOT_MANAGEMENT if not present.</p>
     */
    inline PolicyDetails& WithPolicyType(const PolicyTypeValues& value) { SetPolicyType(value); return *this;}

    /**
     * <p>This field determines the valid target resource types and actions a policy
     * can manage. This field defaults to EBS_SNAPSHOT_MANAGEMENT if not present.</p>
     */
    inline PolicyDetails& WithPolicyType(PolicyTypeValues&& value) { SetPolicyType(std::move(value)); return *this;}


    /**
     * <p>The resource type.</p>
     */
    inline const Aws::Vector<ResourceTypeValues>& GetResourceTypes() const{ return m_resourceTypes; }

    /**
     * <p>The resource type.</p>
     */
    inline bool ResourceTypesHasBeenSet() const { return m_resourceTypesHasBeenSet; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceTypes(const Aws::Vector<ResourceTypeValues>& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = value; }

    /**
     * <p>The resource type.</p>
     */
    inline void SetResourceTypes(Aws::Vector<ResourceTypeValues>&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes = std::move(value); }

    /**
     * <p>The resource type.</p>
     */
    inline PolicyDetails& WithResourceTypes(const Aws::Vector<ResourceTypeValues>& value) { SetResourceTypes(value); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline PolicyDetails& WithResourceTypes(Aws::Vector<ResourceTypeValues>&& value) { SetResourceTypes(std::move(value)); return *this;}

    /**
     * <p>The resource type.</p>
     */
    inline PolicyDetails& AddResourceTypes(const ResourceTypeValues& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(value); return *this; }

    /**
     * <p>The resource type.</p>
     */
    inline PolicyDetails& AddResourceTypes(ResourceTypeValues&& value) { m_resourceTypesHasBeenSet = true; m_resourceTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     */
    inline const Aws::Vector<Tag>& GetTargetTags() const{ return m_targetTags; }

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     */
    inline bool TargetTagsHasBeenSet() const { return m_targetTagsHasBeenSet; }

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     */
    inline void SetTargetTags(const Aws::Vector<Tag>& value) { m_targetTagsHasBeenSet = true; m_targetTags = value; }

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     */
    inline void SetTargetTags(Aws::Vector<Tag>&& value) { m_targetTagsHasBeenSet = true; m_targetTags = std::move(value); }

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     */
    inline PolicyDetails& WithTargetTags(const Aws::Vector<Tag>& value) { SetTargetTags(value); return *this;}

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     */
    inline PolicyDetails& WithTargetTags(Aws::Vector<Tag>&& value) { SetTargetTags(std::move(value)); return *this;}

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     */
    inline PolicyDetails& AddTargetTags(const Tag& value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(value); return *this; }

    /**
     * <p>The single tag that identifies targeted resources for this policy.</p>
     */
    inline PolicyDetails& AddTargetTags(Tag&& value) { m_targetTagsHasBeenSet = true; m_targetTags.push_back(std::move(value)); return *this; }


    /**
     * <p>The schedule of policy-defined actions.</p>
     */
    inline const Aws::Vector<Schedule>& GetSchedules() const{ return m_schedules; }

    /**
     * <p>The schedule of policy-defined actions.</p>
     */
    inline bool SchedulesHasBeenSet() const { return m_schedulesHasBeenSet; }

    /**
     * <p>The schedule of policy-defined actions.</p>
     */
    inline void SetSchedules(const Aws::Vector<Schedule>& value) { m_schedulesHasBeenSet = true; m_schedules = value; }

    /**
     * <p>The schedule of policy-defined actions.</p>
     */
    inline void SetSchedules(Aws::Vector<Schedule>&& value) { m_schedulesHasBeenSet = true; m_schedules = std::move(value); }

    /**
     * <p>The schedule of policy-defined actions.</p>
     */
    inline PolicyDetails& WithSchedules(const Aws::Vector<Schedule>& value) { SetSchedules(value); return *this;}

    /**
     * <p>The schedule of policy-defined actions.</p>
     */
    inline PolicyDetails& WithSchedules(Aws::Vector<Schedule>&& value) { SetSchedules(std::move(value)); return *this;}

    /**
     * <p>The schedule of policy-defined actions.</p>
     */
    inline PolicyDetails& AddSchedules(const Schedule& value) { m_schedulesHasBeenSet = true; m_schedules.push_back(value); return *this; }

    /**
     * <p>The schedule of policy-defined actions.</p>
     */
    inline PolicyDetails& AddSchedules(Schedule&& value) { m_schedulesHasBeenSet = true; m_schedules.push_back(std::move(value)); return *this; }


    /**
     * <p>A set of optional parameters that can be provided by the policy. </p>
     */
    inline const Parameters& GetParameters() const{ return m_parameters; }

    /**
     * <p>A set of optional parameters that can be provided by the policy. </p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A set of optional parameters that can be provided by the policy. </p>
     */
    inline void SetParameters(const Parameters& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A set of optional parameters that can be provided by the policy. </p>
     */
    inline void SetParameters(Parameters&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A set of optional parameters that can be provided by the policy. </p>
     */
    inline PolicyDetails& WithParameters(const Parameters& value) { SetParameters(value); return *this;}

    /**
     * <p>A set of optional parameters that can be provided by the policy. </p>
     */
    inline PolicyDetails& WithParameters(Parameters&& value) { SetParameters(std::move(value)); return *this;}

  private:

    PolicyTypeValues m_policyType;
    bool m_policyTypeHasBeenSet;

    Aws::Vector<ResourceTypeValues> m_resourceTypes;
    bool m_resourceTypesHasBeenSet;

    Aws::Vector<Tag> m_targetTags;
    bool m_targetTagsHasBeenSet;

    Aws::Vector<Schedule> m_schedules;
    bool m_schedulesHasBeenSet;

    Parameters m_parameters;
    bool m_parametersHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
