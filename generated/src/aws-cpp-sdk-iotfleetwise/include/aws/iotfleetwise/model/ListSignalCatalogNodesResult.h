﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/Node.h>
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
namespace IoTFleetWise
{
namespace Model
{
  class ListSignalCatalogNodesResult
  {
  public:
    AWS_IOTFLEETWISE_API ListSignalCatalogNodesResult();
    AWS_IOTFLEETWISE_API ListSignalCatalogNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTFLEETWISE_API ListSignalCatalogNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of information about nodes. </p>
     */
    inline const Aws::Vector<Node>& GetNodes() const{ return m_nodes; }
    inline void SetNodes(const Aws::Vector<Node>& value) { m_nodes = value; }
    inline void SetNodes(Aws::Vector<Node>&& value) { m_nodes = std::move(value); }
    inline ListSignalCatalogNodesResult& WithNodes(const Aws::Vector<Node>& value) { SetNodes(value); return *this;}
    inline ListSignalCatalogNodesResult& WithNodes(Aws::Vector<Node>&& value) { SetNodes(std::move(value)); return *this;}
    inline ListSignalCatalogNodesResult& AddNodes(const Node& value) { m_nodes.push_back(value); return *this; }
    inline ListSignalCatalogNodesResult& AddNodes(Node&& value) { m_nodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListSignalCatalogNodesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListSignalCatalogNodesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListSignalCatalogNodesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListSignalCatalogNodesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListSignalCatalogNodesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListSignalCatalogNodesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Node> m_nodes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
