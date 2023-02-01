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
  class ListNodegroupsResult
  {
  public:
    AWS_EKS_API ListNodegroupsResult();
    AWS_EKS_API ListNodegroupsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EKS_API ListNodegroupsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all of the node groups associated with the specified cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodegroups() const{ return m_nodegroups; }

    /**
     * <p>A list of all of the node groups associated with the specified cluster.</p>
     */
    inline void SetNodegroups(const Aws::Vector<Aws::String>& value) { m_nodegroups = value; }

    /**
     * <p>A list of all of the node groups associated with the specified cluster.</p>
     */
    inline void SetNodegroups(Aws::Vector<Aws::String>&& value) { m_nodegroups = std::move(value); }

    /**
     * <p>A list of all of the node groups associated with the specified cluster.</p>
     */
    inline ListNodegroupsResult& WithNodegroups(const Aws::Vector<Aws::String>& value) { SetNodegroups(value); return *this;}

    /**
     * <p>A list of all of the node groups associated with the specified cluster.</p>
     */
    inline ListNodegroupsResult& WithNodegroups(Aws::Vector<Aws::String>&& value) { SetNodegroups(std::move(value)); return *this;}

    /**
     * <p>A list of all of the node groups associated with the specified cluster.</p>
     */
    inline ListNodegroupsResult& AddNodegroups(const Aws::String& value) { m_nodegroups.push_back(value); return *this; }

    /**
     * <p>A list of all of the node groups associated with the specified cluster.</p>
     */
    inline ListNodegroupsResult& AddNodegroups(Aws::String&& value) { m_nodegroups.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of all of the node groups associated with the specified cluster.</p>
     */
    inline ListNodegroupsResult& AddNodegroups(const char* value) { m_nodegroups.push_back(value); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListNodegroups</code> request. When the results of a
     * <code>ListNodegroups</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListNodegroups</code> request. When the results of a
     * <code>ListNodegroups</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListNodegroups</code> request. When the results of a
     * <code>ListNodegroups</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListNodegroups</code> request. When the results of a
     * <code>ListNodegroups</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListNodegroups</code> request. When the results of a
     * <code>ListNodegroups</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListNodegroupsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListNodegroups</code> request. When the results of a
     * <code>ListNodegroups</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListNodegroupsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListNodegroups</code> request. When the results of a
     * <code>ListNodegroups</code> request exceed <code>maxResults</code>, you can use
     * this value to retrieve the next page of results. This value is <code>null</code>
     * when there are no more results to return.</p>
     */
    inline ListNodegroupsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_nodegroups;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
