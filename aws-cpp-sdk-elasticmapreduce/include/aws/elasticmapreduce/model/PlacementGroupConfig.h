/**
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

  class AWS_EMR_API PlacementGroupConfig
  {
  public:
    PlacementGroupConfig();
    PlacementGroupConfig(Aws::Utils::Json::JsonView jsonValue);
    PlacementGroupConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const InstanceRoleType& GetInstanceRole() const{ return m_instanceRole; }

    
    inline bool InstanceRoleHasBeenSet() const { return m_instanceRoleHasBeenSet; }

    
    inline void SetInstanceRole(const InstanceRoleType& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = value; }

    
    inline void SetInstanceRole(InstanceRoleType&& value) { m_instanceRoleHasBeenSet = true; m_instanceRole = std::move(value); }

    
    inline PlacementGroupConfig& WithInstanceRole(const InstanceRoleType& value) { SetInstanceRole(value); return *this;}

    
    inline PlacementGroupConfig& WithInstanceRole(InstanceRoleType&& value) { SetInstanceRole(std::move(value)); return *this;}


    
    inline const PlacementGroupStrategy& GetPlacementStrategy() const{ return m_placementStrategy; }

    
    inline bool PlacementStrategyHasBeenSet() const { return m_placementStrategyHasBeenSet; }

    
    inline void SetPlacementStrategy(const PlacementGroupStrategy& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = value; }

    
    inline void SetPlacementStrategy(PlacementGroupStrategy&& value) { m_placementStrategyHasBeenSet = true; m_placementStrategy = std::move(value); }

    
    inline PlacementGroupConfig& WithPlacementStrategy(const PlacementGroupStrategy& value) { SetPlacementStrategy(value); return *this;}

    
    inline PlacementGroupConfig& WithPlacementStrategy(PlacementGroupStrategy&& value) { SetPlacementStrategy(std::move(value)); return *this;}

  private:

    InstanceRoleType m_instanceRole;
    bool m_instanceRoleHasBeenSet;

    PlacementGroupStrategy m_placementStrategy;
    bool m_placementStrategyHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
