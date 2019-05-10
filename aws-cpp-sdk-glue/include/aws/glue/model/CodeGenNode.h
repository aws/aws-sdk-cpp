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
  class AWS_GLUE_API CodeGenNode
  {
  public:
    CodeGenNode();
    CodeGenNode(Aws::Utils::Json::JsonView jsonValue);
    CodeGenNode& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A node identifier that is unique within the node's graph.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A node identifier that is unique within the node's graph.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A node identifier that is unique within the node's graph.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A node identifier that is unique within the node's graph.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A node identifier that is unique within the node's graph.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A node identifier that is unique within the node's graph.</p>
     */
    inline CodeGenNode& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A node identifier that is unique within the node's graph.</p>
     */
    inline CodeGenNode& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A node identifier that is unique within the node's graph.</p>
     */
    inline CodeGenNode& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The type of node that this is.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>The type of node that this is.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>The type of node that this is.</p>
     */
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>The type of node that this is.</p>
     */
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>The type of node that this is.</p>
     */
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }

    /**
     * <p>The type of node that this is.</p>
     */
    inline CodeGenNode& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}

    /**
     * <p>The type of node that this is.</p>
     */
    inline CodeGenNode& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}

    /**
     * <p>The type of node that this is.</p>
     */
    inline CodeGenNode& WithNodeType(const char* value) { SetNodeType(value); return *this;}


    /**
     * <p>Properties of the node, in the form of name-value pairs.</p>
     */
    inline const Aws::Vector<CodeGenNodeArg>& GetArgs() const{ return m_args; }

    /**
     * <p>Properties of the node, in the form of name-value pairs.</p>
     */
    inline bool ArgsHasBeenSet() const { return m_argsHasBeenSet; }

    /**
     * <p>Properties of the node, in the form of name-value pairs.</p>
     */
    inline void SetArgs(const Aws::Vector<CodeGenNodeArg>& value) { m_argsHasBeenSet = true; m_args = value; }

    /**
     * <p>Properties of the node, in the form of name-value pairs.</p>
     */
    inline void SetArgs(Aws::Vector<CodeGenNodeArg>&& value) { m_argsHasBeenSet = true; m_args = std::move(value); }

    /**
     * <p>Properties of the node, in the form of name-value pairs.</p>
     */
    inline CodeGenNode& WithArgs(const Aws::Vector<CodeGenNodeArg>& value) { SetArgs(value); return *this;}

    /**
     * <p>Properties of the node, in the form of name-value pairs.</p>
     */
    inline CodeGenNode& WithArgs(Aws::Vector<CodeGenNodeArg>&& value) { SetArgs(std::move(value)); return *this;}

    /**
     * <p>Properties of the node, in the form of name-value pairs.</p>
     */
    inline CodeGenNode& AddArgs(const CodeGenNodeArg& value) { m_argsHasBeenSet = true; m_args.push_back(value); return *this; }

    /**
     * <p>Properties of the node, in the form of name-value pairs.</p>
     */
    inline CodeGenNode& AddArgs(CodeGenNodeArg&& value) { m_argsHasBeenSet = true; m_args.push_back(std::move(value)); return *this; }


    /**
     * <p>The line number of the node.</p>
     */
    inline int GetLineNumber() const{ return m_lineNumber; }

    /**
     * <p>The line number of the node.</p>
     */
    inline bool LineNumberHasBeenSet() const { return m_lineNumberHasBeenSet; }

    /**
     * <p>The line number of the node.</p>
     */
    inline void SetLineNumber(int value) { m_lineNumberHasBeenSet = true; m_lineNumber = value; }

    /**
     * <p>The line number of the node.</p>
     */
    inline CodeGenNode& WithLineNumber(int value) { SetLineNumber(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet;

    Aws::Vector<CodeGenNodeArg> m_args;
    bool m_argsHasBeenSet;

    int m_lineNumber;
    bool m_lineNumberHasBeenSet;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
