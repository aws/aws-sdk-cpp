﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>The details of a capacity provider strategy. A capacity provider strategy can
   * be set when using the <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_RunTask.html">RunTask</a>or
   * <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_CreateCluster.html">CreateCluster</a>
   * APIs or as the default capacity provider strategy for a cluster with the
   * <code>CreateCluster</code> API.</p> <p>Only capacity providers that are already
   * associated with a cluster and have an <code>ACTIVE</code> or
   * <code>UPDATING</code> status can be used in a capacity provider strategy. The <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutClusterCapacityProviders.html">PutClusterCapacityProviders</a>
   * API is used to associate a capacity provider with a cluster.</p> <p>If
   * specifying a capacity provider that uses an Auto Scaling group, the capacity
   * provider must already be created. New Auto Scaling group capacity providers can
   * be created with the <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_CreateClusterCapacityProvider.html">CreateClusterCapacityProvider</a>
   * API operation.</p> <p>To use a Fargate capacity provider, specify either the
   * <code>FARGATE</code> or <code>FARGATE_SPOT</code> capacity providers. The
   * Fargate capacity providers are available to all accounts and only need to be
   * associated with a cluster to be used in a capacity provider strategy.</p>
   * <p>With <code>FARGATE_SPOT</code>, you can run interruption tolerant tasks at a
   * rate that's discounted compared to the <code>FARGATE</code> price.
   * <code>FARGATE_SPOT</code> runs tasks on spare compute capacity. When Amazon Web
   * Services needs the capacity back, your tasks are interrupted with a two-minute
   * warning. <code>FARGATE_SPOT</code> supports Linux tasks with the X86_64
   * architecture on platform version 1.3.0 or later. <code>FARGATE_SPOT</code>
   * supports Linux tasks with the ARM64 architecture on platform version 1.4.0 or
   * later.</p> <p>A capacity provider strategy can contain a maximum of 20 capacity
   * providers.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CapacityProviderStrategyItem">AWS
   * API Reference</a></p>
   */
  class CapacityProviderStrategyItem
  {
  public:
    AWS_ECS_API CapacityProviderStrategyItem() = default;
    AWS_ECS_API CapacityProviderStrategyItem(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API CapacityProviderStrategyItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline const Aws::String& GetCapacityProvider() const { return m_capacityProvider; }
    inline bool CapacityProviderHasBeenSet() const { return m_capacityProviderHasBeenSet; }
    template<typename CapacityProviderT = Aws::String>
    void SetCapacityProvider(CapacityProviderT&& value) { m_capacityProviderHasBeenSet = true; m_capacityProvider = std::forward<CapacityProviderT>(value); }
    template<typename CapacityProviderT = Aws::String>
    CapacityProviderStrategyItem& WithCapacityProvider(CapacityProviderT&& value) { SetCapacityProvider(std::forward<CapacityProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <i>weight</i> value designates the relative percentage of the total
     * number of tasks launched that should use the specified capacity provider. The
     * <code>weight</code> value is taken into consideration after the
     * <code>base</code> value, if defined, is satisfied.</p> <p>If no
     * <code>weight</code> value is specified, the default value of <code>0</code> is
     * used. When multiple capacity providers are specified within a capacity provider
     * strategy, at least one of the capacity providers must have a weight value
     * greater than zero and any capacity providers with a weight of <code>0</code>
     * can't be used to place tasks. If you specify multiple capacity providers in a
     * strategy that all have a weight of <code>0</code>, any <code>RunTask</code> or
     * <code>CreateService</code> actions using the capacity provider strategy will
     * fail.</p> <p>An example scenario for using weights is defining a strategy that
     * contains two capacity providers and both have a weight of <code>1</code>, then
     * when the <code>base</code> is satisfied, the tasks will be split evenly across
     * the two capacity providers. Using that same logic, if you specify a weight of
     * <code>1</code> for <i>capacityProviderA</i> and a weight of <code>4</code> for
     * <i>capacityProviderB</i>, then for every one task that's run using
     * <i>capacityProviderA</i>, four tasks would use <i>capacityProviderB</i>.</p>
     */
    inline int GetWeight() const { return m_weight; }
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }
    inline CapacityProviderStrategyItem& WithWeight(int value) { SetWeight(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <i>base</i> value designates how many tasks, at a minimum, to run on the
     * specified capacity provider. Only one capacity provider in a capacity provider
     * strategy can have a <i>base</i> defined. If no value is specified, the default
     * value of <code>0</code> is used.</p>
     */
    inline int GetBase() const { return m_base; }
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }
    inline void SetBase(int value) { m_baseHasBeenSet = true; m_base = value; }
    inline CapacityProviderStrategyItem& WithBase(int value) { SetBase(value); return *this;}
    ///@}
  private:

    Aws::String m_capacityProvider;
    bool m_capacityProviderHasBeenSet = false;

    int m_weight{0};
    bool m_weightHasBeenSet = false;

    int m_base{0};
    bool m_baseHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
