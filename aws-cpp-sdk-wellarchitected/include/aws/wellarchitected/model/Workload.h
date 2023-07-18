/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/WorkloadEnvironment.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/WorkloadImprovementStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wellarchitected/model/Risk.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A workload return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/Workload">AWS
   * API Reference</a></p>
   */
  class AWS_WELLARCHITECTED_API Workload
  {
  public:
    Workload();
    Workload(Aws::Utils::Json::JsonView jsonValue);
    Workload& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline Workload& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline Workload& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline Workload& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::String& GetWorkloadArn() const{ return m_workloadArn; }

    
    inline bool WorkloadArnHasBeenSet() const { return m_workloadArnHasBeenSet; }

    
    inline void SetWorkloadArn(const Aws::String& value) { m_workloadArnHasBeenSet = true; m_workloadArn = value; }

    
    inline void SetWorkloadArn(Aws::String&& value) { m_workloadArnHasBeenSet = true; m_workloadArn = std::move(value); }

    
    inline void SetWorkloadArn(const char* value) { m_workloadArnHasBeenSet = true; m_workloadArn.assign(value); }

    
    inline Workload& WithWorkloadArn(const Aws::String& value) { SetWorkloadArn(value); return *this;}

    
    inline Workload& WithWorkloadArn(Aws::String&& value) { SetWorkloadArn(std::move(value)); return *this;}

    
    inline Workload& WithWorkloadArn(const char* value) { SetWorkloadArn(value); return *this;}


    
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }

    
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }

    
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }

    
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }

    
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }

    
    inline Workload& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}

    
    inline Workload& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}

    
    inline Workload& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline Workload& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline Workload& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline Workload& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const WorkloadEnvironment& GetEnvironment() const{ return m_environment; }

    
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    
    inline void SetEnvironment(const WorkloadEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    
    inline void SetEnvironment(WorkloadEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    
    inline Workload& WithEnvironment(const WorkloadEnvironment& value) { SetEnvironment(value); return *this;}

    
    inline Workload& WithEnvironment(WorkloadEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline Workload& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline Workload& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    
    inline Workload& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    
    inline Workload& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    
    inline Workload& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    
    inline Workload& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    
    inline Workload& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetAwsRegions() const{ return m_awsRegions; }

    
    inline bool AwsRegionsHasBeenSet() const { return m_awsRegionsHasBeenSet; }

    
    inline void SetAwsRegions(const Aws::Vector<Aws::String>& value) { m_awsRegionsHasBeenSet = true; m_awsRegions = value; }

    
    inline void SetAwsRegions(Aws::Vector<Aws::String>&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions = std::move(value); }

    
    inline Workload& WithAwsRegions(const Aws::Vector<Aws::String>& value) { SetAwsRegions(value); return *this;}

    
    inline Workload& WithAwsRegions(Aws::Vector<Aws::String>&& value) { SetAwsRegions(std::move(value)); return *this;}

    
    inline Workload& AddAwsRegions(const Aws::String& value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(value); return *this; }

    
    inline Workload& AddAwsRegions(Aws::String&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(std::move(value)); return *this; }

    
    inline Workload& AddAwsRegions(const char* value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetNonAwsRegions() const{ return m_nonAwsRegions; }

    
    inline bool NonAwsRegionsHasBeenSet() const { return m_nonAwsRegionsHasBeenSet; }

    
    inline void SetNonAwsRegions(const Aws::Vector<Aws::String>& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions = value; }

    
    inline void SetNonAwsRegions(Aws::Vector<Aws::String>&& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions = std::move(value); }

    
    inline Workload& WithNonAwsRegions(const Aws::Vector<Aws::String>& value) { SetNonAwsRegions(value); return *this;}

    
    inline Workload& WithNonAwsRegions(Aws::Vector<Aws::String>&& value) { SetNonAwsRegions(std::move(value)); return *this;}

    
    inline Workload& AddNonAwsRegions(const Aws::String& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions.push_back(value); return *this; }

    
    inline Workload& AddNonAwsRegions(Aws::String&& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions.push_back(std::move(value)); return *this; }

    
    inline Workload& AddNonAwsRegions(const char* value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions.push_back(value); return *this; }


    
    inline const Aws::String& GetArchitecturalDesign() const{ return m_architecturalDesign; }

    
    inline bool ArchitecturalDesignHasBeenSet() const { return m_architecturalDesignHasBeenSet; }

    
    inline void SetArchitecturalDesign(const Aws::String& value) { m_architecturalDesignHasBeenSet = true; m_architecturalDesign = value; }

    
    inline void SetArchitecturalDesign(Aws::String&& value) { m_architecturalDesignHasBeenSet = true; m_architecturalDesign = std::move(value); }

    
    inline void SetArchitecturalDesign(const char* value) { m_architecturalDesignHasBeenSet = true; m_architecturalDesign.assign(value); }

    
    inline Workload& WithArchitecturalDesign(const Aws::String& value) { SetArchitecturalDesign(value); return *this;}

    
    inline Workload& WithArchitecturalDesign(Aws::String&& value) { SetArchitecturalDesign(std::move(value)); return *this;}

    
    inline Workload& WithArchitecturalDesign(const char* value) { SetArchitecturalDesign(value); return *this;}


    
    inline const Aws::String& GetReviewOwner() const{ return m_reviewOwner; }

    
    inline bool ReviewOwnerHasBeenSet() const { return m_reviewOwnerHasBeenSet; }

    
    inline void SetReviewOwner(const Aws::String& value) { m_reviewOwnerHasBeenSet = true; m_reviewOwner = value; }

    
    inline void SetReviewOwner(Aws::String&& value) { m_reviewOwnerHasBeenSet = true; m_reviewOwner = std::move(value); }

    
    inline void SetReviewOwner(const char* value) { m_reviewOwnerHasBeenSet = true; m_reviewOwner.assign(value); }

    
    inline Workload& WithReviewOwner(const Aws::String& value) { SetReviewOwner(value); return *this;}

    
    inline Workload& WithReviewOwner(Aws::String&& value) { SetReviewOwner(std::move(value)); return *this;}

    
    inline Workload& WithReviewOwner(const char* value) { SetReviewOwner(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetReviewRestrictionDate() const{ return m_reviewRestrictionDate; }

    
    inline bool ReviewRestrictionDateHasBeenSet() const { return m_reviewRestrictionDateHasBeenSet; }

    
    inline void SetReviewRestrictionDate(const Aws::Utils::DateTime& value) { m_reviewRestrictionDateHasBeenSet = true; m_reviewRestrictionDate = value; }

    
    inline void SetReviewRestrictionDate(Aws::Utils::DateTime&& value) { m_reviewRestrictionDateHasBeenSet = true; m_reviewRestrictionDate = std::move(value); }

    
    inline Workload& WithReviewRestrictionDate(const Aws::Utils::DateTime& value) { SetReviewRestrictionDate(value); return *this;}

    
    inline Workload& WithReviewRestrictionDate(Aws::Utils::DateTime&& value) { SetReviewRestrictionDate(std::move(value)); return *this;}


    /**
     * <p>Flag indicating whether the workload owner has acknowledged that the
     * <i>Review owner</i> field is required.</p> <p>If a <b>Review owner</b> is not
     * added to the workload within 60 days of acknowledgement, access to the workload
     * is restricted until an owner is added.</p>
     */
    inline bool GetIsReviewOwnerUpdateAcknowledged() const{ return m_isReviewOwnerUpdateAcknowledged; }

    /**
     * <p>Flag indicating whether the workload owner has acknowledged that the
     * <i>Review owner</i> field is required.</p> <p>If a <b>Review owner</b> is not
     * added to the workload within 60 days of acknowledgement, access to the workload
     * is restricted until an owner is added.</p>
     */
    inline bool IsReviewOwnerUpdateAcknowledgedHasBeenSet() const { return m_isReviewOwnerUpdateAcknowledgedHasBeenSet; }

    /**
     * <p>Flag indicating whether the workload owner has acknowledged that the
     * <i>Review owner</i> field is required.</p> <p>If a <b>Review owner</b> is not
     * added to the workload within 60 days of acknowledgement, access to the workload
     * is restricted until an owner is added.</p>
     */
    inline void SetIsReviewOwnerUpdateAcknowledged(bool value) { m_isReviewOwnerUpdateAcknowledgedHasBeenSet = true; m_isReviewOwnerUpdateAcknowledged = value; }

    /**
     * <p>Flag indicating whether the workload owner has acknowledged that the
     * <i>Review owner</i> field is required.</p> <p>If a <b>Review owner</b> is not
     * added to the workload within 60 days of acknowledgement, access to the workload
     * is restricted until an owner is added.</p>
     */
    inline Workload& WithIsReviewOwnerUpdateAcknowledged(bool value) { SetIsReviewOwnerUpdateAcknowledged(value); return *this;}


    
    inline const Aws::String& GetIndustryType() const{ return m_industryType; }

    
    inline bool IndustryTypeHasBeenSet() const { return m_industryTypeHasBeenSet; }

    
    inline void SetIndustryType(const Aws::String& value) { m_industryTypeHasBeenSet = true; m_industryType = value; }

    
    inline void SetIndustryType(Aws::String&& value) { m_industryTypeHasBeenSet = true; m_industryType = std::move(value); }

    
    inline void SetIndustryType(const char* value) { m_industryTypeHasBeenSet = true; m_industryType.assign(value); }

    
    inline Workload& WithIndustryType(const Aws::String& value) { SetIndustryType(value); return *this;}

    
    inline Workload& WithIndustryType(Aws::String&& value) { SetIndustryType(std::move(value)); return *this;}

    
    inline Workload& WithIndustryType(const char* value) { SetIndustryType(value); return *this;}


    
    inline const Aws::String& GetIndustry() const{ return m_industry; }

    
    inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }

    
    inline void SetIndustry(const Aws::String& value) { m_industryHasBeenSet = true; m_industry = value; }

    
    inline void SetIndustry(Aws::String&& value) { m_industryHasBeenSet = true; m_industry = std::move(value); }

    
    inline void SetIndustry(const char* value) { m_industryHasBeenSet = true; m_industry.assign(value); }

    
    inline Workload& WithIndustry(const Aws::String& value) { SetIndustry(value); return *this;}

    
    inline Workload& WithIndustry(Aws::String&& value) { SetIndustry(std::move(value)); return *this;}

    
    inline Workload& WithIndustry(const char* value) { SetIndustry(value); return *this;}


    
    inline const Aws::String& GetNotes() const{ return m_notes; }

    
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    
    inline Workload& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    
    inline Workload& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    
    inline Workload& WithNotes(const char* value) { SetNotes(value); return *this;}


    
    inline const WorkloadImprovementStatus& GetImprovementStatus() const{ return m_improvementStatus; }

    
    inline bool ImprovementStatusHasBeenSet() const { return m_improvementStatusHasBeenSet; }

    
    inline void SetImprovementStatus(const WorkloadImprovementStatus& value) { m_improvementStatusHasBeenSet = true; m_improvementStatus = value; }

    
    inline void SetImprovementStatus(WorkloadImprovementStatus&& value) { m_improvementStatusHasBeenSet = true; m_improvementStatus = std::move(value); }

    
    inline Workload& WithImprovementStatus(const WorkloadImprovementStatus& value) { SetImprovementStatus(value); return *this;}

    
    inline Workload& WithImprovementStatus(WorkloadImprovementStatus&& value) { SetImprovementStatus(std::move(value)); return *this;}


    
    inline const Aws::Map<Risk, int>& GetRiskCounts() const{ return m_riskCounts; }

    
    inline bool RiskCountsHasBeenSet() const { return m_riskCountsHasBeenSet; }

    
    inline void SetRiskCounts(const Aws::Map<Risk, int>& value) { m_riskCountsHasBeenSet = true; m_riskCounts = value; }

    
    inline void SetRiskCounts(Aws::Map<Risk, int>&& value) { m_riskCountsHasBeenSet = true; m_riskCounts = std::move(value); }

    
    inline Workload& WithRiskCounts(const Aws::Map<Risk, int>& value) { SetRiskCounts(value); return *this;}

    
    inline Workload& WithRiskCounts(Aws::Map<Risk, int>&& value) { SetRiskCounts(std::move(value)); return *this;}

    
    inline Workload& AddRiskCounts(const Risk& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(key, value); return *this; }

    
    inline Workload& AddRiskCounts(Risk&& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(std::move(key), value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetPillarPriorities() const{ return m_pillarPriorities; }

    
    inline bool PillarPrioritiesHasBeenSet() const { return m_pillarPrioritiesHasBeenSet; }

    
    inline void SetPillarPriorities(const Aws::Vector<Aws::String>& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities = value; }

    
    inline void SetPillarPriorities(Aws::Vector<Aws::String>&& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities = std::move(value); }

    
    inline Workload& WithPillarPriorities(const Aws::Vector<Aws::String>& value) { SetPillarPriorities(value); return *this;}

    
    inline Workload& WithPillarPriorities(Aws::Vector<Aws::String>&& value) { SetPillarPriorities(std::move(value)); return *this;}

    
    inline Workload& AddPillarPriorities(const Aws::String& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities.push_back(value); return *this; }

    
    inline Workload& AddPillarPriorities(Aws::String&& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities.push_back(std::move(value)); return *this; }

    
    inline Workload& AddPillarPriorities(const char* value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetLenses() const{ return m_lenses; }

    
    inline bool LensesHasBeenSet() const { return m_lensesHasBeenSet; }

    
    inline void SetLenses(const Aws::Vector<Aws::String>& value) { m_lensesHasBeenSet = true; m_lenses = value; }

    
    inline void SetLenses(Aws::Vector<Aws::String>&& value) { m_lensesHasBeenSet = true; m_lenses = std::move(value); }

    
    inline Workload& WithLenses(const Aws::Vector<Aws::String>& value) { SetLenses(value); return *this;}

    
    inline Workload& WithLenses(Aws::Vector<Aws::String>&& value) { SetLenses(std::move(value)); return *this;}

    
    inline Workload& AddLenses(const Aws::String& value) { m_lensesHasBeenSet = true; m_lenses.push_back(value); return *this; }

    
    inline Workload& AddLenses(Aws::String&& value) { m_lensesHasBeenSet = true; m_lenses.push_back(std::move(value)); return *this; }

    
    inline Workload& AddLenses(const char* value) { m_lensesHasBeenSet = true; m_lenses.push_back(value); return *this; }


    
    inline const Aws::String& GetOwner() const{ return m_owner; }

    
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    
    inline Workload& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    
    inline Workload& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    
    inline Workload& WithOwner(const char* value) { SetOwner(value); return *this;}


    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline const Aws::String& GetShareInvitationId() const{ return m_shareInvitationId; }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline bool ShareInvitationIdHasBeenSet() const { return m_shareInvitationIdHasBeenSet; }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline void SetShareInvitationId(const Aws::String& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = value; }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline void SetShareInvitationId(Aws::String&& value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId = std::move(value); }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline void SetShareInvitationId(const char* value) { m_shareInvitationIdHasBeenSet = true; m_shareInvitationId.assign(value); }

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline Workload& WithShareInvitationId(const Aws::String& value) { SetShareInvitationId(value); return *this;}

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline Workload& WithShareInvitationId(Aws::String&& value) { SetShareInvitationId(std::move(value)); return *this;}

    /**
     * <p>The ID assigned to the share invitation.</p>
     */
    inline Workload& WithShareInvitationId(const char* value) { SetShareInvitationId(value); return *this;}


    /**
     * <p>The tags associated with the workload.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the workload.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the workload.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the workload.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the workload.</p>
     */
    inline Workload& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the workload.</p>
     */
    inline Workload& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the workload.</p>
     */
    inline Workload& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags associated with the workload.</p>
     */
    inline Workload& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the workload.</p>
     */
    inline Workload& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the workload.</p>
     */
    inline Workload& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags associated with the workload.</p>
     */
    inline Workload& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags associated with the workload.</p>
     */
    inline Workload& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags associated with the workload.</p>
     */
    inline Workload& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet;

    Aws::String m_workloadArn;
    bool m_workloadArnHasBeenSet;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    WorkloadEnvironment m_environment;
    bool m_environmentHasBeenSet;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet;

    Aws::Vector<Aws::String> m_awsRegions;
    bool m_awsRegionsHasBeenSet;

    Aws::Vector<Aws::String> m_nonAwsRegions;
    bool m_nonAwsRegionsHasBeenSet;

    Aws::String m_architecturalDesign;
    bool m_architecturalDesignHasBeenSet;

    Aws::String m_reviewOwner;
    bool m_reviewOwnerHasBeenSet;

    Aws::Utils::DateTime m_reviewRestrictionDate;
    bool m_reviewRestrictionDateHasBeenSet;

    bool m_isReviewOwnerUpdateAcknowledged;
    bool m_isReviewOwnerUpdateAcknowledgedHasBeenSet;

    Aws::String m_industryType;
    bool m_industryTypeHasBeenSet;

    Aws::String m_industry;
    bool m_industryHasBeenSet;

    Aws::String m_notes;
    bool m_notesHasBeenSet;

    WorkloadImprovementStatus m_improvementStatus;
    bool m_improvementStatusHasBeenSet;

    Aws::Map<Risk, int> m_riskCounts;
    bool m_riskCountsHasBeenSet;

    Aws::Vector<Aws::String> m_pillarPriorities;
    bool m_pillarPrioritiesHasBeenSet;

    Aws::Vector<Aws::String> m_lenses;
    bool m_lensesHasBeenSet;

    Aws::String m_owner;
    bool m_ownerHasBeenSet;

    Aws::String m_shareInvitationId;
    bool m_shareInvitationIdHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
