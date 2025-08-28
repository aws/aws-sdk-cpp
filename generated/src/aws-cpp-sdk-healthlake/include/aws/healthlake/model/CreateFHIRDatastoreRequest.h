/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/model/FHIRVersion.h>
#include <aws/healthlake/model/SseConfiguration.h>
#include <aws/healthlake/model/PreloadDataConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/healthlake/model/IdentityProviderConfiguration.h>
#include <aws/healthlake/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace HealthLake
{
namespace Model
{

  /**
   */
  class CreateFHIRDatastoreRequest : public HealthLakeRequest
  {
  public:
    AWS_HEALTHLAKE_API CreateFHIRDatastoreRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateFHIRDatastore"; }

    AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

    AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The data store name (user-generated).</p>
     */
    inline const Aws::String& GetDatastoreName() const { return m_datastoreName; }
    inline bool DatastoreNameHasBeenSet() const { return m_datastoreNameHasBeenSet; }
    template<typename DatastoreNameT = Aws::String>
    void SetDatastoreName(DatastoreNameT&& value) { m_datastoreNameHasBeenSet = true; m_datastoreName = std::forward<DatastoreNameT>(value); }
    template<typename DatastoreNameT = Aws::String>
    CreateFHIRDatastoreRequest& WithDatastoreName(DatastoreNameT&& value) { SetDatastoreName(std::forward<DatastoreNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The FHIR release version supported by the data store. Current support is for
     * version <code>R4</code>.</p>
     */
    inline FHIRVersion GetDatastoreTypeVersion() const { return m_datastoreTypeVersion; }
    inline bool DatastoreTypeVersionHasBeenSet() const { return m_datastoreTypeVersionHasBeenSet; }
    inline void SetDatastoreTypeVersion(FHIRVersion value) { m_datastoreTypeVersionHasBeenSet = true; m_datastoreTypeVersion = value; }
    inline CreateFHIRDatastoreRequest& WithDatastoreTypeVersion(FHIRVersion value) { SetDatastoreTypeVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The server-side encryption key configuration for a customer-provided
     * encryption key specified for creating a data store. </p>
     */
    inline const SseConfiguration& GetSseConfiguration() const { return m_sseConfiguration; }
    inline bool SseConfigurationHasBeenSet() const { return m_sseConfigurationHasBeenSet; }
    template<typename SseConfigurationT = SseConfiguration>
    void SetSseConfiguration(SseConfigurationT&& value) { m_sseConfigurationHasBeenSet = true; m_sseConfiguration = std::forward<SseConfigurationT>(value); }
    template<typename SseConfigurationT = SseConfiguration>
    CreateFHIRDatastoreRequest& WithSseConfiguration(SseConfigurationT&& value) { SetSseConfiguration(std::forward<SseConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional parameter to preload (import) open source Synthea FHIR data upon
     * creation of the data store.</p>
     */
    inline const PreloadDataConfig& GetPreloadDataConfig() const { return m_preloadDataConfig; }
    inline bool PreloadDataConfigHasBeenSet() const { return m_preloadDataConfigHasBeenSet; }
    template<typename PreloadDataConfigT = PreloadDataConfig>
    void SetPreloadDataConfig(PreloadDataConfigT&& value) { m_preloadDataConfigHasBeenSet = true; m_preloadDataConfig = std::forward<PreloadDataConfigT>(value); }
    template<typename PreloadDataConfigT = PreloadDataConfig>
    CreateFHIRDatastoreRequest& WithPreloadDataConfig(PreloadDataConfigT&& value) { SetPreloadDataConfig(std::forward<PreloadDataConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional user-provided token to ensure API idempotency.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateFHIRDatastoreRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource tags applied to a data store when it is created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateFHIRDatastoreRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateFHIRDatastoreRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identity provider configuration to use for the data store.</p>
     */
    inline const IdentityProviderConfiguration& GetIdentityProviderConfiguration() const { return m_identityProviderConfiguration; }
    inline bool IdentityProviderConfigurationHasBeenSet() const { return m_identityProviderConfigurationHasBeenSet; }
    template<typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
    void SetIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) { m_identityProviderConfigurationHasBeenSet = true; m_identityProviderConfiguration = std::forward<IdentityProviderConfigurationT>(value); }
    template<typename IdentityProviderConfigurationT = IdentityProviderConfiguration>
    CreateFHIRDatastoreRequest& WithIdentityProviderConfiguration(IdentityProviderConfigurationT&& value) { SetIdentityProviderConfiguration(std::forward<IdentityProviderConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_datastoreName;
    bool m_datastoreNameHasBeenSet = false;

    FHIRVersion m_datastoreTypeVersion{FHIRVersion::NOT_SET};
    bool m_datastoreTypeVersionHasBeenSet = false;

    SseConfiguration m_sseConfiguration;
    bool m_sseConfigurationHasBeenSet = false;

    PreloadDataConfig m_preloadDataConfig;
    bool m_preloadDataConfigHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    IdentityProviderConfiguration m_identityProviderConfiguration;
    bool m_identityProviderConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace HealthLake
} // namespace Aws
