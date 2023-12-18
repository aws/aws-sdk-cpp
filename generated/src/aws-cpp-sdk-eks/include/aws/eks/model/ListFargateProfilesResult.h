/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListFargateProfilesResult
  {
  public:
    AWS_EKS_API ListFargateProfilesResult();
    AWS_EKS_API ListFargateProfilesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListFargateProfilesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFargateProfileNames() const{ return m_fargateProfileNames; }

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline void SetFargateProfileNames(const Aws::Vector<Aws::String>& value) { m_fargateProfileNames = value; }

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline void SetFargateProfileNames(Aws::Vector<Aws::String>&& value) { m_fargateProfileNames = std::move(value); }

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline ListFargateProfilesResult& WithFargateProfileNames(const Aws::Vector<Aws::String>& value) { SetFargateProfileNames(value); return *this;}

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline ListFargateProfilesResult& WithFargateProfileNames(Aws::Vector<Aws::String>&& value) { SetFargateProfileNames(std::move(value)); return *this;}

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline ListFargateProfilesResult& AddFargateProfileNames(const Aws::String& value) { m_fargateProfileNames.push_back(value); return *this; }

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline ListFargateProfilesResult& AddFargateProfileNames(Aws::String&& value) { m_fargateProfileNames.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of all of the Fargate profiles associated with the specified
     * cluster.</p>
     */
    inline ListFargateProfilesResult& AddFargateProfileNames(const char* value) { m_fargateProfileNames.push_back(value); return *this; }


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
    inline ListFargateProfilesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline ListFargateProfilesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline ListFargateProfilesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListFargateProfilesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListFargateProfilesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListFargateProfilesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_fargateProfileNames;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
