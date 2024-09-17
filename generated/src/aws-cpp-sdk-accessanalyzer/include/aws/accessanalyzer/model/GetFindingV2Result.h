/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/accessanalyzer/model/ResourceType.h>
#include <aws/accessanalyzer/model/FindingStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/accessanalyzer/model/FindingType.h>
#include <aws/accessanalyzer/model/FindingDetails.h>
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
namespace AccessAnalyzer
{
namespace Model
{
  class GetFindingV2Result
  {
  public:
    AWS_ACCESSANALYZER_API GetFindingV2Result();
    AWS_ACCESSANALYZER_API GetFindingV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetFindingV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedAt() const{ return m_analyzedAt; }
    inline void SetAnalyzedAt(const Aws::Utils::DateTime& value) { m_analyzedAt = value; }
    inline void SetAnalyzedAt(Aws::Utils::DateTime&& value) { m_analyzedAt = std::move(value); }
    inline GetFindingV2Result& WithAnalyzedAt(const Aws::Utils::DateTime& value) { SetAnalyzedAt(value); return *this;}
    inline GetFindingV2Result& WithAnalyzedAt(Aws::Utils::DateTime&& value) { SetAnalyzedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the finding was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetFindingV2Result& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetFindingV2Result& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }
    inline void SetError(const Aws::String& value) { m_error = value; }
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }
    inline void SetError(const char* value) { m_error.assign(value); }
    inline GetFindingV2Result& WithError(const Aws::String& value) { SetError(value); return *this;}
    inline GetFindingV2Result& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}
    inline GetFindingV2Result& WithError(const char* value) { SetError(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the finding to retrieve.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetFindingV2Result& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetFindingV2Result& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetFindingV2Result& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline GetFindingV2Result& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetFindingV2Result& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetFindingV2Result& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that generated the finding.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }
    inline void SetResource(const Aws::String& value) { m_resource = value; }
    inline void SetResource(Aws::String&& value) { m_resource = std::move(value); }
    inline void SetResource(const char* value) { m_resource.assign(value); }
    inline GetFindingV2Result& WithResource(const Aws::String& value) { SetResource(value); return *this;}
    inline GetFindingV2Result& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}
    inline GetFindingV2Result& WithResource(const char* value) { SetResource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource identified in the finding.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }
    inline void SetResourceType(const ResourceType& value) { m_resourceType = value; }
    inline void SetResourceType(ResourceType&& value) { m_resourceType = std::move(value); }
    inline GetFindingV2Result& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}
    inline GetFindingV2Result& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tye Amazon Web Services account ID that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerAccount() const{ return m_resourceOwnerAccount; }
    inline void SetResourceOwnerAccount(const Aws::String& value) { m_resourceOwnerAccount = value; }
    inline void SetResourceOwnerAccount(Aws::String&& value) { m_resourceOwnerAccount = std::move(value); }
    inline void SetResourceOwnerAccount(const char* value) { m_resourceOwnerAccount.assign(value); }
    inline GetFindingV2Result& WithResourceOwnerAccount(const Aws::String& value) { SetResourceOwnerAccount(value); return *this;}
    inline GetFindingV2Result& WithResourceOwnerAccount(Aws::String&& value) { SetResourceOwnerAccount(std::move(value)); return *this;}
    inline GetFindingV2Result& WithResourceOwnerAccount(const char* value) { SetResourceOwnerAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the finding.</p>
     */
    inline const FindingStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const FindingStatus& value) { m_status = value; }
    inline void SetStatus(FindingStatus&& value) { m_status = std::move(value); }
    inline GetFindingV2Result& WithStatus(const FindingStatus& value) { SetStatus(value); return *this;}
    inline GetFindingV2Result& WithStatus(FindingStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetFindingV2Result& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetFindingV2Result& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline const Aws::Vector<FindingDetails>& GetFindingDetails() const{ return m_findingDetails; }
    inline void SetFindingDetails(const Aws::Vector<FindingDetails>& value) { m_findingDetails = value; }
    inline void SetFindingDetails(Aws::Vector<FindingDetails>&& value) { m_findingDetails = std::move(value); }
    inline GetFindingV2Result& WithFindingDetails(const Aws::Vector<FindingDetails>& value) { SetFindingDetails(value); return *this;}
    inline GetFindingV2Result& WithFindingDetails(Aws::Vector<FindingDetails>&& value) { SetFindingDetails(std::move(value)); return *this;}
    inline GetFindingV2Result& AddFindingDetails(const FindingDetails& value) { m_findingDetails.push_back(value); return *this; }
    inline GetFindingV2Result& AddFindingDetails(FindingDetails&& value) { m_findingDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the finding. For external access analyzers, the type is
     * <code>ExternalAccess</code>. For unused access analyzers, the type can be
     * <code>UnusedIAMRole</code>, <code>UnusedIAMUserAccessKey</code>,
     * <code>UnusedIAMUserPassword</code>, or <code>UnusedPermission</code>.</p>
     */
    inline const FindingType& GetFindingType() const{ return m_findingType; }
    inline void SetFindingType(const FindingType& value) { m_findingType = value; }
    inline void SetFindingType(FindingType&& value) { m_findingType = std::move(value); }
    inline GetFindingV2Result& WithFindingType(const FindingType& value) { SetFindingType(value); return *this;}
    inline GetFindingV2Result& WithFindingType(FindingType&& value) { SetFindingType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetFindingV2Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetFindingV2Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetFindingV2Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_analyzedAt;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_error;

    Aws::String m_id;

    Aws::String m_nextToken;

    Aws::String m_resource;

    ResourceType m_resourceType;

    Aws::String m_resourceOwnerAccount;

    FindingStatus m_status;

    Aws::Utils::DateTime m_updatedAt;

    Aws::Vector<FindingDetails> m_findingDetails;

    FindingType m_findingType;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
