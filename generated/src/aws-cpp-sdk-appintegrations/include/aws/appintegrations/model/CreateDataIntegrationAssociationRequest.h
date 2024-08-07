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
    AWS_APPINTEGRATIONSSERVICE_API CreateDataIntegrationAssociationRequest();

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
    inline const Aws::String& GetDataIntegrationIdentifier() const{ return m_dataIntegrationIdentifier; }
    inline bool DataIntegrationIdentifierHasBeenSet() const { return m_dataIntegrationIdentifierHasBeenSet; }
    inline void SetDataIntegrationIdentifier(const Aws::String& value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier = value; }
    inline void SetDataIntegrationIdentifier(Aws::String&& value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier = std::move(value); }
    inline void SetDataIntegrationIdentifier(const char* value) { m_dataIntegrationIdentifierHasBeenSet = true; m_dataIntegrationIdentifier.assign(value); }
    inline CreateDataIntegrationAssociationRequest& WithDataIntegrationIdentifier(const Aws::String& value) { SetDataIntegrationIdentifier(value); return *this;}
    inline CreateDataIntegrationAssociationRequest& WithDataIntegrationIdentifier(Aws::String&& value) { SetDataIntegrationIdentifier(std::move(value)); return *this;}
    inline CreateDataIntegrationAssociationRequest& WithDataIntegrationIdentifier(const char* value) { SetDataIntegrationIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the client that is associated with the DataIntegration
     * association.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }
    inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
    inline void SetClientId(const Aws::String& value) { m_clientIdHasBeenSet = true; m_clientId = value; }
    inline void SetClientId(Aws::String&& value) { m_clientIdHasBeenSet = true; m_clientId = std::move(value); }
    inline void SetClientId(const char* value) { m_clientIdHasBeenSet = true; m_clientId.assign(value); }
    inline CreateDataIntegrationAssociationRequest& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}
    inline CreateDataIntegrationAssociationRequest& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}
    inline CreateDataIntegrationAssociationRequest& WithClientId(const char* value) { SetClientId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& GetObjectConfiguration() const{ return m_objectConfiguration; }
    inline bool ObjectConfigurationHasBeenSet() const { return m_objectConfigurationHasBeenSet; }
    inline void SetObjectConfiguration(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration = value; }
    inline void SetObjectConfiguration(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration = std::move(value); }
    inline CreateDataIntegrationAssociationRequest& WithObjectConfiguration(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>& value) { SetObjectConfiguration(value); return *this;}
    inline CreateDataIntegrationAssociationRequest& WithObjectConfiguration(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::Vector<Aws::String>>>&& value) { SetObjectConfiguration(std::move(value)); return *this;}
    inline CreateDataIntegrationAssociationRequest& AddObjectConfiguration(const Aws::String& key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(key, value); return *this; }
    inline CreateDataIntegrationAssociationRequest& AddObjectConfiguration(Aws::String&& key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(std::move(key), value); return *this; }
    inline CreateDataIntegrationAssociationRequest& AddObjectConfiguration(const Aws::String& key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(key, std::move(value)); return *this; }
    inline CreateDataIntegrationAssociationRequest& AddObjectConfiguration(Aws::String&& key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDataIntegrationAssociationRequest& AddObjectConfiguration(const char* key, Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(key, std::move(value)); return *this; }
    inline CreateDataIntegrationAssociationRequest& AddObjectConfiguration(const char* key, const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_objectConfigurationHasBeenSet = true; m_objectConfiguration.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The URI of the data destination.</p>
     */
    inline const Aws::String& GetDestinationURI() const{ return m_destinationURI; }
    inline bool DestinationURIHasBeenSet() const { return m_destinationURIHasBeenSet; }
    inline void SetDestinationURI(const Aws::String& value) { m_destinationURIHasBeenSet = true; m_destinationURI = value; }
    inline void SetDestinationURI(Aws::String&& value) { m_destinationURIHasBeenSet = true; m_destinationURI = std::move(value); }
    inline void SetDestinationURI(const char* value) { m_destinationURIHasBeenSet = true; m_destinationURI.assign(value); }
    inline CreateDataIntegrationAssociationRequest& WithDestinationURI(const Aws::String& value) { SetDestinationURI(value); return *this;}
    inline CreateDataIntegrationAssociationRequest& WithDestinationURI(Aws::String&& value) { SetDestinationURI(std::move(value)); return *this;}
    inline CreateDataIntegrationAssociationRequest& WithDestinationURI(const char* value) { SetDestinationURI(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mapping of metadata to be extracted from the data.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetClientAssociationMetadata() const{ return m_clientAssociationMetadata; }
    inline bool ClientAssociationMetadataHasBeenSet() const { return m_clientAssociationMetadataHasBeenSet; }
    inline void SetClientAssociationMetadata(const Aws::Map<Aws::String, Aws::String>& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata = value; }
    inline void SetClientAssociationMetadata(Aws::Map<Aws::String, Aws::String>&& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata = std::move(value); }
    inline CreateDataIntegrationAssociationRequest& WithClientAssociationMetadata(const Aws::Map<Aws::String, Aws::String>& value) { SetClientAssociationMetadata(value); return *this;}
    inline CreateDataIntegrationAssociationRequest& WithClientAssociationMetadata(Aws::Map<Aws::String, Aws::String>&& value) { SetClientAssociationMetadata(std::move(value)); return *this;}
    inline CreateDataIntegrationAssociationRequest& AddClientAssociationMetadata(const Aws::String& key, const Aws::String& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(key, value); return *this; }
    inline CreateDataIntegrationAssociationRequest& AddClientAssociationMetadata(Aws::String&& key, const Aws::String& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(std::move(key), value); return *this; }
    inline CreateDataIntegrationAssociationRequest& AddClientAssociationMetadata(const Aws::String& key, Aws::String&& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(key, std::move(value)); return *this; }
    inline CreateDataIntegrationAssociationRequest& AddClientAssociationMetadata(Aws::String&& key, Aws::String&& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDataIntegrationAssociationRequest& AddClientAssociationMetadata(const char* key, Aws::String&& value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(key, std::move(value)); return *this; }
    inline CreateDataIntegrationAssociationRequest& AddClientAssociationMetadata(Aws::String&& key, const char* value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(std::move(key), value); return *this; }
    inline CreateDataIntegrationAssociationRequest& AddClientAssociationMetadata(const char* key, const char* value) { m_clientAssociationMetadataHasBeenSet = true; m_clientAssociationMetadata.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. If not provided, the Amazon Web Services SDK
     * populates this field. For more information about idempotency, see <a
     * href="https://aws.amazon.com/builders-library/making-retries-safe-with-idempotent-APIs/">Making
     * retries safe with idempotent APIs</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateDataIntegrationAssociationRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateDataIntegrationAssociationRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateDataIntegrationAssociationRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for how the files should be pulled from the source.</p>
     */
    inline const ExecutionConfiguration& GetExecutionConfiguration() const{ return m_executionConfiguration; }
    inline bool ExecutionConfigurationHasBeenSet() const { return m_executionConfigurationHasBeenSet; }
    inline void SetExecutionConfiguration(const ExecutionConfiguration& value) { m_executionConfigurationHasBeenSet = true; m_executionConfiguration = value; }
    inline void SetExecutionConfiguration(ExecutionConfiguration&& value) { m_executionConfigurationHasBeenSet = true; m_executionConfiguration = std::move(value); }
    inline CreateDataIntegrationAssociationRequest& WithExecutionConfiguration(const ExecutionConfiguration& value) { SetExecutionConfiguration(value); return *this;}
    inline CreateDataIntegrationAssociationRequest& WithExecutionConfiguration(ExecutionConfiguration&& value) { SetExecutionConfiguration(std::move(value)); return *this;}
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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    ExecutionConfiguration m_executionConfiguration;
    bool m_executionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace AppIntegrationsService
} // namespace Aws
