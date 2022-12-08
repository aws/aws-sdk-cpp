/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/Namespace.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class ListNamespacesResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API ListNamespacesResult();
    AWS_REDSHIFTSERVERLESS_API ListNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API ListNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The list of returned namespaces.</p>
     */
    inline const Aws::Vector<Namespace>& GetNamespaces() const{ return m_namespaces; }

    /**
     * <p>The list of returned namespaces.</p>
     */
    inline void SetNamespaces(const Aws::Vector<Namespace>& value) { m_namespaces = value; }

    /**
     * <p>The list of returned namespaces.</p>
     */
    inline void SetNamespaces(Aws::Vector<Namespace>&& value) { m_namespaces = std::move(value); }

    /**
     * <p>The list of returned namespaces.</p>
     */
    inline ListNamespacesResult& WithNamespaces(const Aws::Vector<Namespace>& value) { SetNamespaces(value); return *this;}

    /**
     * <p>The list of returned namespaces.</p>
     */
    inline ListNamespacesResult& WithNamespaces(Aws::Vector<Namespace>&& value) { SetNamespaces(std::move(value)); return *this;}

    /**
     * <p>The list of returned namespaces.</p>
     */
    inline ListNamespacesResult& AddNamespaces(const Namespace& value) { m_namespaces.push_back(value); return *this; }

    /**
     * <p>The list of returned namespaces.</p>
     */
    inline ListNamespacesResult& AddNamespaces(Namespace&& value) { m_namespaces.push_back(std::move(value)); return *this; }


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListNamespacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListNamespacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline ListNamespacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Namespace> m_namespaces;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
