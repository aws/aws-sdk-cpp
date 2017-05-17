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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/PatchFilterGroup.h>
#include <aws/ssm/model/PatchRuleGroup.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSM
{
namespace Model
{
  class AWS_SSM_API UpdatePatchBaselineResult
  {
  public:
    UpdatePatchBaselineResult();
    UpdatePatchBaselineResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdatePatchBaselineResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The ID of the deleted patch baseline.</p>
     */
    inline const Aws::String& GetBaselineId() const{ return m_baselineId; }

    /**
     * <p>The ID of the deleted patch baseline.</p>
     */
    inline void SetBaselineId(const Aws::String& value) { m_baselineId = value; }

    /**
     * <p>The ID of the deleted patch baseline.</p>
     */
    inline void SetBaselineId(Aws::String&& value) { m_baselineId = std::move(value); }

    /**
     * <p>The ID of the deleted patch baseline.</p>
     */
    inline void SetBaselineId(const char* value) { m_baselineId.assign(value); }

    /**
     * <p>The ID of the deleted patch baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithBaselineId(const Aws::String& value) { SetBaselineId(value); return *this;}

    /**
     * <p>The ID of the deleted patch baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithBaselineId(Aws::String&& value) { SetBaselineId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deleted patch baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithBaselineId(const char* value) { SetBaselineId(value); return *this;}

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the patch baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>A set of global filters used to exclude patches from the baseline.</p>
     */
    inline const PatchFilterGroup& GetGlobalFilters() const{ return m_globalFilters; }

    /**
     * <p>A set of global filters used to exclude patches from the baseline.</p>
     */
    inline void SetGlobalFilters(const PatchFilterGroup& value) { m_globalFilters = value; }

    /**
     * <p>A set of global filters used to exclude patches from the baseline.</p>
     */
    inline void SetGlobalFilters(PatchFilterGroup&& value) { m_globalFilters = std::move(value); }

    /**
     * <p>A set of global filters used to exclude patches from the baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithGlobalFilters(const PatchFilterGroup& value) { SetGlobalFilters(value); return *this;}

    /**
     * <p>A set of global filters used to exclude patches from the baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithGlobalFilters(PatchFilterGroup&& value) { SetGlobalFilters(std::move(value)); return *this;}

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline const PatchRuleGroup& GetApprovalRules() const{ return m_approvalRules; }

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline void SetApprovalRules(const PatchRuleGroup& value) { m_approvalRules = value; }

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline void SetApprovalRules(PatchRuleGroup&& value) { m_approvalRules = std::move(value); }

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithApprovalRules(const PatchRuleGroup& value) { SetApprovalRules(value); return *this;}

    /**
     * <p>A set of rules used to include patches in the baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithApprovalRules(PatchRuleGroup&& value) { SetApprovalRules(std::move(value)); return *this;}

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApprovedPatches() const{ return m_approvedPatches; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline void SetApprovedPatches(const Aws::Vector<Aws::String>& value) { m_approvedPatches = value; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline void SetApprovedPatches(Aws::Vector<Aws::String>&& value) { m_approvedPatches = std::move(value); }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithApprovedPatches(const Aws::Vector<Aws::String>& value) { SetApprovedPatches(value); return *this;}

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithApprovedPatches(Aws::Vector<Aws::String>&& value) { SetApprovedPatches(std::move(value)); return *this;}

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline UpdatePatchBaselineResult& AddApprovedPatches(const Aws::String& value) { m_approvedPatches.push_back(value); return *this; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline UpdatePatchBaselineResult& AddApprovedPatches(Aws::String&& value) { m_approvedPatches.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of explicitly approved patches for the baseline.</p>
     */
    inline UpdatePatchBaselineResult& AddApprovedPatches(const char* value) { m_approvedPatches.push_back(value); return *this; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRejectedPatches() const{ return m_rejectedPatches; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline void SetRejectedPatches(const Aws::Vector<Aws::String>& value) { m_rejectedPatches = value; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline void SetRejectedPatches(Aws::Vector<Aws::String>&& value) { m_rejectedPatches = std::move(value); }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithRejectedPatches(const Aws::Vector<Aws::String>& value) { SetRejectedPatches(value); return *this;}

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithRejectedPatches(Aws::Vector<Aws::String>&& value) { SetRejectedPatches(std::move(value)); return *this;}

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline UpdatePatchBaselineResult& AddRejectedPatches(const Aws::String& value) { m_rejectedPatches.push_back(value); return *this; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline UpdatePatchBaselineResult& AddRejectedPatches(Aws::String&& value) { m_rejectedPatches.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of explicitly rejected patches for the baseline.</p>
     */
    inline UpdatePatchBaselineResult& AddRejectedPatches(const char* value) { m_rejectedPatches.push_back(value); return *this; }

    /**
     * <p>The date when the patch baseline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date when the patch baseline was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date when the patch baseline was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date when the patch baseline was created.</p>
     */
    inline UpdatePatchBaselineResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date when the patch baseline was created.</p>
     */
    inline UpdatePatchBaselineResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}

    /**
     * <p>The date when the patch baseline was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedDate() const{ return m_modifiedDate; }

    /**
     * <p>The date when the patch baseline was last modified.</p>
     */
    inline void SetModifiedDate(const Aws::Utils::DateTime& value) { m_modifiedDate = value; }

    /**
     * <p>The date when the patch baseline was last modified.</p>
     */
    inline void SetModifiedDate(Aws::Utils::DateTime&& value) { m_modifiedDate = std::move(value); }

    /**
     * <p>The date when the patch baseline was last modified.</p>
     */
    inline UpdatePatchBaselineResult& WithModifiedDate(const Aws::Utils::DateTime& value) { SetModifiedDate(value); return *this;}

    /**
     * <p>The date when the patch baseline was last modified.</p>
     */
    inline UpdatePatchBaselineResult& WithModifiedDate(Aws::Utils::DateTime&& value) { SetModifiedDate(std::move(value)); return *this;}

    /**
     * <p>A description of the Patch Baseline.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the Patch Baseline.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the Patch Baseline.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the Patch Baseline.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the Patch Baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the Patch Baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the Patch Baseline.</p>
     */
    inline UpdatePatchBaselineResult& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:
    Aws::String m_baselineId;
    Aws::String m_name;
    PatchFilterGroup m_globalFilters;
    PatchRuleGroup m_approvalRules;
    Aws::Vector<Aws::String> m_approvedPatches;
    Aws::Vector<Aws::String> m_rejectedPatches;
    Aws::Utils::DateTime m_createdDate;
    Aws::Utils::DateTime m_modifiedDate;
    Aws::String m_description;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
