/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicediscovery/model/NamespaceSummary.h>
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
namespace ServiceDiscovery
{
namespace Model
{
  class AWS_SERVICEDISCOVERY_API ListNamespacesResult
  {
  public:
    ListNamespacesResult();
    ListNamespacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListNamespacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array that contains one <code>NamespaceSummary</code> object for each
     * namespace that matches the specified filter criteria.</p>
     */
    inline const Aws::Vector<NamespaceSummary>& GetNamespaces() const{ return m_namespaces; }

    /**
     * <p>An array that contains one <code>NamespaceSummary</code> object for each
     * namespace that matches the specified filter criteria.</p>
     */
    inline void SetNamespaces(const Aws::Vector<NamespaceSummary>& value) { m_namespaces = value; }

    /**
     * <p>An array that contains one <code>NamespaceSummary</code> object for each
     * namespace that matches the specified filter criteria.</p>
     */
    inline void SetNamespaces(Aws::Vector<NamespaceSummary>&& value) { m_namespaces = std::move(value); }

    /**
     * <p>An array that contains one <code>NamespaceSummary</code> object for each
     * namespace that matches the specified filter criteria.</p>
     */
    inline ListNamespacesResult& WithNamespaces(const Aws::Vector<NamespaceSummary>& value) { SetNamespaces(value); return *this;}

    /**
     * <p>An array that contains one <code>NamespaceSummary</code> object for each
     * namespace that matches the specified filter criteria.</p>
     */
    inline ListNamespacesResult& WithNamespaces(Aws::Vector<NamespaceSummary>&& value) { SetNamespaces(std::move(value)); return *this;}

    /**
     * <p>An array that contains one <code>NamespaceSummary</code> object for each
     * namespace that matches the specified filter criteria.</p>
     */
    inline ListNamespacesResult& AddNamespaces(const NamespaceSummary& value) { m_namespaces.push_back(value); return *this; }

    /**
     * <p>An array that contains one <code>NamespaceSummary</code> object for each
     * namespace that matches the specified filter criteria.</p>
     */
    inline ListNamespacesResult& AddNamespaces(NamespaceSummary&& value) { m_namespaces.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListNamespaces</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> namespaces and
     * then filters them based on the specified criteria. It's possible that no
     * namespaces in the first <code>MaxResults</code> namespaces matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> namespaces do
     * contain namespaces that match the criteria.</p> </note>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListNamespaces</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> namespaces and
     * then filters them based on the specified criteria. It's possible that no
     * namespaces in the first <code>MaxResults</code> namespaces matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> namespaces do
     * contain namespaces that match the criteria.</p> </note>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListNamespaces</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> namespaces and
     * then filters them based on the specified criteria. It's possible that no
     * namespaces in the first <code>MaxResults</code> namespaces matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> namespaces do
     * contain namespaces that match the criteria.</p> </note>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListNamespaces</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> namespaces and
     * then filters them based on the specified criteria. It's possible that no
     * namespaces in the first <code>MaxResults</code> namespaces matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> namespaces do
     * contain namespaces that match the criteria.</p> </note>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListNamespaces</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> namespaces and
     * then filters them based on the specified criteria. It's possible that no
     * namespaces in the first <code>MaxResults</code> namespaces matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> namespaces do
     * contain namespaces that match the criteria.</p> </note>
     */
    inline ListNamespacesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListNamespaces</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> namespaces and
     * then filters them based on the specified criteria. It's possible that no
     * namespaces in the first <code>MaxResults</code> namespaces matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> namespaces do
     * contain namespaces that match the criteria.</p> </note>
     */
    inline ListNamespacesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response contains <code>NextToken</code>, submit another
     * <code>ListNamespaces</code> request to get the next group of results. Specify
     * the value of <code>NextToken</code> from the previous response in the next
     * request.</p> <note> <p>AWS Cloud Map gets <code>MaxResults</code> namespaces and
     * then filters them based on the specified criteria. It's possible that no
     * namespaces in the first <code>MaxResults</code> namespaces matched the specified
     * criteria but that subsequent groups of <code>MaxResults</code> namespaces do
     * contain namespaces that match the criteria.</p> </note>
     */
    inline ListNamespacesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<NamespaceSummary> m_namespaces;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
