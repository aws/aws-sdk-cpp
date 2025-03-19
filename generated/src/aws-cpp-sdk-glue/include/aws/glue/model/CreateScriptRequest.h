/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/GlueRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/Language.h>
#include <aws/glue/model/CodeGenNode.h>
#include <aws/glue/model/CodeGenEdge.h>
#include <utility>

namespace Aws
{
namespace Glue
{
namespace Model
{

  /**
   */
  class CreateScriptRequest : public GlueRequest
  {
  public:
    AWS_GLUE_API CreateScriptRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScript"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of the nodes in the DAG.</p>
     */
    inline const Aws::Vector<CodeGenNode>& GetDagNodes() const { return m_dagNodes; }
    inline bool DagNodesHasBeenSet() const { return m_dagNodesHasBeenSet; }
    template<typename DagNodesT = Aws::Vector<CodeGenNode>>
    void SetDagNodes(DagNodesT&& value) { m_dagNodesHasBeenSet = true; m_dagNodes = std::forward<DagNodesT>(value); }
    template<typename DagNodesT = Aws::Vector<CodeGenNode>>
    CreateScriptRequest& WithDagNodes(DagNodesT&& value) { SetDagNodes(std::forward<DagNodesT>(value)); return *this;}
    template<typename DagNodesT = CodeGenNode>
    CreateScriptRequest& AddDagNodes(DagNodesT&& value) { m_dagNodesHasBeenSet = true; m_dagNodes.emplace_back(std::forward<DagNodesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of the edges in the DAG.</p>
     */
    inline const Aws::Vector<CodeGenEdge>& GetDagEdges() const { return m_dagEdges; }
    inline bool DagEdgesHasBeenSet() const { return m_dagEdgesHasBeenSet; }
    template<typename DagEdgesT = Aws::Vector<CodeGenEdge>>
    void SetDagEdges(DagEdgesT&& value) { m_dagEdgesHasBeenSet = true; m_dagEdges = std::forward<DagEdgesT>(value); }
    template<typename DagEdgesT = Aws::Vector<CodeGenEdge>>
    CreateScriptRequest& WithDagEdges(DagEdgesT&& value) { SetDagEdges(std::forward<DagEdgesT>(value)); return *this;}
    template<typename DagEdgesT = CodeGenEdge>
    CreateScriptRequest& AddDagEdges(DagEdgesT&& value) { m_dagEdgesHasBeenSet = true; m_dagEdges.emplace_back(std::forward<DagEdgesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The programming language of the resulting code from the DAG.</p>
     */
    inline Language GetLanguage() const { return m_language; }
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }
    inline void SetLanguage(Language value) { m_languageHasBeenSet = true; m_language = value; }
    inline CreateScriptRequest& WithLanguage(Language value) { SetLanguage(value); return *this;}
    ///@}
  private:

    Aws::Vector<CodeGenNode> m_dagNodes;
    bool m_dagNodesHasBeenSet = false;

    Aws::Vector<CodeGenEdge> m_dagEdges;
    bool m_dagEdgesHasBeenSet = false;

    Language m_language{Language::NOT_SET};
    bool m_languageHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
