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
    AWS_DATAZONE_API DataProductListing();
    AWS_DATAZONE_API DataProductListing(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataProductListing& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp at which the data product listing was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DataProductListing& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DataProductListing& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data product listing.</p>
     */
    inline const Aws::String& GetDataProductId() const{ return m_dataProductId; }
    inline bool DataProductIdHasBeenSet() const { return m_dataProductIdHasBeenSet; }
    inline void SetDataProductId(const Aws::String& value) { m_dataProductIdHasBeenSet = true; m_dataProductId = value; }
    inline void SetDataProductId(Aws::String&& value) { m_dataProductIdHasBeenSet = true; m_dataProductId = std::move(value); }
    inline void SetDataProductId(const char* value) { m_dataProductIdHasBeenSet = true; m_dataProductId.assign(value); }
    inline DataProductListing& WithDataProductId(const Aws::String& value) { SetDataProductId(value); return *this;}
    inline DataProductListing& WithDataProductId(Aws::String&& value) { SetDataProductId(std::move(value)); return *this;}
    inline DataProductListing& WithDataProductId(const char* value) { SetDataProductId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of the data product listing.</p>
     */
    inline const Aws::String& GetDataProductRevision() const{ return m_dataProductRevision; }
    inline bool DataProductRevisionHasBeenSet() const { return m_dataProductRevisionHasBeenSet; }
    inline void SetDataProductRevision(const Aws::String& value) { m_dataProductRevisionHasBeenSet = true; m_dataProductRevision = value; }
    inline void SetDataProductRevision(Aws::String&& value) { m_dataProductRevisionHasBeenSet = true; m_dataProductRevision = std::move(value); }
    inline void SetDataProductRevision(const char* value) { m_dataProductRevisionHasBeenSet = true; m_dataProductRevision.assign(value); }
    inline DataProductListing& WithDataProductRevision(const Aws::String& value) { SetDataProductRevision(value); return *this;}
    inline DataProductListing& WithDataProductRevision(Aws::String&& value) { SetDataProductRevision(std::move(value)); return *this;}
    inline DataProductListing& WithDataProductRevision(const char* value) { SetDataProductRevision(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata forms of the data product listing.</p>
     */
    inline const Aws::String& GetForms() const{ return m_forms; }
    inline bool FormsHasBeenSet() const { return m_formsHasBeenSet; }
    inline void SetForms(const Aws::String& value) { m_formsHasBeenSet = true; m_forms = value; }
    inline void SetForms(Aws::String&& value) { m_formsHasBeenSet = true; m_forms = std::move(value); }
    inline void SetForms(const char* value) { m_formsHasBeenSet = true; m_forms.assign(value); }
    inline DataProductListing& WithForms(const Aws::String& value) { SetForms(value); return *this;}
    inline DataProductListing& WithForms(Aws::String&& value) { SetForms(std::move(value)); return *this;}
    inline DataProductListing& WithForms(const char* value) { SetForms(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The glossary terms of the data product listing.</p>
     */
    inline const Aws::Vector<DetailedGlossaryTerm>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    inline void SetGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }
    inline DataProductListing& WithGlossaryTerms(const Aws::Vector<DetailedGlossaryTerm>& value) { SetGlossaryTerms(value); return *this;}
    inline DataProductListing& WithGlossaryTerms(Aws::Vector<DetailedGlossaryTerm>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline DataProductListing& AddGlossaryTerms(const DetailedGlossaryTerm& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    inline DataProductListing& AddGlossaryTerms(DetailedGlossaryTerm&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data assets of the data product listing.</p>
     */
    inline const Aws::Vector<ListingSummary>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<ListingSummary>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<ListingSummary>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline DataProductListing& WithItems(const Aws::Vector<ListingSummary>& value) { SetItems(value); return *this;}
    inline DataProductListing& WithItems(Aws::Vector<ListingSummary>&& value) { SetItems(std::move(value)); return *this;}
    inline DataProductListing& AddItems(const ListingSummary& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline DataProductListing& AddItems(ListingSummary&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the owning project of the data product listing.</p>
     */
    inline const Aws::String& GetOwningProjectId() const{ return m_owningProjectId; }
    inline bool OwningProjectIdHasBeenSet() const { return m_owningProjectIdHasBeenSet; }
    inline void SetOwningProjectId(const Aws::String& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = value; }
    inline void SetOwningProjectId(Aws::String&& value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId = std::move(value); }
    inline void SetOwningProjectId(const char* value) { m_owningProjectIdHasBeenSet = true; m_owningProjectId.assign(value); }
    inline DataProductListing& WithOwningProjectId(const Aws::String& value) { SetOwningProjectId(value); return *this;}
    inline DataProductListing& WithOwningProjectId(Aws::String&& value) { SetOwningProjectId(std::move(value)); return *this;}
    inline DataProductListing& WithOwningProjectId(const char* value) { SetOwningProjectId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
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
