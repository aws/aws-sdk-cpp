/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/AssociatedAccessPolicy.h>
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
  class ListAssociatedAccessPoliciesResult
  {
  public:
    AWS_EKS_API ListAssociatedAccessPoliciesResult();
    AWS_EKS_API ListAssociatedAccessPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListAssociatedAccessPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of your cluster.</p>
     */
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }

    /**
     * <p>The name of your cluster.</p>
     */
    inline void SetClusterName(const Aws::String& value) { m_clusterName = value; }

    /**
     * <p>The name of your cluster.</p>
     */
    inline void SetClusterName(Aws::String&& value) { m_clusterName = std::move(value); }

    /**
     * <p>The name of your cluster.</p>
     */
    inline void SetClusterName(const char* value) { m_clusterName.assign(value); }

    /**
     * <p>The name of your cluster.</p>
     */
    inline ListAssociatedAccessPoliciesResult& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}

    /**
     * <p>The name of your cluster.</p>
     */
    inline ListAssociatedAccessPoliciesResult& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}

    /**
     * <p>The name of your cluster.</p>
     */
    inline ListAssociatedAccessPoliciesResult& WithClusterName(const char* value) { SetClusterName(value); return *this;}


    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline const Aws::String& GetPrincipalArn() const{ return m_principalArn; }

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline void SetPrincipalArn(const Aws::String& value) { m_principalArn = value; }

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline void SetPrincipalArn(Aws::String&& value) { m_principalArn = std::move(value); }

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline void SetPrincipalArn(const char* value) { m_principalArn.assign(value); }

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline ListAssociatedAccessPoliciesResult& WithPrincipalArn(const Aws::String& value) { SetPrincipalArn(value); return *this;}

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline ListAssociatedAccessPoliciesResult& WithPrincipalArn(Aws::String&& value) { SetPrincipalArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM principal for the <code>AccessEntry</code>.</p>
     */
    inline ListAssociatedAccessPoliciesResult& WithPrincipalArn(const char* value) { SetPrincipalArn(value); return *this;}


    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline ListAssociatedAccessPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline ListAssociatedAccessPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline ListAssociatedAccessPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The list of access policies associated with the access entry.</p>
     */
    inline const Aws::Vector<AssociatedAccessPolicy>& GetAssociatedAccessPolicies() const{ return m_associatedAccessPolicies; }

    /**
     * <p>The list of access policies associated with the access entry.</p>
     */
    inline void SetAssociatedAccessPolicies(const Aws::Vector<AssociatedAccessPolicy>& value) { m_associatedAccessPolicies = value; }

    /**
     * <p>The list of access policies associated with the access entry.</p>
     */
    inline void SetAssociatedAccessPolicies(Aws::Vector<AssociatedAccessPolicy>&& value) { m_associatedAccessPolicies = std::move(value); }

    /**
     * <p>The list of access policies associated with the access entry.</p>
     */
    inline ListAssociatedAccessPoliciesResult& WithAssociatedAccessPolicies(const Aws::Vector<AssociatedAccessPolicy>& value) { SetAssociatedAccessPolicies(value); return *this;}

    /**
     * <p>The list of access policies associated with the access entry.</p>
     */
    inline ListAssociatedAccessPoliciesResult& WithAssociatedAccessPolicies(Aws::Vector<AssociatedAccessPolicy>&& value) { SetAssociatedAccessPolicies(std::move(value)); return *this;}

    /**
     * <p>The list of access policies associated with the access entry.</p>
     */
    inline ListAssociatedAccessPoliciesResult& AddAssociatedAccessPolicies(const AssociatedAccessPolicy& value) { m_associatedAccessPolicies.push_back(value); return *this; }

    /**
     * <p>The list of access policies associated with the access entry.</p>
     */
    inline ListAssociatedAccessPoliciesResult& AddAssociatedAccessPolicies(AssociatedAccessPolicy&& value) { m_associatedAccessPolicies.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAssociatedAccessPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAssociatedAccessPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAssociatedAccessPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_clusterName;

    Aws::String m_principalArn;

    Aws::String m_nextToken;

    Aws::Vector<AssociatedAccessPolicy> m_associatedAccessPolicies;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
