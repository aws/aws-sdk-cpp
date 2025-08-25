/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/GlossaryTermItemAdditionalAttributes.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GlossaryTermStatus.h>
#include <aws/datazone/model/TermRelations.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/GlossaryUsageRestriction.h>
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
    AWS_DATAZONE_API GlossaryTermItem() = default;
    AWS_DATAZONE_API GlossaryTermItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API GlossaryTermItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The additional attributes of an Amazon DataZone glossary term.</p>
     */
    inline const GlossaryTermItemAdditionalAttributes& GetAdditionalAttributes() const { return m_additionalAttributes; }
    inline bool AdditionalAttributesHasBeenSet() const { return m_additionalAttributesHasBeenSet; }
    template<typename AdditionalAttributesT = GlossaryTermItemAdditionalAttributes>
    void SetAdditionalAttributes(AdditionalAttributesT&& value) { m_additionalAttributesHasBeenSet = true; m_additionalAttributes = std::forward<AdditionalAttributesT>(value); }
    template<typename AdditionalAttributesT = GlossaryTermItemAdditionalAttributes>
    GlossaryTermItem& WithAdditionalAttributes(AdditionalAttributesT&& value) { SetAdditionalAttributes(std::forward<AdditionalAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when a business glossary term was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GlossaryTermItem& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who created the business glossary.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GlossaryTermItem& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon DataZone domain in which the business glossary
     * exists.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    GlossaryTermItem& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the business glossary to which the term belongs.</p>
     */
    inline const Aws::String& GetGlossaryId() const { return m_glossaryId; }
    inline bool GlossaryIdHasBeenSet() const { return m_glossaryIdHasBeenSet; }
    template<typename GlossaryIdT = Aws::String>
    void SetGlossaryId(GlossaryIdT&& value) { m_glossaryIdHasBeenSet = true; m_glossaryId = std::forward<GlossaryIdT>(value); }
    template<typename GlossaryIdT = Aws::String>
    GlossaryTermItem& WithGlossaryId(GlossaryIdT&& value) { SetGlossaryId(std::forward<GlossaryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the business glossary term.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GlossaryTermItem& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long description of the business glossary term.</p>
     */
    inline const Aws::String& GetLongDescription() const { return m_longDescription; }
    inline bool LongDescriptionHasBeenSet() const { return m_longDescriptionHasBeenSet; }
    template<typename LongDescriptionT = Aws::String>
    void SetLongDescription(LongDescriptionT&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::forward<LongDescriptionT>(value); }
    template<typename LongDescriptionT = Aws::String>
    GlossaryTermItem& WithLongDescription(LongDescriptionT&& value) { SetLongDescription(std::forward<LongDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the business glossary term.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GlossaryTermItem& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short description of the business glossary term.</p>
     */
    inline const Aws::String& GetShortDescription() const { return m_shortDescription; }
    inline bool ShortDescriptionHasBeenSet() const { return m_shortDescriptionHasBeenSet; }
    template<typename ShortDescriptionT = Aws::String>
    void SetShortDescription(ShortDescriptionT&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::forward<ShortDescriptionT>(value); }
    template<typename ShortDescriptionT = Aws::String>
    GlossaryTermItem& WithShortDescription(ShortDescriptionT&& value) { SetShortDescription(std::forward<ShortDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the business glossary term.</p>
     */
    inline GlossaryTermStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(GlossaryTermStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GlossaryTermItem& WithStatus(GlossaryTermStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The relations of the business glossary term.</p>
     */
    inline const TermRelations& GetTermRelations() const { return m_termRelations; }
    inline bool TermRelationsHasBeenSet() const { return m_termRelationsHasBeenSet; }
    template<typename TermRelationsT = TermRelations>
    void SetTermRelations(TermRelationsT&& value) { m_termRelationsHasBeenSet = true; m_termRelations = std::forward<TermRelationsT>(value); }
    template<typename TermRelationsT = TermRelations>
    GlossaryTermItem& WithTermRelations(TermRelationsT&& value) { SetTermRelations(std::forward<TermRelationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when a business glossary term was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GlossaryTermItem& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon DataZone user who updated the business glossary term.</p>
     */
    inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
    inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
    template<typename UpdatedByT = Aws::String>
    void SetUpdatedBy(UpdatedByT&& value) { m_updatedByHasBeenSet = true; m_updatedBy = std::forward<UpdatedByT>(value); }
    template<typename UpdatedByT = Aws::String>
    GlossaryTermItem& WithUpdatedBy(UpdatedByT&& value) { SetUpdatedBy(std::forward<UpdatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage restrictions associated with a goverened glossary term.</p>
     */
    inline const Aws::Vector<GlossaryUsageRestriction>& GetUsageRestrictions() const { return m_usageRestrictions; }
    inline bool UsageRestrictionsHasBeenSet() const { return m_usageRestrictionsHasBeenSet; }
    template<typename UsageRestrictionsT = Aws::Vector<GlossaryUsageRestriction>>
    void SetUsageRestrictions(UsageRestrictionsT&& value) { m_usageRestrictionsHasBeenSet = true; m_usageRestrictions = std::forward<UsageRestrictionsT>(value); }
    template<typename UsageRestrictionsT = Aws::Vector<GlossaryUsageRestriction>>
    GlossaryTermItem& WithUsageRestrictions(UsageRestrictionsT&& value) { SetUsageRestrictions(std::forward<UsageRestrictionsT>(value)); return *this;}
    inline GlossaryTermItem& AddUsageRestrictions(GlossaryUsageRestriction value) { m_usageRestrictionsHasBeenSet = true; m_usageRestrictions.push_back(value); return *this; }
    ///@}
  private:

    GlossaryTermItemAdditionalAttributes m_additionalAttributes;
    bool m_additionalAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
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

    GlossaryTermStatus m_status{GlossaryTermStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    TermRelations m_termRelations;
    bool m_termRelationsHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_updatedBy;
    bool m_updatedByHasBeenSet = false;

    Aws::Vector<GlossaryUsageRestriction> m_usageRestrictions;
    bool m_usageRestrictionsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
