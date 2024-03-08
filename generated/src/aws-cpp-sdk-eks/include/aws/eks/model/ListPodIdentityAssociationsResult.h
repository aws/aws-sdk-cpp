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
    AWS_EKS_API ListPodIdentityAssociationsResult();
    AWS_EKS_API ListPodIdentityAssociationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListPodIdentityAssociationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of summarized descriptions of the associations that are in the
     * cluster and match any filters that you provided.</p> <p>Each summary is
     * simplified by removing these fields compared to the full <code>
     * <a>PodIdentityAssociation</a> </code>:</p> <ul> <li> <p>The IAM role:
     * <code>roleArn</code> </p> </li> <li> <p>The timestamp that the association was
     * created at: <code>createdAt</code> </p> </li> <li> <p>The most recent timestamp
     * that the association was modified at:. <code>modifiedAt</code> </p> </li> <li>
     * <p>The tags on the association: <code>tags</code> </p> </li> </ul>
     */
    inline const Aws::Vector<PodIdentityAssociationSummary>& GetAssociations() const{ return m_associations; }

    /**
     * <p>The list of summarized descriptions of the associations that are in the
     * cluster and match any filters that you provided.</p> <p>Each summary is
     * simplified by removing these fields compared to the full <code>
     * <a>PodIdentityAssociation</a> </code>:</p> <ul> <li> <p>The IAM role:
     * <code>roleArn</code> </p> </li> <li> <p>The timestamp that the association was
     * created at: <code>createdAt</code> </p> </li> <li> <p>The most recent timestamp
     * that the association was modified at:. <code>modifiedAt</code> </p> </li> <li>
     * <p>The tags on the association: <code>tags</code> </p> </li> </ul>
     */
    inline void SetAssociations(const Aws::Vector<PodIdentityAssociationSummary>& value) { m_associations = value; }

    /**
     * <p>The list of summarized descriptions of the associations that are in the
     * cluster and match any filters that you provided.</p> <p>Each summary is
     * simplified by removing these fields compared to the full <code>
     * <a>PodIdentityAssociation</a> </code>:</p> <ul> <li> <p>The IAM role:
     * <code>roleArn</code> </p> </li> <li> <p>The timestamp that the association was
     * created at: <code>createdAt</code> </p> </li> <li> <p>The most recent timestamp
     * that the association was modified at:. <code>modifiedAt</code> </p> </li> <li>
     * <p>The tags on the association: <code>tags</code> </p> </li> </ul>
     */
    inline void SetAssociations(Aws::Vector<PodIdentityAssociationSummary>&& value) { m_associations = std::move(value); }

    /**
     * <p>The list of summarized descriptions of the associations that are in the
     * cluster and match any filters that you provided.</p> <p>Each summary is
     * simplified by removing these fields compared to the full <code>
     * <a>PodIdentityAssociation</a> </code>:</p> <ul> <li> <p>The IAM role:
     * <code>roleArn</code> </p> </li> <li> <p>The timestamp that the association was
     * created at: <code>createdAt</code> </p> </li> <li> <p>The most recent timestamp
     * that the association was modified at:. <code>modifiedAt</code> </p> </li> <li>
     * <p>The tags on the association: <code>tags</code> </p> </li> </ul>
     */
    inline ListPodIdentityAssociationsResult& WithAssociations(const Aws::Vector<PodIdentityAssociationSummary>& value) { SetAssociations(value); return *this;}

    /**
     * <p>The list of summarized descriptions of the associations that are in the
     * cluster and match any filters that you provided.</p> <p>Each summary is
     * simplified by removing these fields compared to the full <code>
     * <a>PodIdentityAssociation</a> </code>:</p> <ul> <li> <p>The IAM role:
     * <code>roleArn</code> </p> </li> <li> <p>The timestamp that the association was
     * created at: <code>createdAt</code> </p> </li> <li> <p>The most recent timestamp
     * that the association was modified at:. <code>modifiedAt</code> </p> </li> <li>
     * <p>The tags on the association: <code>tags</code> </p> </li> </ul>
     */
    inline ListPodIdentityAssociationsResult& WithAssociations(Aws::Vector<PodIdentityAssociationSummary>&& value) { SetAssociations(std::move(value)); return *this;}

    /**
     * <p>The list of summarized descriptions of the associations that are in the
     * cluster and match any filters that you provided.</p> <p>Each summary is
     * simplified by removing these fields compared to the full <code>
     * <a>PodIdentityAssociation</a> </code>:</p> <ul> <li> <p>The IAM role:
     * <code>roleArn</code> </p> </li> <li> <p>The timestamp that the association was
     * created at: <code>createdAt</code> </p> </li> <li> <p>The most recent timestamp
     * that the association was modified at:. <code>modifiedAt</code> </p> </li> <li>
     * <p>The tags on the association: <code>tags</code> </p> </li> </ul>
     */
    inline ListPodIdentityAssociationsResult& AddAssociations(const PodIdentityAssociationSummary& value) { m_associations.push_back(value); return *this; }

    /**
     * <p>The list of summarized descriptions of the associations that are in the
     * cluster and match any filters that you provided.</p> <p>Each summary is
     * simplified by removing these fields compared to the full <code>
     * <a>PodIdentityAssociation</a> </code>:</p> <ul> <li> <p>The IAM role:
     * <code>roleArn</code> </p> </li> <li> <p>The timestamp that the association was
     * created at: <code>createdAt</code> </p> </li> <li> <p>The most recent timestamp
     * that the association was modified at:. <code>modifiedAt</code> </p> </li> <li>
     * <p>The tags on the association: <code>tags</code> </p> </li> </ul>
     */
    inline ListPodIdentityAssociationsResult& AddAssociations(PodIdentityAssociationSummary&& value) { m_associations.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListPodIdentityAssociations</code> request. When the results of a
     * <code>ListPodIdentityAssociations</code> request exceed <code>maxResults</code>,
     * you can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListPodIdentityAssociations</code> request. When the results of a
     * <code>ListPodIdentityAssociations</code> request exceed <code>maxResults</code>,
     * you can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListPodIdentityAssociations</code> request. When the results of a
     * <code>ListPodIdentityAssociations</code> request exceed <code>maxResults</code>,
     * you can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListPodIdentityAssociations</code> request. When the results of a
     * <code>ListPodIdentityAssociations</code> request exceed <code>maxResults</code>,
     * you can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListPodIdentityAssociations</code> request. When the results of a
     * <code>ListPodIdentityAssociations</code> request exceed <code>maxResults</code>,
     * you can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline ListPodIdentityAssociationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListPodIdentityAssociations</code> request. When the results of a
     * <code>ListPodIdentityAssociations</code> request exceed <code>maxResults</code>,
     * you can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline ListPodIdentityAssociationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListPodIdentityAssociations</code> request. When the results of a
     * <code>ListPodIdentityAssociations</code> request exceed <code>maxResults</code>,
     * you can use this value to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>  <p>This
     * token should be treated as an opaque identifier that is used only to retrieve
     * the next items in a list and not for other programmatic purposes.</p> 
     */
    inline ListPodIdentityAssociationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListPodIdentityAssociationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListPodIdentityAssociationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListPodIdentityAssociationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<PodIdentityAssociationSummary> m_associations;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
