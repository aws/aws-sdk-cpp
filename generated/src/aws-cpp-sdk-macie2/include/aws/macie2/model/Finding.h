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
    AWS_MACIE2_API Finding();
    AWS_MACIE2_API Finding(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the Amazon Web Services account that the finding
     * applies to. This is typically the account that owns the affected resource.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline Finding& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline Finding& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline Finding& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the finding is archived (suppressed).</p>
     */
    inline bool GetArchived() const{ return m_archived; }
    inline bool ArchivedHasBeenSet() const { return m_archivedHasBeenSet; }
    inline void SetArchived(bool value) { m_archivedHasBeenSet = true; m_archived = value; }
    inline Finding& WithArchived(bool value) { SetArchived(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the finding. Possible values are: CLASSIFICATION, for a
     * sensitive data finding; and, POLICY, for a policy finding.</p>
     */
    inline const FindingCategory& GetCategory() const{ return m_category; }
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }
    inline void SetCategory(const FindingCategory& value) { m_categoryHasBeenSet = true; m_category = value; }
    inline void SetCategory(FindingCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }
    inline Finding& WithCategory(const FindingCategory& value) { SetCategory(value); return *this;}
    inline Finding& WithCategory(FindingCategory&& value) { SetCategory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a sensitive data finding. This value is null for a policy
     * finding.</p>
     */
    inline const ClassificationDetails& GetClassificationDetails() const{ return m_classificationDetails; }
    inline bool ClassificationDetailsHasBeenSet() const { return m_classificationDetailsHasBeenSet; }
    inline void SetClassificationDetails(const ClassificationDetails& value) { m_classificationDetailsHasBeenSet = true; m_classificationDetails = value; }
    inline void SetClassificationDetails(ClassificationDetails&& value) { m_classificationDetailsHasBeenSet = true; m_classificationDetails = std::move(value); }
    inline Finding& WithClassificationDetails(const ClassificationDetails& value) { SetClassificationDetails(value); return *this;}
    inline Finding& WithClassificationDetails(ClassificationDetails&& value) { SetClassificationDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The total number of occurrences of the finding. For sensitive data findings,
     * this value is always 1. All sensitive data findings are considered unique.</p>
     */
    inline long long GetCount() const{ return m_count; }
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }
    inline Finding& WithCount(long long value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * created the finding.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Finding& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Finding& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the finding.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Finding& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Finding& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Finding& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the finding. This is a random string that Amazon
     * Macie generates and assigns to a finding when it creates the finding.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Finding& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Finding& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Finding& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services partition that Amazon Macie created the finding
     * in.</p>
     */
    inline const Aws::String& GetPartition() const{ return m_partition; }
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }
    inline void SetPartition(const Aws::String& value) { m_partitionHasBeenSet = true; m_partition = value; }
    inline void SetPartition(Aws::String&& value) { m_partitionHasBeenSet = true; m_partition = std::move(value); }
    inline void SetPartition(const char* value) { m_partitionHasBeenSet = true; m_partition.assign(value); }
    inline Finding& WithPartition(const Aws::String& value) { SetPartition(value); return *this;}
    inline Finding& WithPartition(Aws::String&& value) { SetPartition(std::move(value)); return *this;}
    inline Finding& WithPartition(const char* value) { SetPartition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of a policy finding. This value is null for a sensitive data
     * finding.</p>
     */
    inline const PolicyDetails& GetPolicyDetails() const{ return m_policyDetails; }
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }
    inline void SetPolicyDetails(const PolicyDetails& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = value; }
    inline void SetPolicyDetails(PolicyDetails&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::move(value); }
    inline Finding& WithPolicyDetails(const PolicyDetails& value) { SetPolicyDetails(value); return *this;}
    inline Finding& WithPolicyDetails(PolicyDetails&& value) { SetPolicyDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region that Amazon Macie created the finding in.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }
    inline Finding& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}
    inline Finding& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}
    inline Finding& WithRegion(const char* value) { SetRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resources that the finding applies to.</p>
     */
    inline const ResourcesAffected& GetResourcesAffected() const{ return m_resourcesAffected; }
    inline bool ResourcesAffectedHasBeenSet() const { return m_resourcesAffectedHasBeenSet; }
    inline void SetResourcesAffected(const ResourcesAffected& value) { m_resourcesAffectedHasBeenSet = true; m_resourcesAffected = value; }
    inline void SetResourcesAffected(ResourcesAffected&& value) { m_resourcesAffectedHasBeenSet = true; m_resourcesAffected = std::move(value); }
    inline Finding& WithResourcesAffected(const ResourcesAffected& value) { SetResourcesAffected(value); return *this;}
    inline Finding& WithResourcesAffected(ResourcesAffected&& value) { SetResourcesAffected(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the finding is a sample finding. A <i>sample finding</i> is
     * a finding that uses example data to demonstrate what a finding might
     * contain.</p>
     */
    inline bool GetSample() const{ return m_sample; }
    inline bool SampleHasBeenSet() const { return m_sampleHasBeenSet; }
    inline void SetSample(bool value) { m_sampleHasBeenSet = true; m_sample = value; }
    inline Finding& WithSample(bool value) { SetSample(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the schema that was used to define the data structures in the
     * finding.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }
    inline Finding& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}
    inline Finding& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}
    inline Finding& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity level and score for the finding.</p>
     */
    inline const Severity& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const Severity& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(Severity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline Finding& WithSeverity(const Severity& value) { SetSeverity(value); return *this;}
    inline Finding& WithSeverity(Severity&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The brief description of the finding.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline Finding& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline Finding& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline Finding& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the finding.</p>
     */
    inline const FindingType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const FindingType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(FindingType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline Finding& WithType(const FindingType& value) { SetType(value); return *this;}
    inline Finding& WithType(FindingType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * last updated the finding. For sensitive data findings, this value is the same as
     * the value for the createdAt property. All sensitive data findings are considered
     * new.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Finding& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Finding& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    bool m_archived;
    bool m_archivedHasBeenSet = false;

    FindingCategory m_category;
    bool m_categoryHasBeenSet = false;

    ClassificationDetails m_classificationDetails;
    bool m_classificationDetailsHasBeenSet = false;

    long long m_count;
    bool m_countHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
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

    bool m_sample;
    bool m_sampleHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Severity m_severity;
    bool m_severityHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    FindingType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
