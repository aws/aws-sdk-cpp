/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>

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
namespace EKS
{
namespace Model
{

  /**
   * <p>An object representing the scaling configuration details for the Auto Scaling
   * group that is associated with your node group. If you specify a value for any
   * property, then you must specify values for all of the properties.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/NodegroupScalingConfig">AWS
   * API Reference</a></p>
   */
  class AWS_EKS_API NodegroupScalingConfig
  {
  public:
    NodegroupScalingConfig();
    NodegroupScalingConfig(Aws::Utils::Json::JsonView jsonValue);
    NodegroupScalingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum number of worker nodes that the managed node group can scale in
     * to. This number must be greater than zero.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }

    /**
     * <p>The minimum number of worker nodes that the managed node group can scale in
     * to. This number must be greater than zero.</p>
     */
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }

    /**
     * <p>The minimum number of worker nodes that the managed node group can scale in
     * to. This number must be greater than zero.</p>
     */
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>The minimum number of worker nodes that the managed node group can scale in
     * to. This number must be greater than zero.</p>
     */
    inline NodegroupScalingConfig& WithMinSize(int value) { SetMinSize(value); return *this;}


    /**
     * <p>The maximum number of worker nodes that the managed node group can scale out
     * to. Managed node groups can support up to 100 nodes by default.</p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>The maximum number of worker nodes that the managed node group can scale out
     * to. Managed node groups can support up to 100 nodes by default.</p>
     */
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }

    /**
     * <p>The maximum number of worker nodes that the managed node group can scale out
     * to. Managed node groups can support up to 100 nodes by default.</p>
     */
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>The maximum number of worker nodes that the managed node group can scale out
     * to. Managed node groups can support up to 100 nodes by default.</p>
     */
    inline NodegroupScalingConfig& WithMaxSize(int value) { SetMaxSize(value); return *this;}


    /**
     * <p>The current number of worker nodes that the managed node group should
     * maintain.</p>
     */
    inline int GetDesiredSize() const{ return m_desiredSize; }

    /**
     * <p>The current number of worker nodes that the managed node group should
     * maintain.</p>
     */
    inline bool DesiredSizeHasBeenSet() const { return m_desiredSizeHasBeenSet; }

    /**
     * <p>The current number of worker nodes that the managed node group should
     * maintain.</p>
     */
    inline void SetDesiredSize(int value) { m_desiredSizeHasBeenSet = true; m_desiredSize = value; }

    /**
     * <p>The current number of worker nodes that the managed node group should
     * maintain.</p>
     */
    inline NodegroupScalingConfig& WithDesiredSize(int value) { SetDesiredSize(value); return *this;}

  private:

    int m_minSize;
    bool m_minSizeHasBeenSet;

    int m_maxSize;
    bool m_maxSizeHasBeenSet;

    int m_desiredSize;
    bool m_desiredSizeHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
