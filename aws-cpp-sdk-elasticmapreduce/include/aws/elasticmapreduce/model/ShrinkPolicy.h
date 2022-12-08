/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ShrinkPolicy
  {
  public:
    AWS_EMR_API ShrinkPolicy();
    AWS_EMR_API ShrinkPolicy(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API ShrinkPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_decommissionTimeoutHasBeenSet = false;

    InstanceResizePolicy m_instanceResizePolicy;
    bool m_instanceResizePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
