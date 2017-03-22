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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchFilterGroup.h>
#include <aws/ssm/model/PatchRuleGroup.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API CreatePatchBaselineRequest : public SSMRequest
  {
  public:
    CreatePatchBaselineRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the patch baseline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A set of global filters used to exclude patches from the baseline.</p>
     */
    inline const PatchFilterGroup& GetGlobalFilters() const{ return m_globalFilters; }

    /**
     * <p>A set of global filters used to exclude patches from the baseline.</p>
     */
    inline void SetGlobalFilters(const PatchFilterGroup& value) { m_globalFiltersHasBeenSet = true; m_globalFilters = value; }

    /**
     * <p>A set of global filters used to exclude patches from the baseline.</p>
     */
    inline void SetGlobalFilters(PatchFilterGroup&& value) { m_globalFiltersHasBeenSet = true; m_globalFilters = value; }

    /**
     * <p>A set of global filters used to exclude patches from the baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithGlobalFilters(const PatchFilterGroup& value) { SetGlobalFilters(value); return *this;}

    /**
     * <p>A set of global filters used to exclude patches from the baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithGlobalFilters(PatchFilterGroup&& value) { SetGlobalFilters(value); return *this;}

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline const PatchRuleGroup& GetApprovalRules() const{ return m_approvalRules; }

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline void SetApprovalRules(const PatchRuleGroup& value) { m_approvalRulesHasBeenSet = true; m_approvalRules = value; }

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline void SetApprovalRules(PatchRuleGroup&& value) { m_approvalRulesHasBeenSet = true; m_approvalRules = value; }

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithApprovalRules(const PatchRuleGroup& value) { SetApprovalRules(value); return *this;}

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithApprovalRules(PatchRuleGroup&& value) { SetApprovalRules(value); return *this;}

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovedPatches() const{ return m_approvedPatches; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline void SetApprovedPatches(const Aws::Vector<Aws::String>& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches = value; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline void SetApprovedPatches(Aws::Vector<Aws::String>&& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches = value; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithApprovedPatches(const Aws::Vector<Aws::String>& value) { SetApprovedPatches(value); return *this;}

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithApprovedPatches(Aws::Vector<Aws::String>&& value) { SetApprovedPatches(value); return *this;}

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline CreatePatchBaselineRequest& AddApprovedPatches(const Aws::String& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches.push_back(value); return *this; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline CreatePatchBaselineRequest& AddApprovedPatches(Aws::String&& value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches.push_back(value); return *this; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline CreatePatchBaselineRequest& AddApprovedPatches(const char* value) { m_approvedPatchesHasBeenSet = true; m_approvedPatches.push_back(value); return *this; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRejectedPatches() const{ return m_rejectedPatches; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline void SetRejectedPatches(const Aws::Vector<Aws::String>& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches = value; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline void SetRejectedPatches(Aws::Vector<Aws::String>&& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches = value; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithRejectedPatches(const Aws::Vector<Aws::String>& value) { SetRejectedPatches(value); return *this;}

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithRejectedPatches(Aws::Vector<Aws::String>&& value) { SetRejectedPatches(value); return *this;}

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline CreatePatchBaselineRequest& AddRejectedPatches(const Aws::String& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches.push_back(value); return *this; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline CreatePatchBaselineRequest& AddRejectedPatches(Aws::String&& value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches.push_back(value); return *this; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline CreatePatchBaselineRequest& AddRejectedPatches(const char* value) { m_rejectedPatchesHasBeenSet = true; m_rejectedPatches.push_back(value); return *this; }

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the patch baseline.</p>
     */
    inline CreatePatchBaselineRequest& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>Caller-provided idempotency token.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Caller-provided idempotency token.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Caller-provided idempotency token.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Caller-provided idempotency token.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Caller-provided idempotency token.</p>
     */
    inline CreatePatchBaselineRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Caller-provided idempotency token.</p>
     */
    inline CreatePatchBaselineRequest& WithClientToken(Aws::String&& value) { SetClientToken(value); return *this;}

    /**
     * <p>Caller-provided idempotency token.</p>
     */
    inline CreatePatchBaselineRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:
    Aws::String m_name;
    bool m_nameHasBeenSet;
    PatchFilterGroup m_globalFilters;
    bool m_globalFiltersHasBeenSet;
    PatchRuleGroup m_approvalRules;
    bool m_approvalRulesHasBeenSet;
    Aws::Vector<Aws::String> m_approvedPatches;
    bool m_approvedPatchesHasBeenSet;
    Aws::Vector<Aws::String> m_rejectedPatches;
    bool m_rejectedPatchesHasBeenSet;
    Aws::String m_description;
    bool m_descriptionHasBeenSet;
    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
