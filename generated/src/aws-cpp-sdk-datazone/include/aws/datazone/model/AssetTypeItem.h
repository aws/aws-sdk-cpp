/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/datazone/model/FormEntryOutput.h>
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
   * <p>The details of the asset type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/AssetTypeItem">AWS
   * API Reference</a></p>
   */
  class AssetTypeItem
  {
  public:
    AWS_DATAZONE_API AssetTypeItem();
    AWS_DATAZONE_API AssetTypeItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API AssetTypeItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of when the asset type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the asset type was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when the asset type was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when the asset type was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the asset type was created.</p>
     */
    inline AssetTypeItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the asset type was created.</p>
     */
    inline AssetTypeItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created the asset type.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created the asset type.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon DataZone user who created the asset type.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created the asset type.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created the asset type.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created the asset type.</p>
     */
    inline AssetTypeItem& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created the asset type.</p>
     */
    inline AssetTypeItem& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created the asset type.</p>
     */
    inline AssetTypeItem& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The description of the asset type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the asset type.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the asset type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the asset type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the asset type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the asset type.</p>
     */
    inline AssetTypeItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the asset type.</p>
     */
    inline AssetTypeItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the asset type.</p>
     */
    inline AssetTypeItem& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type exists.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type exists.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type exists.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type exists.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type exists.</p>
     */
    inline AssetTypeItem& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type exists.</p>
     */
    inline AssetTypeItem& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type exists.</p>
     */
    inline AssetTypeItem& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The forms included in the details of the asset type.</p>
     */
    inline const Aws::Map<Aws::String, FormEntryOutput>& GetFormsOutput() const{ return m_formsOutput; }

    /**
     * <p>The forms included in the details of the asset type.</p>
     */
    inline bool FormsOutputHasBeenSet() const { return m_formsOutputHasBeenSet; }

    /**
     * <p>The forms included in the details of the asset type.</p>
     */
    inline void SetFormsOutput(const Aws::Map<Aws::String, FormEntryOutput>& value) { m_formsOutputHasBeenSet = true; m_formsOutput = value; }

    /**
     * <p>The forms included in the details of the asset type.</p>
     */
    inline void SetFormsOutput(Aws::Map<Aws::String, FormEntryOutput>&& value) { m_formsOutputHasBeenSet = true; m_formsOutput = std::move(value); }

    /**
     * <p>The forms included in the details of the asset type.</p>
     */
    inline AssetTypeItem& WithFormsOutput(const Aws::Map<Aws::String, FormEntryOutput>& value) { SetFormsOutput(value); return *this;}

    /**
     * <p>The forms included in the details of the asset type.</p>
     */
    inline AssetTypeItem& WithFormsOutput(Aws::Map<Aws::String, FormEntryOutput>&& value) { SetFormsOutput(std::move(value)); return *this;}

    /**
     * <p>The forms included in the details of the asset type.</p>
     */
    inline AssetTypeItem& AddFormsOutput(const Aws::String& key, const FormEntryOutput& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace(key, value); return *this; }

    /**
     * <p>The forms included in the details of the asset type.</p>
     */
    inline AssetTypeItem& AddFormsOutput(Aws::String&& key, const FormEntryOutput& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace(std::move(key), value); return *this; }

    /**
     * <p>The forms included in the details of the asset type.</p>
     */
    inline AssetTypeItem& AddFormsOutput(const Aws::String& key, FormEntryOutput&& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The forms included in the details of the asset type.</p>
     */
    inline AssetTypeItem& AddFormsOutput(Aws::String&& key, FormEntryOutput&& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The forms included in the details of the asset type.</p>
     */
    inline AssetTypeItem& AddFormsOutput(const char* key, FormEntryOutput&& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The forms included in the details of the asset type.</p>
     */
    inline AssetTypeItem& AddFormsOutput(const char* key, const FormEntryOutput& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace(key, value); return *this; }


    /**
     * <p>The name of the asset type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the asset type.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the asset type.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the asset type.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the asset type.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the asset type.</p>
     */
    inline AssetTypeItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the asset type.</p>
     */
    inline AssetTypeItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the asset type.</p>
     */
    inline AssetTypeItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type was
     * originally created.</p>
     */
    inline const Aws::String& GetOriginDomainId() const{ return m_originDomainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type was
     * originally created.</p>
     */
    inline bool OriginDomainIdHasBeenSet() const { return m_originDomainIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type was
     * originally created.</p>
     */
    inline void SetOriginDomainId(const Aws::String& value) { m_originDomainIdHasBeenSet = true; m_originDomainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type was
     * originally created.</p>
     */
    inline void SetOriginDomainId(Aws::String&& value) { m_originDomainIdHasBeenSet = true; m_originDomainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type was
     * originally created.</p>
     */
    inline void SetOriginDomainId(const char* value) { m_originDomainIdHasBeenSet = true; m_originDomainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type was
     * originally created.</p>
     */
    inline AssetTypeItem& WithOriginDomainId(const Aws::String& value) { SetOriginDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type was
     * originally created.</p>
     */
    inline AssetTypeItem& WithOriginDomainId(Aws::String&& value) { SetOriginDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain where the asset type was
     * originally created.</p>
     */
    inline AssetTypeItem& WithOriginDomainId(const char* value) { SetOriginDomainId(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone project where the asset type
     * exists.</p>
     */
    inline const Aws::String& GetOriginProjectId() const{ return m_originProjectId; }

    /**
     * <p>The identifier of the Amazon DataZone project where the asset type
     * exists.</p>
     */
    inline bool OriginProjectIdHasBeenSet() const { return m_originProjectIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone project where the asset type
     * exists.</p>
     */
    inline void SetOriginProjectId(const Aws::String& value) { m_originProjectIdHasBeenSet = true; m_originProjectId = value; }

    /**
     * <p>The identifier of the Amazon DataZone project where the asset type
     * exists.</p>
     */
    inline void SetOriginProjectId(Aws::String&& value) { m_originProjectIdHasBeenSet = true; m_originProjectId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone project where the asset type
     * exists.</p>
     */
    inline void SetOriginProjectId(const char* value) { m_originProjectIdHasBeenSet = true; m_originProjectId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone project where the asset type
     * exists.</p>
     */
    inline AssetTypeItem& WithOriginProjectId(const Aws::String& value) { SetOriginProjectId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone project where the asset type
     * exists.</p>
     */
    inline AssetTypeItem& WithOriginProjectId(Aws::String&& value) { SetOriginProjectId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone project where the asset type
     * exists.</p>
     */
    inline AssetTypeItem& WithOriginProjectId(const char* value) { SetOriginProjectId(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone project that owns the asset type.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }

    /**
     * <p>The identifier of the Amazon DataZone project that owns the asset type.</p>
     */
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone project that owns the asset type.</p>
     */
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = value; }

    /**
     * <p>The identifier of the Amazon DataZone project that owns the asset type.</p>
     */
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone project that owns the asset type.</p>
     */
    inline void SetOwningProjectId(const char* value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone project that owns the asset type.</p>
     */
    inline AssetTypeItem& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone project that owns the asset type.</p>
     */
    inline AssetTypeItem& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone project that owns the asset type.</p>
     */
    inline AssetTypeItem& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}


    /**
     * <p>The revision of the asset type.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }

    /**
     * <p>The revision of the asset type.</p>
     */
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }

    /**
     * <p>The revision of the asset type.</p>
     */
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }

    /**
     * <p>The revision of the asset type.</p>
     */
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }

    /**
     * <p>The revision of the asset type.</p>
     */
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }

    /**
     * <p>The revision of the asset type.</p>
     */
    inline AssetTypeItem& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}

    /**
     * <p>The revision of the asset type.</p>
     */
    inline AssetTypeItem& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of the asset type.</p>
     */
    inline AssetTypeItem& WithRevision(const char* value) { SetRevision(value); return *this;}


    /**
     * <p>The timestamp of when the asset type was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the asset type was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the asset type was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the asset type was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the asset type was updated.</p>
     */
    inline AssetTypeItem& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the asset type was updated.</p>
     */
    inline AssetTypeItem& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who updated the asset type.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The Amazon DataZone user who updated the asset type.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The Amazon DataZone user who updated the asset type.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The Amazon DataZone user who updated the asset type.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who updated the asset type.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who updated the asset type.</p>
     */
    inline AssetTypeItem& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the asset type.</p>
     */
    inline AssetTypeItem& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the asset type.</p>
     */
    inline AssetTypeItem& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Map<Aws::String, FormEntryOutput> m_formsOutput;
    bool m_formsOutputHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_originDomainId;
    bool m_originDomainIdHasBeenSet = false;

    Aws::String m_originProjectId;
    bool m_originProjectIdHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
