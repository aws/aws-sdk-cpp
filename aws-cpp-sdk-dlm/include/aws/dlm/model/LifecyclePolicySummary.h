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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dlm/model/GettablePolicyStateValues.h>
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
   * <p>Summary information about a lifecycle policy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dlm-2018-01-12/LifecyclePolicySummary">AWS
   * API Reference</a></p>
   */
  class AWS_DLM_API LifecyclePolicySummary
  {
  public:
    LifecyclePolicySummary();
    LifecyclePolicySummary(Aws::Utils::Json::JsonView jsonValue);
    LifecyclePolicySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline const Aws::String& GetPolicyId() const{ return m_policyId; }

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline bool PolicyIdHasBeenSet() const { return m_policyIdHasBeenSet; }

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline void SetPolicyId(const Aws::String& value) { m_policyIdHasBeenSet = true; m_policyId = value; }

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline void SetPolicyId(Aws::String&& value) { m_policyIdHasBeenSet = true; m_policyId = std::move(value); }

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline void SetPolicyId(const char* value) { m_policyIdHasBeenSet = true; m_policyId.assign(value); }

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithPolicyId(const Aws::String& value) { SetPolicyId(value); return *this;}

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithPolicyId(Aws::String&& value) { SetPolicyId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithPolicyId(const char* value) { SetPolicyId(value); return *this;}


    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline const GettablePolicyStateValues& GetState() const{ return m_state; }

    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline void SetState(const GettablePolicyStateValues& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline void SetState(GettablePolicyStateValues&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithState(const GettablePolicyStateValues& value) { SetState(value); return *this;}

    /**
     * <p>The activation state of the lifecycle policy.</p>
     */
    inline LifecyclePolicySummary& WithState(GettablePolicyStateValues&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_policyId;
    bool m_policyIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    GettablePolicyStateValues m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace DLM
} // namespace Aws
