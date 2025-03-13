/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/CodeGenNodeArg.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Represents a node in a directed acyclic graph (DAG)</p><p><h3>See Also:</h3> 
   * <a href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/CodeGenNode">AWS
   * API Reference</a></p>
   */
  class CodeGenNode
  {
  public:
    AWS_GLUE_API CodeGenNode() = default;
    AWS_GLUE_API CodeGenNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CodeGenNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A node identifier that is unique within the node's graph.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CodeGenNode& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of node that this is.</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    CodeGenNode& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties of the node, in the form of name-value pairs.</p>
     */
    inline const Aws::Vector<CodeGenNodeArg>& GetArgs() const { return m_args; }
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }
    template<typename ArgsT = Aws::Vector<CodeGenNodeArg>>
    void SetArgs(ArgsT&& value) { m_argsHasBeenSet = true; m_args = std::forward<ArgsT>(value); }
    template<typename ArgsT = Aws::Vector<CodeGenNodeArg>>
    CodeGenNode& WithArgs(ArgsT&& value) { SetArgs(std::forward<ArgsT>(value)); return *this;}
    template<typename ArgsT = CodeGenNodeArg>
    CodeGenNode& AddArgs(ArgsT&& value) { m_argsHasBeenSet = true; m_args.emplace_back(std::forward<ArgsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The line number of the node.</p>
     */
    inline int GetLineNumber() const { return m_lineNumber; }
    inline bool LineNumberHasBeenSet() const { return m_lineNumberHasBeenSet; }
    inline void SetLineNumber(int value) { m_lineNumberHasBeenSet = true; m_lineNumber = value; }
    inline CodeGenNode& WithLineNumber(int value) { SetLineNumber(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::Vector<CodeGenNodeArg> m_args;
    bool m_argsHasBeenSet = false;

    int m_lineNumber{0};
    bool m_lineNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
