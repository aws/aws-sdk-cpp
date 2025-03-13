/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/FindingCategory.h>
#include <aws/macie2/model/ClassificationDetails.h>
#include <aws/core/utils/DateTime.h>
#include <aws/macie2/model/PolicyDetails.h>
#include <aws/macie2/model/ResourcesAffected.h>
#include <aws/macie2/model/Severity.h>
#include <aws/macie2/model/FindingType.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides the details of a finding.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/Finding">AWS API
   * Reference</a></p>
   */
  class Finding
  {
  public:
    AWS_MACIE2_API Finding() = default;
    AWS_MACIE2_API Finding(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Amazon Web Services account that the finding
     * applies to. This is typically the account that owns the affected resource.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Finding& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the finding is archived (suppressed).</p>
     */
    inline bool GetArchived() const { return m_archived; }
    inline bool ArchivedHasBeenSet() const { return m_archivedHasBeenSet; }
    inline void SetArchived(bool value) { m_archivedHasBeenSet = true; m_archived = value; }
    inline Finding& WithArchived(bool value) { SetArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the finding. Possible values are: CLASSIFICATION, for a
     * sensitive data finding; and, POLICY, for a policy finding.</p>
     */
    inline FindingCategory GetCategory() const { return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(FindingCategory value) { m_categoryHasBeenSet = true; m_category = value; }
    inline Finding& WithCategory(FindingCategory value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a sensitive data finding. This value is null for a policy
     * finding.</p>
     */
    inline const ClassificationDetails& GetClassificationDetails() const { return m_classificationDetails; }
    inline bool ClassificationDetailsHasBeenSet() const { return m_classificationDetailsHasBeenSet; }
    template<typename ClassificationDetailsT = ClassificationDetails>
    void SetClassificationDetails(ClassificationDetailsT&& value) { m_classificationDetailsHasBeenSet = true; m_classificationDetails = std::forward<ClassificationDetailsT>(value); }
    template<typename ClassificationDetailsT = ClassificationDetails>
    Finding& WithClassificationDetails(ClassificationDetailsT&& value) { SetClassificationDetails(std::forward<ClassificationDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of occurrences of the finding. For sensitive data findings,
     * this value is always 1. All sensitive data findings are considered unique.</p>
     */
    inline long long GetCount() const { return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline Finding& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * created the finding.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Finding& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the finding.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Finding& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the finding. This is a random string that Amazon
     * Macie generates and assigns to a finding when it creates the finding.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Finding& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services partition that Amazon Macie created the finding
     * in.</p>
     */
    inline const Aws::String& GetPartition() const { return m_partition; }
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }
    template<typename PartitionT = Aws::String>
    void SetPartition(PartitionT&& value) { m_partitionHasBeenSet = true; m_partition = std::forward<PartitionT>(value); }
    template<typename PartitionT = Aws::String>
    Finding& WithPartition(PartitionT&& value) { SetPartition(std::forward<PartitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a policy finding. This value is null for a sensitive data
     * finding.</p>
     */
    inline const PolicyDetails& GetPolicyDetails() const { return m_policyDetails; }
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }
    template<typename PolicyDetailsT = PolicyDetails>
    void SetPolicyDetails(PolicyDetailsT&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::forward<PolicyDetailsT>(value); }
    template<typename PolicyDetailsT = PolicyDetails>
    Finding& WithPolicyDetails(PolicyDetailsT&& value) { SetPolicyDetails(std::forward<PolicyDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that Amazon Macie created the finding in.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Finding& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources that the finding applies to.</p>
     */
    inline const ResourcesAffected& GetResourcesAffected() const { return m_resourcesAffected; }
    inline bool ResourcesAffectedHasBeenSet() const { return m_resourcesAffectedHasBeenSet; }
    template<typename ResourcesAffectedT = ResourcesAffected>
    void SetResourcesAffected(ResourcesAffectedT&& value) { m_resourcesAffectedHasBeenSet = true; m_resourcesAffected = std::forward<ResourcesAffectedT>(value); }
    template<typename ResourcesAffectedT = ResourcesAffected>
    Finding& WithResourcesAffected(ResourcesAffectedT&& value) { SetResourcesAffected(std::forward<ResourcesAffectedT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the finding is a sample finding. A <i>sample finding</i> is
     * a finding that uses example data to demonstrate what a finding might
     * contain.</p>
     */
    inline bool GetSample() const { return m_sample; }
    inline bool SampleHasBeenSet() const { return m_sampleHasBeenSet; }
    inline void SetSample(bool value) { m_sampleHasBeenSet = true; m_sample = value; }
    inline Finding& WithSample(bool value) { SetSample(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the schema that was used to define the data structures in the
     * finding.</p>
     */
    inline const Aws::String& GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    template<typename SchemaVersionT = Aws::String>
    void SetSchemaVersion(SchemaVersionT&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::forward<SchemaVersionT>(value); }
    template<typename SchemaVersionT = Aws::String>
    Finding& WithSchemaVersion(SchemaVersionT&& value) { SetSchemaVersion(std::forward<SchemaVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity level and score for the finding.</p>
     */
    inline const Severity& GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    template<typename SeverityT = Severity>
    void SetSeverity(SeverityT&& value) { m_severityHasBeenSet = true; m_severity = std::forward<SeverityT>(value); }
    template<typename SeverityT = Severity>
    Finding& WithSeverity(SeverityT&& value) { SetSeverity(std::forward<SeverityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The brief description of the finding.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Finding& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the finding.</p>
     */
    inline FindingType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(FindingType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Finding& WithType(FindingType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * last updated the finding. For sensitive data findings, this value is the same as
     * the value for the createdAt property. All sensitive data findings are considered
     * new.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Finding& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    bool m_archived{false};
    bool m_archivedHasBeenSet = false;

    FindingCategory m_category{FindingCategory::NOT_SET};
    bool m_categoryHasBeenSet = false;

    ClassificationDetails m_classificationDetails;
    bool m_classificationDetailsHasBeenSet = false;

    long long m_count{0};
    bool m_countHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_partition;
    bool m_partitionHasBeenSet = false;

    PolicyDetails m_policyDetails;
    bool m_policyDetailsHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    ResourcesAffected m_resourcesAffected;
    bool m_resourcesAffectedHasBeenSet = false;

    bool m_sample{false};
    bool m_sampleHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Severity m_severity;
    bool m_severityHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    FindingType m_type{FindingType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
