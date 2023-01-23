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
    AWS_GLUE_API CreateScriptRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateScript"; }

    AWS_GLUE_API Aws::String SerializePayload() const override;

    AWS_GLUE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of the nodes in the DAG.</p>
     */
    inline const Aws::Vector<CodeGenNode>& GetDagNodes() const{ return m_dagNodes; }

    /**
     * <p>A list of the nodes in the DAG.</p>
     */
    inline bool DagNodesHasBeenSet() const { return m_dagNodesHasBeenSet; }

    /**
     * <p>A list of the nodes in the DAG.</p>
     */
    inline void SetDagNodes(const Aws::Vector<CodeGenNode>& value) { m_dagNodesHasBeenSet = true; m_dagNodes = value; }

    /**
     * <p>A list of the nodes in the DAG.</p>
     */
    inline void SetDagNodes(Aws::Vector<CodeGenNode>&& value) { m_dagNodesHasBeenSet = true; m_dagNodes = std::move(value); }

    /**
     * <p>A list of the nodes in the DAG.</p>
     */
    inline CreateScriptRequest& WithDagNodes(const Aws::Vector<CodeGenNode>& value) { SetDagNodes(value); return *this;}

    /**
     * <p>A list of the nodes in the DAG.</p>
     */
    inline CreateScriptRequest& WithDagNodes(Aws::Vector<CodeGenNode>&& value) { SetDagNodes(std::move(value)); return *this;}

    /**
     * <p>A list of the nodes in the DAG.</p>
     */
    inline CreateScriptRequest& AddDagNodes(const CodeGenNode& value) { m_dagNodesHasBeenSet = true; m_dagNodes.push_back(value); return *this; }

    /**
     * <p>A list of the nodes in the DAG.</p>
     */
    inline CreateScriptRequest& AddDagNodes(CodeGenNode&& value) { m_dagNodesHasBeenSet = true; m_dagNodes.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of the edges in the DAG.</p>
     */
    inline const Aws::Vector<CodeGenEdge>& GetDagEdges() const{ return m_dagEdges; }

    /**
     * <p>A list of the edges in the DAG.</p>
     */
    inline bool DagEdgesHasBeenSet() const { return m_dagEdgesHasBeenSet; }

    /**
     * <p>A list of the edges in the DAG.</p>
     */
    inline void SetDagEdges(const Aws::Vector<CodeGenEdge>& value) { m_dagEdgesHasBeenSet = true; m_dagEdges = value; }

    /**
     * <p>A list of the edges in the DAG.</p>
     */
    inline void SetDagEdges(Aws::Vector<CodeGenEdge>&& value) { m_dagEdgesHasBeenSet = true; m_dagEdges = std::move(value); }

    /**
     * <p>A list of the edges in the DAG.</p>
     */
    inline CreateScriptRequest& WithDagEdges(const Aws::Vector<CodeGenEdge>& value) { SetDagEdges(value); return *this;}

    /**
     * <p>A list of the edges in the DAG.</p>
     */
    inline CreateScriptRequest& WithDagEdges(Aws::Vector<CodeGenEdge>&& value) { SetDagEdges(std::move(value)); return *this;}

    /**
     * <p>A list of the edges in the DAG.</p>
     */
    inline CreateScriptRequest& AddDagEdges(const CodeGenEdge& value) { m_dagEdgesHasBeenSet = true; m_dagEdges.push_back(value); return *this; }

    /**
     * <p>A list of the edges in the DAG.</p>
     */
    inline CreateScriptRequest& AddDagEdges(CodeGenEdge&& value) { m_dagEdgesHasBeenSet = true; m_dagEdges.push_back(std::move(value)); return *this; }


    /**
     * <p>The programming language of the resulting code from the DAG.</p>
     */
    inline const Language& GetLanguage() const{ return m_language; }

    /**
     * <p>The programming language of the resulting code from the DAG.</p>
     */
    inline bool LanguageHasBeenSet() const { return m_languageHasBeenSet; }

    /**
     * <p>The programming language of the resulting code from the DAG.</p>
     */
    inline void SetLanguage(const Language& value) { m_languageHasBeenSet = true; m_language = value; }

    /**
     * <p>The programming language of the resulting code from the DAG.</p>
     */
    inline void SetLanguage(Language&& value) { m_languageHasBeenSet = true; m_language = std::move(value); }

    /**
     * <p>The programming language of the resulting code from the DAG.</p>
     */
    inline CreateScriptRequest& WithLanguage(const Language& value) { SetLanguage(value); return *this;}

    /**
     * <p>The programming language of the resulting code from the DAG.</p>
     */
    inline CreateScriptRequest& WithLanguage(Language&& value) { SetLanguage(std::move(value)); return *this;}

  private:

    Aws::Vector<CodeGenNode> m_dagNodes;
    bool m_dagNodesHasBeenSet = false;

    Aws::Vector<CodeGenEdge> m_dagEdges;
    bool m_dagEdgesHasBeenSet = false;

    Language m_language;
    bool m_languageHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
