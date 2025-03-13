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
    AWS_EMR_API InstanceFleetModifyConfig() = default;
    AWS_EMR_API InstanceFleetModifyConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API InstanceFleetModifyConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A unique identifier for the instance fleet.</p>
     */
    inline const Aws::String& GetInstanceFleetId() const { return m_instanceFleetId; }
    inline bool InstanceFleetIdHasBeenSet() const { return m_instanceFleetIdHasBeenSet; }
    template<typename InstanceFleetIdT = Aws::String>
    void SetInstanceFleetId(InstanceFleetIdT&& value) { m_instanceFleetIdHasBeenSet = true; m_instanceFleetId = std::forward<InstanceFleetIdT>(value); }
    template<typename InstanceFleetIdT = Aws::String>
    InstanceFleetModifyConfig& WithInstanceFleetId(InstanceFleetIdT&& value) { SetInstanceFleetId(std::forward<InstanceFleetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target capacity of On-Demand units for the instance fleet. For more
     * information see <a>InstanceFleetConfig$TargetOnDemandCapacity</a>.</p>
     */
    inline int GetTargetOnDemandCapacity() const { return m_targetOnDemandCapacity; }
    inline bool TargetOnDemandCapacityHasBeenSet() const { return m_targetOnDemandCapacityHasBeenSet; }
    inline void SetTargetOnDemandCapacity(int value) { m_targetOnDemandCapacityHasBeenSet = true; m_targetOnDemandCapacity = value; }
    inline InstanceFleetModifyConfig& WithTargetOnDemandCapacity(int value) { SetTargetOnDemandCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target capacity of Spot units for the instance fleet. For more
     * information, see <a>InstanceFleetConfig$TargetSpotCapacity</a>.</p>
     */
    inline int GetTargetSpotCapacity() const { return m_targetSpotCapacity; }
    inline bool TargetSpotCapacityHasBeenSet() const { return m_targetSpotCapacityHasBeenSet; }
    inline void SetTargetSpotCapacity(int value) { m_targetSpotCapacityHasBeenSet = true; m_targetSpotCapacity = value; }
    inline InstanceFleetModifyConfig& WithTargetSpotCapacity(int value) { SetTargetSpotCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resize specification for the instance fleet.</p>
     */
    inline const InstanceFleetResizingSpecifications& GetResizeSpecifications() const { return m_resizeSpecifications; }
    inline bool ResizeSpecificationsHasBeenSet() const { return m_resizeSpecificationsHasBeenSet; }
    template<typename ResizeSpecificationsT = InstanceFleetResizingSpecifications>
    void SetResizeSpecifications(ResizeSpecificationsT&& value) { m_resizeSpecificationsHasBeenSet = true; m_resizeSpecifications = std::forward<ResizeSpecificationsT>(value); }
    template<typename ResizeSpecificationsT = InstanceFleetResizingSpecifications>
    InstanceFleetModifyConfig& WithResizeSpecifications(ResizeSpecificationsT&& value) { SetResizeSpecifications(std::forward<ResizeSpecificationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of InstanceTypeConfig objects that specify how Amazon EMR provisions
     * Amazon EC2 instances when it fulfills On-Demand and Spot capacities. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/emr/latest/APIReference/API_InstanceTypeConfig.html">InstanceTypeConfig</a>.</p>
     */
    inline const Aws::Vector<InstanceTypeConfig>& GetInstanceTypeConfigs() const { return m_instanceTypeConfigs; }
    inline bool InstanceTypeConfigsHasBeenSet() const { return m_instanceTypeConfigsHasBeenSet; }
    template<typename InstanceTypeConfigsT = Aws::Vector<InstanceTypeConfig>>
    void SetInstanceTypeConfigs(InstanceTypeConfigsT&& value) { m_instanceTypeConfigsHasBeenSet = true; m_instanceTypeConfigs = std::forward<InstanceTypeConfigsT>(value); }
    template<typename InstanceTypeConfigsT = Aws::Vector<InstanceTypeConfig>>
    InstanceFleetModifyConfig& WithInstanceTypeConfigs(InstanceTypeConfigsT&& value) { SetInstanceTypeConfigs(std::forward<InstanceTypeConfigsT>(value)); return *this;}
    template<typename InstanceTypeConfigsT = InstanceTypeConfig>
    InstanceFleetModifyConfig& AddInstanceTypeConfigs(InstanceTypeConfigsT&& value) { m_instanceTypeConfigsHasBeenSet = true; m_instanceTypeConfigs.emplace_back(std::forward<InstanceTypeConfigsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Reserved.</p>
     */
    inline const Aws::String& GetContext() const { return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    template<typename ContextT = Aws::String>
    void SetContext(ContextT&& value) { m_contextHasBeenSet = true; m_context = std::forward<ContextT>(value); }
    template<typename ContextT = Aws::String>
    InstanceFleetModifyConfig& WithContext(ContextT&& value) { SetContext(std::forward<ContextT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceFleetId;
    bool m_instanceFleetIdHasBeenSet = false;

    int m_targetOnDemandCapacity{0};
    bool m_targetOnDemandCapacityHasBeenSet = false;

    int m_targetSpotCapacity{0};
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
