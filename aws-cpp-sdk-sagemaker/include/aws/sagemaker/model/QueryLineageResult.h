/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/Vertex.h>
#include <aws/sagemaker/model/Edge.h>
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
namespace SageMaker
{
namespace Model
{
  class QueryLineageResult
  {
  public:
    AWS_SAGEMAKER_API QueryLineageResult();
    AWS_SAGEMAKER_API QueryLineageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API QueryLineageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of vertices connected to the start entity(ies) in the lineage
     * graph.</p>
     */
    inline const Aws::Vector<Vertex>& GetVertices() const{ return m_vertices; }

    /**
     * <p>A list of vertices connected to the start entity(ies) in the lineage
     * graph.</p>
     */
    inline void SetVertices(const Aws::Vector<Vertex>& value) { m_vertices = value; }

    /**
     * <p>A list of vertices connected to the start entity(ies) in the lineage
     * graph.</p>
     */
    inline void SetVertices(Aws::Vector<Vertex>&& value) { m_vertices = std::move(value); }

    /**
     * <p>A list of vertices connected to the start entity(ies) in the lineage
     * graph.</p>
     */
    inline QueryLineageResult& WithVertices(const Aws::Vector<Vertex>& value) { SetVertices(value); return *this;}

    /**
     * <p>A list of vertices connected to the start entity(ies) in the lineage
     * graph.</p>
     */
    inline QueryLineageResult& WithVertices(Aws::Vector<Vertex>&& value) { SetVertices(std::move(value)); return *this;}

    /**
     * <p>A list of vertices connected to the start entity(ies) in the lineage
     * graph.</p>
     */
    inline QueryLineageResult& AddVertices(const Vertex& value) { m_vertices.push_back(value); return *this; }

    /**
     * <p>A list of vertices connected to the start entity(ies) in the lineage
     * graph.</p>
     */
    inline QueryLineageResult& AddVertices(Vertex&& value) { m_vertices.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of edges that connect vertices in the response.</p>
     */
    inline const Aws::Vector<Edge>& GetEdges() const{ return m_edges; }

    /**
     * <p>A list of edges that connect vertices in the response.</p>
     */
    inline void SetEdges(const Aws::Vector<Edge>& value) { m_edges = value; }

    /**
     * <p>A list of edges that connect vertices in the response.</p>
     */
    inline void SetEdges(Aws::Vector<Edge>&& value) { m_edges = std::move(value); }

    /**
     * <p>A list of edges that connect vertices in the response.</p>
     */
    inline QueryLineageResult& WithEdges(const Aws::Vector<Edge>& value) { SetEdges(value); return *this;}

    /**
     * <p>A list of edges that connect vertices in the response.</p>
     */
    inline QueryLineageResult& WithEdges(Aws::Vector<Edge>&& value) { SetEdges(std::move(value)); return *this;}

    /**
     * <p>A list of edges that connect vertices in the response.</p>
     */
    inline QueryLineageResult& AddEdges(const Edge& value) { m_edges.push_back(value); return *this; }

    /**
     * <p>A list of edges that connect vertices in the response.</p>
     */
    inline QueryLineageResult& AddEdges(Edge&& value) { m_edges.push_back(std::move(value)); return *this; }


    /**
     * <p>Limits the number of vertices in the response. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Limits the number of vertices in the response. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Limits the number of vertices in the response. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Limits the number of vertices in the response. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Limits the number of vertices in the response. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline QueryLineageResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Limits the number of vertices in the response. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline QueryLineageResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Limits the number of vertices in the response. Use the <code>NextToken</code>
     * in a response to to retrieve the next page of results.</p>
     */
    inline QueryLineageResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Vertex> m_vertices;

    Aws::Vector<Edge> m_edges;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
