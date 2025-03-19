/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>An object that represents the node properties of a multi-node parallel
   * job.</p>  <p>Node properties can't be specified for Amazon EKS based job
   * definitions.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NodeProperties">AWS
   * API Reference</a></p>
   */
  class NodeProperties
  {
  public:
    AWS_BATCH_API NodeProperties() = default;
    AWS_BATCH_API NodeProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API NodeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of nodes that are associated with a multi-node parallel job.</p>
     */
    inline int GetNumNodes() const { return m_numNodes; }
    inline bool NumNodesHasBeenSet() const { return m_numNodesHasBeenSet; }
    inline void SetNumNodes(int value) { m_numNodesHasBeenSet = true; m_numNodes = value; }
    inline NodeProperties& WithNumNodes(int value) { SetNumNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the node index for the main node of a multi-node parallel job. This
     * node index value must be fewer than the number of nodes.</p>
     */
    inline int GetMainNode() const { return m_mainNode; }
    inline bool MainNodeHasBeenSet() const { return m_mainNodeHasBeenSet; }
    inline void SetMainNode(int value) { m_mainNodeHasBeenSet = true; m_mainNode = value; }
    inline NodeProperties& WithMainNode(int value) { SetMainNode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of node ranges and their properties that are associated with a
     * multi-node parallel job.</p>
     */
    inline const Aws::Vector<NodeRangeProperty>& GetNodeRangeProperties() const { return m_nodeRangeProperties; }
    inline bool NodeRangePropertiesHasBeenSet() const { return m_nodeRangePropertiesHasBeenSet; }
    template<typename NodeRangePropertiesT = Aws::Vector<NodeRangeProperty>>
    void SetNodeRangeProperties(NodeRangePropertiesT&& value) { m_nodeRangePropertiesHasBeenSet = true; m_nodeRangeProperties = std::forward<NodeRangePropertiesT>(value); }
    template<typename NodeRangePropertiesT = Aws::Vector<NodeRangeProperty>>
    NodeProperties& WithNodeRangeProperties(NodeRangePropertiesT&& value) { SetNodeRangeProperties(std::forward<NodeRangePropertiesT>(value)); return *this;}
    template<typename NodeRangePropertiesT = NodeRangeProperty>
    NodeProperties& AddNodeRangeProperties(NodeRangePropertiesT&& value) { m_nodeRangePropertiesHasBeenSet = true; m_nodeRangeProperties.emplace_back(std::forward<NodeRangePropertiesT>(value)); return *this; }
    ///@}
  private:

    int m_numNodes{0};
    bool m_numNodesHasBeenSet = false;

    int m_mainNode{0};
    bool m_mainNodeHasBeenSet = false;

    Aws::Vector<NodeRangeProperty> m_nodeRangeProperties;
    bool m_nodeRangePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
