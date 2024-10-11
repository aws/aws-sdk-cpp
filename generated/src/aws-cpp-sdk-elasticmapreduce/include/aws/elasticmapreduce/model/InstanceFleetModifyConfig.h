/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/InstanceFleetResizingSpecifications.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/InstanceTypeConfig.h>
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
   *  <p>The instance fleet configuration is available only in Amazon EMR
   * releases 4.8.0 and later, excluding 5.0.x versions.</p> <p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceFleetModifyConfig">AWS
   * API Reference</a></p>
   */
  class InstanceFleetModifyConfig
  {
  public:
    AWS_EMR_API InstanceFleetModifyConfig();
    AWS_EMR_API InstanceFleetModifyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceFleetModifyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline const Aws::String& GetInstanceFleetId() const{ return m_instanceFleetId; }
    inline bool InstanceFleetIdHasBeenSet() const { return m_instanceFleetIdHasBeenSet; }
    inline void SetInstanceFleetId(const Aws::String& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = value; }
    inline void SetInstanceFleetId(Aws::String&& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = std::move(value); }
    inline void SetInstanceFleetId(const char* value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId.assign(value); }
    inline InstanceFleetModifyConfig& WithInstanceFleetId(const Aws::String& value) { SetInstanceFleetId(value); return *this;}
    inline InstanceFleetModifyConfig& WithInstanceFleetId(Aws::String&& value) { SetInstanceFleetId(std::move(value)); return *this;}
    inline InstanceFleetModifyConfig& WithInstanceFleetId(const char* value) { SetInstanceFleetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target capacity of On-Demand units for the instance fleet. For more
     * information see <a>InstanceFleetConfig$TargetOnDemandCapacity</a>.</p>
     */
    inline int GetTargetOnDemandCapacity() const{ return m_targetOnDemandCapacity; }
    inline bool TargetOnDemandCapacityHasBeenSet() const { return m_targetOnDemandCapacityHasBeenSet; }
    inline void SetTargetOnDemandCapacity(int value) { m_targetOnDemandCapacityHasBeenSet = true; m_targetOnDemandCapacity = value; }
    inline InstanceFleetModifyConfig& WithTargetOnDemandCapacity(int value) { SetTargetOnDemandCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target capacity of Spot units for the instance fleet. For more
     * information, see <a>InstanceFleetConfig$TargetSpotCapacity</a>.</p>
     */
    inline int GetTargetSpotCapacity() const{ return m_targetSpotCapacity; }
    inline bool TargetSpotCapacityHasBeenSet() const { return m_targetSpotCapacityHasBeenSet; }
    inline void SetTargetSpotCapacity(int value) { m_targetSpotCapacityHasBeenSet = true; m_targetSpotCapacity = value; }
    inline InstanceFleetModifyConfig& WithTargetSpotCapacity(int value) { SetTargetSpotCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resize specification for the instance fleet.</p>
     */
    inline const InstanceFleetResizingSpecifications& GetResizeSpecifications() const{ return m_resizeSpecifications; }
    inline bool ResizeSpecificationsHasBeenSet() const { return m_resizeSpecificationsHasBeenSet; }
    inline void SetResizeSpecifications(const InstanceFleetResizingSpecifications& value) { m_resizeSpecificationsHasBeenSet = true; m_resizeSpecifications = value; }
    inline void SetResizeSpecifications(InstanceFleetResizingSpecifications&& value) { m_resizeSpecificationsHasBeenSet = true; m_resizeSpecifications = std::move(value); }
    inline InstanceFleetModifyConfig& WithResizeSpecifications(const InstanceFleetResizingSpecifications& value) { SetResizeSpecifications(value); return *this;}
    inline InstanceFleetModifyConfig& WithResizeSpecifications(InstanceFleetResizingSpecifications&& value) { SetResizeSpecifications(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of InstanceTypeConfig objects that specify how Amazon EMR provisions
     * Amazon EC2 instances when it fulfills On-Demand and Spot capacities. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/emr/latest/APIReference/API_InstanceTypeConfig.html">InstanceTypeConfig</a>.</p>
     */
    inline const Aws::Vector<InstanceTypeConfig>& GetInstanceTypeConfigs() const{ return m_instanceTypeConfigs; }
    inline bool InstanceTypeConfigsHasBeenSet() const { return m_instanceTypeConfigsHasBeenSet; }
    inline void SetInstanceTypeConfigs(const Aws::Vector<InstanceTypeConfig>& value) { m_instanceTypeConfigsHasBeenSet = true; m_instanceTypeConfigs = value; }
    inline void SetInstanceTypeConfigs(Aws::Vector<InstanceTypeConfig>&& value) { m_instanceTypeConfigsHasBeenSet = true; m_instanceTypeConfigs = std::move(value); }
    inline InstanceFleetModifyConfig& WithInstanceTypeConfigs(const Aws::Vector<InstanceTypeConfig>& value) { SetInstanceTypeConfigs(value); return *this;}
    inline InstanceFleetModifyConfig& WithInstanceTypeConfigs(Aws::Vector<InstanceTypeConfig>&& value) { SetInstanceTypeConfigs(std::move(value)); return *this;}
    inline InstanceFleetModifyConfig& AddInstanceTypeConfigs(const InstanceTypeConfig& value) { m_instanceTypeConfigsHasBeenSet = true; m_instanceTypeConfigs.push_back(value); return *this; }
    inline InstanceFleetModifyConfig& AddInstanceTypeConfigs(InstanceTypeConfig&& value) { m_instanceTypeConfigsHasBeenSet = true; m_instanceTypeConfigs.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const Aws::String& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(Aws::String&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline void SetContext(const char* value) { m_contextHasBeenSet = true; m_context.assign(value); }
    inline InstanceFleetModifyConfig& WithContext(const Aws::String& value) { SetContext(value); return *this;}
    inline InstanceFleetModifyConfig& WithContext(Aws::String&& value) { SetContext(std::move(value)); return *this;}
    inline InstanceFleetModifyConfig& WithContext(const char* value) { SetContext(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceFleetId;
    bool m_instanceFleetIdHasBeenSet = false;

    int m_targetOnDemandCapacity;
    bool m_targetOnDemandCapacityHasBeenSet = false;

    int m_targetSpotCapacity;
    bool m_targetSpotCapacityHasBeenSet = false;

    InstanceFleetResizingSpecifications m_resizeSpecifications;
    bool m_resizeSpecificationsHasBeenSet = false;

    Aws::Vector<InstanceTypeConfig> m_instanceTypeConfigs;
    bool m_instanceTypeConfigsHasBeenSet = false;

    Aws::String m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
