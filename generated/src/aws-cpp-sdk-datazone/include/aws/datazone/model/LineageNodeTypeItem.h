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
   * <p>The details of a data lineage node type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/LineageNodeTypeItem">AWS
   * API Reference</a></p>
   */
  class LineageNodeTypeItem
  {
  public:
    AWS_DATAZONE_API LineageNodeTypeItem();
    AWS_DATAZONE_API LineageNodeTypeItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API LineageNodeTypeItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp at which the data lineage node type was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline LineageNodeTypeItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline LineageNodeTypeItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the data lineage node type.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline LineageNodeTypeItem& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline LineageNodeTypeItem& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline LineageNodeTypeItem& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data lineage node type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline LineageNodeTypeItem& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline LineageNodeTypeItem& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline LineageNodeTypeItem& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where the data lineage node type lives.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline LineageNodeTypeItem& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline LineageNodeTypeItem& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline LineageNodeTypeItem& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The forms output of the data lineage node type.</p>
     */
    inline const Aws::Map<Aws::String, FormEntryOutput>& GetFormsOutput() const{ return m_formsOutput; }
    inline bool FormsOutputHasBeenSet() const { return m_formsOutputHasBeenSet; }
    inline void SetFormsOutput(const Aws::Map<Aws::String, FormEntryOutput>& value) { m_formsOutputHasBeenSet = true; m_formsOutput = value; }
    inline void SetFormsOutput(Aws::Map<Aws::String, FormEntryOutput>&& value) { m_formsOutputHasBeenSet = true; m_formsOutput = std::move(value); }
    inline LineageNodeTypeItem& WithFormsOutput(const Aws::Map<Aws::String, FormEntryOutput>& value) { SetFormsOutput(value); return *this;}
    inline LineageNodeTypeItem& WithFormsOutput(Aws::Map<Aws::String, FormEntryOutput>&& value) { SetFormsOutput(std::move(value)); return *this;}
    inline LineageNodeTypeItem& AddFormsOutput(const Aws::String& key, const FormEntryOutput& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace(key, value); return *this; }
    inline LineageNodeTypeItem& AddFormsOutput(Aws::String&& key, const FormEntryOutput& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace(std::move(key), value); return *this; }
    inline LineageNodeTypeItem& AddFormsOutput(const Aws::String& key, FormEntryOutput&& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace(key, std::move(value)); return *this; }
    inline LineageNodeTypeItem& AddFormsOutput(Aws::String&& key, FormEntryOutput&& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace(std::move(key), std::move(value)); return *this; }
    inline LineageNodeTypeItem& AddFormsOutput(const char* key, FormEntryOutput&& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace(key, std::move(value)); return *this; }
    inline LineageNodeTypeItem& AddFormsOutput(const char* key, const FormEntryOutput& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the data lineage node type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline LineageNodeTypeItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline LineageNodeTypeItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline LineageNodeTypeItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the data lineage node type.</p>
     */
    inline const Aws::String& GetRevision() const{ return m_revision; }
    inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
    inline void SetRevision(const Aws::String& value) { m_revisionHasBeenSet = true; m_revision = value; }
    inline void SetRevision(Aws::String&& value) { m_revisionHasBeenSet = true; m_revision = std::move(value); }
    inline void SetRevision(const char* value) { m_revisionHasBeenSet = true; m_revision.assign(value); }
    inline LineageNodeTypeItem& WithRevision(const Aws::String& value) { SetRevision(value); return *this;}
    inline LineageNodeTypeItem& WithRevision(Aws::String&& value) { SetRevision(std::move(value)); return *this;}
    inline LineageNodeTypeItem& WithRevision(const char* value) { SetRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the data lineage node type was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline LineageNodeTypeItem& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline LineageNodeTypeItem& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who updated the data lineage node type.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline LineageNodeTypeItem& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline LineageNodeTypeItem& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline LineageNodeTypeItem& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}
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
