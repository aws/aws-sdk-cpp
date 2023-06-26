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
    AWS_BATCH_API NodeProperties();
    AWS_BATCH_API NodeProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API NodeProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The number of nodes that are associated with a multi-node parallel job.</p>
     */
    inline int GetNumNodes() const{ return m_numNodes; }

    /**
     * <p>The number of nodes that are associated with a multi-node parallel job.</p>
     */
    inline bool NumNodesHasBeenSet() const { return m_numNodesHasBeenSet; }

    /**
     * <p>The number of nodes that are associated with a multi-node parallel job.</p>
     */
    inline void SetNumNodes(int value) { m_numNodesHasBeenSet = true; m_numNodes = value; }

    /**
     * <p>The number of nodes that are associated with a multi-node parallel job.</p>
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
     * <p>A list of node ranges and their properties that are associated with a
     * multi-node parallel job.</p>
     */
    inline const Aws::Vector<NodeRangeProperty>& GetNodeRangeProperties() const{ return m_nodeRangeProperties; }

    /**
     * <p>A list of node ranges and their properties that are associated with a
     * multi-node parallel job.</p>
     */
    inline bool NodeRangePropertiesHasBeenSet() const { return m_nodeRangePropertiesHasBeenSet; }

    /**
     * <p>A list of node ranges and their properties that are associated with a
     * multi-node parallel job.</p>
     */
    inline void SetNodeRangeProperties(const Aws::Vector<NodeRangeProperty>& value) { m_nodeRangePropertiesHasBeenSet = true; m_nodeRangeProperties = value; }

    /**
     * <p>A list of node ranges and their properties that are associated with a
     * multi-node parallel job.</p>
     */
    inline void SetNodeRangeProperties(Aws::Vector<NodeRangeProperty>&& value) { m_nodeRangePropertiesHasBeenSet = true; m_nodeRangeProperties = std::move(value); }

    /**
     * <p>A list of node ranges and their properties that are associated with a
     * multi-node parallel job.</p>
     */
    inline NodeProperties& WithNodeRangeProperties(const Aws::Vector<NodeRangeProperty>& value) { SetNodeRangeProperties(value); return *this;}

    /**
     * <p>A list of node ranges and their properties that are associated with a
     * multi-node parallel job.</p>
     */
    inline NodeProperties& WithNodeRangeProperties(Aws::Vector<NodeRangeProperty>&& value) { SetNodeRangeProperties(std::move(value)); return *this;}

    /**
     * <p>A list of node ranges and their properties that are associated with a
     * multi-node parallel job.</p>
     */
    inline NodeProperties& AddNodeRangeProperties(const NodeRangeProperty& value) { m_nodeRangePropertiesHasBeenSet = true; m_nodeRangeProperties.push_back(value); return *this; }

    /**
     * <p>A list of node ranges and their properties that are associated with a
     * multi-node parallel job.</p>
     */
    inline NodeProperties& AddNodeRangeProperties(NodeRangeProperty&& value) { m_nodeRangePropertiesHasBeenSet = true; m_nodeRangeProperties.push_back(std::move(value)); return *this; }

  private:

    int m_numNodes;
    bool m_numNodesHasBeenSet = false;

    int m_mainNode;
    bool m_mainNodeHasBeenSet = false;

    Aws::Vector<NodeRangeProperty> m_nodeRangeProperties;
    bool m_nodeRangePropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
