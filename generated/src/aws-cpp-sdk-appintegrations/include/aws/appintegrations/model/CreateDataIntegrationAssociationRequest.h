/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appintegrations/AppIntegrationsService_EXPORTS.h>
#include <aws/appintegrations/AppIntegrationsServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/appintegrations/model/ExecutionConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AppIntegrationsService
{
namespace Model
{

  /**
   */
  class CreateDataIntegrationAssociationRequest : public AppIntegrationsServiceRequest
  {
  public:
    AWS_APPINTEGRATIONSSERVICE_API CreateDataIntegrationAssociationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataIntegrationAssociation"; }

    AWS_APPINTEGRATIONSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier for the DataIntegration.</p>
     */
    inline const Aws::String& GetDataIntegrationIdentifier() const { return m_dataIntegrationIdentifier; }
    inline bool DataIntegrationIdentifierHasBeenSet() const { return m_dataIntegrationIdentifierHasBeenSet; }
    template<typename DataIntegrationIdentifierT = Aws::String>
    void SetDataIntegrationIdentifier(DataIntegrationIdentifierT&& value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier = std::forward<DataIntegrationIdentifierT>(value); }
    template<typename DataIntegrationIdentifierT = Aws::String>
    CreateDataIntegrationAssociationRequest& WithDataIntegrationIdentifier(DataIntegrationIdentifierT&& value) { SetDataIntegrationIdentifier(std::forward<DataIntegrationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the client that is associated with the DataIntegration
     * association.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    CreateDataIntegrationAssociationRequest& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetObjectConfiguration() const { return m_objectConfiguration; }
    inline bool ObjectConfigurationHasBeenSet() const { return m_objectConfigurationHasBeenSet; }
    template<typename ObjectConfigurationT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    void SetObjectConfiguration(ObjectConfigurationT&& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration = std::forward<ObjectConfigurationT>(value); }
    template<typename ObjectConfigurationT = Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>>
    CreateDataIntegrationAssociationRequest& WithObjectConfiguration(ObjectConfigurationT&& value) { SetObjectConfiguration(std::forward<ObjectConfigurationT>(value)); return *this;}
    template<typename ObjectConfigurationKeyT = Aws::String, typename ObjectConfigurationValueT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    CreateDataIntegrationAssociationRequest& AddObjectConfiguration(ObjectConfigurationKeyT&& key, ObjectConfigurationValueT&& value) {
      m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(std::forward<ObjectConfigurationKeyT>(key), std::forward<ObjectConfigurationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The URI of the data destination.</p>
     */
    inline const Aws::String& GetDestinationURI() const { return m_destinationURI; }
    inline bool DestinationURIHasBeenSet() const { return m_destinationURIHasBeenSet; }
    template<typename DestinationURIT = Aws::String>
    void SetDestinationURI(DestinationURIT&& value) { m_destinationURIHasBeenSet = true; m_destinationURI = std::forward<DestinationURIT>(value); }
    template<typename DestinationURIT = Aws::String>
    CreateDataIntegrationAssociationRequest& WithDestinationURI(DestinationURIT&& value) { SetDestinationURI(std::forward<DestinationURIT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mapping of metadata to be extracted from the data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientAssociationMetadata() const { return m_clientAssociationMetadata; }
    inline bool ClientAssociationMetadataHasBeenSet() const { return m_clientAssociationMetadataHasBeenSet; }
    template<typename ClientAssociationMetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetClientAssociationMetadata(ClientAssociationMetadataT&& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata = std::forward<ClientAssociationMetadataT>(value); }
    template<typename ClientAssociationMetadataT = Aws::Map<Aws::String, Aws::String>>
    CreateDataIntegrationAssociationRequest& WithClientAssociationMetadata(ClientAssociationMetadataT&& value) { SetClientAssociationMetadata(std::forward<ClientAssociationMetadataT>(value)); return *this;}
    template<typename ClientAssociationMetadataKeyT = Aws::String, typename ClientAssociationMetadataValueT = Aws::String>
    CreateDataIntegrationAssociationRequest& AddClientAssociationMetadata(ClientAssociationMetadataKeyT&& key, ClientAssociationMetadataValueT&& value) {
      m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(std::forward<ClientAssociationMetadataKeyT>(key), std::forward<ClientAssociationMetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateDataIntegrationAssociationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for how the files should be pulled from the source.</p>
     */
    inline const ExecutionConfiguration& GetExecutionConfiguration() const { return m_executionConfiguration; }
    inline bool ExecutionConfigurationHasBeenSet() const { return m_executionConfigurationHasBeenSet; }
    template<typename ExecutionConfigurationT = ExecutionConfiguration>
    void SetExecutionConfiguration(ExecutionConfigurationT&& value) { m_executionConfigurationHasBeenSet = true; m_executionConfiguration = std::forward<ExecutionConfigurationT>(value); }
    template<typename ExecutionConfigurationT = ExecutionConfiguration>
    CreateDataIntegrationAssociationRequest& WithExecutionConfiguration(ExecutionConfigurationT&& value) { SetExecutionConfiguration(std::forward<ExecutionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataIntegrationIdentifier;
    bool m_dataIntegrationIdentifierHasBeenSet = false;

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>> m_objectConfiguration;
    bool m_objectConfigurationHasBeenSet = false;

    Aws::String m_destinationURI;
    bool m_destinationURIHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_clientAssociationMetadata;
    bool m_clientAssociationMetadataHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    ExecutionConfiguration m_executionConfiguration;
    bool m_executionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
