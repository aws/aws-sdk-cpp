/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/DataZoneRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/PredictionConfiguration.h>
#include <aws/datazone/model/FormInput.h>
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
  class CreateAssetRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateAssetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAsset"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateAssetRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateAssetRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateAssetRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>Asset description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Asset description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Asset description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Asset description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Asset description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Asset description.</p>
     */
    inline CreateAssetRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Asset description.</p>
     */
    inline CreateAssetRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Asset description.</p>
     */
    inline CreateAssetRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Amazon DataZone domain where the asset is created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>Amazon DataZone domain where the asset is created.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>Amazon DataZone domain where the asset is created.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>Amazon DataZone domain where the asset is created.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>Amazon DataZone domain where the asset is created.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>Amazon DataZone domain where the asset is created.</p>
     */
    inline CreateAssetRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>Amazon DataZone domain where the asset is created.</p>
     */
    inline CreateAssetRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>Amazon DataZone domain where the asset is created.</p>
     */
    inline CreateAssetRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetExternalIdentifier() const{ return m_externalIdentifier; }

    /**
     * <p/>
     */
    inline bool ExternalIdentifierHasBeenSet() const { return m_externalIdentifierHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetExternalIdentifier(const Aws::String& value) { m_externalIdentifierHasBeenSet = true; m_externalIdentifier = value; }

    /**
     * <p/>
     */
    inline void SetExternalIdentifier(Aws::String&& value) { m_externalIdentifierHasBeenSet = true; m_externalIdentifier = std::move(value); }

    /**
     * <p/>
     */
    inline void SetExternalIdentifier(const char* value) { m_externalIdentifierHasBeenSet = true; m_externalIdentifier.assign(value); }

    /**
     * <p/>
     */
    inline CreateAssetRequest& WithExternalIdentifier(const Aws::String& value) { SetExternalIdentifier(value); return *this;}

    /**
     * <p/>
     */
    inline CreateAssetRequest& WithExternalIdentifier(Aws::String&& value) { SetExternalIdentifier(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline CreateAssetRequest& WithExternalIdentifier(const char* value) { SetExternalIdentifier(value); return *this;}


    /**
     * <p>Metadata forms attached to the asset.</p>
     */
    inline const Aws::Vector<FormInput>& GetFormsInput() const{ return m_formsInput; }

    /**
     * <p>Metadata forms attached to the asset.</p>
     */
    inline bool FormsInputHasBeenSet() const { return m_formsInputHasBeenSet; }

    /**
     * <p>Metadata forms attached to the asset.</p>
     */
    inline void SetFormsInput(const Aws::Vector<FormInput>& value) { m_formsInputHasBeenSet = true; m_formsInput = value; }

    /**
     * <p>Metadata forms attached to the asset.</p>
     */
    inline void SetFormsInput(Aws::Vector<FormInput>&& value) { m_formsInputHasBeenSet = true; m_formsInput = std::move(value); }

    /**
     * <p>Metadata forms attached to the asset.</p>
     */
    inline CreateAssetRequest& WithFormsInput(const Aws::Vector<FormInput>& value) { SetFormsInput(value); return *this;}

    /**
     * <p>Metadata forms attached to the asset.</p>
     */
    inline CreateAssetRequest& WithFormsInput(Aws::Vector<FormInput>&& value) { SetFormsInput(std::move(value)); return *this;}

    /**
     * <p>Metadata forms attached to the asset.</p>
     */
    inline CreateAssetRequest& AddFormsInput(const FormInput& value) { m_formsInputHasBeenSet = true; m_formsInput.push_back(value); return *this; }

    /**
     * <p>Metadata forms attached to the asset.</p>
     */
    inline CreateAssetRequest& AddFormsInput(FormInput&& value) { m_formsInputHasBeenSet = true; m_formsInput.push_back(std::move(value)); return *this; }


    /**
     * <p>Glossary terms attached to the asset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }

    /**
     * <p>Glossary terms attached to the asset.</p>
     */
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }

    /**
     * <p>Glossary terms attached to the asset.</p>
     */
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }

    /**
     * <p>Glossary terms attached to the asset.</p>
     */
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }

    /**
     * <p>Glossary terms attached to the asset.</p>
     */
    inline CreateAssetRequest& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}

    /**
     * <p>Glossary terms attached to the asset.</p>
     */
    inline CreateAssetRequest& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}

    /**
     * <p>Glossary terms attached to the asset.</p>
     */
    inline CreateAssetRequest& AddGlossaryTerms(const Aws::String& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }

    /**
     * <p>Glossary terms attached to the asset.</p>
     */
    inline CreateAssetRequest& AddGlossaryTerms(Aws::String&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }

    /**
     * <p>Glossary terms attached to the asset.</p>
     */
    inline CreateAssetRequest& AddGlossaryTerms(const char* value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }


    /**
     * <p>Asset name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Asset name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Asset name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Asset name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Asset name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Asset name.</p>
     */
    inline CreateAssetRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Asset name.</p>
     */
    inline CreateAssetRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Asset name.</p>
     */
    inline CreateAssetRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The unique identifier of the project that owns this asset.</p>
     */
    inline const Aws::String& GetOwningProjectIdentifier() const{ return m_owningProjectIdentifier; }

    /**
     * <p>The unique identifier of the project that owns this asset.</p>
     */
    inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the project that owns this asset.</p>
     */
    inline void SetOwningProjectIdentifier(const Aws::String& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = value; }

    /**
     * <p>The unique identifier of the project that owns this asset.</p>
     */
    inline void SetOwningProjectIdentifier(Aws::String&& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the project that owns this asset.</p>
     */
    inline void SetOwningProjectIdentifier(const char* value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the project that owns this asset.</p>
     */
    inline CreateAssetRequest& WithOwningProjectIdentifier(const Aws::String& value) { SetOwningProjectIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the project that owns this asset.</p>
     */
    inline CreateAssetRequest& WithOwningProjectIdentifier(Aws::String&& value) { SetOwningProjectIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the project that owns this asset.</p>
     */
    inline CreateAssetRequest& WithOwningProjectIdentifier(const char* value) { SetOwningProjectIdentifier(value); return *this;}


    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline const PredictionConfiguration& GetPredictionConfiguration() const{ return m_predictionConfiguration; }

    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline bool PredictionConfigurationHasBeenSet() const { return m_predictionConfigurationHasBeenSet; }

    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline void SetPredictionConfiguration(const PredictionConfiguration& value) { m_predictionConfigurationHasBeenSet = true; m_predictionConfiguration = value; }

    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline void SetPredictionConfiguration(PredictionConfiguration&& value) { m_predictionConfigurationHasBeenSet = true; m_predictionConfiguration = std::move(value); }

    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline CreateAssetRequest& WithPredictionConfiguration(const PredictionConfiguration& value) { SetPredictionConfiguration(value); return *this;}

    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline CreateAssetRequest& WithPredictionConfiguration(PredictionConfiguration&& value) { SetPredictionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of this asset's type.</p>
     */
    inline const Aws::String& GetTypeIdentifier() const{ return m_typeIdentifier; }

    /**
     * <p>The unique identifier of this asset's type.</p>
     */
    inline bool TypeIdentifierHasBeenSet() const { return m_typeIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of this asset's type.</p>
     */
    inline void SetTypeIdentifier(const Aws::String& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = value; }

    /**
     * <p>The unique identifier of this asset's type.</p>
     */
    inline void SetTypeIdentifier(Aws::String&& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of this asset's type.</p>
     */
    inline void SetTypeIdentifier(const char* value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier.assign(value); }

    /**
     * <p>The unique identifier of this asset's type.</p>
     */
    inline CreateAssetRequest& WithTypeIdentifier(const Aws::String& value) { SetTypeIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of this asset's type.</p>
     */
    inline CreateAssetRequest& WithTypeIdentifier(Aws::String&& value) { SetTypeIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of this asset's type.</p>
     */
    inline CreateAssetRequest& WithTypeIdentifier(const char* value) { SetTypeIdentifier(value); return *this;}


    /**
     * <p>The revision of this asset's type.</p>
     */
    inline const Aws::String& GetTypeRevision() const{ return m_typeRevision; }

    /**
     * <p>The revision of this asset's type.</p>
     */
    inline bool TypeRevisionHasBeenSet() const { return m_typeRevisionHasBeenSet; }

    /**
     * <p>The revision of this asset's type.</p>
     */
    inline void SetTypeRevision(const Aws::String& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = value; }

    /**
     * <p>The revision of this asset's type.</p>
     */
    inline void SetTypeRevision(Aws::String&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::move(value); }

    /**
     * <p>The revision of this asset's type.</p>
     */
    inline void SetTypeRevision(const char* value) { m_typeRevisionHasBeenSet = true; m_typeRevision.assign(value); }

    /**
     * <p>The revision of this asset's type.</p>
     */
    inline CreateAssetRequest& WithTypeRevision(const Aws::String& value) { SetTypeRevision(value); return *this;}

    /**
     * <p>The revision of this asset's type.</p>
     */
    inline CreateAssetRequest& WithTypeRevision(Aws::String&& value) { SetTypeRevision(std::move(value)); return *this;}

    /**
     * <p>The revision of this asset's type.</p>
     */
    inline CreateAssetRequest& WithTypeRevision(const char* value) { SetTypeRevision(value); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainIdentifier;
    bool m_domainIdentifierHasBeenSet = false;

    Aws::String m_externalIdentifier;
    bool m_externalIdentifierHasBeenSet = false;

    Aws::Vector<FormInput> m_formsInput;
    bool m_formsInputHasBeenSet = false;

    Aws::Vector<Aws::String> m_glossaryTerms;
    bool m_glossaryTermsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_owningProjectIdentifier;
    bool m_owningProjectIdentifierHasBeenSet = false;

    PredictionConfiguration m_predictionConfiguration;
    bool m_predictionConfigurationHasBeenSet = false;

    Aws::String m_typeIdentifier;
    bool m_typeIdentifierHasBeenSet = false;

    Aws::String m_typeRevision;
    bool m_typeRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
