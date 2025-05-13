/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/JobType.h>
#include <aws/macie2/model/ManagedDataIdentifierSelector.h>
#include <aws/macie2/model/S3JobDefinition.h>
#include <aws/macie2/model/JobScheduleFrequency.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Macie2
{
namespace Model
{

  /**
   */
  class CreateClassificationJobRequest : public Macie2Request
  {
  public:
    AWS_MACIE2_API CreateClassificationJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateClassificationJob"; }

    AWS_MACIE2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array of unique identifiers, one for each allow list for the job to use
     * when it analyzes data.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowListIds() const { return m_allowListIds; }
    inline bool AllowListIdsHasBeenSet() const { return m_allowListIdsHasBeenSet; }
    template<typename AllowListIdsT = Aws::Vector<Aws::String>>
    void SetAllowListIds(AllowListIdsT&& value) { m_allowListIdsHasBeenSet = true; m_allowListIds = std::forward<AllowListIdsT>(value); }
    template<typename AllowListIdsT = Aws::Vector<Aws::String>>
    CreateClassificationJobRequest& WithAllowListIds(AllowListIdsT&& value) { SetAllowListIds(std::forward<AllowListIdsT>(value)); return *this;}
    template<typename AllowListIdsT = Aws::String>
    CreateClassificationJobRequest& AddAllowListIds(AllowListIdsT&& value) { m_allowListIdsHasBeenSet = true; m_allowListIds.emplace_back(std::forward<AllowListIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive token that you provide to ensure the idempotency of
     * the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateClassificationJobRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of unique identifiers, one for each custom data identifier for the
     * job to use when it analyzes data. To use only managed data identifiers, don't
     * specify a value for this property and specify a value other than NONE for the
     * managedDataIdentifierSelector property.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCustomDataIdentifierIds() const { return m_customDataIdentifierIds; }
    inline bool CustomDataIdentifierIdsHasBeenSet() const { return m_customDataIdentifierIdsHasBeenSet; }
    template<typename CustomDataIdentifierIdsT = Aws::Vector<Aws::String>>
    void SetCustomDataIdentifierIds(CustomDataIdentifierIdsT&& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds = std::forward<CustomDataIdentifierIdsT>(value); }
    template<typename CustomDataIdentifierIdsT = Aws::Vector<Aws::String>>
    CreateClassificationJobRequest& WithCustomDataIdentifierIds(CustomDataIdentifierIdsT&& value) { SetCustomDataIdentifierIds(std::forward<CustomDataIdentifierIdsT>(value)); return *this;}
    template<typename CustomDataIdentifierIdsT = Aws::String>
    CreateClassificationJobRequest& AddCustomDataIdentifierIds(CustomDataIdentifierIdsT&& value) { m_customDataIdentifierIdsHasBeenSet = true; m_customDataIdentifierIds.emplace_back(std::forward<CustomDataIdentifierIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A custom description of the job. The description can contain as many as 200
     * characters.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateClassificationJobRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>For a recurring job, specifies whether to analyze all existing, eligible
     * objects immediately after the job is created (true). To analyze only those
     * objects that are created or changed after you create the job and before the
     * job's first scheduled run, set this value to false.</p> <p>If you configure the
     * job to run only once, don't specify a value for this property.</p>
     */
    inline bool GetInitialRun() const { return m_initialRun; }
    inline bool InitialRunHasBeenSet() const { return m_initialRunHasBeenSet; }
    inline void SetInitialRun(bool value) { m_initialRunHasBeenSet = true; m_initialRun = value; }
    inline CreateClassificationJobRequest& WithInitialRun(bool value) { SetInitialRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule for running the job. Valid values are:</p> <ul><li><p>ONE_TIME -
     * Run the job only once. If you specify this value, don't specify a value for the
     * scheduleFrequency property.</p></li> <li><p>SCHEDULED - Run the job on a daily,
     * weekly, or monthly basis. If you specify this value, use the scheduleFrequency
     * property to specify the recurrence pattern for the job.</p></li></ul>
     */
    inline JobType GetJobType() const { return m_jobType; }
    inline bool JobTypeHasBeenSet() const { return m_jobTypeHasBeenSet; }
    inline void SetJobType(JobType value) { m_jobTypeHasBeenSet = true; m_jobType = value; }
    inline CreateClassificationJobRequest& WithJobType(JobType value) { SetJobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of unique identifiers, one for each managed data identifier for the
     * job to include (use) or exclude (not use) when it analyzes data. Inclusion or
     * exclusion depends on the managed data identifier selection type that you specify
     * for the job (managedDataIdentifierSelector).</p> <p>To retrieve a list of valid
     * values for this property, use the ListManagedDataIdentifiers operation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetManagedDataIdentifierIds() const { return m_managedDataIdentifierIds; }
    inline bool ManagedDataIdentifierIdsHasBeenSet() const { return m_managedDataIdentifierIdsHasBeenSet; }
    template<typename ManagedDataIdentifierIdsT = Aws::Vector<Aws::String>>
    void SetManagedDataIdentifierIds(ManagedDataIdentifierIdsT&& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds = std::forward<ManagedDataIdentifierIdsT>(value); }
    template<typename ManagedDataIdentifierIdsT = Aws::Vector<Aws::String>>
    CreateClassificationJobRequest& WithManagedDataIdentifierIds(ManagedDataIdentifierIdsT&& value) { SetManagedDataIdentifierIds(std::forward<ManagedDataIdentifierIdsT>(value)); return *this;}
    template<typename ManagedDataIdentifierIdsT = Aws::String>
    CreateClassificationJobRequest& AddManagedDataIdentifierIds(ManagedDataIdentifierIdsT&& value) { m_managedDataIdentifierIdsHasBeenSet = true; m_managedDataIdentifierIds.emplace_back(std::forward<ManagedDataIdentifierIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The selection type to apply when determining which managed data identifiers
     * the job uses to analyze data. Valid values are:</p> <ul><li><p>ALL - Use all
     * managed data identifiers. If you specify this value, don't specify any values
     * for the managedDataIdentifierIds property.</p></li> <li><p>EXCLUDE - Use all
     * managed data identifiers except the ones specified by the
     * managedDataIdentifierIds property.</p></li> <li><p>INCLUDE - Use only the
     * managed data identifiers specified by the managedDataIdentifierIds
     * property.</p></li> <li><p>NONE - Don't use any managed data identifiers. If you
     * specify this value, specify at least one value for the customDataIdentifierIds
     * property and don't specify any values for the managedDataIdentifierIds
     * property.</p></li> <li><p>RECOMMENDED (default) - Use the recommended set of
     * managed data identifiers. If you specify this value, don't specify any values
     * for the managedDataIdentifierIds property.</p></li></ul> <p>If you don't specify
     * a value for this property, the job uses the recommended set of managed data
     * identifiers.</p> <p>If the job is a recurring job and you specify ALL or
     * EXCLUDE, each job run automatically uses new managed data identifiers that are
     * released. If you don't specify a value for this property or you specify
     * RECOMMENDED for a recurring job, each job run automatically uses all the managed
     * data identifiers that are in the recommended set when the run starts.</p> <p>To
     * learn about individual managed data identifiers or determine which ones are in
     * the recommended set, see <a
     * href="https://docs.aws.amazon.com/macie/latest/user/managed-data-identifiers.html">Using
     * managed data identifiers</a> or <a
     * href="https://docs.aws.amazon.com/macie/latest/user/discovery-jobs-mdis-recommended.html">Recommended
     * managed data identifiers</a> in the <i>Amazon Macie User Guide</i>.</p>
     */
    inline ManagedDataIdentifierSelector GetManagedDataIdentifierSelector() const { return m_managedDataIdentifierSelector; }
    inline bool ManagedDataIdentifierSelectorHasBeenSet() const { return m_managedDataIdentifierSelectorHasBeenSet; }
    inline void SetManagedDataIdentifierSelector(ManagedDataIdentifierSelector value) { m_managedDataIdentifierSelectorHasBeenSet = true; m_managedDataIdentifierSelector = value; }
    inline CreateClassificationJobRequest& WithManagedDataIdentifierSelector(ManagedDataIdentifierSelector value) { SetManagedDataIdentifierSelector(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A custom name for the job. The name can contain as many as 500
     * characters.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateClassificationJobRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The S3 buckets that contain the objects to analyze, and the scope of that
     * analysis.</p>
     */
    inline const S3JobDefinition& GetS3JobDefinition() const { return m_s3JobDefinition; }
    inline bool S3JobDefinitionHasBeenSet() const { return m_s3JobDefinitionHasBeenSet; }
    template<typename S3JobDefinitionT = S3JobDefinition>
    void SetS3JobDefinition(S3JobDefinitionT&& value) { m_s3JobDefinitionHasBeenSet = true; m_s3JobDefinition = std::forward<S3JobDefinitionT>(value); }
    template<typename S3JobDefinitionT = S3JobDefinition>
    CreateClassificationJobRequest& WithS3JobDefinition(S3JobDefinitionT&& value) { SetS3JobDefinition(std::forward<S3JobDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sampling depth, as a percentage, for the job to apply when processing
     * objects. This value determines the percentage of eligible objects that the job
     * analyzes. If this value is less than 100, Amazon Macie selects the objects to
     * analyze at random, up to the specified percentage, and analyzes all the data in
     * those objects.</p>
     */
    inline int GetSamplingPercentage() const { return m_samplingPercentage; }
    inline bool SamplingPercentageHasBeenSet() const { return m_samplingPercentageHasBeenSet; }
    inline void SetSamplingPercentage(int value) { m_samplingPercentageHasBeenSet = true; m_samplingPercentage = value; }
    inline CreateClassificationJobRequest& WithSamplingPercentage(int value) { SetSamplingPercentage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurrence pattern for running the job. To run the job only once, don't
     * specify a value for this property and set the value for the jobType property to
     * ONE_TIME.</p>
     */
    inline const JobScheduleFrequency& GetScheduleFrequency() const { return m_scheduleFrequency; }
    inline bool ScheduleFrequencyHasBeenSet() const { return m_scheduleFrequencyHasBeenSet; }
    template<typename ScheduleFrequencyT = JobScheduleFrequency>
    void SetScheduleFrequency(ScheduleFrequencyT&& value) { m_scheduleFrequencyHasBeenSet = true; m_scheduleFrequency = std::forward<ScheduleFrequencyT>(value); }
    template<typename ScheduleFrequencyT = JobScheduleFrequency>
    CreateClassificationJobRequest& WithScheduleFrequency(ScheduleFrequencyT&& value) { SetScheduleFrequency(std::forward<ScheduleFrequencyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of key-value pairs that specifies the tags to associate with the
     * job.</p> <p>A job can have a maximum of 50 tags. Each tag consists of a tag key
     * and an associated tag value. The maximum length of a tag key is 128 characters.
     * The maximum length of a tag value is 256 characters.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateClassificationJobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateClassificationJobRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::Vector<Aws::String> m_allowListIds;
    bool m_allowListIdsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<Aws::String> m_customDataIdentifierIds;
    bool m_customDataIdentifierIdsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_initialRun{false};
    bool m_initialRunHasBeenSet = false;

    JobType m_jobType{JobType::NOT_SET};
    bool m_jobTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_managedDataIdentifierIds;
    bool m_managedDataIdentifierIdsHasBeenSet = false;

    ManagedDataIdentifierSelector m_managedDataIdentifierSelector{ManagedDataIdentifierSelector::NOT_SET};
    bool m_managedDataIdentifierSelectorHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    S3JobDefinition m_s3JobDefinition;
    bool m_s3JobDefinitionHasBeenSet = false;

    int m_samplingPercentage{0};
    bool m_samplingPercentageHasBeenSet = false;

    JobScheduleFrequency m_scheduleFrequency;
    bool m_scheduleFrequencyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
