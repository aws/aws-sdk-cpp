/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/MetadataGenerationRunStatus.h>
#include <aws/datazone/model/MetadataGenerationRunTarget.h>
#include <aws/datazone/model/MetadataGenerationRunType.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The metadata generation run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/MetadataGenerationRunItem">AWS
   * API Reference</a></p>
   */
  class MetadataGenerationRunItem
  {
  public:
    AWS_DATAZONE_API MetadataGenerationRunItem();
    AWS_DATAZONE_API MetadataGenerationRunItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API MetadataGenerationRunItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp at which the metadata generation run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp at which the metadata generation run was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp at which the metadata generation run was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp at which the metadata generation run was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp at which the metadata generation run was created.</p>
     */
    inline MetadataGenerationRunItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp at which the metadata generation run was created.</p>
     */
    inline MetadataGenerationRunItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The user who created the metadata generation run.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The user who created the metadata generation run.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The user who created the metadata generation run.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The user who created the metadata generation run.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The user who created the metadata generation run.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The user who created the metadata generation run.</p>
     */
    inline MetadataGenerationRunItem& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The user who created the metadata generation run.</p>
     */
    inline MetadataGenerationRunItem& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The user who created the metadata generation run.</p>
     */
    inline MetadataGenerationRunItem& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * created.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * created.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * created.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * created.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * created.</p>
     */
    inline MetadataGenerationRunItem& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * created.</p>
     */
    inline MetadataGenerationRunItem& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the metadata generation run was
     * created.</p>
     */
    inline MetadataGenerationRunItem& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline MetadataGenerationRunItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline MetadataGenerationRunItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the metadata generation run.</p>
     */
    inline MetadataGenerationRunItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * was ran.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }

    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * was ran.</p>
     */
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }

    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * was ran.</p>
     */
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = value; }

    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * was ran.</p>
     */
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::move(value); }

    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * was ran.</p>
     */
    inline void SetOwningProjectId(const char* value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId.assign(value); }

    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * was ran.</p>
     */
    inline MetadataGenerationRunItem& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}

    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * was ran.</p>
     */
    inline MetadataGenerationRunItem& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project that owns the asset for which the metadata generation
     * was ran.</p>
     */
    inline MetadataGenerationRunItem& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}


    /**
     * <p>The status of the metadata generation run.</p>
     */
    inline const MetadataGenerationRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the metadata generation run.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the metadata generation run.</p>
     */
    inline void SetStatus(const MetadataGenerationRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the metadata generation run.</p>
     */
    inline void SetStatus(MetadataGenerationRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the metadata generation run.</p>
     */
    inline MetadataGenerationRunItem& WithStatus(const MetadataGenerationRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the metadata generation run.</p>
     */
    inline MetadataGenerationRunItem& WithStatus(MetadataGenerationRunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The asset for which metadata was generated.</p>
     */
    inline const MetadataGenerationRunTarget& GetTarget() const{ return m_target; }

    /**
     * <p>The asset for which metadata was generated.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The asset for which metadata was generated.</p>
     */
    inline void SetTarget(const MetadataGenerationRunTarget& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The asset for which metadata was generated.</p>
     */
    inline void SetTarget(MetadataGenerationRunTarget&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The asset for which metadata was generated.</p>
     */
    inline MetadataGenerationRunItem& WithTarget(const MetadataGenerationRunTarget& value) { SetTarget(value); return *this;}

    /**
     * <p>The asset for which metadata was generated.</p>
     */
    inline MetadataGenerationRunItem& WithTarget(MetadataGenerationRunTarget&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline const MetadataGenerationRunType& GetType() const{ return m_type; }

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline void SetType(const MetadataGenerationRunType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline void SetType(MetadataGenerationRunType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline MetadataGenerationRunItem& WithType(const MetadataGenerationRunType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the metadata generation run.</p>
     */
    inline MetadataGenerationRunItem& WithType(MetadataGenerationRunType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;

    MetadataGenerationRunStatus m_status;
    bool m_statusHasBeenSet = false;

    MetadataGenerationRunTarget m_target;
    bool m_targetHasBeenSet = false;

    MetadataGenerationRunType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
