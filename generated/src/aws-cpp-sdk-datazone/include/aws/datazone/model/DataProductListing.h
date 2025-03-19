/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/DetailedGlossaryTerm.h>
#include <aws/datazone/model/ListingSummary.h>
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
   * <p>The data product listing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DataProductListing">AWS
   * API Reference</a></p>
   */
  class DataProductListing
  {
  public:
    AWS_DATAZONE_API DataProductListing() = default;
    AWS_DATAZONE_API DataProductListing(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataProductListing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp at which the data product listing was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DataProductListing& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data product listing.</p>
     */
    inline const Aws::String& GetDataProductId() const { return m_dataProductId; }
    inline bool DataProductIdHasBeenSet() const { return m_dataProductIdHasBeenSet; }
    template<typename DataProductIdT = Aws::String>
    void SetDataProductId(DataProductIdT&& value) { m_dataProductIdHasBeenSet = true; m_dataProductId = std::forward<DataProductIdT>(value); }
    template<typename DataProductIdT = Aws::String>
    DataProductListing& WithDataProductId(DataProductIdT&& value) { SetDataProductId(std::forward<DataProductIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the data product listing.</p>
     */
    inline const Aws::String& GetDataProductRevision() const { return m_dataProductRevision; }
    inline bool DataProductRevisionHasBeenSet() const { return m_dataProductRevisionHasBeenSet; }
    template<typename DataProductRevisionT = Aws::String>
    void SetDataProductRevision(DataProductRevisionT&& value) { m_dataProductRevisionHasBeenSet = true; m_dataProductRevision = std::forward<DataProductRevisionT>(value); }
    template<typename DataProductRevisionT = Aws::String>
    DataProductListing& WithDataProductRevision(DataProductRevisionT&& value) { SetDataProductRevision(std::forward<DataProductRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata forms of the data product listing.</p>
     */
    inline const Aws::String& GetForms() const { return m_forms; }
    inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }
    template<typename FormsT = Aws::String>
    void SetForms(FormsT&& value) { m_formsHasBeenSet = true; m_forms = std::forward<FormsT>(value); }
    template<typename FormsT = Aws::String>
    DataProductListing& WithForms(FormsT&& value) { SetForms(std::forward<FormsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms of the data product listing.</p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGlossaryTerms() const { return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    template<typename GlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<DetailedGlossaryTerm>>
    DataProductListing& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = DetailedGlossaryTerm>
    DataProductListing& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data assets of the data product listing.</p>
     */
    inline const Aws::Vector<ListingSummary>& GetItems() const { return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    template<typename ItemsT = Aws::Vector<ListingSummary>>
    void SetItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items = std::forward<ItemsT>(value); }
    template<typename ItemsT = Aws::Vector<ListingSummary>>
    DataProductListing& WithItems(ItemsT&& value) { SetItems(std::forward<ItemsT>(value)); return *this;}
    template<typename ItemsT = ListingSummary>
    DataProductListing& AddItems(ItemsT&& value) { m_itemsHasBeenSet = true; m_items.emplace_back(std::forward<ItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the owning project of the data product listing.</p>
     */
    inline const Aws::String& GetOwningProjectId() const { return m_owningProjectId; }
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
    template<typename OwningProjectIdT = Aws::String>
    void SetOwningProjectId(OwningProjectIdT&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::forward<OwningProjectIdT>(value); }
    template<typename OwningProjectIdT = Aws::String>
    DataProductListing& WithOwningProjectId(OwningProjectIdT&& value) { SetOwningProjectId(std::forward<OwningProjectIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataProductId;
    bool m_dataProductIdHasBeenSet = false;

    Aws::String m_dataProductRevision;
    bool m_dataProductRevisionHasBeenSet = false;

    Aws::String m_forms;
    bool m_formsHasBeenSet = false;

    Aws::Vector<DetailedGlossaryTerm> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::Vector<ListingSummary> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_owningProjectId;
    bool m_owningProjectIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
