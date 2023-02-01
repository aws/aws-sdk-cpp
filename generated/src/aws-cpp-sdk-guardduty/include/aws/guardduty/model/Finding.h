/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Contains information about the finding, which is generated when abnormal or
   * suspicious activity is detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Finding">AWS
   * API Reference</a></p>
   */
  class Finding
  {
  public:
    AWS_GUARDDUTY_API Finding();
    AWS_GUARDDUTY_API Finding(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the account in which the finding was generated.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The ID of the account in which the finding was generated.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The ID of the account in which the finding was generated.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The ID of the account in which the finding was generated.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The ID of the account in which the finding was generated.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The ID of the account in which the finding was generated.</p>
     */
    inline Finding& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The ID of the account in which the finding was generated.</p>
     */
    inline Finding& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the account in which the finding was generated.</p>
     */
    inline Finding& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The ARN of the finding.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the finding.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the finding.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the finding.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the finding.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the finding.</p>
     */
    inline Finding& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the finding.</p>
     */
    inline Finding& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the finding.</p>
     */
    inline Finding& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The confidence score for the finding.</p>
     */
    inline double GetConfidence() const{ return m_confidence; }

    /**
     * <p>The confidence score for the finding.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>The confidence score for the finding.</p>
     */
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>The confidence score for the finding.</p>
     */
    inline Finding& WithConfidence(double value) { SetConfidence(value); return *this;}


    /**
     * <p>The time and date when the finding was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time and date when the finding was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time and date when the finding was created.</p>
     */
    inline void SetCreatedAt(const Aws::String& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time and date when the finding was created.</p>
     */
    inline void SetCreatedAt(Aws::String&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time and date when the finding was created.</p>
     */
    inline void SetCreatedAt(const char* value) { m_createdAtHasBeenSet = true; m_createdAt.assign(value); }

    /**
     * <p>The time and date when the finding was created.</p>
     */
    inline Finding& WithCreatedAt(const Aws::String& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time and date when the finding was created.</p>
     */
    inline Finding& WithCreatedAt(Aws::String&& value) { SetCreatedAt(std::move(value)); return *this;}

    /**
     * <p>The time and date when the finding was created.</p>
     */
    inline Finding& WithCreatedAt(const char* value) { SetCreatedAt(value); return *this;}


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
     * <p>The ID of the finding.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the finding.</p>
     */
    inline Finding& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the finding.</p>
     */
    inline Finding& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the finding.</p>
     */
    inline Finding& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The partition associated with the finding.</p>
     */
    inline const Aws::String& GetPartition() const{ return m_partition; }

    /**
     * <p>The partition associated with the finding.</p>
     */
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }

    /**
     * <p>The partition associated with the finding.</p>
     */
    inline void SetPartition(const Aws::String& value) { m_partitionHasBeenSet = true; m_partition = value; }

    /**
     * <p>The partition associated with the finding.</p>
     */
    inline void SetPartition(Aws::String&& value) { m_partitionHasBeenSet = true; m_partition = std::move(value); }

    /**
     * <p>The partition associated with the finding.</p>
     */
    inline void SetPartition(const char* value) { m_partitionHasBeenSet = true; m_partition.assign(value); }

    /**
     * <p>The partition associated with the finding.</p>
     */
    inline Finding& WithPartition(const Aws::String& value) { SetPartition(value); return *this;}

    /**
     * <p>The partition associated with the finding.</p>
     */
    inline Finding& WithPartition(Aws::String&& value) { SetPartition(std::move(value)); return *this;}

    /**
     * <p>The partition associated with the finding.</p>
     */
    inline Finding& WithPartition(const char* value) { SetPartition(value); return *this;}


    /**
     * <p>The Region where the finding was generated.</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The Region where the finding was generated.</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The Region where the finding was generated.</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The Region where the finding was generated.</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The Region where the finding was generated.</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The Region where the finding was generated.</p>
     */
    inline Finding& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The Region where the finding was generated.</p>
     */
    inline Finding& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The Region where the finding was generated.</p>
     */
    inline Finding& WithRegion(const char* value) { SetRegion(value); return *this;}


    
    inline const Resource& GetResource() const{ return m_resource; }

    
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }

    
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    
    inline Finding& WithResource(const Resource& value) { SetResource(value); return *this;}

    
    inline Finding& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}


    /**
     * <p>The version of the schema used for the finding.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The version of the schema used for the finding.</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The version of the schema used for the finding.</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The version of the schema used for the finding.</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * <p>The version of the schema used for the finding.</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The version of the schema used for the finding.</p>
     */
    inline Finding& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The version of the schema used for the finding.</p>
     */
    inline Finding& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the schema used for the finding.</p>
     */
    inline Finding& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    
    inline const Service& GetService() const{ return m_service; }

    
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    
    inline void SetService(const Service& value) { m_serviceHasBeenSet = true; m_service = value; }

    
    inline void SetService(Service&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    
    inline Finding& WithService(const Service& value) { SetService(value); return *this;}

    
    inline Finding& WithService(Service&& value) { SetService(std::move(value)); return *this;}


    /**
     * <p>The severity of the finding.</p>
     */
    inline double GetSeverity() const{ return m_severity; }

    /**
     * <p>The severity of the finding.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The severity of the finding.</p>
     */
    inline void SetSeverity(double value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The severity of the finding.</p>
     */
    inline Finding& WithSeverity(double value) { SetSeverity(value); return *this;}


    /**
     * <p>The title of the finding.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The title of the finding.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The title of the finding.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The title of the finding.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The title of the finding.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The title of the finding.</p>
     */
    inline Finding& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The title of the finding.</p>
     */
    inline Finding& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The title of the finding.</p>
     */
    inline Finding& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The type of finding.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of finding.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of finding.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of finding.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of finding.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of finding.</p>
     */
    inline Finding& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of finding.</p>
     */
    inline Finding& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of finding.</p>
     */
    inline Finding& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The time and date when the finding was last updated.</p>
     */
    inline const Aws::String& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time and date when the finding was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time and date when the finding was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::String& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time and date when the finding was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::String&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time and date when the finding was last updated.</p>
     */
    inline void SetUpdatedAt(const char* value) { m_updatedAtHasBeenSet = true; m_updatedAt.assign(value); }

    /**
     * <p>The time and date when the finding was last updated.</p>
     */
    inline Finding& WithUpdatedAt(const Aws::String& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time and date when the finding was last updated.</p>
     */
    inline Finding& WithUpdatedAt(Aws::String&& value) { SetUpdatedAt(std::move(value)); return *this;}

    /**
     * <p>The time and date when the finding was last updated.</p>
     */
    inline Finding& WithUpdatedAt(const char* value) { SetUpdatedAt(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    double m_confidence;
    bool m_confidenceHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_partition;
    bool m_partitionHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Service m_service;
    bool m_serviceHasBeenSet = false;

    double m_severity;
    bool m_severityHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
