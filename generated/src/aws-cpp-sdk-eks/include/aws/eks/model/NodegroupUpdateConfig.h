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
   * <p>The node group update configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/NodegroupUpdateConfig">AWS
   * API Reference</a></p>
   */
  class NodegroupUpdateConfig
  {
  public:
    AWS_EKS_API NodegroupUpdateConfig();
    AWS_EKS_API NodegroupUpdateConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API NodegroupUpdateConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The maximum number of nodes unavailable at once during a version update.
     * Nodes will be updated in parallel. This value or
     * <code>maxUnavailablePercentage</code> is required to have a value.The maximum
     * number is 100.</p>
     */
    inline int GetMaxUnavailable() const{ return m_maxUnavailable; }

    /**
     * <p>The maximum number of nodes unavailable at once during a version update.
     * Nodes will be updated in parallel. This value or
     * <code>maxUnavailablePercentage</code> is required to have a value.The maximum
     * number is 100.</p>
     */
    inline bool MaxUnavailableHasBeenSet() const { return m_maxUnavailableHasBeenSet; }

    /**
     * <p>The maximum number of nodes unavailable at once during a version update.
     * Nodes will be updated in parallel. This value or
     * <code>maxUnavailablePercentage</code> is required to have a value.The maximum
     * number is 100.</p>
     */
    inline void SetMaxUnavailable(int value) { m_maxUnavailableHasBeenSet = true; m_maxUnavailable = value; }

    /**
     * <p>The maximum number of nodes unavailable at once during a version update.
     * Nodes will be updated in parallel. This value or
     * <code>maxUnavailablePercentage</code> is required to have a value.The maximum
     * number is 100.</p>
     */
    inline NodegroupUpdateConfig& WithMaxUnavailable(int value) { SetMaxUnavailable(value); return *this;}


    /**
     * <p>The maximum percentage of nodes unavailable during a version update. This
     * percentage of nodes will be updated in parallel, up to 100 nodes at once. This
     * value or <code>maxUnavailable</code> is required to have a value.</p>
     */
    inline int GetMaxUnavailablePercentage() const{ return m_maxUnavailablePercentage; }

    /**
     * <p>The maximum percentage of nodes unavailable during a version update. This
     * percentage of nodes will be updated in parallel, up to 100 nodes at once. This
     * value or <code>maxUnavailable</code> is required to have a value.</p>
     */
    inline bool MaxUnavailablePercentageHasBeenSet() const { return m_maxUnavailablePercentageHasBeenSet; }

    /**
     * <p>The maximum percentage of nodes unavailable during a version update. This
     * percentage of nodes will be updated in parallel, up to 100 nodes at once. This
     * value or <code>maxUnavailable</code> is required to have a value.</p>
     */
    inline void SetMaxUnavailablePercentage(int value) { m_maxUnavailablePercentageHasBeenSet = true; m_maxUnavailablePercentage = value; }

    /**
     * <p>The maximum percentage of nodes unavailable during a version update. This
     * percentage of nodes will be updated in parallel, up to 100 nodes at once. This
     * value or <code>maxUnavailable</code> is required to have a value.</p>
     */
    inline NodegroupUpdateConfig& WithMaxUnavailablePercentage(int value) { SetMaxUnavailablePercentage(value); return *this;}

  private:

    int m_maxUnavailable;
    bool m_maxUnavailableHasBeenSet = false;

    int m_maxUnavailablePercentage;
    bool m_maxUnavailablePercentageHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
