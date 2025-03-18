/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/PodIdentityAssociationSummary.h>
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
namespace EKS
{
namespace Model
{
  class ListPodIdentityAssociationsResult
  {
  public:
    AWS_EKS_API ListPodIdentityAssociationsResult() = default;
    AWS_EKS_API ListPodIdentityAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListPodIdentityAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of summarized descriptions of the associations that are in the
     * cluster and match any filters that you provided.</p> <p>Each summary is
     * simplified by removing these fields compared to the full <a
     * href="https://docs.aws.amazon.com/eks/latest/APIReference/API_PodIdentityAssociation.html">
     * <code>PodIdentityAssociation</code> </a>:</p> <ul> <li> <p>The IAM role:
     * <code>roleArn</code> </p> </li> <li> <p>The timestamp that the association was
     * created at: <code>createdAt</code> </p> </li> <li> <p>The most recent timestamp
     * that the association was modified at:. <code>modifiedAt</code> </p> </li> <li>
     * <p>The tags on the association: <code>tags</code> </p> </li> </ul>
     */
    inline const Aws::Vector<PodIdentityAssociationSummary>& GetAssociations() const { return m_associations; }
    template<typename AssociationsT = Aws::Vector<PodIdentityAssociationSummary>>
    void SetAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations = std::forward<AssociationsT>(value); }
    template<typename AssociationsT = Aws::Vector<PodIdentityAssociationSummary>>
    ListPodIdentityAssociationsResult& WithAssociations(AssociationsT&& value) { SetAssociations(std::forward<AssociationsT>(value)); return *this;}
    template<typename AssociationsT = PodIdentityAssociationSummary>
    ListPodIdentityAssociationsResult& AddAssociations(AssociationsT&& value) { m_associationsHasBeenSet = true; m_associations.emplace_back(std::forward<AssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListPodIdentityAssociations</code> request. When the results of a
     * <code>ListPodIdentityAssociations</code> request exceed <code>maxResults</code>,
     * you can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPodIdentityAssociationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPodIdentityAssociationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PodIdentityAssociationSummary> m_associations;
    bool m_associationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
