﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/model/InstanceRoleType.h>
#include <aws/elasticmapreduce/model/PlacementGroupStrategy.h>
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
   * <p>Placement group configuration for an Amazon EMR cluster. The configuration
   * specifies the placement strategy that can be applied to instance roles during
   * cluster creation.</p> <p>To use this configuration, consider attaching managed
   * policy AmazonElasticMapReducePlacementGroupPolicy to the Amazon EMR
   * role.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/PlacementGroupConfig">AWS
   * API Reference</a></p>
   */
  class PlacementGroupConfig
  {
  public:
    AWS_EMR_API PlacementGroupConfig();
    AWS_EMR_API PlacementGroupConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API PlacementGroupConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Role of the instance in the cluster.</p> <p>Starting with Amazon EMR release
     * 5.23.0, the only supported instance role is <code>MASTER</code>.</p>
     */
    inline const InstanceRoleType& GetInstanceRole() const{ return m_instanceRole; }
    inline bool InstanceRoleHasBeenSet() const { return m_instanceRoleHasBeenSet; }
    inline void SetInstanceRole(const InstanceRoleType& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }
    inline void SetInstanceRole(InstanceRoleType&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = std::move(value); }
    inline PlacementGroupConfig& WithInstanceRole(const InstanceRoleType& value) { SetInstanceRole(value); return *this;}
    inline PlacementGroupConfig& WithInstanceRole(InstanceRoleType&& value) { SetInstanceRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon EC2 Placement Group strategy associated with instance role.</p>
     * <p>Starting with Amazon EMR release 5.23.0, the only supported placement
     * strategy is <code>SPREAD</code> for the <code>MASTER</code> instance role.</p>
     */
    inline const PlacementGroupStrategy& GetPlacementStrategy() const{ return m_placementStrategy; }
    inline bool PlacementStrategyHasBeenSet() const { return m_placementStrategyHasBeenSet; }
    inline void SetPlacementStrategy(const PlacementGroupStrategy& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = value; }
    inline void SetPlacementStrategy(PlacementGroupStrategy&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = std::move(value); }
    inline PlacementGroupConfig& WithPlacementStrategy(const PlacementGroupStrategy& value) { SetPlacementStrategy(value); return *this;}
    inline PlacementGroupConfig& WithPlacementStrategy(PlacementGroupStrategy&& value) { SetPlacementStrategy(std::move(value)); return *this;}
    ///@}
  private:

    InstanceRoleType m_instanceRole;
    bool m_instanceRoleHasBeenSet = false;

    PlacementGroupStrategy m_placementStrategy;
    bool m_placementStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
