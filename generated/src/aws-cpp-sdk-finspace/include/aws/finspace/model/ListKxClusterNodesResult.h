/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/finspace/Finspace_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/finspace/model/KxNode.h>
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
namespace finspace
{
namespace Model
{
  class ListKxClusterNodesResult
  {
  public:
    AWS_FINSPACE_API ListKxClusterNodesResult();
    AWS_FINSPACE_API ListKxClusterNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FINSPACE_API ListKxClusterNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of nodes associated with the cluster.</p>
     */
    inline const Aws::Vector<KxNode>& GetNodes() const{ return m_nodes; }

    /**
     * <p>A list of nodes associated with the cluster.</p>
     */
    inline void SetNodes(const Aws::Vector<KxNode>& value) { m_nodes = value; }

    /**
     * <p>A list of nodes associated with the cluster.</p>
     */
    inline void SetNodes(Aws::Vector<KxNode>&& value) { m_nodes = std::move(value); }

    /**
     * <p>A list of nodes associated with the cluster.</p>
     */
    inline ListKxClusterNodesResult& WithNodes(const Aws::Vector<KxNode>& value) { SetNodes(value); return *this;}

    /**
     * <p>A list of nodes associated with the cluster.</p>
     */
    inline ListKxClusterNodesResult& WithNodes(Aws::Vector<KxNode>&& value) { SetNodes(std::move(value)); return *this;}

    /**
     * <p>A list of nodes associated with the cluster.</p>
     */
    inline ListKxClusterNodesResult& AddNodes(const KxNode& value) { m_nodes.push_back(value); return *this; }

    /**
     * <p>A list of nodes associated with the cluster.</p>
     */
    inline ListKxClusterNodesResult& AddNodes(KxNode&& value) { m_nodes.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxClusterNodesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxClusterNodesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where a results page should begin.</p>
     */
    inline ListKxClusterNodesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListKxClusterNodesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListKxClusterNodesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListKxClusterNodesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<KxNode> m_nodes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace finspace
} // namespace Aws
