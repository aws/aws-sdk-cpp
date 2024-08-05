/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/FormInput.h>
#include <aws/datazone/model/DataProductItem.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateDataProductRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateDataProductRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataProduct"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateDataProductRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateDataProductRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateDataProductRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data product.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateDataProductRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateDataProductRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateDataProductRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the domain where the data product is created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }
    inline CreateDataProductRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}
    inline CreateDataProductRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}
    inline CreateDataProductRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata forms of the data product.</p>
     */
    inline const Aws::Vector<FormInput>& GetFormsInput() const{ return m_formsInput; }
    inline bool FormsInputHasBeenSet() const { return m_formsInputHasBeenSet; }
    inline void SetFormsInput(const Aws::Vector<FormInput>& value) { m_formsInputHasBeenSet = true; m_formsInput = value; }
    inline void SetFormsInput(Aws::Vector<FormInput>&& value) { m_formsInputHasBeenSet = true; m_formsInput = std::move(value); }
    inline CreateDataProductRequest& WithFormsInput(const Aws::Vector<FormInput>& value) { SetFormsInput(value); return *this;}
    inline CreateDataProductRequest& WithFormsInput(Aws::Vector<FormInput>&& value) { SetFormsInput(std::move(value)); return *this;}
    inline CreateDataProductRequest& AddFormsInput(const FormInput& value) { m_formsInputHasBeenSet = true; m_formsInput.push_back(value); return *this; }
    inline CreateDataProductRequest& AddFormsInput(FormInput&& value) { m_formsInputHasBeenSet = true; m_formsInput.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The glossary terms of the data product.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }
    inline CreateDataProductRequest& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}
    inline CreateDataProductRequest& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}
    inline CreateDataProductRequest& AddGlossaryTerms(const Aws::String& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    inline CreateDataProductRequest& AddGlossaryTerms(Aws::String&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }
    inline CreateDataProductRequest& AddGlossaryTerms(const char* value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The data assets of the data product.</p>
     */
    inline const Aws::Vector<DataProductItem>& GetItems() const{ return m_items; }
    inline bool ItemsHasBeenSet() const { return m_itemsHasBeenSet; }
    inline void SetItems(const Aws::Vector<DataProductItem>& value) { m_itemsHasBeenSet = true; m_items = value; }
    inline void SetItems(Aws::Vector<DataProductItem>&& value) { m_itemsHasBeenSet = true; m_items = std::move(value); }
    inline CreateDataProductRequest& WithItems(const Aws::Vector<DataProductItem>& value) { SetItems(value); return *this;}
    inline CreateDataProductRequest& WithItems(Aws::Vector<DataProductItem>&& value) { SetItems(std::move(value)); return *this;}
    inline CreateDataProductRequest& AddItems(const DataProductItem& value) { m_itemsHasBeenSet = true; m_items.push_back(value); return *this; }
    inline CreateDataProductRequest& AddItems(DataProductItem&& value) { m_itemsHasBeenSet = true; m_items.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the data product.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateDataProductRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDataProductRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDataProductRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the owning project of the data product.</p>
     */
    inline const Aws::String& GetOwningProjectIdentifier() const{ return m_owningProjectIdentifier; }
    inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }
    inline void SetOwningProjectIdentifier(const Aws::String& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = value; }
    inline void SetOwningProjectIdentifier(Aws::String&& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = std::move(value); }
    inline void SetOwningProjectIdentifier(const char* value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier.assign(value); }
    inline CreateDataProductRequest& WithOwningProjectIdentifier(const Aws::String& value) { SetOwningProjectIdentifier(value); return *this;}
    inline CreateDataProductRequest& WithOwningProjectIdentifier(Aws::String&& value) { SetOwningProjectIdentifier(std::move(value)); return *this;}
    inline CreateDataProductRequest& WithOwningProjectIdentifier(const char* value) { SetOwningProjectIdentifier(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::Vector<FormInput> m_formsInput;
    bool m_formsInputHasBeenSet = false;

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::Vector<DataProductItem> m_items;
    bool m_itemsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owningProjectIdentifier;
    bool m_owningProjectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
