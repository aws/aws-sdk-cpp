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


    /**
     * <p>The unique identifier for the Amazon Web Services account that the finding
     * applies to. This is typically the account that owns the affected resource.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that the finding
     * applies to. This is typically the account that owns the affected resource.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that the finding
     * applies to. This is typically the account that owns the affected resource.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that the finding
     * applies to. This is typically the account that owns the affected resource.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account that the finding
     * applies to. This is typically the account that owns the affected resource.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account that the finding
     * applies to. This is typically the account that owns the affected resource.</p>
     */
    inline Finding& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that the finding
     * applies to. This is typically the account that owns the affected resource.</p>
     */
    inline Finding& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that the finding
     * applies to. This is typically the account that owns the affected resource.</p>
     */
    inline Finding& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Specifies whether the finding is archived (suppressed).</p>
     */
    inline bool GetArchived() const{ return m_archived; }

    /**
     * <p>Specifies whether the finding is archived (suppressed).</p>
     */
    inline bool ArchivedHasBeenSet() const { return m_archivedHasBeenSet; }

    /**
     * <p>Specifies whether the finding is archived (suppressed).</p>
     */
    inline void SetArchived(bool value) { m_archivedHasBeenSet = true; m_archived = value; }

    /**
     * <p>Specifies whether the finding is archived (suppressed).</p>
     */
    inline Finding& WithArchived(bool value) { SetArchived(value); return *this;}


    /**
     * <p>The category of the finding. Possible values are: CLASSIFICATION, for a
     * sensitive data finding; and, POLICY, for a policy finding.</p>
     */
    inline const FindingCategory& GetCategory() const{ return m_category; }

    /**
     * <p>The category of the finding. Possible values are: CLASSIFICATION, for a
     * sensitive data finding; and, POLICY, for a policy finding.</p>
     */
    inline bool CategoryHasBeenSet() const { return m_categoryHasBeenSet; }

    /**
     * <p>The category of the finding. Possible values are: CLASSIFICATION, for a
     * sensitive data finding; and, POLICY, for a policy finding.</p>
     */
    inline void SetCategory(const FindingCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>The category of the finding. Possible values are: CLASSIFICATION, for a
     * sensitive data finding; and, POLICY, for a policy finding.</p>
     */
    inline void SetCategory(FindingCategory&& value) { m_categoryHasBeenSet = true; m_category = std::move(value); }

    /**
     * <p>The category of the finding. Possible values are: CLASSIFICATION, for a
     * sensitive data finding; and, POLICY, for a policy finding.</p>
     */
    inline Finding& WithCategory(const FindingCategory& value) { SetCategory(value); return *this;}

    /**
     * <p>The category of the finding. Possible values are: CLASSIFICATION, for a
     * sensitive data finding; and, POLICY, for a policy finding.</p>
     */
    inline Finding& WithCategory(FindingCategory&& value) { SetCategory(std::move(value)); return *this;}


    /**
     * <p>The details of a sensitive data finding. This value is null for a policy
     * finding.</p>
     */
    inline const ClassificationDetails& GetClassificationDetails() const{ return m_classificationDetails; }

    /**
     * <p>The details of a sensitive data finding. This value is null for a policy
     * finding.</p>
     */
    inline bool ClassificationDetailsHasBeenSet() const { return m_classificationDetailsHasBeenSet; }

    /**
     * <p>The details of a sensitive data finding. This value is null for a policy
     * finding.</p>
     */
    inline void SetClassificationDetails(const ClassificationDetails& value) { m_classificationDetailsHasBeenSet = true; m_classificationDetails = value; }

    /**
     * <p>The details of a sensitive data finding. This value is null for a policy
     * finding.</p>
     */
    inline void SetClassificationDetails(ClassificationDetails&& value) { m_classificationDetailsHasBeenSet = true; m_classificationDetails = std::move(value); }

    /**
     * <p>The details of a sensitive data finding. This value is null for a policy
     * finding.</p>
     */
    inline Finding& WithClassificationDetails(const ClassificationDetails& value) { SetClassificationDetails(value); return *this;}

    /**
     * <p>The details of a sensitive data finding. This value is null for a policy
     * finding.</p>
     */
    inline Finding& WithClassificationDetails(ClassificationDetails&& value) { SetClassificationDetails(std::move(value)); return *this;}


    /**
     * <p>The total number of occurrences of the finding. For sensitive data findings,
     * this value is always 1. All sensitive data findings are considered unique.</p>
     */
    inline long long GetCount() const{ return m_count; }

    /**
     * <p>The total number of occurrences of the finding. For sensitive data findings,
     * this value is always 1. All sensitive data findings are considered unique.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The total number of occurrences of the finding. For sensitive data findings,
     * this value is always 1. All sensitive data findings are considered unique.</p>
     */
    inline void SetCount(long long value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The total number of occurrences of the finding. For sensitive data findings,
     * this value is always 1. All sensitive data findings are considered unique.</p>
     */
    inline Finding& WithCount(long long value) { SetCount(value); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * created the finding.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * created the finding.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * created the finding.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * created the finding.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * created the finding.</p>
     */
    inline Finding& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * created the finding.</p>
     */
    inline Finding& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The description of the finding.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the finding.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the finding.</p>
     */
    inline Finding& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the finding.</p>
     */
    inline Finding& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the finding.</p>
     */
    inline Finding& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier for the finding. This is a random string that Amazon
     * Macie generates and assigns to a finding when it creates the finding.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the finding. This is a random string that Amazon
     * Macie generates and assigns to a finding when it creates the finding.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier for the finding. This is a random string that Amazon
     * Macie generates and assigns to a finding when it creates the finding.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier for the finding. This is a random string that Amazon
     * Macie generates and assigns to a finding when it creates the finding.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier for the finding. This is a random string that Amazon
     * Macie generates and assigns to a finding when it creates the finding.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier for the finding. This is a random string that Amazon
     * Macie generates and assigns to a finding when it creates the finding.</p>
     */
    inline Finding& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the finding. This is a random string that Amazon
     * Macie generates and assigns to a finding when it creates the finding.</p>
     */
    inline Finding& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the finding. This is a random string that Amazon
     * Macie generates and assigns to a finding when it creates the finding.</p>
     */
    inline Finding& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Web Services partition that Amazon Macie created the finding
     * in.</p>
     */
    inline const Aws::String& GetPartition() const{ return m_partition; }

    /**
     * <p>The Amazon Web Services partition that Amazon Macie created the finding
     * in.</p>
     */
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }

    /**
     * <p>The Amazon Web Services partition that Amazon Macie created the finding
     * in.</p>
     */
    inline void SetPartition(const Aws::String& value) { m_partitionHasBeenSet = true; m_partition = value; }

    /**
     * <p>The Amazon Web Services partition that Amazon Macie created the finding
     * in.</p>
     */
    inline void SetPartition(Aws::String&& value) { m_partitionHasBeenSet = true; m_partition = std::move(value); }

    /**
     * <p>The Amazon Web Services partition that Amazon Macie created the finding
     * in.</p>
     */
    inline void SetPartition(const char* value) { m_partitionHasBeenSet = true; m_partition.assign(value); }

    /**
     * <p>The Amazon Web Services partition that Amazon Macie created the finding
     * in.</p>
     */
    inline Finding& WithPartition(const Aws::String& value) { SetPartition(value); return *this;}

    /**
     * <p>The Amazon Web Services partition that Amazon Macie created the finding
     * in.</p>
     */
    inline Finding& WithPartition(Aws::String&& value) { SetPartition(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services partition that Amazon Macie created the finding
     * in.</p>
     */
    inline Finding& WithPartition(const char* value) { SetPartition(value); return *this;}


    /**
     * <p>The details of a policy finding. This value is null for a sensitive data
     * finding.</p>
     */
    inline const PolicyDetails& GetPolicyDetails() const{ return m_policyDetails; }

    /**
     * <p>The details of a policy finding. This value is null for a sensitive data
     * finding.</p>
     */
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }

    /**
     * <p>The details of a policy finding. This value is null for a sensitive data
     * finding.</p>
     */
    inline void SetPolicyDetails(const PolicyDetails& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = value; }

    /**
     * <p>The details of a policy finding. This value is null for a sensitive data
     * finding.</p>
     */
    inline void SetPolicyDetails(PolicyDetails&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::move(value); }

    /**
     * <p>The details of a policy finding. This value is null for a sensitive data
     * finding.</p>
     */
    inline Finding& WithPolicyDetails(const PolicyDetails& value) { SetPolicyDetails(value); return *this;}

    /**
     * <p>The details of a policy finding. This value is null for a sensitive data
     * finding.</p>
     */
    inline Finding& WithPolicyDetails(PolicyDetails&& value) { SetPolicyDetails(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services Region that Amazon Macie created the finding in.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Amazon Web Services Region that Amazon Macie created the finding in.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Amazon Web Services Region that Amazon Macie created the finding in.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Amazon Web Services Region that Amazon Macie created the finding in.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Amazon Web Services Region that Amazon Macie created the finding in.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Amazon Web Services Region that Amazon Macie created the finding in.</p>
     */
    inline Finding& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Amazon Web Services Region that Amazon Macie created the finding in.</p>
     */
    inline Finding& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services Region that Amazon Macie created the finding in.</p>
     */
    inline Finding& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The resources that the finding applies to.</p>
     */
    inline const ResourcesAffected& GetResourcesAffected() const{ return m_resourcesAffected; }

    /**
     * <p>The resources that the finding applies to.</p>
     */
    inline bool ResourcesAffectedHasBeenSet() const { return m_resourcesAffectedHasBeenSet; }

    /**
     * <p>The resources that the finding applies to.</p>
     */
    inline void SetResourcesAffected(const ResourcesAffected& value) { m_resourcesAffectedHasBeenSet = true; m_resourcesAffected = value; }

    /**
     * <p>The resources that the finding applies to.</p>
     */
    inline void SetResourcesAffected(ResourcesAffected&& value) { m_resourcesAffectedHasBeenSet = true; m_resourcesAffected = std::move(value); }

    /**
     * <p>The resources that the finding applies to.</p>
     */
    inline Finding& WithResourcesAffected(const ResourcesAffected& value) { SetResourcesAffected(value); return *this;}

    /**
     * <p>The resources that the finding applies to.</p>
     */
    inline Finding& WithResourcesAffected(ResourcesAffected&& value) { SetResourcesAffected(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the finding is a sample finding. A <i>sample finding</i> is
     * a finding that uses example data to demonstrate what a finding might
     * contain.</p>
     */
    inline bool GetSample() const{ return m_sample; }

    /**
     * <p>Specifies whether the finding is a sample finding. A <i>sample finding</i> is
     * a finding that uses example data to demonstrate what a finding might
     * contain.</p>
     */
    inline bool SampleHasBeenSet() const { return m_sampleHasBeenSet; }

    /**
     * <p>Specifies whether the finding is a sample finding. A <i>sample finding</i> is
     * a finding that uses example data to demonstrate what a finding might
     * contain.</p>
     */
    inline void SetSample(bool value) { m_sampleHasBeenSet = true; m_sample = value; }

    /**
     * <p>Specifies whether the finding is a sample finding. A <i>sample finding</i> is
     * a finding that uses example data to demonstrate what a finding might
     * contain.</p>
     */
    inline Finding& WithSample(bool value) { SetSample(value); return *this;}


    /**
     * <p>The version of the schema that was used to define the data structures in the
     * finding.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The version of the schema that was used to define the data structures in the
     * finding.</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The version of the schema that was used to define the data structures in the
     * finding.</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The version of the schema that was used to define the data structures in the
     * finding.</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * <p>The version of the schema that was used to define the data structures in the
     * finding.</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The version of the schema that was used to define the data structures in the
     * finding.</p>
     */
    inline Finding& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The version of the schema that was used to define the data structures in the
     * finding.</p>
     */
    inline Finding& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the schema that was used to define the data structures in the
     * finding.</p>
     */
    inline Finding& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The severity level and score for the finding.</p>
     */
    inline const Severity& GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity level and score for the finding.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity level and score for the finding.</p>
     */
    inline void SetSeverity(const Severity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity level and score for the finding.</p>
     */
    inline void SetSeverity(Severity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The severity level and score for the finding.</p>
     */
    inline Finding& WithSeverity(const Severity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The severity level and score for the finding.</p>
     */
    inline Finding& WithSeverity(Severity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>The brief description of the finding.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The brief description of the finding.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The brief description of the finding.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The brief description of the finding.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The brief description of the finding.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The brief description of the finding.</p>
     */
    inline Finding& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The brief description of the finding.</p>
     */
    inline Finding& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The brief description of the finding.</p>
     */
    inline Finding& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The type of the finding.</p>
     */
    inline const FindingType& GetType() const{ return m_type; }

    /**
     * <p>The type of the finding.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the finding.</p>
     */
    inline void SetType(const FindingType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the finding.</p>
     */
    inline void SetType(FindingType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the finding.</p>
     */
    inline Finding& WithType(const FindingType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the finding.</p>
     */
    inline Finding& WithType(FindingType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * last updated the finding. For sensitive data findings, this value is the same as
     * the value for the createdAt property. All sensitive data findings are considered
     * new.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * last updated the finding. For sensitive data findings, this value is the same as
     * the value for the createdAt property. All sensitive data findings are considered
     * new.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * last updated the finding. For sensitive data findings, this value is the same as
     * the value for the createdAt property. All sensitive data findings are considered
     * new.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * last updated the finding. For sensitive data findings, this value is the same as
     * the value for the createdAt property. All sensitive data findings are considered
     * new.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * last updated the finding. For sensitive data findings, this value is the same as
     * the value for the createdAt property. All sensitive data findings are considered
     * new.</p>
     */
    inline Finding& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time, in UTC and extended ISO 8601 format, when Amazon Macie
     * last updated the finding. For sensitive data findings, this value is the same as
     * the value for the createdAt property. All sensitive data findings are considered
     * new.</p>
     */
    inline Finding& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

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
