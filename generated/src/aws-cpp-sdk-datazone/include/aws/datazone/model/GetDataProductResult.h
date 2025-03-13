/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/DataProductStatus.h>
#include <aws/datazone/model/FormOutput.h>
#include <aws/datazone/model/DataProductItem.h>
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
  class GetDataProductResult
  {
  public:
    AWS_DATAZONE_API GetDataProductResult() = default;
    AWS_DATAZONE_API GetDataProductResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetDataProductResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The timestamp at which the data product is created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetDataProductResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the data product.</p>
     */
    inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = Aws::String>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = Aws::String>
    GetDataProductResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data product.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetDataProductResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where the data product lives.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    GetDataProductResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp at which the first revision of the data product is created.</p>
     */
    inline const Aws::Utils::DateTime& GetFirstRevisionCreatedAt() const { return m_firstRevisionCreatedAt; }
    template<typename FirstRevisionCreatedAtT = Aws::Utils::DateTime>
    void SetFirstRevisionCreatedAt(FirstRevisionCreatedAtT&& value) { m_firstRevisionCreatedAtHasBeenSet = true; m_firstRevisionCreatedAt = std::forward<FirstRevisionCreatedAtT>(value); }
    template<typename FirstRevisionCreatedAtT = Aws::Utils::DateTime>
    GetDataProductResult& WithFirstRevisionCreatedAt(FirstRevisionCreatedAtT&& value) { SetFirstRevisionCreatedAt(std::forward<FirstRevisionCreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user who created the first revision of the data product.</p>
     */
    inline const Aws::String& GetFirstRevisionCreatedBy() const { return m_firstRevisionCreatedBy; }
    template<typename FirstRevisionCreatedByT = Aws::String>
    void SetFirstRevisionCreatedBy(FirstRevisionCreatedByT&& value) { m_firstRevisionCreatedByHasBeenSet = true; m_firstRevisionCreatedBy = std::forward<FirstRevisionCreatedByT>(value); }
    template<typename FirstRevisionCreatedByT = Aws::String>
    GetDataProductResult& WithFirstRevisionCreatedBy(FirstRevisionCreatedByT&& value) { SetFirstRevisionCreatedBy(std::forward<FirstRevisionCreatedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata forms of the data product.</p>
     */
    inline const Aws::Vector<FormOutput>& GetFormsOutput() const { return m_formsOutput; }
    template<typename FormsOutputT = Aws::Vector<FormOutput>>
    void SetFormsOutput(FormsOutputT&& value) { m_formsOutputHasBeenSet = true; m_formsOutput = std::forward<FormsOutputT>(value); }
    template<typename FormsOutputT = Aws::Vector<FormOutput>>
    GetDataProductResult& WithFormsOutput(FormsOutputT&& value) { SetFormsOutput(std::forward<FormsOutputT>(value)); return *this;}
    template<typename FormsOutputT = FormOutput>
    GetDataProductResult& AddFormsOutput(FormsOutputT&& value) { m_formsOutputHasBeenSet = true; m_formsOutput.emplace_back(std::forward<FormsOutputT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The glossary terms of the data product.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const { return m_glossaryTerms; }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    GetDataProductResult& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = Aws::String>
    GetDataProductResult& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the data product.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetDataProductResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data assets of the data product.</p>
     */
    inline const Aws::Vector<DataProductItem>& GetItems() const { return m_items; }
    template<typename ItemsT = Aws::Vector<DataProductItem>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<DataProductItem>>
    GetDataProductResult& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = DataProductItem>
    GetDataProductResult& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the data product.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetDataProductResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the owning project of the data product.</p>
     */
    inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
    template<typename OwningProjectIdT = Aws::String>
    void SetOwningProjectId(OwningProjectIdT&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::forward<OwningProjectIdT>(value); }
    template<typename OwningProjectIdT = Aws::String>
    GetDataProductResult& WithOwningProjectId(OwningProjectIdT&& value) { SetOwningProjectId(std::forward<OwningProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the data product.</p>
     */
    inline const Aws::String& GetRevision() const { return m_revision; }
    template<typename RevisionT = Aws::String>
    void SetRevision(RevisionT&& value) { m_revisionHasBeenSet = true; m_revision = std::forward<RevisionT>(value); }
    template<typename RevisionT = Aws::String>
    GetDataProductResult& WithRevision(RevisionT&& value) { SetRevision(std::forward<RevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data product.</p>
     */
    inline DataProductStatus GetStatus() const { return m_status; }
    inline void SetStatus(DataProductStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDataProductResult& WithStatus(DataProductStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDataProductResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::Utils::DateTime m_firstRevisionCreatedAt{};
    bool m_firstRevisionCreatedAtHasBeenSet = false;

    Aws::String m_firstRevisionCreatedBy;
    bool m_firstRevisionCreatedByHasBeenSet = false;

    Aws::Vector<FormOutput> m_formsOutput;
    bool m_formsOutputHasBeenSet = false;

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<DataProductItem> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;

    Aws::String m_revision;
    bool m_revisionHasBeenSet = false;

    DataProductStatus m_status{DataProductStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
