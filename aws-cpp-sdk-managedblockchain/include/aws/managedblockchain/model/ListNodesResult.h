/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/managedblockchain/model/NodeSummary.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class ListNodesResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API ListNodesResult();
    AWS_MANAGEDBLOCKCHAIN_API ListNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API ListNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>An array of <code>NodeSummary</code> objects that contain configuration
     * properties for each node.</p>
     */
    inline const Aws::Vector<NodeSummary>& GetNodes() const{ return m_nodes; }

    /**
     * <p>An array of <code>NodeSummary</code> objects that contain configuration
     * properties for each node.</p>
     */
    inline void SetNodes(const Aws::Vector<NodeSummary>& value) { m_nodes = value; }

    /**
     * <p>An array of <code>NodeSummary</code> objects that contain configuration
     * properties for each node.</p>
     */
    inline void SetNodes(Aws::Vector<NodeSummary>&& value) { m_nodes = std::move(value); }

    /**
     * <p>An array of <code>NodeSummary</code> objects that contain configuration
     * properties for each node.</p>
     */
    inline ListNodesResult& WithNodes(const Aws::Vector<NodeSummary>& value) { SetNodes(value); return *this;}

    /**
     * <p>An array of <code>NodeSummary</code> objects that contain configuration
     * properties for each node.</p>
     */
    inline ListNodesResult& WithNodes(Aws::Vector<NodeSummary>&& value) { SetNodes(std::move(value)); return *this;}

    /**
     * <p>An array of <code>NodeSummary</code> objects that contain configuration
     * properties for each node.</p>
     */
    inline ListNodesResult& AddNodes(const NodeSummary& value) { m_nodes.push_back(value); return *this; }

    /**
     * <p>An array of <code>NodeSummary</code> objects that contain configuration
     * properties for each node.</p>
     */
    inline ListNodesResult& AddNodes(NodeSummary&& value) { m_nodes.push_back(std::move(value)); return *this; }


    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListNodesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListNodesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that indicates the next set of results to retrieve.</p>
     */
    inline ListNodesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<NodeSummary> m_nodes;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
