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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input for workload creation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/CreateWorkloadInput">AWS
   * API Reference</a></p>
   */
  class AWS_WELLARCHITECTED_API CreateWorkloadRequest : public WellArchitectedRequest
  {
  public:
    CreateWorkloadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkload"; }

    Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }

    
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }

    
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }

    
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }

    
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }

    
    inline CreateWorkloadRequest& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}

    
    inline CreateWorkloadRequest& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}

    
    inline CreateWorkloadRequest& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline CreateWorkloadRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline CreateWorkloadRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline CreateWorkloadRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const WorkloadEnvironment& GetEnvironment() const{ return m_environment; }

    
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }

    
    inline void SetEnvironment(const WorkloadEnvironment& value) { m_environmentHasBeenSet = true; m_environment = value; }

    
    inline void SetEnvironment(WorkloadEnvironment&& value) { m_environmentHasBeenSet = true; m_environment = std::move(value); }

    
    inline CreateWorkloadRequest& WithEnvironment(const WorkloadEnvironment& value) { SetEnvironment(value); return *this;}

    
    inline CreateWorkloadRequest& WithEnvironment(WorkloadEnvironment&& value) { SetEnvironment(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    
    inline CreateWorkloadRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    
    inline CreateWorkloadRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    
    inline CreateWorkloadRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    
    inline CreateWorkloadRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    
    inline CreateWorkloadRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetAwsRegions() const{ return m_awsRegions; }

    
    inline bool AwsRegionsHasBeenSet() const { return m_awsRegionsHasBeenSet; }

    
    inline void SetAwsRegions(const Aws::Vector<Aws::String>& value) { m_awsRegionsHasBeenSet = true; m_awsRegions = value; }

    
    inline void SetAwsRegions(Aws::Vector<Aws::String>&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions = std::move(value); }

    
    inline CreateWorkloadRequest& WithAwsRegions(const Aws::Vector<Aws::String>& value) { SetAwsRegions(value); return *this;}

    
    inline CreateWorkloadRequest& WithAwsRegions(Aws::Vector<Aws::String>&& value) { SetAwsRegions(std::move(value)); return *this;}

    
    inline CreateWorkloadRequest& AddAwsRegions(const Aws::String& value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(value); return *this; }

    
    inline CreateWorkloadRequest& AddAwsRegions(Aws::String&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(std::move(value)); return *this; }

    
    inline CreateWorkloadRequest& AddAwsRegions(const char* value) { m_awsRegionsHasBeenSet = true; m_awsRegions.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetNonAwsRegions() const{ return m_nonAwsRegions; }

    
    inline bool NonAwsRegionsHasBeenSet() const { return m_nonAwsRegionsHasBeenSet; }

    
    inline void SetNonAwsRegions(const Aws::Vector<Aws::String>& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions = value; }

    
    inline void SetNonAwsRegions(Aws::Vector<Aws::String>&& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions = std::move(value); }

    
    inline CreateWorkloadRequest& WithNonAwsRegions(const Aws::Vector<Aws::String>& value) { SetNonAwsRegions(value); return *this;}

    
    inline CreateWorkloadRequest& WithNonAwsRegions(Aws::Vector<Aws::String>&& value) { SetNonAwsRegions(std::move(value)); return *this;}

    
    inline CreateWorkloadRequest& AddNonAwsRegions(const Aws::String& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions.push_back(value); return *this; }

    
    inline CreateWorkloadRequest& AddNonAwsRegions(Aws::String&& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions.push_back(std::move(value)); return *this; }

    
    inline CreateWorkloadRequest& AddNonAwsRegions(const char* value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions.push_back(value); return *this; }


    
    inline const Aws::Vector<Aws::String>& GetPillarPriorities() const{ return m_pillarPriorities; }

    
    inline bool PillarPrioritiesHasBeenSet() const { return m_pillarPrioritiesHasBeenSet; }

    
    inline void SetPillarPriorities(const Aws::Vector<Aws::String>& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities = value; }

    
    inline void SetPillarPriorities(Aws::Vector<Aws::String>&& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities = std::move(value); }

    
    inline CreateWorkloadRequest& WithPillarPriorities(const Aws::Vector<Aws::String>& value) { SetPillarPriorities(value); return *this;}

    
    inline CreateWorkloadRequest& WithPillarPriorities(Aws::Vector<Aws::String>&& value) { SetPillarPriorities(std::move(value)); return *this;}

    
    inline CreateWorkloadRequest& AddPillarPriorities(const Aws::String& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities.push_back(value); return *this; }

    
    inline CreateWorkloadRequest& AddPillarPriorities(Aws::String&& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities.push_back(std::move(value)); return *this; }

    
    inline CreateWorkloadRequest& AddPillarPriorities(const char* value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities.push_back(value); return *this; }


    
    inline const Aws::String& GetArchitecturalDesign() const{ return m_architecturalDesign; }

    
    inline bool ArchitecturalDesignHasBeenSet() const { return m_architecturalDesignHasBeenSet; }

    
    inline void SetArchitecturalDesign(const Aws::String& value) { m_architecturalDesignHasBeenSet = true; m_architecturalDesign = value; }

    
    inline void SetArchitecturalDesign(Aws::String&& value) { m_architecturalDesignHasBeenSet = true; m_architecturalDesign = std::move(value); }

    
    inline void SetArchitecturalDesign(const char* value) { m_architecturalDesignHasBeenSet = true; m_architecturalDesign.assign(value); }

    
    inline CreateWorkloadRequest& WithArchitecturalDesign(const Aws::String& value) { SetArchitecturalDesign(value); return *this;}

    
    inline CreateWorkloadRequest& WithArchitecturalDesign(Aws::String&& value) { SetArchitecturalDesign(std::move(value)); return *this;}

    
    inline CreateWorkloadRequest& WithArchitecturalDesign(const char* value) { SetArchitecturalDesign(value); return *this;}


    
    inline const Aws::String& GetReviewOwner() const{ return m_reviewOwner; }

    
    inline bool ReviewOwnerHasBeenSet() const { return m_reviewOwnerHasBeenSet; }

    
    inline void SetReviewOwner(const Aws::String& value) { m_reviewOwnerHasBeenSet = true; m_reviewOwner = value; }

    
    inline void SetReviewOwner(Aws::String&& value) { m_reviewOwnerHasBeenSet = true; m_reviewOwner = std::move(value); }

    
    inline void SetReviewOwner(const char* value) { m_reviewOwnerHasBeenSet = true; m_reviewOwner.assign(value); }

    
    inline CreateWorkloadRequest& WithReviewOwner(const Aws::String& value) { SetReviewOwner(value); return *this;}

    
    inline CreateWorkloadRequest& WithReviewOwner(Aws::String&& value) { SetReviewOwner(std::move(value)); return *this;}

    
    inline CreateWorkloadRequest& WithReviewOwner(const char* value) { SetReviewOwner(value); return *this;}


    
    inline const Aws::String& GetIndustryType() const{ return m_industryType; }

    
    inline bool IndustryTypeHasBeenSet() const { return m_industryTypeHasBeenSet; }

    
    inline void SetIndustryType(const Aws::String& value) { m_industryTypeHasBeenSet = true; m_industryType = value; }

    
    inline void SetIndustryType(Aws::String&& value) { m_industryTypeHasBeenSet = true; m_industryType = std::move(value); }

    
    inline void SetIndustryType(const char* value) { m_industryTypeHasBeenSet = true; m_industryType.assign(value); }

    
    inline CreateWorkloadRequest& WithIndustryType(const Aws::String& value) { SetIndustryType(value); return *this;}

    
    inline CreateWorkloadRequest& WithIndustryType(Aws::String&& value) { SetIndustryType(std::move(value)); return *this;}

    
    inline CreateWorkloadRequest& WithIndustryType(const char* value) { SetIndustryType(value); return *this;}


    
    inline const Aws::String& GetIndustry() const{ return m_industry; }

    
    inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }

    
    inline void SetIndustry(const Aws::String& value) { m_industryHasBeenSet = true; m_industry = value; }

    
    inline void SetIndustry(Aws::String&& value) { m_industryHasBeenSet = true; m_industry = std::move(value); }

    
    inline void SetIndustry(const char* value) { m_industryHasBeenSet = true; m_industry.assign(value); }

    
    inline CreateWorkloadRequest& WithIndustry(const Aws::String& value) { SetIndustry(value); return *this;}

    
    inline CreateWorkloadRequest& WithIndustry(Aws::String&& value) { SetIndustry(std::move(value)); return *this;}

    
    inline CreateWorkloadRequest& WithIndustry(const char* value) { SetIndustry(value); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetLenses() const{ return m_lenses; }

    
    inline bool LensesHasBeenSet() const { return m_lensesHasBeenSet; }

    
    inline void SetLenses(const Aws::Vector<Aws::String>& value) { m_lensesHasBeenSet = true; m_lenses = value; }

    
    inline void SetLenses(Aws::Vector<Aws::String>&& value) { m_lensesHasBeenSet = true; m_lenses = std::move(value); }

    
    inline CreateWorkloadRequest& WithLenses(const Aws::Vector<Aws::String>& value) { SetLenses(value); return *this;}

    
    inline CreateWorkloadRequest& WithLenses(Aws::Vector<Aws::String>&& value) { SetLenses(std::move(value)); return *this;}

    
    inline CreateWorkloadRequest& AddLenses(const Aws::String& value) { m_lensesHasBeenSet = true; m_lenses.push_back(value); return *this; }

    
    inline CreateWorkloadRequest& AddLenses(Aws::String&& value) { m_lensesHasBeenSet = true; m_lenses.push_back(std::move(value)); return *this; }

    
    inline CreateWorkloadRequest& AddLenses(const char* value) { m_lensesHasBeenSet = true; m_lenses.push_back(value); return *this; }


    
    inline const Aws::String& GetNotes() const{ return m_notes; }

    
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    
    inline CreateWorkloadRequest& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    
    inline CreateWorkloadRequest& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    
    inline CreateWorkloadRequest& WithNotes(const char* value) { SetNotes(value); return *this;}


    
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    
    inline CreateWorkloadRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    
    inline CreateWorkloadRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    
    inline CreateWorkloadRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>The tags to be associated with the workload.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to be associated with the workload.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to be associated with the workload.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to be associated with the workload.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to be associated with the workload.</p>
     */
    inline CreateWorkloadRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to be associated with the workload.</p>
     */
    inline CreateWorkloadRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to be associated with the workload.</p>
     */
    inline CreateWorkloadRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags to be associated with the workload.</p>
     */
    inline CreateWorkloadRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be associated with the workload.</p>
     */
    inline CreateWorkloadRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be associated with the workload.</p>
     */
    inline CreateWorkloadRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags to be associated with the workload.</p>
     */
    inline CreateWorkloadRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags to be associated with the workload.</p>
     */
    inline CreateWorkloadRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags to be associated with the workload.</p>
     */
    inline CreateWorkloadRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    WorkloadEnvironment m_environment;
    bool m_environmentHasBeenSet;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet;

    Aws::Vector<Aws::String> m_awsRegions;
    bool m_awsRegionsHasBeenSet;

    Aws::Vector<Aws::String> m_nonAwsRegions;
    bool m_nonAwsRegionsHasBeenSet;

    Aws::Vector<Aws::String> m_pillarPriorities;
    bool m_pillarPrioritiesHasBeenSet;

    Aws::String m_architecturalDesign;
    bool m_architecturalDesignHasBeenSet;

    Aws::String m_reviewOwner;
    bool m_reviewOwnerHasBeenSet;

    Aws::String m_industryType;
    bool m_industryTypeHasBeenSet;

    Aws::String m_industry;
    bool m_industryHasBeenSet;

    Aws::Vector<Aws::String> m_lenses;
    bool m_lensesHasBeenSet;

    Aws::String m_notes;
    bool m_notesHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
