/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/GlossaryTermStatus.h>
#include <aws/datazone/model/TermRelations.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/GlossaryUsageRestriction.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{
  class CreateGlossaryTermResult
  {
  public:
    AWS_DATAZONE_API CreateGlossaryTermResult() = default;
    AWS_DATAZONE_API CreateGlossaryTermResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateGlossaryTermResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which this business glossary term is
     * created.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    CreateGlossaryTermResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the business glossary in which this term is created.</p>
     */
    inline const Aws::String& GetGlossaryId() const { return m_glossaryId; }
    template<typename GlossaryIdT = Aws::String>
    void SetGlossaryId(GlossaryIdT&& value) { m_glossaryIdHasBeenSet = true; m_glossaryId = std::forward<GlossaryIdT>(value); }
    template<typename GlossaryIdT = Aws::String>
    CreateGlossaryTermResult& WithGlossaryId(GlossaryIdT&& value) { SetGlossaryId(std::forward<GlossaryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of this business glossary term.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateGlossaryTermResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The long description of this business glossary term.</p>
     */
    inline const Aws::String& GetLongDescription() const { return m_longDescription; }
    template<typename LongDescriptionT = Aws::String>
    void SetLongDescription(LongDescriptionT&& value) { m_longDescriptionHasBeenSet = true; m_longDescription = std::forward<LongDescriptionT>(value); }
    template<typename LongDescriptionT = Aws::String>
    CreateGlossaryTermResult& WithLongDescription(LongDescriptionT&& value) { SetLongDescription(std::forward<LongDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of this business glossary term.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateGlossaryTermResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short description of this business glossary term.</p>
     */
    inline const Aws::String& GetShortDescription() const { return m_shortDescription; }
    template<typename ShortDescriptionT = Aws::String>
    void SetShortDescription(ShortDescriptionT&& value) { m_shortDescriptionHasBeenSet = true; m_shortDescription = std::forward<ShortDescriptionT>(value); }
    template<typename ShortDescriptionT = Aws::String>
    CreateGlossaryTermResult& WithShortDescription(ShortDescriptionT&& value) { SetShortDescription(std::forward<ShortDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this business glossary term.</p>
     */
    inline GlossaryTermStatus GetStatus() const { return m_status; }
    inline void SetStatus(GlossaryTermStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateGlossaryTermResult& WithStatus(GlossaryTermStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The term relations of this business glossary term.</p>
     */
    inline const TermRelations& GetTermRelations() const { return m_termRelations; }
    template<typename TermRelationsT = TermRelations>
    void SetTermRelations(TermRelationsT&& value) { m_termRelationsHasBeenSet = true; m_termRelations = std::forward<TermRelationsT>(value); }
    template<typename TermRelationsT = TermRelations>
    CreateGlossaryTermResult& WithTermRelations(TermRelationsT&& value) { SetTermRelations(std::forward<TermRelationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The usage restriction of the restricted glossary.</p>
     */
    inline const Aws::Vector<GlossaryUsageRestriction>& GetUsageRestrictions() const { return m_usageRestrictions; }
    template<typename UsageRestrictionsT = Aws::Vector<GlossaryUsageRestriction>>
    void SetUsageRestrictions(UsageRestrictionsT&& value) { m_usageRestrictionsHasBeenSet = true; m_usageRestrictions = std::forward<UsageRestrictionsT>(value); }
    template<typename UsageRestrictionsT = Aws::Vector<GlossaryUsageRestriction>>
    CreateGlossaryTermResult& WithUsageRestrictions(UsageRestrictionsT&& value) { SetUsageRestrictions(std::forward<UsageRestrictionsT>(value)); return *this;}
    inline CreateGlossaryTermResult& AddUsageRestrictions(GlossaryUsageRestriction value) { m_usageRestrictionsHasBeenSet = true; m_usageRestrictions.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateGlossaryTermResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

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

    Aws::Vector<GlossaryUsageRestriction> m_usageRestrictions;
    bool m_usageRestrictionsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
