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
namespace EMR
{
namespace Model
{

  /**
   * <p>Configuration parameters for an instance fleet modification request.</p>
   * <note> <p>The instance fleet configuration is available only in Amazon EMR
   * versions 4.8.0 and later, excluding 5.0.x versions.</p> </note><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleetModifyConfig">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API InstanceFleetModifyConfig
  {
  public:
    InstanceFleetModifyConfig();
    InstanceFleetModifyConfig(Aws::Utils::Json::JsonView jsonValue);
    InstanceFleetModifyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline const Aws::String& GetInstanceFleetId() const{ return m_instanceFleetId; }

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline bool InstanceFleetIdHasBeenSet() const { return m_instanceFleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline void SetInstanceFleetId(const Aws::String& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = value; }

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline void SetInstanceFleetId(Aws::String&& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = std::move(value); }

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline void SetInstanceFleetId(const char* value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId.assign(value); }

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline InstanceFleetModifyConfig& WithInstanceFleetId(const Aws::String& value) { SetInstanceFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline InstanceFleetModifyConfig& WithInstanceFleetId(Aws::String&& value) { SetInstanceFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline InstanceFleetModifyConfig& WithInstanceFleetId(const char* value) { SetInstanceFleetId(value); return *this;}


    /**
     * <p>The target capacity of On-Demand units for the instance fleet. For more
     * information see <a>InstanceFleetConfig$TargetOnDemandCapacity</a>.</p>
     */
    inline int GetTargetOnDemandCapacity() const{ return m_targetOnDemandCapacity; }

    /**
     * <p>The target capacity of On-Demand units for the instance fleet. For more
     * information see <a>InstanceFleetConfig$TargetOnDemandCapacity</a>.</p>
     */
    inline bool TargetOnDemandCapacityHasBeenSet() const { return m_targetOnDemandCapacityHasBeenSet; }

    /**
     * <p>The target capacity of On-Demand units for the instance fleet. For more
     * information see <a>InstanceFleetConfig$TargetOnDemandCapacity</a>.</p>
     */
    inline void SetTargetOnDemandCapacity(int value) { m_targetOnDemandCapacityHasBeenSet = true; m_targetOnDemandCapacity = value; }

    /**
     * <p>The target capacity of On-Demand units for the instance fleet. For more
     * information see <a>InstanceFleetConfig$TargetOnDemandCapacity</a>.</p>
     */
    inline InstanceFleetModifyConfig& WithTargetOnDemandCapacity(int value) { SetTargetOnDemandCapacity(value); return *this;}


    /**
     * <p>The target capacity of Spot units for the instance fleet. For more
     * information, see <a>InstanceFleetConfig$TargetSpotCapacity</a>.</p>
     */
    inline int GetTargetSpotCapacity() const{ return m_targetSpotCapacity; }

    /**
     * <p>The target capacity of Spot units for the instance fleet. For more
     * information, see <a>InstanceFleetConfig$TargetSpotCapacity</a>.</p>
     */
    inline bool TargetSpotCapacityHasBeenSet() const { return m_targetSpotCapacityHasBeenSet; }

    /**
     * <p>The target capacity of Spot units for the instance fleet. For more
     * information, see <a>InstanceFleetConfig$TargetSpotCapacity</a>.</p>
     */
    inline void SetTargetSpotCapacity(int value) { m_targetSpotCapacityHasBeenSet = true; m_targetSpotCapacity = value; }

    /**
     * <p>The target capacity of Spot units for the instance fleet. For more
     * information, see <a>InstanceFleetConfig$TargetSpotCapacity</a>.</p>
     */
    inline InstanceFleetModifyConfig& WithTargetSpotCapacity(int value) { SetTargetSpotCapacity(value); return *this;}

  private:

    Aws::String m_instanceFleetId;
    bool m_instanceFleetIdHasBeenSet;

    int m_targetOnDemandCapacity;
    bool m_targetOnDemandCapacityHasBeenSet;

    int m_targetSpotCapacity;
    bool m_targetSpotCapacityHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
