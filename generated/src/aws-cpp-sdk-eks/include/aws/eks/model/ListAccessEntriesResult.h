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
  class ListAccessEntriesResult
  {
  public:
    AWS_EKS_API ListAccessEntriesResult();
    AWS_EKS_API ListAccessEntriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListAccessEntriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of access entries that exist for the cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccessEntries() const{ return m_accessEntries; }

    /**
     * <p>The list of access entries that exist for the cluster.</p>
     */
    inline void SetAccessEntries(const Aws::Vector<Aws::String>& value) { m_accessEntries = value; }

    /**
     * <p>The list of access entries that exist for the cluster.</p>
     */
    inline void SetAccessEntries(Aws::Vector<Aws::String>&& value) { m_accessEntries = std::move(value); }

    /**
     * <p>The list of access entries that exist for the cluster.</p>
     */
    inline ListAccessEntriesResult& WithAccessEntries(const Aws::Vector<Aws::String>& value) { SetAccessEntries(value); return *this;}

    /**
     * <p>The list of access entries that exist for the cluster.</p>
     */
    inline ListAccessEntriesResult& WithAccessEntries(Aws::Vector<Aws::String>&& value) { SetAccessEntries(std::move(value)); return *this;}

    /**
     * <p>The list of access entries that exist for the cluster.</p>
     */
    inline ListAccessEntriesResult& AddAccessEntries(const Aws::String& value) { m_accessEntries.push_back(value); return *this; }

    /**
     * <p>The list of access entries that exist for the cluster.</p>
     */
    inline ListAccessEntriesResult& AddAccessEntries(Aws::String&& value) { m_accessEntries.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of access entries that exist for the cluster.</p>
     */
    inline ListAccessEntriesResult& AddAccessEntries(const char* value) { m_accessEntries.push_back(value); return *this; }


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
    inline ListAccessEntriesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline ListAccessEntriesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value returned from a previous paginated request,
     * where <code>maxResults</code> was used and the results exceeded the value of
     * that parameter. Pagination continues from the end of the previous results that
     * returned the <code>nextToken</code> value. This value is null when there are no
     * more results to return.</p>  <p>This token should be treated as an opaque
     * identifier that is used only to retrieve the next items in a list and not for
     * other programmatic purposes.</p> 
     */
    inline ListAccessEntriesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAccessEntriesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAccessEntriesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAccessEntriesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_accessEntries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
