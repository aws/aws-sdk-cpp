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
#include <aws/datasync/model/TagListEntry.h>
#include <utility>

namespace Aws
{
namespace DataSync
{
namespace Model
{

  /**
   */
  class CreateLocationAzureBlobRequest : public DataSyncRequest
  {
  public:
    AWS_DATASYNC_API CreateLocationAzureBlobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationAzureBlob"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Specifies the URL of the Azure Blob Storage container involved in your
     * transfer.</p>
     */
    inline const Aws::String& GetContainerUrl() const{ return m_containerUrl; }

    /**
     * <p>Specifies the URL of the Azure Blob Storage container involved in your
     * transfer.</p>
     */
    inline bool ContainerUrlHasBeenSet() const { return m_containerUrlHasBeenSet; }

    /**
     * <p>Specifies the URL of the Azure Blob Storage container involved in your
     * transfer.</p>
     */
    inline void SetContainerUrl(const Aws::String& value) { m_containerUrlHasBeenSet = true; m_containerUrl = value; }

    /**
     * <p>Specifies the URL of the Azure Blob Storage container involved in your
     * transfer.</p>
     */
    inline void SetContainerUrl(Aws::String&& value) { m_containerUrlHasBeenSet = true; m_containerUrl = std::move(value); }

    /**
     * <p>Specifies the URL of the Azure Blob Storage container involved in your
     * transfer.</p>
     */
    inline void SetContainerUrl(const char* value) { m_containerUrlHasBeenSet = true; m_containerUrl.assign(value); }

    /**
     * <p>Specifies the URL of the Azure Blob Storage container involved in your
     * transfer.</p>
     */
    inline CreateLocationAzureBlobRequest& WithContainerUrl(const Aws::String& value) { SetContainerUrl(value); return *this;}

    /**
     * <p>Specifies the URL of the Azure Blob Storage container involved in your
     * transfer.</p>
     */
    inline CreateLocationAzureBlobRequest& WithContainerUrl(Aws::String&& value) { SetContainerUrl(std::move(value)); return *this;}

    /**
     * <p>Specifies the URL of the Azure Blob Storage container involved in your
     * transfer.</p>
     */
    inline CreateLocationAzureBlobRequest& WithContainerUrl(const char* value) { SetContainerUrl(value); return *this;}


    /**
     * <p>Specifies the authentication method DataSync uses to access your Azure Blob
     * Storage. DataSync can access blob storage using a shared access signature
     * (SAS).</p>
     */
    inline const AzureBlobAuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }

    /**
     * <p>Specifies the authentication method DataSync uses to access your Azure Blob
     * Storage. DataSync can access blob storage using a shared access signature
     * (SAS).</p>
     */
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }

    /**
     * <p>Specifies the authentication method DataSync uses to access your Azure Blob
     * Storage. DataSync can access blob storage using a shared access signature
     * (SAS).</p>
     */
    inline void SetAuthenticationType(const AzureBlobAuthenticationType& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }

    /**
     * <p>Specifies the authentication method DataSync uses to access your Azure Blob
     * Storage. DataSync can access blob storage using a shared access signature
     * (SAS).</p>
     */
    inline void SetAuthenticationType(AzureBlobAuthenticationType&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::move(value); }

    /**
     * <p>Specifies the authentication method DataSync uses to access your Azure Blob
     * Storage. DataSync can access blob storage using a shared access signature
     * (SAS).</p>
     */
    inline CreateLocationAzureBlobRequest& WithAuthenticationType(const AzureBlobAuthenticationType& value) { SetAuthenticationType(value); return *this;}

    /**
     * <p>Specifies the authentication method DataSync uses to access your Azure Blob
     * Storage. DataSync can access blob storage using a shared access signature
     * (SAS).</p>
     */
    inline CreateLocationAzureBlobRequest& WithAuthenticationType(AzureBlobAuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}


    /**
     * <p>Specifies the SAS configuration that allows DataSync to access your Azure
     * Blob Storage.</p>
     */
    inline const AzureBlobSasConfiguration& GetSasConfiguration() const{ return m_sasConfiguration; }

