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
#include <aws/batch/model/NodePropertyOverride.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NodeOverrides">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API NodeOverrides
  {
  public:
    NodeOverrides();
    NodeOverrides(Aws::Utils::Json::JsonView jsonValue);
    NodeOverrides& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The node property overrides for the job.</p>
     */
    inline const Aws::Vector<NodePropertyOverride>& GetNodePropertyOverrides() const{ return m_nodePropertyOverrides; }

    /**
     * <p>The node property overrides for the job.</p>
     */
    inline void SetNodePropertyOverrides(const Aws::Vector<NodePropertyOverride>& value) { m_nodePropertyOverridesHasBeenSet = true; m_nodePropertyOverrides = value; }

    /**
     * <p>The node property overrides for the job.</p>
     */
    inline void SetNodePropertyOverrides(Aws::Vector<NodePropertyOverride>&& value) { m_nodePropertyOverridesHasBeenSet = true; m_nodePropertyOverrides = std::move(value); }

    /**
     * <p>The node property overrides for the job.</p>
     */
    inline NodeOverrides& WithNodePropertyOverrides(const Aws::Vector<NodePropertyOverride>& value) { SetNodePropertyOverrides(value); return *this;}

    /**
     * <p>The node property overrides for the job.</p>
     */
    inline NodeOverrides& WithNodePropertyOverrides(Aws::Vector<NodePropertyOverride>&& value) { SetNodePropertyOverrides(std::move(value)); return *this;}

    /**
     * <p>The node property overrides for the job.</p>
     */
    inline NodeOverrides& AddNodePropertyOverrides(const NodePropertyOverride& value) { m_nodePropertyOverridesHasBeenSet = true; m_nodePropertyOverrides.push_back(value); return *this; }

    /**
     * <p>The node property overrides for the job.</p>
     */
    inline NodeOverrides& AddNodePropertyOverrides(NodePropertyOverride&& value) { m_nodePropertyOverridesHasBeenSet = true; m_nodePropertyOverrides.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<NodePropertyOverride> m_nodePropertyOverrides;
    bool m_nodePropertyOverridesHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
