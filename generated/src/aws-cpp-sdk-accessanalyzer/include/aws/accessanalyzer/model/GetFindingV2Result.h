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


    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedAt() const{ return m_analyzedAt; }

    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline void SetAnalyzedAt(const Aws::Utils::DateTime& value) { m_analyzedAt = value; }

    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline void SetAnalyzedAt(Aws::Utils::DateTime&& value) { m_analyzedAt = std::move(value); }

    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline GetFindingV2Result& WithAnalyzedAt(const Aws::Utils::DateTime& value) { SetAnalyzedAt(value); return *this;}

    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline GetFindingV2Result& WithAnalyzedAt(Aws::Utils::DateTime&& value) { SetAnalyzedAt(std::move(value)); return *this;}


    /**
     * <p>The time at which the finding was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline GetFindingV2Result& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the finding was created.</p>
     */
    inline GetFindingV2Result& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>An error.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>An error.</p>
     */
    inline void SetError(const Aws::String& value) { m_error = value; }

    /**
     * <p>An error.</p>
     */
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }

    /**
     * <p>An error.</p>
     */
    inline void SetError(const char* value) { m_error.assign(value); }

    /**
     * <p>An error.</p>
     */
    inline GetFindingV2Result& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>An error.</p>
     */
    inline GetFindingV2Result& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>An error.</p>
     */
    inline GetFindingV2Result& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>The ID of the finding to retrieve.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the finding to retrieve.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the finding to retrieve.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the finding to retrieve.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the finding to retrieve.</p>
     */
    inline GetFindingV2Result& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the finding to retrieve.</p>
     */
    inline GetFindingV2Result& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the finding to retrieve.</p>
     */
    inline GetFindingV2Result& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline GetFindingV2Result& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline GetFindingV2Result& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline GetFindingV2Result& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The resource that generated the finding.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The resource that generated the finding.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resource = value; }

    /**
     * <p>The resource that generated the finding.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resource = std::move(value); }

    /**
     * <p>The resource that generated the finding.</p>
     */
    inline void SetResource(const char* value) { m_resource.assign(value); }

    /**
     * <p>The resource that generated the finding.</p>
     */
    inline GetFindingV2Result& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The resource that generated the finding.</p>
     */
    inline GetFindingV2Result& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The resource that generated the finding.</p>
     */
    inline GetFindingV2Result& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The type of the resource identified in the finding.</p>
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of the resource identified in the finding.</p>
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceType = value; }

    /**
     * <p>The type of the resource identified in the finding.</p>
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceType = std::move(value); }

    /**
     * <p>The type of the resource identified in the finding.</p>
     */
    inline GetFindingV2Result& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of the resource identified in the finding.</p>
     */
    inline GetFindingV2Result& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>Tye Amazon Web Services account ID that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerAccount() const{ return m_resourceOwnerAccount; }

    /**
     * <p>Tye Amazon Web Services account ID that owns the resource.</p>
     */
    inline void SetResourceOwnerAccount(const Aws::String& value) { m_resourceOwnerAccount = value; }

    /**
     * <p>Tye Amazon Web Services account ID that owns the resource.</p>
     */
    inline void SetResourceOwnerAccount(Aws::String&& value) { m_resourceOwnerAccount = std::move(value); }

    /**
     * <p>Tye Amazon Web Services account ID that owns the resource.</p>
     */
    inline void SetResourceOwnerAccount(const char* value) { m_resourceOwnerAccount.assign(value); }

    /**
     * <p>Tye Amazon Web Services account ID that owns the resource.</p>
     */
    inline GetFindingV2Result& WithResourceOwnerAccount(const Aws::String& value) { SetResourceOwnerAccount(value); return *this;}

    /**
     * <p>Tye Amazon Web Services account ID that owns the resource.</p>
     */
    inline GetFindingV2Result& WithResourceOwnerAccount(Aws::String&& value) { SetResourceOwnerAccount(std::move(value)); return *this;}

    /**
     * <p>Tye Amazon Web Services account ID that owns the resource.</p>
     */
    inline GetFindingV2Result& WithResourceOwnerAccount(const char* value) { SetResourceOwnerAccount(value); return *this;}


    /**
     * <p>The status of the finding.</p>
     */
    inline const FindingStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the finding.</p>
     */
    inline void SetStatus(const FindingStatus& value) { m_status = value; }

    /**
     * <p>The status of the finding.</p>
     */
    inline void SetStatus(FindingStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the finding.</p>
     */
    inline GetFindingV2Result& WithStatus(const FindingStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the finding.</p>
     */
    inline GetFindingV2Result& WithStatus(FindingStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline GetFindingV2Result& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline GetFindingV2Result& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline const Aws::Vector<FindingDetails>& GetFindingDetails() const{ return m_findingDetails; }

    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline void SetFindingDetails(const Aws::Vector<FindingDetails>& value) { m_findingDetails = value; }

    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline void SetFindingDetails(Aws::Vector<FindingDetails>&& value) { m_findingDetails = std::move(value); }

    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline GetFindingV2Result& WithFindingDetails(const Aws::Vector<FindingDetails>& value) { SetFindingDetails(value); return *this;}

    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline GetFindingV2Result& WithFindingDetails(Aws::Vector<FindingDetails>&& value) { SetFindingDetails(std::move(value)); return *this;}

    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline GetFindingV2Result& AddFindingDetails(const FindingDetails& value) { m_findingDetails.push_back(value); return *this; }

    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline GetFindingV2Result& AddFindingDetails(FindingDetails&& value) { m_findingDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>The type of the finding. For external access analyzers, the type is
     * <code>ExternalAccess</code>. For unused access analyzers, the type can be
     * <code>UnusedIAMRole</code>, <code>UnusedIAMUserAccessKey</code>,
     * <code>UnusedIAMUserPassword</code>, or <code>UnusedPermission</code>.</p>
     */
    inline const FindingType& GetFindingType() const{ return m_findingType; }

    /**
     * <p>The type of the finding. For external access analyzers, the type is
     * <code>ExternalAccess</code>. For unused access analyzers, the type can be
     * <code>UnusedIAMRole</code>, <code>UnusedIAMUserAccessKey</code>,
     * <code>UnusedIAMUserPassword</code>, or <code>UnusedPermission</code>.</p>
     */
    inline void SetFindingType(const FindingType& value) { m_findingType = value; }

    /**
     * <p>The type of the finding. For external access analyzers, the type is
     * <code>ExternalAccess</code>. For unused access analyzers, the type can be
     * <code>UnusedIAMRole</code>, <code>UnusedIAMUserAccessKey</code>,
     * <code>UnusedIAMUserPassword</code>, or <code>UnusedPermission</code>.</p>
     */
    inline void SetFindingType(FindingType&& value) { m_findingType = std::move(value); }

    /**
     * <p>The type of the finding. For external access analyzers, the type is
     * <code>ExternalAccess</code>. For unused access analyzers, the type can be
     * <code>UnusedIAMRole</code>, <code>UnusedIAMUserAccessKey</code>,
     * <code>UnusedIAMUserPassword</code>, or <code>UnusedPermission</code>.</p>
     */
    inline GetFindingV2Result& WithFindingType(const FindingType& value) { SetFindingType(value); return *this;}

    /**
     * <p>The type of the finding. For external access analyzers, the type is
     * <code>ExternalAccess</code>. For unused access analyzers, the type can be
     * <code>UnusedIAMRole</code>, <code>UnusedIAMUserAccessKey</code>,
     * <code>UnusedIAMUserPassword</code>, or <code>UnusedPermission</code>.</p>
     */
    inline GetFindingV2Result& WithFindingType(FindingType&& value) { SetFindingType(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetFindingV2Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetFindingV2Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetFindingV2Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
