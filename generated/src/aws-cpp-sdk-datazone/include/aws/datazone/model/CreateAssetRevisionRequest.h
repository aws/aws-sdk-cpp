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
  class CreateAssetRevisionRequest : public DataZoneRequest
  {
  public:
    AWS_DATAZONE_API CreateAssetRevisionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAssetRevision"; }

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
    inline CreateAssetRevisionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateAssetRevisionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline CreateAssetRevisionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The revised description of the asset.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The revised description of the asset.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The revised description of the asset.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The revised description of the asset.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The revised description of the asset.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The revised description of the asset.</p>
     */
    inline CreateAssetRevisionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The revised description of the asset.</p>
     */
    inline CreateAssetRevisionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The revised description of the asset.</p>
     */
    inline CreateAssetRevisionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the domain where the asset is being revised.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const{ return m_domainIdentifier; }

    /**
     * <p>The unique identifier of the domain where the asset is being revised.</p>
     */
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }

    /**
     * <p>The unique identifier of the domain where the asset is being revised.</p>
     */
    inline void SetDomainIdentifier(const Aws::String& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = value; }

    /**
     * <p>The unique identifier of the domain where the asset is being revised.</p>
     */
    inline void SetDomainIdentifier(Aws::String&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::move(value); }

    /**
     * <p>The unique identifier of the domain where the asset is being revised.</p>
     */
    inline void SetDomainIdentifier(const char* value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier.assign(value); }

    /**
     * <p>The unique identifier of the domain where the asset is being revised.</p>
     */
    inline CreateAssetRevisionRequest& WithDomainIdentifier(const Aws::String& value) { SetDomainIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the domain where the asset is being revised.</p>
     */
    inline CreateAssetRevisionRequest& WithDomainIdentifier(Aws::String&& value) { SetDomainIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the domain where the asset is being revised.</p>
     */
    inline CreateAssetRevisionRequest& WithDomainIdentifier(const char* value) { SetDomainIdentifier(value); return *this;}


    /**
     * <p>The metadata forms to be attached to the asset as part of asset revision.</p>
     */
    inline const Aws::Vector<FormInput>& GetFormsInput() const{ return m_formsInput; }

    /**
     * <p>The metadata forms to be attached to the asset as part of asset revision.</p>
     */
    inline bool FormsInputHasBeenSet() const { return m_formsInputHasBeenSet; }

    /**
     * <p>The metadata forms to be attached to the asset as part of asset revision.</p>
     */
    inline void SetFormsInput(const Aws::Vector<FormInput>& value) { m_formsInputHasBeenSet = true; m_formsInput = value; }

    /**
     * <p>The metadata forms to be attached to the asset as part of asset revision.</p>
     */
    inline void SetFormsInput(Aws::Vector<FormInput>&& value) { m_formsInputHasBeenSet = true; m_formsInput = std::move(value); }

    /**
     * <p>The metadata forms to be attached to the asset as part of asset revision.</p>
     */
    inline CreateAssetRevisionRequest& WithFormsInput(const Aws::Vector<FormInput>& value) { SetFormsInput(value); return *this;}

    /**
     * <p>The metadata forms to be attached to the asset as part of asset revision.</p>
     */
    inline CreateAssetRevisionRequest& WithFormsInput(Aws::Vector<FormInput>&& value) { SetFormsInput(std::move(value)); return *this;}

    /**
     * <p>The metadata forms to be attached to the asset as part of asset revision.</p>
     */
    inline CreateAssetRevisionRequest& AddFormsInput(const FormInput& value) { m_formsInputHasBeenSet = true; m_formsInput.push_back(value); return *this; }

    /**
     * <p>The metadata forms to be attached to the asset as part of asset revision.</p>
     */
    inline CreateAssetRevisionRequest& AddFormsInput(FormInput&& value) { m_formsInputHasBeenSet = true; m_formsInput.push_back(std::move(value)); return *this; }


    /**
     * <p>The glossary terms to be attached to the asset as part of asset revision.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const{ return m_glossaryTerms; }

    /**
     * <p>The glossary terms to be attached to the asset as part of asset revision.</p>
     */
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }

    /**
     * <p>The glossary terms to be attached to the asset as part of asset revision.</p>
     */
    inline void SetGlossaryTerms(const Aws::Vector<Aws::String>& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = value; }

    /**
     * <p>The glossary terms to be attached to the asset as part of asset revision.</p>
     */
    inline void SetGlossaryTerms(Aws::Vector<Aws::String>&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::move(value); }

    /**
     * <p>The glossary terms to be attached to the asset as part of asset revision.</p>
     */
    inline CreateAssetRevisionRequest& WithGlossaryTerms(const Aws::Vector<Aws::String>& value) { SetGlossaryTerms(value); return *this;}

    /**
     * <p>The glossary terms to be attached to the asset as part of asset revision.</p>
     */
    inline CreateAssetRevisionRequest& WithGlossaryTerms(Aws::Vector<Aws::String>&& value) { SetGlossaryTerms(std::move(value)); return *this;}

    /**
     * <p>The glossary terms to be attached to the asset as part of asset revision.</p>
     */
    inline CreateAssetRevisionRequest& AddGlossaryTerms(const Aws::String& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }

    /**
     * <p>The glossary terms to be attached to the asset as part of asset revision.</p>
     */
    inline CreateAssetRevisionRequest& AddGlossaryTerms(Aws::String&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(std::move(value)); return *this; }

    /**
     * <p>The glossary terms to be attached to the asset as part of asset revision.</p>
     */
    inline CreateAssetRevisionRequest& AddGlossaryTerms(const char* value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.push_back(value); return *this; }


    /**
     * <p>The identifier of the asset.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The identifier of the asset.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The identifier of the asset.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The identifier of the asset.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The identifier of the asset.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The identifier of the asset.</p>
     */
    inline CreateAssetRevisionRequest& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The identifier of the asset.</p>
     */
    inline CreateAssetRevisionRequest& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier of the asset.</p>
     */
    inline CreateAssetRevisionRequest& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>Te revised name of the asset.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Te revised name of the asset.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Te revised name of the asset.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Te revised name of the asset.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Te revised name of the asset.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Te revised name of the asset.</p>
     */
    inline CreateAssetRevisionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Te revised name of the asset.</p>
     */
    inline CreateAssetRevisionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Te revised name of the asset.</p>
     */
    inline CreateAssetRevisionRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline CreateAssetRevisionRequest& WithPredictionConfiguration(const PredictionConfiguration& value) { SetPredictionConfiguration(value); return *this;}

    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline CreateAssetRevisionRequest& WithPredictionConfiguration(PredictionConfiguration&& value) { SetPredictionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The revision type of the asset.</p>
     */
    inline const Aws::String& GetTypeRevision() const{ return m_typeRevision; }

    /**
     * <p>The revision type of the asset.</p>
     */
    inline bool TypeRevisionHasBeenSet() const { return m_typeRevisionHasBeenSet; }

    /**
     * <p>The revision type of the asset.</p>
     */
    inline void SetTypeRevision(const Aws::String& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = value; }

    /**
     * <p>The revision type of the asset.</p>
     */
    inline void SetTypeRevision(Aws::String&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::move(value); }

    /**
     * <p>The revision type of the asset.</p>
     */
    inline void SetTypeRevision(const char* value) { m_typeRevisionHasBeenSet = true; m_typeRevision.assign(value); }

    /**
     * <p>The revision type of the asset.</p>
     */
    inline CreateAssetRevisionRequest& WithTypeRevision(const Aws::String& value) { SetTypeRevision(value); return *this;}

    /**
     * <p>The revision type of the asset.</p>
     */
    inline CreateAssetRevisionRequest& WithTypeRevision(Aws::String&& value) { SetTypeRevision(std::move(value)); return *this;}

    /**
     * <p>The revision type of the asset.</p>
     */
    inline CreateAssetRevisionRequest& WithTypeRevision(const char* value) { SetTypeRevision(value); return *this;}

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

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    PredictionConfiguration m_predictionConfiguration;
    bool m_predictionConfigurationHasBeenSet = false;

    Aws::String m_typeRevision;
    bool m_typeRevisionHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
