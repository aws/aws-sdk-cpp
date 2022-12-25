/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/WorkloadEnvironment.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/WorkloadImprovementStatus.h>
#include <aws/wellarchitected/model/WorkloadDiscoveryConfig.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input to update a workload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkloadInput">AWS
   * API Reference</a></p>
   */
  class UpdateWorkloadRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateWorkloadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkload"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline UpdateWorkloadRequest& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline UpdateWorkloadRequest& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline UpdateWorkloadRequest& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }

    
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }

    
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }

    
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }

    
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }

    
    inline UpdateWorkloadRequest& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}

    
    inline UpdateWorkloadRequest& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}

    
    inline UpdateWorkloadRequest& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline UpdateWorkloadRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline UpdateWorkloadRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline UpdateWorkloadRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const WorkloadEnvironment& GetEnvironment() const{ return m_environment; }

    
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    
    inline void SetEnvironment(const WorkloadEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    
    inline void SetEnvironment(WorkloadEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    
    inline UpdateWorkloadRequest& WithEnvironment(const WorkloadEnvironment& value) { SetEnvironment(value); return *this;}

    
    inline UpdateWorkloadRequest& WithEnvironment(WorkloadEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    
    inline UpdateWorkloadRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    
    inline UpdateWorkloadRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    
    inline UpdateWorkloadRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    
    inline UpdateWorkloadRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    
    inline UpdateWorkloadRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetAwsRegions() const{ return m_awsRegions; }

    
    inline bool AwsRegionsHasBeenSet() const { return m_awsRegionsHasBeenSet; }

    
    inline void SetAwsRegions(const Aws::Vector<Aws::String>& value) { m_awsRegionsHasBeenSet = true; m_awsRegions = value; }

    
    inline void SetAwsRegions(Aws::Vector<Aws::String>&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions = std::move(value); }

    
    inline UpdateWorkloadRequest& WithAwsRegions(const Aws::Vector<Aws::String>& value) { SetAwsRegions(value); return *this;}

    
    inline UpdateWorkloadRequest& WithAwsRegions(Aws::Vector<Aws::String>&& value) { SetAwsRegions(std::move(value)); return *this;}

    
    inline UpdateWorkloadRequest& AddAwsRegions(const Aws::String& value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(value); return *this; }

    
    inline UpdateWorkloadRequest& AddAwsRegions(Aws::String&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(std::move(value)); return *this; }

    
    inline UpdateWorkloadRequest& AddAwsRegions(const char* value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetNonAwsRegions() const{ return m_nonAwsRegions; }

    
    inline bool NonAwsRegionsHasBeenSet() const { return m_nonAwsRegionsHasBeenSet; }

    
    inline void SetNonAwsRegions(const Aws::Vector<Aws::String>& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions = value; }

    
    inline void SetNonAwsRegions(Aws::Vector<Aws::String>&& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions = std::move(value); }

    
    inline UpdateWorkloadRequest& WithNonAwsRegions(const Aws::Vector<Aws::String>& value) { SetNonAwsRegions(value); return *this;}

    
    inline UpdateWorkloadRequest& WithNonAwsRegions(Aws::Vector<Aws::String>&& value) { SetNonAwsRegions(std::move(value)); return *this;}

    
    inline UpdateWorkloadRequest& AddNonAwsRegions(const Aws::String& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions.push_back(value); return *this; }

    
    inline UpdateWorkloadRequest& AddNonAwsRegions(Aws::String&& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions.push_back(std::move(value)); return *this; }

    
    inline UpdateWorkloadRequest& AddNonAwsRegions(const char* value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetPillarPriorities() const{ return m_pillarPriorities; }

    
    inline bool PillarPrioritiesHasBeenSet() const { return m_pillarPrioritiesHasBeenSet; }

    
    inline void SetPillarPriorities(const Aws::Vector<Aws::String>& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities = value; }

    
    inline void SetPillarPriorities(Aws::Vector<Aws::String>&& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities = std::move(value); }

    
    inline UpdateWorkloadRequest& WithPillarPriorities(const Aws::Vector<Aws::String>& value) { SetPillarPriorities(value); return *this;}

    
    inline UpdateWorkloadRequest& WithPillarPriorities(Aws::Vector<Aws::String>&& value) { SetPillarPriorities(std::move(value)); return *this;}

    
    inline UpdateWorkloadRequest& AddPillarPriorities(const Aws::String& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities.push_back(value); return *this; }

    
    inline UpdateWorkloadRequest& AddPillarPriorities(Aws::String&& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities.push_back(std::move(value)); return *this; }

    
    inline UpdateWorkloadRequest& AddPillarPriorities(const char* value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities.push_back(value); return *this; }


    
    inline const Aws::String& GetArchitecturalDesign() const{ return m_architecturalDesign; }

    
    inline bool ArchitecturalDesignHasBeenSet() const { return m_architecturalDesignHasBeenSet; }

    
    inline void SetArchitecturalDesign(const Aws::String& value) { m_architecturalDesignHasBeenSet = true; m_architecturalDesign = value; }

    
    inline void SetArchitecturalDesign(Aws::String&& value) { m_architecturalDesignHasBeenSet = true; m_architecturalDesign = std::move(value); }

    
    inline void SetArchitecturalDesign(const char* value) { m_architecturalDesignHasBeenSet = true; m_architecturalDesign.assign(value); }

    
    inline UpdateWorkloadRequest& WithArchitecturalDesign(const Aws::String& value) { SetArchitecturalDesign(value); return *this;}

    
    inline UpdateWorkloadRequest& WithArchitecturalDesign(Aws::String&& value) { SetArchitecturalDesign(std::move(value)); return *this;}

    
    inline UpdateWorkloadRequest& WithArchitecturalDesign(const char* value) { SetArchitecturalDesign(value); return *this;}


    
    inline const Aws::String& GetReviewOwner() const{ return m_reviewOwner; }

    
    inline bool ReviewOwnerHasBeenSet() const { return m_reviewOwnerHasBeenSet; }

    
    inline void SetReviewOwner(const Aws::String& value) { m_reviewOwnerHasBeenSet = true; m_reviewOwner = value; }

    
    inline void SetReviewOwner(Aws::String&& value) { m_reviewOwnerHasBeenSet = true; m_reviewOwner = std::move(value); }

    
    inline void SetReviewOwner(const char* value) { m_reviewOwnerHasBeenSet = true; m_reviewOwner.assign(value); }

    
    inline UpdateWorkloadRequest& WithReviewOwner(const Aws::String& value) { SetReviewOwner(value); return *this;}

    
    inline UpdateWorkloadRequest& WithReviewOwner(Aws::String&& value) { SetReviewOwner(std::move(value)); return *this;}

    
    inline UpdateWorkloadRequest& WithReviewOwner(const char* value) { SetReviewOwner(value); return *this;}


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
    inline UpdateWorkloadRequest& WithIsReviewOwnerUpdateAcknowledged(bool value) { SetIsReviewOwnerUpdateAcknowledged(value); return *this;}


    
    inline const Aws::String& GetIndustryType() const{ return m_industryType; }

    
    inline bool IndustryTypeHasBeenSet() const { return m_industryTypeHasBeenSet; }

    
    inline void SetIndustryType(const Aws::String& value) { m_industryTypeHasBeenSet = true; m_industryType = value; }

    
    inline void SetIndustryType(Aws::String&& value) { m_industryTypeHasBeenSet = true; m_industryType = std::move(value); }

    
    inline void SetIndustryType(const char* value) { m_industryTypeHasBeenSet = true; m_industryType.assign(value); }

    
    inline UpdateWorkloadRequest& WithIndustryType(const Aws::String& value) { SetIndustryType(value); return *this;}

    
    inline UpdateWorkloadRequest& WithIndustryType(Aws::String&& value) { SetIndustryType(std::move(value)); return *this;}

    
    inline UpdateWorkloadRequest& WithIndustryType(const char* value) { SetIndustryType(value); return *this;}


    
    inline const Aws::String& GetIndustry() const{ return m_industry; }

    
    inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }

    
    inline void SetIndustry(const Aws::String& value) { m_industryHasBeenSet = true; m_industry = value; }

    
    inline void SetIndustry(Aws::String&& value) { m_industryHasBeenSet = true; m_industry = std::move(value); }

    
    inline void SetIndustry(const char* value) { m_industryHasBeenSet = true; m_industry.assign(value); }

    
    inline UpdateWorkloadRequest& WithIndustry(const Aws::String& value) { SetIndustry(value); return *this;}

    
    inline UpdateWorkloadRequest& WithIndustry(Aws::String&& value) { SetIndustry(std::move(value)); return *this;}

    
    inline UpdateWorkloadRequest& WithIndustry(const char* value) { SetIndustry(value); return *this;}


    
    inline const Aws::String& GetNotes() const{ return m_notes; }

    
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    
    inline UpdateWorkloadRequest& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    
    inline UpdateWorkloadRequest& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    
    inline UpdateWorkloadRequest& WithNotes(const char* value) { SetNotes(value); return *this;}


    
    inline const WorkloadImprovementStatus& GetImprovementStatus() const{ return m_improvementStatus; }

    
    inline bool ImprovementStatusHasBeenSet() const { return m_improvementStatusHasBeenSet; }

    
    inline void SetImprovementStatus(const WorkloadImprovementStatus& value) { m_improvementStatusHasBeenSet = true; m_improvementStatus = value; }

    
    inline void SetImprovementStatus(WorkloadImprovementStatus&& value) { m_improvementStatusHasBeenSet = true; m_improvementStatus = std::move(value); }

    
    inline UpdateWorkloadRequest& WithImprovementStatus(const WorkloadImprovementStatus& value) { SetImprovementStatus(value); return *this;}

    
    inline UpdateWorkloadRequest& WithImprovementStatus(WorkloadImprovementStatus&& value) { SetImprovementStatus(std::move(value)); return *this;}


    /**
     * <p>Well-Architected discovery configuration settings to associate to the
     * workload.</p>
     */
    inline const WorkloadDiscoveryConfig& GetDiscoveryConfig() const{ return m_discoveryConfig; }

    /**
     * <p>Well-Architected discovery configuration settings to associate to the
     * workload.</p>
     */
    inline bool DiscoveryConfigHasBeenSet() const { return m_discoveryConfigHasBeenSet; }

    /**
     * <p>Well-Architected discovery configuration settings to associate to the
     * workload.</p>
     */
    inline void SetDiscoveryConfig(const WorkloadDiscoveryConfig& value) { m_discoveryConfigHasBeenSet = true; m_discoveryConfig = value; }

    /**
     * <p>Well-Architected discovery configuration settings to associate to the
     * workload.</p>
     */
    inline void SetDiscoveryConfig(WorkloadDiscoveryConfig&& value) { m_discoveryConfigHasBeenSet = true; m_discoveryConfig = std::move(value); }

    /**
     * <p>Well-Architected discovery configuration settings to associate to the
     * workload.</p>
     */
    inline UpdateWorkloadRequest& WithDiscoveryConfig(const WorkloadDiscoveryConfig& value) { SetDiscoveryConfig(value); return *this;}

    /**
     * <p>Well-Architected discovery configuration settings to associate to the
     * workload.</p>
     */
    inline UpdateWorkloadRequest& WithDiscoveryConfig(WorkloadDiscoveryConfig&& value) { SetDiscoveryConfig(std::move(value)); return *this;}


    /**
     * <p>List of AppRegistry application ARNs to associate to the workload.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplications() const{ return m_applications; }

    /**
     * <p>List of AppRegistry application ARNs to associate to the workload.</p>
     */
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }

    /**
     * <p>List of AppRegistry application ARNs to associate to the workload.</p>
     */
    inline void SetApplications(const Aws::Vector<Aws::String>& value) { m_applicationsHasBeenSet = true; m_applications = value; }

    /**
     * <p>List of AppRegistry application ARNs to associate to the workload.</p>
     */
    inline void SetApplications(Aws::Vector<Aws::String>&& value) { m_applicationsHasBeenSet = true; m_applications = std::move(value); }

    /**
     * <p>List of AppRegistry application ARNs to associate to the workload.</p>
     */
    inline UpdateWorkloadRequest& WithApplications(const Aws::Vector<Aws::String>& value) { SetApplications(value); return *this;}

    /**
     * <p>List of AppRegistry application ARNs to associate to the workload.</p>
     */
    inline UpdateWorkloadRequest& WithApplications(Aws::Vector<Aws::String>&& value) { SetApplications(std::move(value)); return *this;}

    /**
     * <p>List of AppRegistry application ARNs to associate to the workload.</p>
     */
    inline UpdateWorkloadRequest& AddApplications(const Aws::String& value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }

    /**
     * <p>List of AppRegistry application ARNs to associate to the workload.</p>
     */
    inline UpdateWorkloadRequest& AddApplications(Aws::String&& value) { m_applicationsHasBeenSet = true; m_applications.push_back(std::move(value)); return *this; }

    /**
     * <p>List of AppRegistry application ARNs to associate to the workload.</p>
     */
    inline UpdateWorkloadRequest& AddApplications(const char* value) { m_applicationsHasBeenSet = true; m_applications.push_back(value); return *this; }

  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    WorkloadEnvironment m_environment;
    bool m_environmentHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsRegions;
    bool m_awsRegionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_nonAwsRegions;
    bool m_nonAwsRegionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_pillarPriorities;
    bool m_pillarPrioritiesHasBeenSet = false;

    Aws::String m_architecturalDesign;
    bool m_architecturalDesignHasBeenSet = false;

    Aws::String m_reviewOwner;
    bool m_reviewOwnerHasBeenSet = false;

    bool m_isReviewOwnerUpdateAcknowledged;
    bool m_isReviewOwnerUpdateAcknowledgedHasBeenSet = false;

    Aws::String m_industryType;
    bool m_industryTypeHasBeenSet = false;

    Aws::String m_industry;
    bool m_industryHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    WorkloadImprovementStatus m_improvementStatus;
    bool m_improvementStatusHasBeenSet = false;

    WorkloadDiscoveryConfig m_discoveryConfig;
    bool m_discoveryConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_applications;
    bool m_applicationsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
