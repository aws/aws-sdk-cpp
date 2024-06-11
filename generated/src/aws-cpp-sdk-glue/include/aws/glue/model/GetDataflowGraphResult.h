﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/CodeGenNode.h>
#include <aws/glue/model/CodeGenEdge.h>
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
namespace Glue
{
namespace Model
{
  class GetDataflowGraphResult
  {
  public:
    AWS_GLUE_API GetDataflowGraphResult();
    AWS_GLUE_API GetDataflowGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetDataflowGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the nodes in the resulting DAG.</p>
     */
    inline const Aws::Vector<CodeGenNode>& GetDagNodes() const{ return m_dagNodes; }
    inline void SetDagNodes(const Aws::Vector<CodeGenNode>& value) { m_dagNodes = value; }
    inline void SetDagNodes(Aws::Vector<CodeGenNode>&& value) { m_dagNodes = std::move(value); }
    inline GetDataflowGraphResult& WithDagNodes(const Aws::Vector<CodeGenNode>& value) { SetDagNodes(value); return *this;}
    inline GetDataflowGraphResult& WithDagNodes(Aws::Vector<CodeGenNode>&& value) { SetDagNodes(std::move(value)); return *this;}
    inline GetDataflowGraphResult& AddDagNodes(const CodeGenNode& value) { m_dagNodes.push_back(value); return *this; }
    inline GetDataflowGraphResult& AddDagNodes(CodeGenNode&& value) { m_dagNodes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the edges in the resulting DAG.</p>
     */
    inline const Aws::Vector<CodeGenEdge>& GetDagEdges() const{ return m_dagEdges; }
    inline void SetDagEdges(const Aws::Vector<CodeGenEdge>& value) { m_dagEdges = value; }
    inline void SetDagEdges(Aws::Vector<CodeGenEdge>&& value) { m_dagEdges = std::move(value); }
    inline GetDataflowGraphResult& WithDagEdges(const Aws::Vector<CodeGenEdge>& value) { SetDagEdges(value); return *this;}
    inline GetDataflowGraphResult& WithDagEdges(Aws::Vector<CodeGenEdge>&& value) { SetDagEdges(std::move(value)); return *this;}
    inline GetDataflowGraphResult& AddDagEdges(const CodeGenEdge& value) { m_dagEdges.push_back(value); return *this; }
    inline GetDataflowGraphResult& AddDagEdges(CodeGenEdge&& value) { m_dagEdges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataflowGraphResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataflowGraphResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataflowGraphResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<CodeGenNode> m_dagNodes;

    Aws::Vector<CodeGenEdge> m_dagEdges;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
