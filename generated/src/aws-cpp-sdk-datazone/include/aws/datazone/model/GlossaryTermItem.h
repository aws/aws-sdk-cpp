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


    /**
     * <p>The timestamp of when a business glossary term was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when a business glossary term was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when a business glossary term was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when a business glossary term was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when a business glossary term was created.</p>
     */
    inline GlossaryTermItem& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when a business glossary term was created.</p>
     */
    inline GlossaryTermItem& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who created the business glossary.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The Amazon DataZone user who created the business glossary.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The Amazon DataZone user who created the business glossary.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The Amazon DataZone user who created the business glossary.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who created the business glossary.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who created the business glossary.</p>
     */
    inline GlossaryTermItem& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who created the business glossary.</p>
     */
    inline GlossaryTermItem& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who created the business glossary.</p>
     */
    inline GlossaryTermItem& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which the business glossary
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the business glossary
     * exists.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the business glossary
     * exists.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the business glossary
     * exists.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the business glossary
     * exists.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which the business glossary
     * exists.</p>
     */
    inline GlossaryTermItem& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the business glossary
     * exists.</p>
     */
    inline GlossaryTermItem& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which the business glossary
     * exists.</p>
     */
    inline GlossaryTermItem& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The identifier of the business glossary to which the term belongs.</p>
     */
    inline const Aws::String& GetGlossaryId() const{ return m_glossaryId; }

    /**
     * <p>The identifier of the business glossary to which the term belongs.</p>
     */
    inline bool GlossaryIdHasBeenSet() const { return m_glossaryIdHasBeenSet; }

    /**
     * <p>The identifier of the business glossary to which the term belongs.</p>
     */
    inline void SetGlossaryId(const Aws::String& value) { m_glossaryIdHasBeenSet = true; m_glossaryId = value; }

    /**
     * <p>The identifier of the business glossary to which the term belongs.</p>
     */
    inline void SetGlossaryId(Aws::String&& value) { m_glossaryIdHasBeenSet = true; m_glossaryId = std::move(value); }

    /**
     * <p>The identifier of the business glossary to which the term belongs.</p>
     */
    inline void SetGlossaryId(const char* value) { m_glossaryIdHasBeenSet = true; m_glossaryId.assign(value); }

    /**
     * <p>The identifier of the business glossary to which the term belongs.</p>
     */
    inline GlossaryTermItem& WithGlossaryId(const Aws::String& value) { SetGlossaryId(value); return *this;}

    /**
     * <p>The identifier of the business glossary to which the term belongs.</p>
     */
    inline GlossaryTermItem& WithGlossaryId(Aws::String&& value) { SetGlossaryId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the business glossary to which the term belongs.</p>
     */
    inline GlossaryTermItem& WithGlossaryId(const char* value) { SetGlossaryId(value); return *this;}


    /**
     * <p>The identifier of the business glossary term.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the business glossary term.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the business glossary term.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the business glossary term.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the business glossary term.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The long description of the business glossary term.</p>
     */
    inline const Aws::String& GetLongDescription() const{ return m_longDescription; }

    /**
     * <p>The long description of the business glossary term.</p>
     */
    inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }

    /**
     * <p>The long description of the business glossary term.</p>
     */
    inline void SetLongDescription(const Aws::String& value) { m_longDescriptionHasBeenSet = true; m_longDescription = value; }

    /**
     * <p>The long description of the business glossary term.</p>
     */
    inline void SetLongDescription(Aws::String&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::move(value); }

    /**
     * <p>The long description of the business glossary term.</p>
     */
    inline void SetLongDescription(const char* value) { m_longDescriptionHasBeenSet = true; m_longDescription.assign(value); }

    /**
     * <p>The long description of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithLongDescription(const Aws::String& value) { SetLongDescription(value); return *this;}

    /**
     * <p>The long description of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithLongDescription(Aws::String&& value) { SetLongDescription(std::move(value)); return *this;}

    /**
     * <p>The long description of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithLongDescription(const char* value) { SetLongDescription(value); return *this;}


    /**
     * <p>The name of the business glossary term.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the business glossary term.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the business glossary term.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the business glossary term.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the business glossary term.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The short description of the business glossary term.</p>
     */
    inline const Aws::String& GetShortDescription() const{ return m_shortDescription; }

    /**
     * <p>The short description of the business glossary term.</p>
     */
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }

    /**
     * <p>The short description of the business glossary term.</p>
     */
    inline void SetShortDescription(const Aws::String& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = value; }

    /**
     * <p>The short description of the business glossary term.</p>
     */
    inline void SetShortDescription(Aws::String&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::move(value); }

    /**
     * <p>The short description of the business glossary term.</p>
     */
    inline void SetShortDescription(const char* value) { m_shortDescriptionHasBeenSet = true; m_shortDescription.assign(value); }

    /**
     * <p>The short description of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithShortDescription(const Aws::String& value) { SetShortDescription(value); return *this;}

    /**
     * <p>The short description of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithShortDescription(Aws::String&& value) { SetShortDescription(std::move(value)); return *this;}

    /**
     * <p>The short description of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithShortDescription(const char* value) { SetShortDescription(value); return *this;}


    /**
     * <p>The status of the business glossary term.</p>
     */
    inline const GlossaryTermStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the business glossary term.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the business glossary term.</p>
     */
    inline void SetStatus(const GlossaryTermStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the business glossary term.</p>
     */
    inline void SetStatus(GlossaryTermStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithStatus(const GlossaryTermStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithStatus(GlossaryTermStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The relations of the business glossary term.</p>
     */
    inline const TermRelations& GetTermRelations() const{ return m_termRelations; }

    /**
     * <p>The relations of the business glossary term.</p>
     */
    inline bool TermRelationsHasBeenSet() const { return m_termRelationsHasBeenSet; }

    /**
     * <p>The relations of the business glossary term.</p>
     */
    inline void SetTermRelations(const TermRelations& value) { m_termRelationsHasBeenSet = true; m_termRelations = value; }

    /**
     * <p>The relations of the business glossary term.</p>
     */
    inline void SetTermRelations(TermRelations&& value) { m_termRelationsHasBeenSet = true; m_termRelations = std::move(value); }

    /**
     * <p>The relations of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithTermRelations(const TermRelations& value) { SetTermRelations(value); return *this;}

    /**
     * <p>The relations of the business glossary term.</p>
     */
    inline GlossaryTermItem& WithTermRelations(TermRelations&& value) { SetTermRelations(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when a business glossary term was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when a business glossary term was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when a business glossary term was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when a business glossary term was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when a business glossary term was updated.</p>
     */
    inline GlossaryTermItem& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when a business glossary term was updated.</p>
     */
    inline GlossaryTermItem& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The Amazon DataZone user who updated the business glossary term.</p>
     */
    inline const Aws::String& GetUpdatedBy() const{ return m_updatedBy; }

    /**
     * <p>The Amazon DataZone user who updated the business glossary term.</p>
     */
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }

    /**
     * <p>The Amazon DataZone user who updated the business glossary term.</p>
     */
    inline void SetUpdatedBy(const Aws::String& value) { m_updatedByHasBeenSet = true; m_updatedBy = value; }

    /**
     * <p>The Amazon DataZone user who updated the business glossary term.</p>
     */
    inline void SetUpdatedBy(Aws::String&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::move(value); }

    /**
     * <p>The Amazon DataZone user who updated the business glossary term.</p>
     */
    inline void SetUpdatedBy(const char* value) { m_updatedByHasBeenSet = true; m_updatedBy.assign(value); }

    /**
     * <p>The Amazon DataZone user who updated the business glossary term.</p>
     */
    inline GlossaryTermItem& WithUpdatedBy(const Aws::String& value) { SetUpdatedBy(value); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the business glossary term.</p>
     */
    inline GlossaryTermItem& WithUpdatedBy(Aws::String&& value) { SetUpdatedBy(std::move(value)); return *this;}

    /**
     * <p>The Amazon DataZone user who updated the business glossary term.</p>
     */
    inline GlossaryTermItem& WithUpdatedBy(const char* value) { SetUpdatedBy(value); return *this;}

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
