﻿/**
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
    AWS_DATASYNC_API CreateLocationAzureBlobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLocationAzureBlob"; }

    AWS_DATASYNC_API Aws::String SerializePayload() const override;

    AWS_DATASYNC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>Specifies the URL of the Azure Blob Storage container involved in your
     * transfer.</p>
     */
    inline const Aws::String& GetContainerUrl() const { return m_containerUrl; }
    inline bool ContainerUrlHasBeenSet() const { return m_containerUrlHasBeenSet; }
    template<typename ContainerUrlT = Aws::String>
    void SetContainerUrl(ContainerUrlT&& value) { m_containerUrlHasBeenSet = true; m_containerUrl = std::forward<ContainerUrlT>(value); }
    template<typename ContainerUrlT = Aws::String>
    CreateLocationAzureBlobRequest& WithContainerUrl(ContainerUrlT&& value) { SetContainerUrl(std::forward<ContainerUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the authentication method DataSync uses to access your Azure Blob
     * Storage. DataSync can access blob storage using a shared access signature
     * (SAS).</p>
     */
    inline AzureBlobAuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    inline void SetAuthenticationType(AzureBlobAuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline CreateLocationAzureBlobRequest& WithAuthenticationType(AzureBlobAuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the SAS configuration that allows DataSync to access your Azure
     * Blob Storage.</p>
     */
    inline const AzureBlobSasConfiguration& GetSasConfiguration() const { return m_sasConfiguration; }
    inline bool SasConfigurationHasBeenSet() const { return m_sasConfigurationHasBeenSet; }
    template<typename SasConfigurationT = AzureBlobSasConfiguration>
    void SetSasConfiguration(SasConfigurationT&& value) { m_sasConfigurationHasBeenSet = true; m_sasConfiguration = std::forward<SasConfigurationT>(value); }
    template<typename SasConfigurationT = AzureBlobSasConfiguration>
    CreateLocationAzureBlobRequest& WithSasConfiguration(SasConfigurationT&& value) { SetSasConfiguration(std::forward<SasConfigurationT>(value)); return *this;}
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
    inline AzureBlobType GetBlobType() const { return m_blobType; }
    inline bool BlobTypeHasBeenSet() const { return m_blobTypeHasBeenSet; }
    inline void SetBlobType(AzureBlobType value) { m_blobTypeHasBeenSet = true; m_blobType = value; }
    inline CreateLocationAzureBlobRequest& WithBlobType(AzureBlobType value) { SetBlobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the access tier that you want your objects or files transferred
     * into. This only applies when using the location as a transfer destination. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/creating-azure-blob-location.html#azure-blob-access-tiers">Access
     * tiers</a>.</p>
     */
    inline AzureAccessTier GetAccessTier() const { return m_accessTier; }
    inline bool AccessTierHasBeenSet() const { return m_accessTierHasBeenSet; }
    inline void SetAccessTier(AzureAccessTier value) { m_accessTierHasBeenSet = true; m_accessTier = value; }
    inline CreateLocationAzureBlobRequest& WithAccessTier(AzureAccessTier value) { SetAccessTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies path segments if you want to limit your transfer to a virtual
     * directory in your container (for example, <code>/my/images</code>).</p>
     */
    inline const Aws::String& GetSubdirectory() const { return m_subdirectory; }
    inline bool SubdirectoryHasBeenSet() const { return m_subdirectoryHasBeenSet; }
    template<typename SubdirectoryT = Aws::String>
    void SetSubdirectory(SubdirectoryT&& value) { m_subdirectoryHasBeenSet = true; m_subdirectory = std::forward<SubdirectoryT>(value); }
    template<typename SubdirectoryT = Aws::String>
    CreateLocationAzureBlobRequest& WithSubdirectory(SubdirectoryT&& value) { SetSubdirectory(std::forward<SubdirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Amazon Resource Name (ARN) of the DataSync agent that can
     * connect with your Azure Blob Storage container.</p> <p>You can specify more than
     * one agent. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/multiple-agents.html">Using
     * multiple agents for your transfer</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const { return m_agentArns; }
    inline bool AgentArnsHasBeenSet() const { return m_agentArnsHasBeenSet; }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    void SetAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::forward<AgentArnsT>(value); }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    CreateLocationAzureBlobRequest& WithAgentArns(AgentArnsT&& value) { SetAgentArns(std::forward<AgentArnsT>(value)); return *this;}
    template<typename AgentArnsT = Aws::String>
    CreateLocationAzureBlobRequest& AddAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns.emplace_back(std::forward<AgentArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies labels that help you categorize, filter, and search for your Amazon
     * Web Services resources. We recommend creating at least a name tag for your
     * transfer location.</p>
     */
    inline const Aws::Vector<TagListEntry>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<TagListEntry>>
    CreateLocationAzureBlobRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = TagListEntry>
    CreateLocationAzureBlobRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_containerUrl;
    bool m_containerUrlHasBeenSet = false;

    AzureBlobAuthenticationType m_authenticationType{AzureBlobAuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    AzureBlobSasConfiguration m_sasConfiguration;
    bool m_sasConfigurationHasBeenSet = false;

    AzureBlobType m_blobType{AzureBlobType::NOT_SET};
    bool m_blobTypeHasBeenSet = false;

    AzureAccessTier m_accessTier{AzureAccessTier::NOT_SET};
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
