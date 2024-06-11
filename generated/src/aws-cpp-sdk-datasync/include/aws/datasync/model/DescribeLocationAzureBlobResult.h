﻿/**
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
    AWS_DATASYNC_API DescribeLocationAzureBlobResult();
    AWS_DATASYNC_API DescribeLocationAzureBlobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationAzureBlobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of your Azure Blob Storage transfer location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }
    inline DescribeLocationAzureBlobResult& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}
    inline DescribeLocationAzureBlobResult& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}
    inline DescribeLocationAzureBlobResult& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the Azure Blob Storage container involved in your transfer.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }
    inline DescribeLocationAzureBlobResult& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}
    inline DescribeLocationAzureBlobResult& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}
    inline DescribeLocationAzureBlobResult& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authentication method DataSync uses to access your Azure Blob Storage.
     * DataSync can access blob storage using a shared access signature (SAS).</p>
     */
    inline const AzureBlobAuthenticationType& GetAuthenticationType() const{ return m_authenticationType; }
    inline void SetAuthenticationType(const AzureBlobAuthenticationType& value) { m_authenticationType = value; }
    inline void SetAuthenticationType(AzureBlobAuthenticationType&& value) { m_authenticationType = std::move(value); }
    inline DescribeLocationAzureBlobResult& WithAuthenticationType(const AzureBlobAuthenticationType& value) { SetAuthenticationType(value); return *this;}
    inline DescribeLocationAzureBlobResult& WithAuthenticationType(AzureBlobAuthenticationType&& value) { SetAuthenticationType(std::move(value)); return *this;}
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
    inline const AzureBlobType& GetBlobType() const{ return m_blobType; }
    inline void SetBlobType(const AzureBlobType& value) { m_blobType = value; }
    inline void SetBlobType(AzureBlobType&& value) { m_blobType = std::move(value); }
    inline DescribeLocationAzureBlobResult& WithBlobType(const AzureBlobType& value) { SetBlobType(value); return *this;}
    inline DescribeLocationAzureBlobResult& WithBlobType(AzureBlobType&& value) { SetBlobType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The access tier that you want your objects or files transferred into. This
     * only applies when using the location as a transfer destination. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/creating-azure-blob-location.html#azure-blob-access-tiers">Access
     * tiers</a>.</p>
     */
    inline const AzureAccessTier& GetAccessTier() const{ return m_accessTier; }
    inline void SetAccessTier(const AzureAccessTier& value) { m_accessTier = value; }
    inline void SetAccessTier(AzureAccessTier&& value) { m_accessTier = std::move(value); }
    inline DescribeLocationAzureBlobResult& WithAccessTier(const AzureAccessTier& value) { SetAccessTier(value); return *this;}
    inline DescribeLocationAzureBlobResult& WithAccessTier(AzureAccessTier&& value) { SetAccessTier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARNs of the DataSync agents that can connect with your Azure Blob Storage
     * container.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArns = value; }
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArns = std::move(value); }
    inline DescribeLocationAzureBlobResult& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}
    inline DescribeLocationAzureBlobResult& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}
    inline DescribeLocationAzureBlobResult& AddAgentArns(const Aws::String& value) { m_agentArns.push_back(value); return *this; }
    inline DescribeLocationAzureBlobResult& AddAgentArns(Aws::String&& value) { m_agentArns.push_back(std::move(value)); return *this; }
    inline DescribeLocationAzureBlobResult& AddAgentArns(const char* value) { m_agentArns.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time that your Azure Blob Storage transfer location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeLocationAzureBlobResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeLocationAzureBlobResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLocationAzureBlobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLocationAzureBlobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLocationAzureBlobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    AzureBlobAuthenticationType m_authenticationType;

    AzureBlobType m_blobType;

    AzureAccessTier m_accessTier;

    Aws::Vector<Aws::String> m_agentArns;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
