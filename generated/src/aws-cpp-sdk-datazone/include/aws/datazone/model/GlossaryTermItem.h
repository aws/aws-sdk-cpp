/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GlossaryTermStatus.h>
#include <aws/datazone/model/TermRelations.h>
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
   * <p>The details of a business glossary term.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/GlossaryTermItem">AWS
   * API Reference</a></p>
   */
  class GlossaryTermItem
  {
  public:
    AWS_DATAZONE_API GlossaryTermItem();
    AWS_DATAZONE_API GlossaryTermItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlossaryTermItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when a business glossary term was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline GlossaryTermItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GlossaryTermItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the business glossary.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline GlossaryTermItem& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline GlossaryTermItem& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline GlossaryTermItem& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which the business glossary
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline GlossaryTermItem& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GlossaryTermItem& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GlossaryTermItem& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the business glossary to which the term belongs.</p>
     */
    inline const Aws::String& GetGlossaryId() const{ return m_glossaryId; }
    inline bool GlossaryIdHasBeenSet() const { return m_glossaryIdHasBeenSet; }
    inline void SetGlossaryId(const Aws::String& value) { m_glossaryIdHasBeenSet = true; m_glossaryId = value; }
    inline void SetGlossaryId(Aws::String&& value) { m_glossaryIdHasBeenSet = true; m_glossaryId = std::move(value); }
    inline void SetGlossaryId(const char* value) { m_glossaryIdHasBeenSet = true; m_glossaryId.assign(value); }
    inline GlossaryTermItem& WithGlossaryId(const Aws::String& value) { SetGlossaryId(value); return *this;}
    inline GlossaryTermItem& WithGlossaryId(Aws::String&& value) { SetGlossaryId(std::move(value)); return *this;}
    inline GlossaryTermItem& WithGlossaryId(const char* value) { SetGlossaryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the business glossary term.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline GlossaryTermItem& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GlossaryTermItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GlossaryTermItem& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long description of the business glossary term.</p>
     */
    inline const Aws::String& GetLongDescription() const{ return m_longDescription; }
    inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }
    inline void SetLongDescription(const Aws::String& value) { m_longDescriptionHasBeenSet = true; m_longDescription = value; }
    inline void SetLongDescription(Aws::String&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::move(value); }
    inline void SetLongDescription(const char* value) { m_longDescriptionHasBeenSet = true; m_longDescription.assign(value); }
    inline GlossaryTermItem& WithLongDescription(const Aws::String& value) { SetLongDescription(value); return *this;}
    inline GlossaryTermItem& WithLongDescription(Aws::String&& value) { SetLongDescription(std::move(value)); return *this;}
    inline GlossaryTermItem& WithLongDescription(const char* value) { SetLongDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the business glossary term.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline GlossaryTermItem& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GlossaryTermItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GlossaryTermItem& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short description of the business glossary term.</p>
     */
    inline const Aws::String& GetShortDescription() const{ return m_shortDescription; }
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
    inline void SetShortDescription(const Aws::String& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = value; }
    inline void SetShortDescription(Aws::String&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::move(value); }
    inline void SetShortDescription(const char* value) { m_shortDescriptionHasBeenSet = true; m_shortDescription.assign(value); }
    inline GlossaryTermItem& WithShortDescription(const Aws::String& value) { SetShortDescription(value); return *this;}
    inline GlossaryTermItem& WithShortDescription(Aws::String&& value) { SetShortDescription(std::move(value)); return *this;}
    inline GlossaryTermItem& WithShortDescription(const char* value) { SetShortDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the business glossary term.</p>
     */
    inline const GlossaryTermStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const GlossaryTermStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(GlossaryTermStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline GlossaryTermItem& WithStatus(const GlossaryTermStatus& value) { SetStatus(value); return *this;}
    inline GlossaryTermItem& WithStatus(GlossaryTermStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relations of the business glossary term.</p>
     */
    inline const TermRelations& GetTermRelations() const{ return m_termRelations; }
    inline bool TermRelationsHasBeenSet() const { return m_termRelationsHasBeenSet; }
    inline void SetTermRelations(const TermRelations& value) { m_termRelationsHasBeenSet = true; m_termRelations = value; }
    inline void SetTermRelations(TermRelations&& value) { m_termRelationsHasBeenSet = true; m_termRelations = std::move(value); }
    inline GlossaryTermItem& WithTermRelations(const TermRelations& value) { SetTermRelations(value); return *this;}
    inline GlossaryTermItem& WithTermRelations(TermRelations&& value) { SetTermRelations(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when a business glossary term was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline GlossaryTermItem& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GlossaryTermItem& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the business glossary term.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }
    inline GlossaryTermItem& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}
    inline GlossaryTermItem& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}
    inline GlossaryTermItem& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_glossaryId;
    bool m_glossaryIdHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_longDescription;
    bool m_longDescriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_shortDescription;
    bool m_shortDescriptionHasBeenSet = false;

    GlossaryTermStatus m_status;
    bool m_statusHasBeenSet = false;

    TermRelations m_termRelations;
    bool m_termRelationsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
