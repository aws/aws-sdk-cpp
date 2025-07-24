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
    AWS_DATAZONE_API CreateAssetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAsset"; }

    AWS_DATAZONE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that is provided to ensure the
     * idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateAssetRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Asset description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateAssetRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon DataZone domain where the asset is created.</p>
     */
    inline const Aws::String& GetDomainIdentifier() const { return m_domainIdentifier; }
    inline bool DomainIdentifierHasBeenSet() const { return m_domainIdentifierHasBeenSet; }
    template<typename DomainIdentifierT = Aws::String>
    void SetDomainIdentifier(DomainIdentifierT&& value) { m_domainIdentifierHasBeenSet = true; m_domainIdentifier = std::forward<DomainIdentifierT>(value); }
    template<typename DomainIdentifierT = Aws::String>
    CreateAssetRequest& WithDomainIdentifier(DomainIdentifierT&& value) { SetDomainIdentifier(std::forward<DomainIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external identifier of the asset.</p> <p>If the value for the
     * <code>externalIdentifier</code> parameter is specified, it must be a unique
     * value.</p>
     */
    inline const Aws::String& GetExternalIdentifier() const { return m_externalIdentifier; }
    inline bool ExternalIdentifierHasBeenSet() const { return m_externalIdentifierHasBeenSet; }
    template<typename ExternalIdentifierT = Aws::String>
    void SetExternalIdentifier(ExternalIdentifierT&& value) { m_externalIdentifierHasBeenSet = true; m_externalIdentifier = std::forward<ExternalIdentifierT>(value); }
    template<typename ExternalIdentifierT = Aws::String>
    CreateAssetRequest& WithExternalIdentifier(ExternalIdentifierT&& value) { SetExternalIdentifier(std::forward<ExternalIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata forms attached to the asset.</p>
     */
    inline const Aws::Vector<FormInput>& GetFormsInput() const { return m_formsInput; }
    inline bool FormsInputHasBeenSet() const { return m_formsInputHasBeenSet; }
    template<typename FormsInputT = Aws::Vector<FormInput>>
    void SetFormsInput(FormsInputT&& value) { m_formsInputHasBeenSet = true; m_formsInput = std::forward<FormsInputT>(value); }
    template<typename FormsInputT = Aws::Vector<FormInput>>
    CreateAssetRequest& WithFormsInput(FormsInputT&& value) { SetFormsInput(std::forward<FormsInputT>(value)); return *this;}
    template<typename FormsInputT = FormInput>
    CreateAssetRequest& AddFormsInput(FormsInputT&& value) { m_formsInputHasBeenSet = true; m_formsInput.emplace_back(std::forward<FormsInputT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Glossary terms attached to the asset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlossaryTerms() const { return m_glossaryTerms; }
    inline bool GlossaryTermsHasBeenSet() const { return m_glossaryTermsHasBeenSet; }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    void SetGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms = std::forward<GlossaryTermsT>(value); }
    template<typename GlossaryTermsT = Aws::Vector<Aws::String>>
    CreateAssetRequest& WithGlossaryTerms(GlossaryTermsT&& value) { SetGlossaryTerms(std::forward<GlossaryTermsT>(value)); return *this;}
    template<typename GlossaryTermsT = Aws::String>
    CreateAssetRequest& AddGlossaryTerms(GlossaryTermsT&& value) { m_glossaryTermsHasBeenSet = true; m_glossaryTerms.emplace_back(std::forward<GlossaryTermsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Asset name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAssetRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the project that owns this asset.</p>
     */
    inline const Aws::String& GetOwningProjectIdentifier() const { return m_owningProjectIdentifier; }
    inline bool OwningProjectIdentifierHasBeenSet() const { return m_owningProjectIdentifierHasBeenSet; }
    template<typename OwningProjectIdentifierT = Aws::String>
    void SetOwningProjectIdentifier(OwningProjectIdentifierT&& value) { m_owningProjectIdentifierHasBeenSet = true; m_owningProjectIdentifier = std::forward<OwningProjectIdentifierT>(value); }
    template<typename OwningProjectIdentifierT = Aws::String>
    CreateAssetRequest& WithOwningProjectIdentifier(OwningProjectIdentifierT&& value) { SetOwningProjectIdentifier(std::forward<OwningProjectIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration of the automatically generated business-friendly metadata
     * for the asset.</p>
     */
    inline const PredictionConfiguration& GetPredictionConfiguration() const { return m_predictionConfiguration; }
    inline bool PredictionConfigurationHasBeenSet() const { return m_predictionConfigurationHasBeenSet; }
    template<typename PredictionConfigurationT = PredictionConfiguration>
    void SetPredictionConfiguration(PredictionConfigurationT&& value) { m_predictionConfigurationHasBeenSet = true; m_predictionConfiguration = std::forward<PredictionConfigurationT>(value); }
    template<typename PredictionConfigurationT = PredictionConfiguration>
    CreateAssetRequest& WithPredictionConfiguration(PredictionConfigurationT&& value) { SetPredictionConfiguration(std::forward<PredictionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of this asset's type.</p>
     */
    inline const Aws::String& GetTypeIdentifier() const { return m_typeIdentifier; }
    inline bool TypeIdentifierHasBeenSet() const { return m_typeIdentifierHasBeenSet; }
    template<typename TypeIdentifierT = Aws::String>
    void SetTypeIdentifier(TypeIdentifierT&& value) { m_typeIdentifierHasBeenSet = true; m_typeIdentifier = std::forward<TypeIdentifierT>(value); }
    template<typename TypeIdentifierT = Aws::String>
    CreateAssetRequest& WithTypeIdentifier(TypeIdentifierT&& value) { SetTypeIdentifier(std::forward<TypeIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The revision of this asset's type.</p>
     */
    inline const Aws::String& GetTypeRevision() const { return m_typeRevision; }
    inline bool TypeRevisionHasBeenSet() const { return m_typeRevisionHasBeenSet; }
    template<typename TypeRevisionT = Aws::String>
    void SetTypeRevision(TypeRevisionT&& value) { m_typeRevisionHasBeenSet = true; m_typeRevision = std::forward<TypeRevisionT>(value); }
    template<typename TypeRevisionT = Aws::String>
    CreateAssetRequest& WithTypeRevision(TypeRevisionT&& value) { SetTypeRevision(std::forward<TypeRevisionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

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