    /**
     * <p>Specifies the SAS configuration that allows DataSync to access your Azure
     * Blob Storage.</p>
     */
    inline bool SasConfigurationHasBeenSet() const { return m_sasConfigurationHasBeenSet; }

    /**
     * <p>Specifies the SAS configuration that allows DataSync to access your Azure
     * Blob Storage.</p>
     */
    inline void SetSasConfiguration(const AzureBlobSasConfiguration& value) { m_sasConfigurationHasBeenSet = true; m_sasConfiguration = value; }

    /**
     * <p>Specifies the SAS configuration that allows DataSync to access your Azure
     * Blob Storage.</p>
     */
    inline void SetSasConfiguration(AzureBlobSasConfiguration&& value) { m_sasConfigurationHasBeenSet = true; m_sasConfiguration = std::move(value); }

    /**
     * <p>Specifies the SAS configuration that allows DataSync to access your Azure
     * Blob Storage.</p>
     */
    inline CreateLocationAzureBlobRequest& WithSasConfiguration(const AzureBlobSasConfiguration& value) { SetSasConfiguration(value); return *this;}

    /**
     * <p>Specifies the SAS configuration that allows DataSync to access your Azure
     * Blob Storage.</p>
     */
    inline CreateLocationAzureBlobRequest& WithSasConfiguration(AzureBlobSasConfiguration&& value) { SetSasConfiguration(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of blob that you want your objects or files to be when
     * transferring them into Azure Blob Storage. Currently, DataSync only supports
     * moving data into Azure Blob Storage as block blobs. For more information on blob
     * types, see the <a
     * href="https://learn.microsoft.com/en-us/rest/api/storageservices/understanding-block-blobs--append-blobs--and-page-blobs">Azure
     * Blob Storage documentation</a>.</p>
     */
    inline const AzureBlobType& GetBlobType() const{ return m_blobType; }

    /**
     * <p>Specifies the type of blob that you want your objects or files to be when
     * transferring them into Azure Blob Storage. Currently, DataSync only supports
     * moving data into Azure Blob Storage as block blobs. For more information on blob
     * types, see the <a
     * href="https://learn.microsoft.com/en-us/rest/api/storageservices/understanding-block-blobs--append-blobs--and-page-blobs">Azure
     * Blob Storage documentation</a>.</p>
     */
    inline bool BlobTypeHasBeenSet() const { return m_blobTypeHasBeenSet; }

    /**
     * <p>Specifies the type of blob that you want your objects or files to be when
     * transferring them into Azure Blob Storage. Currently, DataSync only supports
     * moving data into Azure Blob Storage as block blobs. For more information on blob
     * types, see the <a
     * href="https://learn.microsoft.com/en-us/rest/api/storageservices/understanding-block-blobs--append-blobs--and-page-blobs">Azure
     * Blob Storage documentation</a>.</p>
     */
    inline void SetBlobType(const AzureBlobType& value) { m_blobTypeHasBeenSet = true; m_blobType = value; }

    /**
     * <p>Specifies the type of blob that you want your objects or files to be when
     * transferring them into Azure Blob Storage. Currently, DataSync only supports
     * moving data into Azure Blob Storage as block blobs. For more information on blob
     * types, see the <a
     * href="https://learn.microsoft.com/en-us/rest/api/storageservices/understanding-block-blobs--append-blobs--and-page-blobs">Azure
     * Blob Storage documentation</a>.</p>
     */
    inline void SetBlobType(AzureBlobType&& value) { m_blobTypeHasBeenSet = true; m_blobType = std::move(value); }

    /**
     * <p>Specifies the type of blob that you want your objects or files to be when
     * transferring them into Azure Blob Storage. Currently, DataSync only supports
     * moving data into Azure Blob Storage as block blobs. For more information on blob
     * types, see the <a
     * href="https://learn.microsoft.com/en-us/rest/api/storageservices/understanding-block-blobs--append-blobs--and-page-blobs">Azure
     * Blob Storage documentation</a>.</p>
     */
    inline CreateLocationAzureBlobRequest& WithBlobType(const AzureBlobType& value) { SetBlobType(value); return *this;}

    /**
     * <p>Specifies the type of blob that you want your objects or files to be when
     * transferring them into Azure Blob Storage. Currently, DataSync only supports
     * moving data into Azure Blob Storage as block blobs. For more information on blob
     * types, see the <a
     * href="https://learn.microsoft.com/en-us/rest/api/storageservices/understanding-block-blobs--append-blobs--and-page-blobs">Azure
     * Blob Storage documentation</a>.</p>
     */
    inline CreateLocationAzureBlobRequest& WithBlobType(AzureBlobType&& value) { SetBlobType(std::move(value)); return *this;}


    /**
     * <p>Specifies the access tier that you want your objects or files transferred
     * into. This only applies when using the location as a transfer destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/creating-azure-blob-location.html#azure-blob-access-tiers">Access
     * tiers</a>.</p>
     */
    inline const AzureAccessTier& GetAccessTier() const{ return m_accessTier; }

    /**
     * <p>Specifies the access tier that you want your objects or files transferred
     * into. This only applies when using the location as a transfer destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/creating-azure-blob-location.html#azure-blob-access-tiers">Access
     * tiers</a>.</p>
     */
    inline bool AccessTierHasBeenSet() const { return m_accessTierHasBeenSet; }

    /**
     * <p>Specifies the access tier that you want your objects or files transferred
     * into. This only applies when using the location as a transfer destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/creating-azure-blob-location.html#azure-blob-access-tiers">Access
     * tiers</a>.</p>
     */
    inline void SetAccessTier(const AzureAccessTier& value) { m_accessTierHasBeenSet = true; m_accessTier = value; }

    /**
     * <p>Specifies the access tier that you want your objects or files transferred
     * into. This only applies when using the location as a transfer destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/creating-azure-blob-location.html#azure-blob-access-tiers">Access
     * tiers</a>.</p>
     */
    inline void SetAccessTier(AzureAccessTier&& value) { m_accessTierHasBeenSet = true; m_accessTier = std::move(value); }

    /**
     * <p>Specifies the access tier that you want your objects or files transferred
     * into. This only applies when using the location as a transfer destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/creating-azure-blob-location.html#azure-blob-access-tiers">Access
     * tiers</a>.</p>
     */
    inline CreateLocationAzureBlobRequest& WithAccessTier(const AzureAccessTier& value) { SetAccessTier(value); return *this;}

    /**
     * <p>Specifies the access tier that you want your objects or files transferred
     * into. This only applies when using the location as a transfer destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/creating-azure-blob-location.html#azure-blob-access-tiers">Access
     * tiers</a>.</p>
     */
    inline CreateLocationAzureBlobRequest& WithAccessTier(AzureAccessTier&& value) { SetAccessTier(std::move(value)); return *this;}


    /**
     * <p>Specifies path segments if you want to limit your transfer to a virtual
     * directory in your container (for example, <code>/my/images</code>).</p>
     */
    inline const Aws::String& GetSubdirectory() const{ return m_subdirectory; }

    /**
     * <p>Specifies path segments if you want to limit your transfer to a virtual
     * directory in your container (for example, <code>/my/images</code>).</p>
     */
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }

    /**
     * <p>Specifies path segments if you want to limit your transfer to a virtual
     * directory in your container (for example, <code>/my/images</code>).</p>
     */
    inline void SetSubdirectory(const Aws::String& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = value; }

    /**
     * <p>Specifies path segments if you want to limit your transfer to a virtual
     * directory in your container (for example, <code>/my/images</code>).</p>
     */
    inline void SetSubdirectory(Aws::String&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::move(value); }

    /**
     * <p>Specifies path segments if you want to limit your transfer to a virtual
     * directory in your container (for example, <code>/my/images</code>).</p>
     */
    inline void SetSubdirectory(const char* value) { m_subdirectoryHasBeenSet = true; m_subdirectory.assign(value); }

    /**
     * <p>Specifies path segments if you want to limit your transfer to a virtual
     * directory in your container (for example, <code>/my/images</code>).</p>
     */
    inline CreateLocationAzureBlobRequest& WithSubdirectory(const Aws::String& value) { SetSubdirectory(value); return *this;}

    /**
     * <p>Specifies path segments if you want to limit your transfer to a virtual
     * directory in your container (for example, <code>/my/images</code>).</p>
     */
    inline CreateLocationAzureBlobRequest& WithSubdirectory(Aws::String&& value) { SetSubdirectory(std::move(value)); return *this;}

    /**
     * <p>Specifies path segments if you want to limit your transfer to a virtual
     * directory in your container (for example, <code>/my/images</code>).</p>
     */
    inline CreateLocationAzureBlobRequest& WithSubdirectory(const char* value) { SetSubdirectory(value); return *this;}


    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that can
     * connect with your Azure Blob Storage container.</p> <p>You can specify more than
     * one agent. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/multiple-agents.html">Using
     * multiple agents for your transfer</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that can
     * connect with your Azure Blob Storage container.</p> <p>You can specify more than
     * one agent. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/multiple-agents.html">Using
     * multiple agents for your transfer</a>.</p>
     */
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that can
     * connect with your Azure Blob Storage container.</p> <p>You can specify more than
     * one agent. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/multiple-agents.html">Using
     * multiple agents for your transfer</a>.</p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArnsHasBeenSet = true; m_agentArns = value; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that can
     * connect with your Azure Blob Storage container.</p> <p>You can specify more than
     * one agent. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/multiple-agents.html">Using
     * multiple agents for your transfer</a>.</p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::move(value); }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that can
     * connect with your Azure Blob Storage container.</p> <p>You can specify more than
     * one agent. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/multiple-agents.html">Using
     * multiple agents for your transfer</a>.</p>
     */
    inline CreateLocationAzureBlobRequest& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that can
     * connect with your Azure Blob Storage container.</p> <p>You can specify more than
     * one agent. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/multiple-agents.html">Using
     * multiple agents for your transfer</a>.</p>
     */
    inline CreateLocationAzureBlobRequest& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that can
     * connect with your Azure Blob Storage container.</p> <p>You can specify more than
     * one agent. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/multiple-agents.html">Using
     * multiple agents for your transfer</a>.</p>
     */
    inline CreateLocationAzureBlobRequest& AddAgentArns(const Aws::String& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that can
     * connect with your Azure Blob Storage container.</p> <p>You can specify more than
     * one agent. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/multiple-agents.html">Using
     * multiple agents for your transfer</a>.</p>
     */
    inline CreateLocationAzureBlobRequest& AddAgentArns(Aws::String&& value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that can
     * connect with your Azure Blob Storage container.</p> <p>You can specify more than
     * one agent. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/multiple-agents.html">Using
     * multiple agents for your transfer</a>.</p>
     */
    inline CreateLocationAzureBlobRequest& AddAgentArns(const char* value) { m_agentArnsHasBeenSet = true; m_agentArns.push_back(value); return *this; }


    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const{ return m_tags; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline void SetTags(const Aws::Vector<TagListEntry>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline void SetTags(Aws::Vector<TagListEntry>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline CreateLocationAzureBlobRequest& WithTags(const Aws::Vector<TagListEntry>& value) { SetTags(value); return *this;}

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline CreateLocationAzureBlobRequest& WithTags(Aws::Vector<TagListEntry>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline CreateLocationAzureBlobRequest& AddTags(const TagListEntry& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline CreateLocationAzureBlobRequest& AddTags(TagListEntry&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_containerUrl;
    bool m_containerUrlHasBeenSet = false;

    AzureBlobAuthenticationType m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    AzureBlobSasConfiguration m_sasConfiguration;
    bool m_sasConfigurationHasBeenSet = false;

    AzureBlobType m_blobType;
    bool m_blobTypeHasBeenSet = false;

    AzureAccessTier m_accessTier;
    bool m_accessTierHasBeenSet = false;

    Aws::String m_subdirectory;
    bool m_subdirectoryHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::Vector<TagListEntry> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
