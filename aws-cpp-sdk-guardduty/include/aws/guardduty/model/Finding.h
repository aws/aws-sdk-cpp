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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/Resource.h>
#include <aws/guardduty/model/Service.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * Representation of a abnormal or suspicious activity.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Finding">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API Finding
  {
  public:
    Finding();
    Finding(Aws::Utils::Json::JsonView jsonValue);
    Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * AWS account ID where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * AWS account ID where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * AWS account ID where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * AWS account ID where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * AWS account ID where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * AWS account ID where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline Finding& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * AWS account ID where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline Finding& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * AWS account ID where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline Finding& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * The ARN of a finding described by the action.
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * The ARN of a finding described by the action.
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * The ARN of a finding described by the action.
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * The ARN of a finding described by the action.
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * The ARN of a finding described by the action.
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * The ARN of a finding described by the action.
     */
    inline Finding& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * The ARN of a finding described by the action.
     */
    inline Finding& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * The ARN of a finding described by the action.
     */
    inline Finding& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * The confidence level of a finding.
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * The confidence level of a finding.
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * The confidence level of a finding.
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * The confidence level of a finding.
     */
    inline Finding& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * The time stamp at which a finding was generated.
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * The time stamp at which a finding was generated.
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * The time stamp at which a finding was generated.
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * The time stamp at which a finding was generated.
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * The time stamp at which a finding was generated.
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * The time stamp at which a finding was generated.
     */
    inline Finding& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * The time stamp at which a finding was generated.
     */
    inline Finding& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * The time stamp at which a finding was generated.
     */
    inline Finding& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


    /**
     * The description of a finding.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * The description of a finding.
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * The description of a finding.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * The description of a finding.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * The description of a finding.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * The description of a finding.
     */
    inline Finding& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * The description of a finding.
     */
    inline Finding& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * The description of a finding.
     */
    inline Finding& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The identifier that corresponds to a finding described by the action.
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * The identifier that corresponds to a finding described by the action.
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * The identifier that corresponds to a finding described by the action.
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * The identifier that corresponds to a finding described by the action.
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * The identifier that corresponds to a finding described by the action.
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * The identifier that corresponds to a finding described by the action.
     */
    inline Finding& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * The identifier that corresponds to a finding described by the action.
     */
    inline Finding& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * The identifier that corresponds to a finding described by the action.
     */
    inline Finding& WithId(const char* value) { SetId(value); return *this;}


    /**
     * The AWS resource partition.
     */
    inline const Aws::String& GetPartition() const{ return m_partition; }

    /**
     * The AWS resource partition.
     */
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }

    /**
     * The AWS resource partition.
     */
    inline void SetPartition(const Aws::String& value) { m_partitionHasBeenSet = true; m_partition = value; }

    /**
     * The AWS resource partition.
     */
    inline void SetPartition(Aws::String&& value) { m_partitionHasBeenSet = true; m_partition = std::move(value); }

    /**
     * The AWS resource partition.
     */
    inline void SetPartition(const char* value) { m_partitionHasBeenSet = true; m_partition.assign(value); }

    /**
     * The AWS resource partition.
     */
    inline Finding& WithPartition(const Aws::String& value) { SetPartition(value); return *this;}

    /**
     * The AWS resource partition.
     */
    inline Finding& WithPartition(Aws::String&& value) { SetPartition(std::move(value)); return *this;}

    /**
     * The AWS resource partition.
     */
    inline Finding& WithPartition(const char* value) { SetPartition(value); return *this;}


    /**
     * The AWS region where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * The AWS region where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * The AWS region where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * The AWS region where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * The AWS region where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * The AWS region where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline Finding& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * The AWS region where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline Finding& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * The AWS region where the activity occurred that prompted GuardDuty to generate a
     * finding.
     */
    inline Finding& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * The AWS resource associated with the activity that prompted GuardDuty to
     * generate a finding.
     */
    inline const Resource& GetResource() const{ return m_resource; }

    /**
     * The AWS resource associated with the activity that prompted GuardDuty to
     * generate a finding.
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * The AWS resource associated with the activity that prompted GuardDuty to
     * generate a finding.
     */
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * The AWS resource associated with the activity that prompted GuardDuty to
     * generate a finding.
     */
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * The AWS resource associated with the activity that prompted GuardDuty to
     * generate a finding.
     */
    inline Finding& WithResource(const Resource& value) { SetResource(value); return *this;}

    /**
     * The AWS resource associated with the activity that prompted GuardDuty to
     * generate a finding.
     */
    inline Finding& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}


    /**
     * Findings' schema version.
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * Findings' schema version.
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * Findings' schema version.
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * Findings' schema version.
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * Findings' schema version.
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * Findings' schema version.
     */
    inline Finding& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * Findings' schema version.
     */
    inline Finding& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * Findings' schema version.
     */
    inline Finding& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * Additional information assigned to the generated finding by GuardDuty.
     */
    inline const Service& GetService() const{ return m_service; }

    /**
     * Additional information assigned to the generated finding by GuardDuty.
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * Additional information assigned to the generated finding by GuardDuty.
     */
    inline void SetService(const Service& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * Additional information assigned to the generated finding by GuardDuty.
     */
    inline void SetService(Service&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * Additional information assigned to the generated finding by GuardDuty.
     */
    inline Finding& WithService(const Service& value) { SetService(value); return *this;}

    /**
     * Additional information assigned to the generated finding by GuardDuty.
     */
    inline Finding& WithService(Service&& value) { SetService(std::move(value)); return *this;}


    /**
     * The severity of a finding.
     */
    inline double GetSeverity() const{ return m_severity; }

    /**
     * The severity of a finding.
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * The severity of a finding.
     */
    inline void SetSeverity(double value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * The severity of a finding.
     */
    inline Finding& WithSeverity(double value) { SetSeverity(value); return *this;}


    /**
     * The title of a finding.
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * The title of a finding.
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * The title of a finding.
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * The title of a finding.
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * The title of a finding.
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * The title of a finding.
     */
    inline Finding& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * The title of a finding.
     */
    inline Finding& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * The title of a finding.
     */
    inline Finding& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * The type of a finding described by the action.
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * The type of a finding described by the action.
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * The type of a finding described by the action.
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * The type of a finding described by the action.
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * The type of a finding described by the action.
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * The type of a finding described by the action.
     */
    inline Finding& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * The type of a finding described by the action.
     */
    inline Finding& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * The type of a finding described by the action.
     */
    inline Finding& WithType(const char* value) { SetType(value); return *this;}


    /**
     * The time stamp at which a finding was last updated.
     */
    inline const Aws::String& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * The time stamp at which a finding was last updated.
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * The time stamp at which a finding was last updated.
     */
    inline void SetUpdatedAt(const Aws::String& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * The time stamp at which a finding was last updated.
     */
    inline void SetUpdatedAt(Aws::String&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * The time stamp at which a finding was last updated.
     */
    inline void SetUpdatedAt(const char* value) { m_updatedAtHasBeenSet = true; m_updatedAt.assign(value); }

    /**
     * The time stamp at which a finding was last updated.
     */
    inline Finding& WithUpdatedAt(const Aws::String& value) { SetUpdatedAt(value); return *this;}

    /**
     * The time stamp at which a finding was last updated.
     */
    inline Finding& WithUpdatedAt(Aws::String&& value) { SetUpdatedAt(std::move(value)); return *this;}

    /**
     * The time stamp at which a finding was last updated.
     */
    inline Finding& WithUpdatedAt(const char* value) { SetUpdatedAt(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    double m_confidence;
    bool m_confidenceHasBeenSet;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_partition;
    bool m_partitionHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Resource m_resource;
    bool m_resourceHasBeenSet;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet;

    Service m_service;
    bool m_serviceHasBeenSet;

    double m_severity;
    bool m_severityHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_type;
    bool m_typeHasBeenSet;

    Aws::String m_updatedAt;
    bool m_updatedAtHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
