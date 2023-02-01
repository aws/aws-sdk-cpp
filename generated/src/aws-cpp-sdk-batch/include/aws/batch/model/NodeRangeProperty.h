/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/batch/model/ContainerProperties.h>
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
   * <p>An object that represents the properties of the node range for a multi-node
   * parallel job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NodeRangeProperty">AWS
   * API Reference</a></p>
   */
  class NodeRangeProperty
  {
  public:
    AWS_BATCH_API NodeRangeProperty();
    AWS_BATCH_API NodeRangeProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API NodeRangeProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (<code>0:n</code>). You can nest node
     * ranges (for example, <code>0:10</code> and <code>4:5</code>). In this case, the
     * <code>4:5</code> range properties override the <code>0:10</code> properties.</p>
     */
    inline const Aws::String& GetTargetNodes() const{ return m_targetNodes; }

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (<code>0:n</code>). You can nest node
     * ranges (for example, <code>0:10</code> and <code>4:5</code>). In this case, the
     * <code>4:5</code> range properties override the <code>0:10</code> properties.</p>
     */
    inline bool TargetNodesHasBeenSet() const { return m_targetNodesHasBeenSet; }

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (<code>0:n</code>). You can nest node
     * ranges (for example, <code>0:10</code> and <code>4:5</code>). In this case, the
     * <code>4:5</code> range properties override the <code>0:10</code> properties.</p>
     */
    inline void SetTargetNodes(const Aws::String& value) { m_targetNodesHasBeenSet = true; m_targetNodes = value; }

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (<code>0:n</code>). You can nest node
     * ranges (for example, <code>0:10</code> and <code>4:5</code>). In this case, the
     * <code>4:5</code> range properties override the <code>0:10</code> properties.</p>
     */
    inline void SetTargetNodes(Aws::String&& value) { m_targetNodesHasBeenSet = true; m_targetNodes = std::move(value); }

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (<code>0:n</code>). You can nest node
     * ranges (for example, <code>0:10</code> and <code>4:5</code>). In this case, the
     * <code>4:5</code> range properties override the <code>0:10</code> properties.</p>
     */
    inline void SetTargetNodes(const char* value) { m_targetNodesHasBeenSet = true; m_targetNodes.assign(value); }

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (<code>0:n</code>). You can nest node
     * ranges (for example, <code>0:10</code> and <code>4:5</code>). In this case, the
     * <code>4:5</code> range properties override the <code>0:10</code> properties.</p>
     */
    inline NodeRangeProperty& WithTargetNodes(const Aws::String& value) { SetTargetNodes(value); return *this;}

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (<code>0:n</code>). You can nest node
     * ranges (for example, <code>0:10</code> and <code>4:5</code>). In this case, the
     * <code>4:5</code> range properties override the <code>0:10</code> properties.</p>
     */
    inline NodeRangeProperty& WithTargetNodes(Aws::String&& value) { SetTargetNodes(std::move(value)); return *this;}

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (<code>0:n</code>). You can nest node
     * ranges (for example, <code>0:10</code> and <code>4:5</code>). In this case, the
     * <code>4:5</code> range properties override the <code>0:10</code> properties.</p>
     */
    inline NodeRangeProperty& WithTargetNodes(const char* value) { SetTargetNodes(value); return *this;}


    /**
     * <p>The container details for the node range.</p>
     */
    inline const ContainerProperties& GetContainer() const{ return m_container; }

    /**
     * <p>The container details for the node range.</p>
     */
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

    /**
     * <p>The container details for the node range.</p>
     */
    inline void SetContainer(const ContainerProperties& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>The container details for the node range.</p>
     */
    inline void SetContainer(ContainerProperties&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    /**
     * <p>The container details for the node range.</p>
     */
    inline NodeRangeProperty& WithContainer(const ContainerProperties& value) { SetContainer(value); return *this;}

    /**
     * <p>The container details for the node range.</p>
     */
    inline NodeRangeProperty& WithContainer(ContainerProperties&& value) { SetContainer(std::move(value)); return *this;}

  private:

    Aws::String m_targetNodes;
    bool m_targetNodesHasBeenSet = false;

    ContainerProperties m_container;
    bool m_containerHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
