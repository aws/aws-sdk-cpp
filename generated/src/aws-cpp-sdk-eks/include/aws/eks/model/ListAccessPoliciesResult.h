/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/AccessPolicy.h>
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
  class ListAccessPoliciesResult
  {
  public:
    AWS_EKS_API ListAccessPoliciesResult();
    AWS_EKS_API ListAccessPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListAccessPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of available access policies. You can't view the contents of an
     * access policy using the API. To view the contents, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-policies.html#access-policy-permissions">Access
     * policy permissions</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline const Aws::Vector<AccessPolicy>& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p>The list of available access policies. You can't view the contents of an
     * access policy using the API. To view the contents, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-policies.html#access-policy-permissions">Access
     * policy permissions</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetAccessPolicies(const Aws::Vector<AccessPolicy>& value) { m_accessPolicies = value; }

    /**
     * <p>The list of available access policies. You can't view the contents of an
     * access policy using the API. To view the contents, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-policies.html#access-policy-permissions">Access
     * policy permissions</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline void SetAccessPolicies(Aws::Vector<AccessPolicy>&& value) { m_accessPolicies = std::move(value); }

    /**
     * <p>The list of available access policies. You can't view the contents of an
     * access policy using the API. To view the contents, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-policies.html#access-policy-permissions">Access
     * policy permissions</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline ListAccessPoliciesResult& WithAccessPolicies(const Aws::Vector<AccessPolicy>& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>The list of available access policies. You can't view the contents of an
     * access policy using the API. To view the contents, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-policies.html#access-policy-permissions">Access
     * policy permissions</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline ListAccessPoliciesResult& WithAccessPolicies(Aws::Vector<AccessPolicy>&& value) { SetAccessPolicies(std::move(value)); return *this;}

    /**
     * <p>The list of available access policies. You can't view the contents of an
     * access policy using the API. To view the contents, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-policies.html#access-policy-permissions">Access
     * policy permissions</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline ListAccessPoliciesResult& AddAccessPolicies(const AccessPolicy& value) { m_accessPolicies.push_back(value); return *this; }

    /**
     * <p>The list of available access policies. You can't view the contents of an
     * access policy using the API. To view the contents, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/access-policies.html#access-policy-permissions">Access
     * policy permissions</a> in the <i>Amazon EKS User Guide</i>.</p>
     */
    inline ListAccessPoliciesResult& AddAccessPolicies(AccessPolicy&& value) { m_accessPolicies.push_back(std::move(value)); return *this; }


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
    inline ListAccessPoliciesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline ListAccessPoliciesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline ListAccessPoliciesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAccessPoliciesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAccessPoliciesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAccessPoliciesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AccessPolicy> m_accessPolicies;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
