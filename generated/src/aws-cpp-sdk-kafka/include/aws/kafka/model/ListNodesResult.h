﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kafka/Kafka_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kafka/model/NodeInfo.h>
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
namespace Kafka
{
namespace Model
{
  class ListNodesResult
  {
  public:
    AWS_KAFKA_API ListNodesResult();
    AWS_KAFKA_API ListNodesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_KAFKA_API ListNodesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * 
            <p>The paginated results marker. When the result of a ListNodes
     * operation is truncated, the call returns NextToken in the response. 
           
     * To get another batch of nodes, provide this token in your next request.</p>
    
     *     
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNodesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNodesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNodesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * 
            <p>List containing a NodeInfo object.</p>
         
     */
    inline const Aws::Vector<NodeInfo>& GetNodeInfoList() const{ return m_nodeInfoList; }
    inline void SetNodeInfoList(const Aws::Vector<NodeInfo>& value) { m_nodeInfoList = value; }
    inline void SetNodeInfoList(Aws::Vector<NodeInfo>&& value) { m_nodeInfoList = std::move(value); }
    inline ListNodesResult& WithNodeInfoList(const Aws::Vector<NodeInfo>& value) { SetNodeInfoList(value); return *this;}
    inline ListNodesResult& WithNodeInfoList(Aws::Vector<NodeInfo>&& value) { SetNodeInfoList(std::move(value)); return *this;}
    inline ListNodesResult& AddNodeInfoList(const NodeInfo& value) { m_nodeInfoList.push_back(value); return *this; }
    inline ListNodesResult& AddNodeInfoList(NodeInfo&& value) { m_nodeInfoList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNodesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNodesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNodesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<NodeInfo> m_nodeInfoList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Kafka
} // namespace Aws
