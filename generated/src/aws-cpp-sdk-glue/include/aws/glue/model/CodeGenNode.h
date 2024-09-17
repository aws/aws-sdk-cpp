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
    AWS_GLUE_API CodeGenNode();
    AWS_GLUE_API CodeGenNode(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API CodeGenNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A node identifier that is unique within the node's graph.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline CodeGenNode& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline CodeGenNode& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline CodeGenNode& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of node that this is.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline CodeGenNode& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline CodeGenNode& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline CodeGenNode& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties of the node, in the form of name-value pairs.</p>
     */
    inline const Aws::Vector<CodeGenNodeArg>& GetArgs() const{ return m_args; }
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }
    inline void SetArgs(const Aws::Vector<CodeGenNodeArg>& value) { m_argsHasBeenSet = true; m_args = value; }
    inline void SetArgs(Aws::Vector<CodeGenNodeArg>&& value) { m_argsHasBeenSet = true; m_args = std::move(value); }
    inline CodeGenNode& WithArgs(const Aws::Vector<CodeGenNodeArg>& value) { SetArgs(value); return *this;}
    inline CodeGenNode& WithArgs(Aws::Vector<CodeGenNodeArg>&& value) { SetArgs(std::move(value)); return *this;}
    inline CodeGenNode& AddArgs(const CodeGenNodeArg& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }
    inline CodeGenNode& AddArgs(CodeGenNodeArg&& value) { m_argsHasBeenSet = true; m_args.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The line number of the node.</p>
     */
    inline int GetLineNumber() const{ return m_lineNumber; }
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

    int m_lineNumber;
    bool m_lineNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
