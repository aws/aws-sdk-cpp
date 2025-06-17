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
    AWS_ACCESSANALYZER_API GetFindingV2Result() = default;
    AWS_ACCESSANALYZER_API GetFindingV2Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ACCESSANALYZER_API GetFindingV2Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The time at which the resource-based policy or IAM entity that generated the
     * finding was analyzed.</p>
     */
    inline const Aws::Utils::DateTime& GetAnalyzedAt() const { return m_analyzedAt; }
    template<typename AnalyzedAtT = Aws::Utils::DateTime>
    void SetAnalyzedAt(AnalyzedAtT&& value) { m_analyzedAtHasBeenSet = true; m_analyzedAt = std::forward<AnalyzedAtT>(value); }
    template<typename AnalyzedAtT = Aws::Utils::DateTime>
    GetFindingV2Result& WithAnalyzedAt(AnalyzedAtT&& value) { SetAnalyzedAt(std::forward<AnalyzedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the finding was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetFindingV2Result& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error.</p>
     */
    inline const Aws::String& GetError() const { return m_error; }
    template<typename ErrorT = Aws::String>
    void SetError(ErrorT&& value) { m_errorHasBeenSet = true; m_error = std::forward<ErrorT>(value); }
    template<typename ErrorT = Aws::String>
    GetFindingV2Result& WithError(ErrorT&& value) { SetError(std::forward<ErrorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the finding to retrieve.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetFindingV2Result& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token used for pagination of results returned.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetFindingV2Result& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource that generated the finding.</p>
     */
    inline const Aws::String& GetResource() const { return m_resource; }
    template<typename ResourceT = Aws::String>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Aws::String>
    GetFindingV2Result& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the resource identified in the finding.</p>
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline GetFindingV2Result& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tye Amazon Web Services account ID that owns the resource.</p>
     */
    inline const Aws::String& GetResourceOwnerAccount() const { return m_resourceOwnerAccount; }
    template<typename ResourceOwnerAccountT = Aws::String>
    void SetResourceOwnerAccount(ResourceOwnerAccountT&& value) { m_resourceOwnerAccountHasBeenSet = true; m_resourceOwnerAccount = std::forward<ResourceOwnerAccountT>(value); }
    template<typename ResourceOwnerAccountT = Aws::String>
    GetFindingV2Result& WithResourceOwnerAccount(ResourceOwnerAccountT&& value) { SetResourceOwnerAccount(std::forward<ResourceOwnerAccountT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the finding.</p>
     */
    inline FindingStatus GetStatus() const { return m_status; }
    inline void SetStatus(FindingStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetFindingV2Result& WithStatus(FindingStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the finding was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetFindingV2Result& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A localized message that explains the finding and provides guidance on how to
     * address it.</p>
     */
    inline const Aws::Vector<FindingDetails>& GetFindingDetails() const { return m_findingDetails; }
    template<typename FindingDetailsT = Aws::Vector<FindingDetails>>
    void SetFindingDetails(FindingDetailsT&& value) { m_findingDetailsHasBeenSet = true; m_findingDetails = std::forward<FindingDetailsT>(value); }
    template<typename FindingDetailsT = Aws::Vector<FindingDetails>>
    GetFindingV2Result& WithFindingDetails(FindingDetailsT&& value) { SetFindingDetails(std::forward<FindingDetailsT>(value)); return *this;}
    template<typename FindingDetailsT = FindingDetails>
    GetFindingV2Result& AddFindingDetails(FindingDetailsT&& value) { m_findingDetailsHasBeenSet = true; m_findingDetails.emplace_back(std::forward<FindingDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of the finding. For external access analyzers, the type is
     * <code>ExternalAccess</code>. For unused access analyzers, the type can be
     * <code>UnusedIAMRole</code>, <code>UnusedIAMUserAccessKey</code>,
     * <code>UnusedIAMUserPassword</code>, or <code>UnusedPermission</code>. For
     * internal access analyzers, the type is <code>InternalAccess</code>.</p>
     */
    inline FindingType GetFindingType() const { return m_findingType; }
    inline void SetFindingType(FindingType value) { m_findingTypeHasBeenSet = true; m_findingType = value; }
    inline GetFindingV2Result& WithFindingType(FindingType value) { SetFindingType(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFindingV2Result& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_analyzedAt{};
    bool m_analyzedAtHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_error;
    bool m_errorHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceOwnerAccount;
    bool m_resourceOwnerAccountHasBeenSet = false;

    FindingStatus m_status{FindingStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<FindingDetails> m_findingDetails;
    bool m_findingDetailsHasBeenSet = false;

    FindingType m_findingType{FindingType::NOT_SET};
    bool m_findingTypeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
