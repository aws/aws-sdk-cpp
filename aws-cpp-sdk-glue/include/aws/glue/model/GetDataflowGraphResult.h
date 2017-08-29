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
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_GLUE_API GetDataflowGraphResult
  {
  public:
    GetDataflowGraphResult();
    GetDataflowGraphResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDataflowGraphResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of the nodes in the resulting DAG.</p>
     */
    inline const Aws::Vector<CodeGenNode>& GetDagNodes() const{ return m_dagNodes; }

    /**
     * <p>A list of the nodes in the resulting DAG.</p>
     */
    inline void SetDagNodes(const Aws::Vector<CodeGenNode>& value) { m_dagNodes = value; }

    /**
     * <p>A list of the nodes in the resulting DAG.</p>
     */
    inline void SetDagNodes(Aws::Vector<CodeGenNode>&& value) { m_dagNodes = std::move(value); }

    /**
     * <p>A list of the nodes in the resulting DAG.</p>
     */
    inline GetDataflowGraphResult& WithDagNodes(const Aws::Vector<CodeGenNode>& value) { SetDagNodes(value); return *this;}

    /**
     * <p>A list of the nodes in the resulting DAG.</p>
     */
    inline GetDataflowGraphResult& WithDagNodes(Aws::Vector<CodeGenNode>&& value) { SetDagNodes(std::move(value)); return *this;}

    /**
     * <p>A list of the nodes in the resulting DAG.</p>
     */
    inline GetDataflowGraphResult& AddDagNodes(const CodeGenNode& value) { m_dagNodes.push_back(value); return *this; }

    /**
     * <p>A list of the nodes in the resulting DAG.</p>
     */
    inline GetDataflowGraphResult& AddDagNodes(CodeGenNode&& value) { m_dagNodes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the edges in the resulting DAG.</p>
     */
    inline const Aws::Vector<CodeGenEdge>& GetDagEdges() const{ return m_dagEdges; }

    /**
     * <p>A list of the edges in the resulting DAG.</p>
     */
    inline void SetDagEdges(const Aws::Vector<CodeGenEdge>& value) { m_dagEdges = value; }

    /**
     * <p>A list of the edges in the resulting DAG.</p>
     */
    inline void SetDagEdges(Aws::Vector<CodeGenEdge>&& value) { m_dagEdges = std::move(value); }

    /**
     * <p>A list of the edges in the resulting DAG.</p>
     */
    inline GetDataflowGraphResult& WithDagEdges(const Aws::Vector<CodeGenEdge>& value) { SetDagEdges(value); return *this;}

    /**
     * <p>A list of the edges in the resulting DAG.</p>
     */
    inline GetDataflowGraphResult& WithDagEdges(Aws::Vector<CodeGenEdge>&& value) { SetDagEdges(std::move(value)); return *this;}

    /**
     * <p>A list of the edges in the resulting DAG.</p>
     */
    inline GetDataflowGraphResult& AddDagEdges(const CodeGenEdge& value) { m_dagEdges.push_back(value); return *this; }

    /**
     * <p>A list of the edges in the resulting DAG.</p>
     */
    inline GetDataflowGraphResult& AddDagEdges(CodeGenEdge&& value) { m_dagEdges.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CodeGenNode> m_dagNodes;

    Aws::Vector<CodeGenEdge> m_dagEdges;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
