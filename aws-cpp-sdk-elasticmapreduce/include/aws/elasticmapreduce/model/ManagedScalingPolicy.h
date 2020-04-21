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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/ComputeLimits.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p> Managed scaling policy for an Amazon EMR cluster. The policy specifies the
   * limits for resources that can be added or terminated from a cluster. The policy
   * only applies to the core and task nodes. The master node cannot be scaled after
   * initial configuration. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ManagedScalingPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API ManagedScalingPolicy
  {
  public:
    ManagedScalingPolicy();
    ManagedScalingPolicy(Aws::Utils::Json::JsonView jsonValue);
    ManagedScalingPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The EC2 unit limits for a managed scaling policy. The managed scaling
     * activity of a cluster is not allowed to go above or below these limits. The
     * limit only applies to the core and task nodes. The master node cannot be scaled
     * after initial configuration. </p>
     */
    inline const ComputeLimits& GetComputeLimits() const{ return m_computeLimits; }

    /**
     * <p> The EC2 unit limits for a managed scaling policy. The managed scaling
     * activity of a cluster is not allowed to go above or below these limits. The
     * limit only applies to the core and task nodes. The master node cannot be scaled
     * after initial configuration. </p>
     */
    inline bool ComputeLimitsHasBeenSet() const { return m_computeLimitsHasBeenSet; }

    /**
     * <p> The EC2 unit limits for a managed scaling policy. The managed scaling
     * activity of a cluster is not allowed to go above or below these limits. The
     * limit only applies to the core and task nodes. The master node cannot be scaled
     * after initial configuration. </p>
     */
    inline void SetComputeLimits(const ComputeLimits& value) { m_computeLimitsHasBeenSet = true; m_computeLimits = value; }

    /**
     * <p> The EC2 unit limits for a managed scaling policy. The managed scaling
     * activity of a cluster is not allowed to go above or below these limits. The
     * limit only applies to the core and task nodes. The master node cannot be scaled
     * after initial configuration. </p>
     */
    inline void SetComputeLimits(ComputeLimits&& value) { m_computeLimitsHasBeenSet = true; m_computeLimits = std::move(value); }

    /**
     * <p> The EC2 unit limits for a managed scaling policy. The managed scaling
     * activity of a cluster is not allowed to go above or below these limits. The
     * limit only applies to the core and task nodes. The master node cannot be scaled
     * after initial configuration. </p>
     */
    inline ManagedScalingPolicy& WithComputeLimits(const ComputeLimits& value) { SetComputeLimits(value); return *this;}

    /**
     * <p> The EC2 unit limits for a managed scaling policy. The managed scaling
     * activity of a cluster is not allowed to go above or below these limits. The
     * limit only applies to the core and task nodes. The master node cannot be scaled
     * after initial configuration. </p>
     */
    inline ManagedScalingPolicy& WithComputeLimits(ComputeLimits&& value) { SetComputeLimits(std::move(value)); return *this;}

  private:

    ComputeLimits m_computeLimits;
    bool m_computeLimitsHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
