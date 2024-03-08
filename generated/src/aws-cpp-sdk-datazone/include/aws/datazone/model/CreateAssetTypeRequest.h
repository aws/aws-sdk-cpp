/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/datazone/model/FormEntryInput.h>
#include <utility>

namespace Aws
{
namespace DataZone
{
namespace Model
{

  /**
   */
  class CreateAssetTypeRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateAssetTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssetType"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>The descripton of the custom asset type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The descripton of the custom asset type.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The descripton of the custom asset type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The descripton of the custom asset type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The descripton of the custom asset type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The descripton of the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The descripton of the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The descripton of the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the Amazon DataZone domain where the custom asset
     * type is being created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The unique identifier of the Amazon DataZone domain where the custom asset
     * type is being created.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the Amazon DataZone domain where the custom asset
     * type is being created.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The unique identifier of the Amazon DataZone domain where the custom asset
     * type is being created.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the Amazon DataZone domain where the custom asset
     * type is being created.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the Amazon DataZone domain where the custom asset
     * type is being created.</p>
     */
    inline CreateAssetTypeRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the Amazon DataZone domain where the custom asset
     * type is being created.</p>
     */
    inline CreateAssetTypeRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Amazon DataZone domain where the custom asset
     * type is being created.</p>
     */
    inline CreateAssetTypeRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The metadata forms that are to be attached to the custom asset type.</p>
     */
    inline const Aws::Map<Aws::String, FormEntryInput>& GetFormsInput() const{ return m_formsInput; }

    /**
     * <p>The metadata forms that are to be attached to the custom asset type.</p>
     */
    inline bool FormsInputHasBeenSet() const { return m_formsInputHasBeenSet; }

    /**
     * <p>The metadata forms that are to be attached to the custom asset type.</p>
     */
    inline void SetFormsInput(const Aws::Map<Aws::String, FormEntryInput>& value) { m_formsInputHasBeenSet = true; m_formsInput = value; }

    /**
     * <p>The metadata forms that are to be attached to the custom asset type.</p>
     */
    inline void SetFormsInput(Aws::Map<Aws::String, FormEntryInput>&& value) { m_formsInputHasBeenSet = true; m_formsInput = std::move(value); }

    /**
     * <p>The metadata forms that are to be attached to the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& WithFormsInput(const Aws::Map<Aws::String, FormEntryInput>& value) { SetFormsInput(value); return *this;}

    /**
     * <p>The metadata forms that are to be attached to the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& WithFormsInput(Aws::Map<Aws::String, FormEntryInput>&& value) { SetFormsInput(std::move(value)); return *this;}

    /**
     * <p>The metadata forms that are to be attached to the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& AddFormsInput(const Aws::String& key, const FormEntryInput& value) { m_formsInputHasBeenSet = true; m_formsInput.emplace(key, value); return *this; }

    /**
     * <p>The metadata forms that are to be attached to the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& AddFormsInput(Aws::String&& key, const FormEntryInput& value) { m_formsInputHasBeenSet = true; m_formsInput.emplace(std::move(key), value); return *this; }

    /**
     * <p>The metadata forms that are to be attached to the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& AddFormsInput(const Aws::String& key, FormEntryInput&& value) { m_formsInputHasBeenSet = true; m_formsInput.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata forms that are to be attached to the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& AddFormsInput(Aws::String&& key, FormEntryInput&& value) { m_formsInputHasBeenSet = true; m_formsInput.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The metadata forms that are to be attached to the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& AddFormsInput(const char* key, FormEntryInput&& value) { m_formsInputHasBeenSet = true; m_formsInput.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The metadata forms that are to be attached to the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& AddFormsInput(const char* key, const FormEntryInput& value) { m_formsInputHasBeenSet = true; m_formsInput.emplace(key, value); return *this; }


    /**
     * <p>The name of the custom asset type.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the custom asset type.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the custom asset type.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the custom asset type.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the custom asset type.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the custom asset type.</p>
     */
    inline CreateAssetTypeRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone project that is to own the custom asset
     * type.</p>
     */
    inline const Aws::String& GetOwningProjectIdentifier() const{ return m_owningProjectIdentifier; }

    /**
     * <p>The identifier of the Amazon DataZone project that is to own the custom asset
     * type.</p>
     */
    inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }

    /**
     * <p>The identifier of the Amazon DataZone project that is to own the custom asset
     * type.</p>
     */
    inline void SetOwningProjectIdentifier(const Aws::String& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = value; }

    /**
     * <p>The identifier of the Amazon DataZone project that is to own the custom asset
     * type.</p>
     */
    inline void SetOwningProjectIdentifier(Aws::String&& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone project that is to own the custom asset
     * type.</p>
     */
    inline void SetOwningProjectIdentifier(const char* value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone project that is to own the custom asset
     * type.</p>
     */
    inline CreateAssetTypeRequest& WithOwningProjectIdentifier(const Aws::String& value) { SetOwningProjectIdentifier(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone project that is to own the custom asset
     * type.</p>
     */
    inline CreateAssetTypeRequest& WithOwningProjectIdentifier(Aws::String&& value) { SetOwningProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone project that is to own the custom asset
     * type.</p>
     */
    inline CreateAssetTypeRequest& WithOwningProjectIdentifier(const char* value) { SetOwningProjectIdentifier(value); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::Map<Aws::String, FormEntryInput> m_formsInput;
    bool m_formsInputHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owningProjectIdentifier;
    bool m_owningProjectIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
