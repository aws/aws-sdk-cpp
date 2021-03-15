/**
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
   * be set when using the <a>RunTask</a> or <a>CreateCluster</a> APIs or as the
   * default capacity provider strategy for a cluster with the <a>CreateCluster</a>
   * API.</p> <p>Only capacity providers that are already associated with a cluster
   * and have an <code>ACTIVE</code> or <code>UPDATING</code> status can be used in a
   * capacity provider strategy. The <a>PutClusterCapacityProviders</a> API is used
   * to associate a capacity provider with a cluster.</p> <p>If specifying a capacity
   * provider that uses an Auto Scaling group, the capacity provider must already be
   * created. New Auto Scaling group capacity providers can be created with the
   * <a>CreateCapacityProvider</a> API operation.</p> <p>To use a AWS Fargate
   * capacity provider, specify either the <code>FARGATE</code> or
   * <code>FARGATE_SPOT</code> capacity providers. The AWS Fargate capacity providers
   * are available to all accounts and only need to be associated with a cluster to
   * be used in a capacity provider strategy.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/CapacityProviderStrategyItem">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API CapacityProviderStrategyItem
  {
  public:
    CapacityProviderStrategyItem();
    CapacityProviderStrategyItem(Aws::Utils::Json::JsonView jsonValue);
    CapacityProviderStrategyItem& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline const Aws::String& GetCapacityProvider() const{ return m_capacityProvider; }

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline bool CapacityProviderHasBeenSet() const { return m_capacityProviderHasBeenSet; }

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline void SetCapacityProvider(const Aws::String& value) { m_capacityProviderHasBeenSet = true; m_capacityProvider = value; }

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline void SetCapacityProvider(Aws::String&& value) { m_capacityProviderHasBeenSet = true; m_capacityProvider = std::move(value); }

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline void SetCapacityProvider(const char* value) { m_capacityProviderHasBeenSet = true; m_capacityProvider.assign(value); }

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline CapacityProviderStrategyItem& WithCapacityProvider(const Aws::String& value) { SetCapacityProvider(value); return *this;}

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline CapacityProviderStrategyItem& WithCapacityProvider(Aws::String&& value) { SetCapacityProvider(std::move(value)); return *this;}

    /**
     * <p>The short name of the capacity provider.</p>
     */
    inline CapacityProviderStrategyItem& WithCapacityProvider(const char* value) { SetCapacityProvider(value); return *this;}


    /**
     * <p>The <i>weight</i> value designates the relative percentage of the total
     * number of tasks launched that should use the specified capacity provider. The
     * <code>weight</code> value is taken into consideration after the
     * <code>base</code> value, if defined, is satisfied.</p> <p>If no
     * <code>weight</code> value is specified, the default value of <code>0</code> is
     * used. When multiple capacity providers are specified within a capacity provider
     * strategy, at least one of the capacity providers must have a weight value
     * greater than zero and any capacity providers with a weight of <code>0</code>
     * will not be used to place tasks. If you specify multiple capacity providers in a
     * strategy that all have a weight of <code>0</code>, any <code>RunTask</code> or
     * <code>CreateService</code> actions using the capacity provider strategy will
     * fail.</p> <p>An example scenario for using weights is defining a strategy that
     * contains two capacity providers and both have a weight of <code>1</code>, then
     * when the <code>base</code> is satisfied, the tasks will be split evenly across
     * the two capacity providers. Using that same logic, if you specify a weight of
     * <code>1</code> for <i>capacityProviderA</i> and a weight of <code>4</code> for
     * <i>capacityProviderB</i>, then for every one task that is run using
     * <i>capacityProviderA</i>, four tasks would use <i>capacityProviderB</i>.</p>
     */
    inline int GetWeight() const{ return m_weight; }

    /**
     * <p>The <i>weight</i> value designates the relative percentage of the total
     * number of tasks launched that should use the specified capacity provider. The
     * <code>weight</code> value is taken into consideration after the
     * <code>base</code> value, if defined, is satisfied.</p> <p>If no
     * <code>weight</code> value is specified, the default value of <code>0</code> is
     * used. When multiple capacity providers are specified within a capacity provider
     * strategy, at least one of the capacity providers must have a weight value
     * greater than zero and any capacity providers with a weight of <code>0</code>
     * will not be used to place tasks. If you specify multiple capacity providers in a
     * strategy that all have a weight of <code>0</code>, any <code>RunTask</code> or
     * <code>CreateService</code> actions using the capacity provider strategy will
     * fail.</p> <p>An example scenario for using weights is defining a strategy that
     * contains two capacity providers and both have a weight of <code>1</code>, then
     * when the <code>base</code> is satisfied, the tasks will be split evenly across
     * the two capacity providers. Using that same logic, if you specify a weight of
     * <code>1</code> for <i>capacityProviderA</i> and a weight of <code>4</code> for
     * <i>capacityProviderB</i>, then for every one task that is run using
     * <i>capacityProviderA</i>, four tasks would use <i>capacityProviderB</i>.</p>
     */
    inline bool WeightHasBeenSet() const { return m_weightHasBeenSet; }

    /**
     * <p>The <i>weight</i> value designates the relative percentage of the total
     * number of tasks launched that should use the specified capacity provider. The
     * <code>weight</code> value is taken into consideration after the
     * <code>base</code> value, if defined, is satisfied.</p> <p>If no
     * <code>weight</code> value is specified, the default value of <code>0</code> is
     * used. When multiple capacity providers are specified within a capacity provider
     * strategy, at least one of the capacity providers must have a weight value
     * greater than zero and any capacity providers with a weight of <code>0</code>
     * will not be used to place tasks. If you specify multiple capacity providers in a
     * strategy that all have a weight of <code>0</code>, any <code>RunTask</code> or
     * <code>CreateService</code> actions using the capacity provider strategy will
     * fail.</p> <p>An example scenario for using weights is defining a strategy that
     * contains two capacity providers and both have a weight of <code>1</code>, then
     * when the <code>base</code> is satisfied, the tasks will be split evenly across
     * the two capacity providers. Using that same logic, if you specify a weight of
     * <code>1</code> for <i>capacityProviderA</i> and a weight of <code>4</code> for
     * <i>capacityProviderB</i>, then for every one task that is run using
     * <i>capacityProviderA</i>, four tasks would use <i>capacityProviderB</i>.</p>
     */
    inline void SetWeight(int value) { m_weightHasBeenSet = true; m_weight = value; }

    /**
     * <p>The <i>weight</i> value designates the relative percentage of the total
     * number of tasks launched that should use the specified capacity provider. The
     * <code>weight</code> value is taken into consideration after the
     * <code>base</code> value, if defined, is satisfied.</p> <p>If no
     * <code>weight</code> value is specified, the default value of <code>0</code> is
     * used. When multiple capacity providers are specified within a capacity provider
     * strategy, at least one of the capacity providers must have a weight value
     * greater than zero and any capacity providers with a weight of <code>0</code>
     * will not be used to place tasks. If you specify multiple capacity providers in a
     * strategy that all have a weight of <code>0</code>, any <code>RunTask</code> or
     * <code>CreateService</code> actions using the capacity provider strategy will
     * fail.</p> <p>An example scenario for using weights is defining a strategy that
     * contains two capacity providers and both have a weight of <code>1</code>, then
     * when the <code>base</code> is satisfied, the tasks will be split evenly across
     * the two capacity providers. Using that same logic, if you specify a weight of
     * <code>1</code> for <i>capacityProviderA</i> and a weight of <code>4</code> for
     * <i>capacityProviderB</i>, then for every one task that is run using
     * <i>capacityProviderA</i>, four tasks would use <i>capacityProviderB</i>.</p>
     */
    inline CapacityProviderStrategyItem& WithWeight(int value) { SetWeight(value); return *this;}


    /**
     * <p>The <i>base</i> value designates how many tasks, at a minimum, to run on the
     * specified capacity provider. Only one capacity provider in a capacity provider
     * strategy can have a <i>base</i> defined. If no value is specified, the default
     * value of <code>0</code> is used.</p>
     */
    inline int GetBase() const{ return m_base; }

    /**
     * <p>The <i>base</i> value designates how many tasks, at a minimum, to run on the
     * specified capacity provider. Only one capacity provider in a capacity provider
     * strategy can have a <i>base</i> defined. If no value is specified, the default
     * value of <code>0</code> is used.</p>
     */
    inline bool BaseHasBeenSet() const { return m_baseHasBeenSet; }

    /**
     * <p>The <i>base</i> value designates how many tasks, at a minimum, to run on the
     * specified capacity provider. Only one capacity provider in a capacity provider
     * strategy can have a <i>base</i> defined. If no value is specified, the default
     * value of <code>0</code> is used.</p>
     */
    inline void SetBase(int value) { m_baseHasBeenSet = true; m_base = value; }

    /**
     * <p>The <i>base</i> value designates how many tasks, at a minimum, to run on the
     * specified capacity provider. Only one capacity provider in a capacity provider
     * strategy can have a <i>base</i> defined. If no value is specified, the default
     * value of <code>0</code> is used.</p>
     */
    inline CapacityProviderStrategyItem& WithBase(int value) { SetBase(value); return *this;}

  private:

    Aws::String m_capacityProvider;
    bool m_capacityProviderHasBeenSet;

    int m_weight;
    bool m_weightHasBeenSet;

    int m_base;
    bool m_baseHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
