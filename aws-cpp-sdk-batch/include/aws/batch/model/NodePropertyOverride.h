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
#include <aws/batch/model/ContainerOverrides.h>
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
   * <p>Object representing any node overrides to a job definition that is used in a
   * <a>SubmitJob</a> API operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NodePropertyOverride">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API NodePropertyOverride
  {
  public:
    NodePropertyOverride();
    NodePropertyOverride(Aws::Utils::Json::JsonView jsonValue);
    NodePropertyOverride& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The range of nodes, using node index values, with which to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline const Aws::String& GetTargetNodes() const{ return m_targetNodes; }

    /**
     * <p>The range of nodes, using node index values, with which to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline bool TargetNodesHasBeenSet() const { return m_targetNodesHasBeenSet; }

    /**
     * <p>The range of nodes, using node index values, with which to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline void SetTargetNodes(const Aws::String& value) { m_targetNodesHasBeenSet = true; m_targetNodes = value; }

    /**
     * <p>The range of nodes, using node index values, with which to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline void SetTargetNodes(Aws::String&& value) { m_targetNodesHasBeenSet = true; m_targetNodes = std::move(value); }

    /**
     * <p>The range of nodes, using node index values, with which to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline void SetTargetNodes(const char* value) { m_targetNodesHasBeenSet = true; m_targetNodes.assign(value); }

    /**
     * <p>The range of nodes, using node index values, with which to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline NodePropertyOverride& WithTargetNodes(const Aws::String& value) { SetTargetNodes(value); return *this;}

    /**
     * <p>The range of nodes, using node index values, with which to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline NodePropertyOverride& WithTargetNodes(Aws::String&& value) { SetTargetNodes(std::move(value)); return *this;}

    /**
     * <p>The range of nodes, using node index values, with which to override. A range
     * of <code>0:3</code> indicates nodes with index values of <code>0</code> through
     * <code>3</code>. If the starting range value is omitted (<code>:n</code>), then
     * <code>0</code> is used to start the range. If the ending range value is omitted
     * (<code>n:</code>), then the highest possible node index is used to end the
     * range.</p>
     */
    inline NodePropertyOverride& WithTargetNodes(const char* value) { SetTargetNodes(value); return *this;}


    /**
     * <p>The overrides that should be sent to a node range.</p>
     */
    inline const ContainerOverrides& GetContainerOverrides() const{ return m_containerOverrides; }

    /**
     * <p>The overrides that should be sent to a node range.</p>
     */
    inline bool ContainerOverridesHasBeenSet() const { return m_containerOverridesHasBeenSet; }

    /**
     * <p>The overrides that should be sent to a node range.</p>
     */
    inline void SetContainerOverrides(const ContainerOverrides& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = value; }

    /**
     * <p>The overrides that should be sent to a node range.</p>
     */
    inline void SetContainerOverrides(ContainerOverrides&& value) { m_containerOverridesHasBeenSet = true; m_containerOverrides = std::move(value); }

    /**
     * <p>The overrides that should be sent to a node range.</p>
     */
    inline NodePropertyOverride& WithContainerOverrides(const ContainerOverrides& value) { SetContainerOverrides(value); return *this;}

    /**
     * <p>The overrides that should be sent to a node range.</p>
     */
    inline NodePropertyOverride& WithContainerOverrides(ContainerOverrides&& value) { SetContainerOverrides(std::move(value)); return *this;}

  private:

    Aws::String m_targetNodes;
    bool m_targetNodesHasBeenSet;

    ContainerOverrides m_containerOverrides;
    bool m_containerOverridesHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
