/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/AzureBlobAuthenticationType.h>
#include <aws/datasync/model/AzureBlobType.h>
#include <aws/datasync/model/AzureAccessTier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datasync/model/ManagedSecretConfig.h>
#include <aws/datasync/model/CmkSecretConfig.h>
#include <aws/datasync/model/CustomSecretConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{
  class DescribeLocationAzureBlobResult
  {
  public:
    AWS_DATASYNC_API DescribeLocationAzureBlobResult() = default;
    AWS_DATASYNC_API DescribeLocationAzureBlobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationAzureBlobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of your Azure Blob Storage transfer location.</p>
     */
    inline const Aws::String& GetLocationArn() const { return m_locationArn; }
    template<typename LocationArnT = Aws::String>
    void SetLocationArn(LocationArnT&& value) { m_locationArnHasBeenSet = true; m_locationArn = std::forward<LocationArnT>(value); }
    template<typename LocationArnT = Aws::String>
    DescribeLocationAzureBlobResult& WithLocationArn(LocationArnT&& value) { SetLocationArn(std::forward<LocationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the Azure Blob Storage container involved in your transfer.</p>
     */
    inline const Aws::String& GetLocationUri() const { return m_locationUri; }
    template<typename LocationUriT = Aws::String>
    void SetLocationUri(LocationUriT&& value) { m_locationUriHasBeenSet = true; m_locationUri = std::forward<LocationUriT>(value); }
    template<typename LocationUriT = Aws::String>
    DescribeLocationAzureBlobResult& WithLocationUri(LocationUriT&& value) { SetLocationUri(std::forward<LocationUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication method DataSync uses to access your Azure Blob Storage.
     * DataSync can access blob storage using a shared access signature (SAS).</p>
     */
    inline AzureBlobAuthenticationType GetAuthenticationType() const { return m_authenticationType; }
    inline void SetAuthenticationType(AzureBlobAuthenticationType value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = value; }
    inline DescribeLocationAzureBlobResult& WithAuthenticationType(AzureBlobAuthenticationType value) { SetAuthenticationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of blob that you want your objects or files to be when transferring
     * them into Azure Blob Storage. Currently, DataSync only supports moving data into
     * Azure Blob Storage as block blobs. For more information on blob types, see the
     * <a
     * href="https://learn.microsoft.com/en-us/rest/api/storageservices/understanding-block-blobs--append-blobs--and-page-blobs">Azure
     * Blob Storage documentation</a>.</p>
     */
    inline AzureBlobType GetBlobType() const { return m_blobType; }
    inline void SetBlobType(AzureBlobType value) { m_blobTypeHasBeenSet = true; m_blobType = value; }
    inline DescribeLocationAzureBlobResult& WithBlobType(AzureBlobType value) { SetBlobType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access tier that you want your objects or files transferred into. This
     * only applies when using the location as a transfer destination. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/creating-azure-blob-location.html#azure-blob-access-tiers">Access
     * tiers</a>.</p>
     */
    inline AzureAccessTier GetAccessTier() const { return m_accessTier; }
    inline void SetAccessTier(AzureAccessTier value) { m_accessTierHasBeenSet = true; m_accessTier = value; }
    inline DescribeLocationAzureBlobResult& WithAccessTier(AzureAccessTier value) { SetAccessTier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the DataSync agents that can connect with your Azure Blob Storage
     * container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const { return m_agentArns; }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    void SetAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns = std::forward<AgentArnsT>(value); }
    template<typename AgentArnsT = Aws::Vector<Aws::String>>
    DescribeLocationAzureBlobResult& WithAgentArns(AgentArnsT&& value) { SetAgentArns(std::forward<AgentArnsT>(value)); return *this;}
    template<typename AgentArnsT = Aws::String>
    DescribeLocationAzureBlobResult& AddAgentArns(AgentArnsT&& value) { m_agentArnsHasBeenSet = true; m_agentArns.emplace_back(std::forward<AgentArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that your Azure Blob Storage transfer location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeLocationAzureBlobResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes configuration information for a DataSync-managed secret, such as an
     * authentication token that DataSync uses to access a specific storage location.
     * DataSync uses the default Amazon Web Services-managed KMS key to encrypt this
     * secret in Secrets Manager.</p>
     */
    inline const ManagedSecretConfig& GetManagedSecretConfig() const { return m_managedSecretConfig; }
    template<typename ManagedSecretConfigT = ManagedSecretConfig>
    void SetManagedSecretConfig(ManagedSecretConfigT&& value) { m_managedSecretConfigHasBeenSet = true; m_managedSecretConfig = std::forward<ManagedSecretConfigT>(value); }
    template<typename ManagedSecretConfigT = ManagedSecretConfig>
    DescribeLocationAzureBlobResult& WithManagedSecretConfig(ManagedSecretConfigT&& value) { SetManagedSecretConfig(std::forward<ManagedSecretConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes configuration information for a DataSync-managed secret, such as an
     * authentication token that DataSync uses to access a specific storage location,
     * with a customer-managed KMS key.</p>
     */
    inline const CmkSecretConfig& GetCmkSecretConfig() const { return m_cmkSecretConfig; }
    template<typename CmkSecretConfigT = CmkSecretConfig>
    void SetCmkSecretConfig(CmkSecretConfigT&& value) { m_cmkSecretConfigHasBeenSet = true; m_cmkSecretConfig = std::forward<CmkSecretConfigT>(value); }
    template<typename CmkSecretConfigT = CmkSecretConfig>
    DescribeLocationAzureBlobResult& WithCmkSecretConfig(CmkSecretConfigT&& value) { SetCmkSecretConfig(std::forward<CmkSecretConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes configuration information for a customer-managed secret, such as an
     * authentication token that DataSync uses to access a specific storage location,
     * with a customer-managed KMS key.</p>
     */
    inline const CustomSecretConfig& GetCustomSecretConfig() const { return m_customSecretConfig; }
    template<typename CustomSecretConfigT = CustomSecretConfig>
    void SetCustomSecretConfig(CustomSecretConfigT&& value) { m_customSecretConfigHasBeenSet = true; m_customSecretConfig = std::forward<CustomSecretConfigT>(value); }
    template<typename CustomSecretConfigT = CustomSecretConfig>
    DescribeLocationAzureBlobResult& WithCustomSecretConfig(CustomSecretConfigT&& value) { SetCustomSecretConfig(std::forward<CustomSecretConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLocationAzureBlobResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;
    bool m_locationArnHasBeenSet = false;

    Aws::String m_locationUri;
    bool m_locationUriHasBeenSet = false;

    AzureBlobAuthenticationType m_authenticationType{AzureBlobAuthenticationType::NOT_SET};
    bool m_authenticationTypeHasBeenSet = false;

    AzureBlobType m_blobType{AzureBlobType::NOT_SET};
    bool m_blobTypeHasBeenSet = false;

    AzureAccessTier m_accessTier{AzureAccessTier::NOT_SET};
    bool m_accessTierHasBeenSet = false;

    Aws::Vector<Aws::String> m_agentArns;
    bool m_agentArnsHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ManagedSecretConfig m_managedSecretConfig;
    bool m_managedSecretConfigHasBeenSet = false;

    CmkSecretConfig m_cmkSecretConfig;
    bool m_cmkSecretConfigHasBeenSet = false;

    CustomSecretConfig m_customSecretConfig;
    bool m_customSecretConfigHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
