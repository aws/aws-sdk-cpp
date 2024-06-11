/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/DataSyncRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/AzureBlobAuthenticationType.h>
#include <aws/datasync/model/AzureBlobSasConfiguration.h>
#include <aws/datasync/model/AzureBlobType.h>
#include <aws/datasync/model/AzureAccessTier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class UpdateLocationAzureBlobRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API UpdateLocationAzureBlobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLocationAzureBlob"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the ARN of the Azure Blob Storage transfer location that you're
     * updating.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }
    inline bool LocationArnHasBeenSet() const { return m_locationArnHasBeenSet; }
    inline void SetLocationArn(const Aws::String& value) { m_locationArnHasBeenSet = true; m_locationArn = value; }
    inline void SetLocationArn(Aws::String&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::move(value); }
    inline void SetLocationArn(const char* value) { m_locationArnHasBeenSet = true; m_locationArn.assign(value); }
    inline UpdateLocationAzureBlobRequest& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}
    inline UpdateLocationAzureBlobRequest& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}
    inline UpdateLocationAzureBlobRequest& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies path segments if you want to limit your transfer to a virtual
     * directory in your container (for example, <code>/my/images</code>).</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }
    inline UpdateLocationAzureBlobRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}
    inline UpdateLocationAzureBlobRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}
    inline UpdateLocationAzureBlobRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the authentication method DataSync uses to access your Azure Blob
     * Storage. DataSync can access blob storage using a shared access signature
     * (SAS).</p>
     */
    inline const AzureBlobAuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(const AzureBlobAuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline void SetAuthenticationType(AzureBlobAuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }
    inline UpdateLocationAzureBlobRequest& WithAuthenticationType(const AzureBlobAuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline UpdateLocationAzureBlobRequest& WithAuthenticationType(AzureBlobAuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the SAS configuration that allows DataSync to access your Azure
     * Blob Storage.</p>
     */
    inline const AzureBlobSasConfiguration& GetSasConfiguration() const{ return m_sasConfiguration; }
    inline bool SasConfigurationHasBeenSet() const { return m_sasConfigurationHasBeenSet; }
    inline void SetSasConfiguration(const AzureBlobSasConfiguration& value) { m_sasConfigurationHasBeenSet = true; m_sasConfiguration = value; }
    inline void SetSasConfiguration(AzureBlobSasConfiguration&& value) { m_sasConfigurationHasBeenSet = true; m_sasConfiguration = std::move(value); }
    inline UpdateLocationAzureBlobRequest& WithSasConfiguration(const AzureBlobSasConfiguration& value) { SetSasConfiguration(value); return *this;}
    inline UpdateLocationAzureBlobRequest& WithSasConfiguration(AzureBlobSasConfiguration&& value) { SetSasConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the type of blob that you want your objects or files to be when
     * transferring them into Azure Blob Storage. Currently, DataSync only supports
     * moving data into Azure Blob Storage as block blobs. For more information on blob
     * types, see the <a
     * href="https://learn.microsoft.com/en-us/rest/api/storageservices/understanding-block-blobs--append-blobs--and-page-blobs">Azure
     * Blob Storage documentation</a>.</p>
     */
    inline const AzureBlobType& GetBlobType() const{ return m_blobType; }
    inline bool BlobTypeHasBeenSet() const { return m_blobTypeHasBeenSet; }
    inline void SetBlobType(const AzureBlobType& value) { m_blobTypeHasBeenSet = true; m_blobType = value; }
    inline void SetBlobType(AzureBlobType&& value) { m_blobTypeHasBeenSet = true; m_blobType = std::move(value); }
    inline UpdateLocationAzureBlobRequest& WithBlobType(const AzureBlobType& value) { SetBlobType(value); return *this;}
    inline UpdateLocationAzureBlobRequest& WithBlobType(AzureBlobType&& value) { SetBlobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the access tier that you want your objects or files transferred
     * into. This only applies when using the location as a transfer destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/creating-azure-blob-location.html#azure-blob-access-tiers">Access
     * tiers</a>.</p>
     */
    inline const AzureAccessTier& GetAccessTier() const{ return m_accessTier; }
    inline bool AccessTierHasBeenSet() const { return m_accessTierHasBeenSet; }
    inline void SetAccessTier(const AzureAccessTier& value) { m_accessTierHasBeenSet = true; m_accessTier = value; }
    inline void SetAccessTier(AzureAccessTier&& value) { m_accessTierHasBeenSet = true; m_accessTier = std::move(value); }
    inline UpdateLocationAzureBlobRequest& WithAccessTier(const AzureAccessTier& value) { SetAccessTier(value); return *this;}
    inline UpdateLocationAzureBlobRequest& WithAccessTier(AzureAccessTier&& value) { SetAccessTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that can
     * connect with your Azure Blob Storage container.</p> <p>You can specify more than
     * one agent. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/multiple-agents.html">Using
     * multiple agents for your transfer</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }
    inline UpdateLocationAzureBlobRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}
    inline UpdateLocationAzureBlobRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}
    inline UpdateLocationAzureBlobRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    inline UpdateLocationAzureBlobRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }
    inline UpdateLocationAzureBlobRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    AzureBlobAuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    AzureBlobSasConfiguration m_sasConfiguration;
    bool m_sasConfigurationHasBeenSet = false;

    AzureBlobType m_blobType;
    bool m_blobTypeHasBeenSet = false;

    AzureAccessTier m_accessTier;
    bool m_accessTierHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
