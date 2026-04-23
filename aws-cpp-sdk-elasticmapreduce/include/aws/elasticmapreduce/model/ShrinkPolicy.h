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
#include <aws/elasticmapreduce/model/InstanceResizePolicy.h>
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
   * <p>Policy for customizing shrink operations. Allows configuration of
   * decommissioning timeout and targeted instance shrinking.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/ShrinkPolicy">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API ShrinkPolicy
  {
  public:
    ShrinkPolicy();
    ShrinkPolicy(Aws::Utils::Json::JsonView jsonValue);
    ShrinkPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The desired timeout for decommissioning an instance. Overrides the default
     * YARN decommissioning timeout.</p>
     */
    inline int GetDecommissionTimeout() const{ return m_decommissionTimeout; }

    /**
     * <p>The desired timeout for decommissioning an instance. Overrides the default
     * YARN decommissioning timeout.</p>
     */
    inline bool DecommissionTimeoutHasBeenSet() const { return m_decommissionTimeoutHasBeenSet; }

    /**
     * <p>The desired timeout for decommissioning an instance. Overrides the default
     * YARN decommissioning timeout.</p>
     */
    inline void SetDecommissionTimeout(int value) { m_decommissionTimeoutHasBeenSet = true; m_decommissionTimeout = value; }

    /**
     * <p>The desired timeout for decommissioning an instance. Overrides the default
     * YARN decommissioning timeout.</p>
     */
    inline ShrinkPolicy& WithDecommissionTimeout(int value) { SetDecommissionTimeout(value); return *this;}


    /**
     * <p>Custom policy for requesting termination protection or termination of
     * specific instances when shrinking an instance group.</p>
     */
    inline const InstanceResizePolicy& GetInstanceResizePolicy() const{ return m_instanceResizePolicy; }

    /**
     * <p>Custom policy for requesting termination protection or termination of
     * specific instances when shrinking an instance group.</p>
     */
    inline bool InstanceResizePolicyHasBeenSet() const { return m_instanceResizePolicyHasBeenSet; }

    /**
     * <p>Custom policy for requesting termination protection or termination of
     * specific instances when shrinking an instance group.</p>
     */
    inline void SetInstanceResizePolicy(const InstanceResizePolicy& value) { m_instanceResizePolicyHasBeenSet = true; m_instanceResizePolicy = value; }

    /**
     * <p>Custom policy for requesting termination protection or termination of
     * specific instances when shrinking an instance group.</p>
     */
    inline void SetInstanceResizePolicy(InstanceResizePolicy&& value) { m_instanceResizePolicyHasBeenSet = true; m_instanceResizePolicy = std::move(value); }

    /**
     * <p>Custom policy for requesting termination protection or termination of
     * specific instances when shrinking an instance group.</p>
     */
    inline ShrinkPolicy& WithInstanceResizePolicy(const InstanceResizePolicy& value) { SetInstanceResizePolicy(value); return *this;}

    /**
     * <p>Custom policy for requesting termination protection or termination of
     * specific instances when shrinking an instance group.</p>
     */
    inline ShrinkPolicy& WithInstanceResizePolicy(InstanceResizePolicy&& value) { SetInstanceResizePolicy(std::move(value)); return *this;}

  private:

    int m_decommissionTimeout;
    bool m_decommissionTimeoutHasBeenSet;

    InstanceResizePolicy m_instanceResizePolicy;
    bool m_instanceResizePolicyHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
