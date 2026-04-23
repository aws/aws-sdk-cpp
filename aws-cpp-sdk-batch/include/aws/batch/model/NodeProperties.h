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
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/batch/model/NodeRangeProperty.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object representing the node properties of a multi-node parallel
   * job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NodeProperties">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API NodeProperties
  {
  public:
    NodeProperties();
    NodeProperties(Aws::Utils::Json::JsonView jsonValue);
    NodeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of nodes associated with a multi-node parallel job.</p>
     */
    inline int GetNumNodes() const{ return m_numNodes; }

    /**
     * <p>The number of nodes associated with a multi-node parallel job.</p>
     */
    inline bool NumNodesHasBeenSet() const { return m_numNodesHasBeenSet; }

    /**
     * <p>The number of nodes associated with a multi-node parallel job.</p>
     */
    inline void SetNumNodes(int value) { m_numNodesHasBeenSet = true; m_numNodes = value; }

    /**
     * <p>The number of nodes associated with a multi-node parallel job.</p>
     */
    inline NodeProperties& WithNumNodes(int value) { SetNumNodes(value); return *this;}


    /**
     * <p>Specifies the node index for the main node of a multi-node parallel job. This
     * node index value must be fewer than the number of nodes.</p>
     */
    inline int GetMainNode() const{ return m_mainNode; }

    /**
     * <p>Specifies the node index for the main node of a multi-node parallel job. This
     * node index value must be fewer than the number of nodes.</p>
     */
    inline bool MainNodeHasBeenSet() const { return m_mainNodeHasBeenSet; }

    /**
     * <p>Specifies the node index for the main node of a multi-node parallel job. This
     * node index value must be fewer than the number of nodes.</p>
     */
    inline void SetMainNode(int value) { m_mainNodeHasBeenSet = true; m_mainNode = value; }

    /**
     * <p>Specifies the node index for the main node of a multi-node parallel job. This
     * node index value must be fewer than the number of nodes.</p>
     */
    inline NodeProperties& WithMainNode(int value) { SetMainNode(value); return *this;}


    /**
     * <p>A list of node ranges and their properties associated with a multi-node
     * parallel job.</p>
     */
    inline const Aws::Vector<NodeRangeProperty>& GetNodeRangeProperties() const{ return m_nodeRangeProperties; }

    /**
     * <p>A list of node ranges and their properties associated with a multi-node
     * parallel job.</p>
     */
    inline bool NodeRangePropertiesHasBeenSet() const { return m_nodeRangePropertiesHasBeenSet; }

    /**
     * <p>A list of node ranges and their properties associated with a multi-node
     * parallel job.</p>
     */
    inline void SetNodeRangeProperties(const Aws::Vector<NodeRangeProperty>& value) { m_nodeRangePropertiesHasBeenSet = true; m_nodeRangeProperties = value; }

    /**
     * <p>A list of node ranges and their properties associated with a multi-node
     * parallel job.</p>
     */
    inline void SetNodeRangeProperties(Aws::Vector<NodeRangeProperty>&& value) { m_nodeRangePropertiesHasBeenSet = true; m_nodeRangeProperties = std::move(value); }

    /**
     * <p>A list of node ranges and their properties associated with a multi-node
     * parallel job.</p>
     */
    inline NodeProperties& WithNodeRangeProperties(const Aws::Vector<NodeRangeProperty>& value) { SetNodeRangeProperties(value); return *this;}

    /**
     * <p>A list of node ranges and their properties associated with a multi-node
     * parallel job.</p>
     */
    inline NodeProperties& WithNodeRangeProperties(Aws::Vector<NodeRangeProperty>&& value) { SetNodeRangeProperties(std::move(value)); return *this;}

    /**
     * <p>A list of node ranges and their properties associated with a multi-node
     * parallel job.</p>
     */
    inline NodeProperties& AddNodeRangeProperties(const NodeRangeProperty& value) { m_nodeRangePropertiesHasBeenSet = true; m_nodeRangeProperties.push_back(value); return *this; }

    /**
     * <p>A list of node ranges and their properties associated with a multi-node
     * parallel job.</p>
     */
    inline NodeProperties& AddNodeRangeProperties(NodeRangeProperty&& value) { m_nodeRangePropertiesHasBeenSet = true; m_nodeRangeProperties.push_back(std::move(value)); return *this; }

  private:

    int m_numNodes;
    bool m_numNodesHasBeenSet;

    int m_mainNode;
    bool m_mainNodeHasBeenSet;

    Aws::Vector<NodeRangeProperty> m_nodeRangeProperties;
    bool m_nodeRangePropertiesHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
