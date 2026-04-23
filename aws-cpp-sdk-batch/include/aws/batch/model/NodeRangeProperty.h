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
   * <p>An object representing the properties of the node range for a multi-node
   * parallel job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NodeRangeProperty">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API NodeRangeProperty
  {
  public:
    NodeRangeProperty();
    NodeRangeProperty(Aws::Utils::Json::JsonView jsonValue);
    NodeRangeProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (0:n). You may nest node ranges, for
     * example 0:10 and 4:5, in which case the 4:5 range properties override the 0:10
     * properties. </p>
     */
    inline const Aws::String& GetTargetNodes() const{ return m_targetNodes; }

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (0:n). You may nest node ranges, for
     * example 0:10 and 4:5, in which case the 4:5 range properties override the 0:10
     * properties. </p>
     */
    inline bool TargetNodesHasBeenSet() const { return m_targetNodesHasBeenSet; }

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (0:n). You may nest node ranges, for
     * example 0:10 and 4:5, in which case the 4:5 range properties override the 0:10
     * properties. </p>
     */
    inline void SetTargetNodes(const Aws::String& value) { m_targetNodesHasBeenSet = true; m_targetNodes = value; }

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (0:n). You may nest node ranges, for
     * example 0:10 and 4:5, in which case the 4:5 range properties override the 0:10
     * properties. </p>
     */
    inline void SetTargetNodes(Aws::String&& value) { m_targetNodesHasBeenSet = true; m_targetNodes = std::move(value); }

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (0:n). You may nest node ranges, for
     * example 0:10 and 4:5, in which case the 4:5 range properties override the 0:10
     * properties. </p>
     */
    inline void SetTargetNodes(const char* value) { m_targetNodesHasBeenSet = true; m_targetNodes.assign(value); }

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (0:n). You may nest node ranges, for
     * example 0:10 and 4:5, in which case the 4:5 range properties override the 0:10
     * properties. </p>
     */
    inline NodeRangeProperty& WithTargetNodes(const Aws::String& value) { SetTargetNodes(value); return *this;}

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (0:n). You may nest node ranges, for
     * example 0:10 and 4:5, in which case the 4:5 range properties override the 0:10
     * properties. </p>
     */
    inline NodeRangeProperty& WithTargetNodes(Aws::String&& value) { SetTargetNodes(std::move(value)); return *this;}

    /**
     * <p>The range of nodes, using node index values. A range of <code>0:3</code>
     * indicates nodes with index values of <code>0</code> through <code>3</code>. If
     * the starting range value is omitted (<code>:n</code>), then <code>0</code> is
     * used to start the range. If the ending range value is omitted (<code>n:</code>),
     * then the highest possible node index is used to end the range. Your accumulative
     * node ranges must account for all nodes (0:n). You may nest node ranges, for
     * example 0:10 and 4:5, in which case the 4:5 range properties override the 0:10
     * properties. </p>
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
    bool m_targetNodesHasBeenSet;

    ContainerProperties m_container;
    bool m_containerHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
