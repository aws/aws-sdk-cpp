/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/MonitorType.h>
#include <aws/ce/model/MonitorDimension.h>
#include <aws/ce/model/Expression.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>This object continuously inspects your account's cost data for anomalies.
   * It's based on <code>MonitorType</code> and <code>MonitorSpecification</code>.
   * The content consists of detailed metadata and the current status of the monitor
   * object. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/AnomalyMonitor">AWS
   * API Reference</a></p>
   */
  class AnomalyMonitor
  {
  public:
    AWS_COSTEXPLORER_API AnomalyMonitor() = default;
    AWS_COSTEXPLORER_API AnomalyMonitor(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API AnomalyMonitor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) value. </p>
     */
    inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
    template<typename MonitorArnT = Aws::String>
    void SetMonitorArn(MonitorArnT&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::forward<MonitorArnT>(value); }
    template<typename MonitorArnT = Aws::String>
    AnomalyMonitor& WithMonitorArn(MonitorArnT&& value) { SetMonitorArn(std::forward<MonitorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the monitor. </p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    AnomalyMonitor& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the monitor was created. </p>
     */
    inline const Aws::String& GetCreationDate() const { return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    template<typename CreationDateT = Aws::String>
    void SetCreationDate(CreationDateT&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::forward<CreationDateT>(value); }
    template<typename CreationDateT = Aws::String>
    AnomalyMonitor& WithCreationDate(CreationDateT&& value) { SetCreationDate(std::forward<CreationDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the monitor was last updated. </p>
     */
    inline const Aws::String& GetLastUpdatedDate() const { return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    template<typename LastUpdatedDateT = Aws::String>
    void SetLastUpdatedDate(LastUpdatedDateT&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::forward<LastUpdatedDateT>(value); }
    template<typename LastUpdatedDateT = Aws::String>
    AnomalyMonitor& WithLastUpdatedDate(LastUpdatedDateT&& value) { SetLastUpdatedDate(std::forward<LastUpdatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the monitor last evaluated for anomalies. </p>
     */
    inline const Aws::String& GetLastEvaluatedDate() const { return m_lastEvaluatedDate; }
    inline bool LastEvaluatedDateHasBeenSet() const { return m_lastEvaluatedDateHasBeenSet; }
    template<typename LastEvaluatedDateT = Aws::String>
    void SetLastEvaluatedDate(LastEvaluatedDateT&& value) { m_lastEvaluatedDateHasBeenSet = true; m_lastEvaluatedDate = std::forward<LastEvaluatedDateT>(value); }
    template<typename LastEvaluatedDateT = Aws::String>
    AnomalyMonitor& WithLastEvaluatedDate(LastEvaluatedDateT&& value) { SetLastEvaluatedDate(std::forward<LastEvaluatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The possible type values. </p>
     */
    inline MonitorType GetMonitorType() const { return m_monitorType; }
    inline bool MonitorTypeHasBeenSet() const { return m_monitorTypeHasBeenSet; }
    inline void SetMonitorType(MonitorType value) { m_monitorTypeHasBeenSet = true; m_monitorType = value; }
    inline AnomalyMonitor& WithMonitorType(MonitorType value) { SetMonitorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions to evaluate. </p>
     */
    inline MonitorDimension GetMonitorDimension() const { return m_monitorDimension; }
    inline bool MonitorDimensionHasBeenSet() const { return m_monitorDimensionHasBeenSet; }
    inline void SetMonitorDimension(MonitorDimension value) { m_monitorDimensionHasBeenSet = true; m_monitorDimension = value; }
    inline AnomalyMonitor& WithMonitorDimension(MonitorDimension value) { SetMonitorDimension(value); return *this;}
    ///@}

    ///@{
    
    inline const Expression& GetMonitorSpecification() const { return m_monitorSpecification; }
    inline bool MonitorSpecificationHasBeenSet() const { return m_monitorSpecificationHasBeenSet; }
    template<typename MonitorSpecificationT = Expression>
    void SetMonitorSpecification(MonitorSpecificationT&& value) { m_monitorSpecificationHasBeenSet = true; m_monitorSpecification = std::forward<MonitorSpecificationT>(value); }
    template<typename MonitorSpecificationT = Expression>
    AnomalyMonitor& WithMonitorSpecification(MonitorSpecificationT&& value) { SetMonitorSpecification(std::forward<MonitorSpecificationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for evaluated dimensions. </p>
     */
    inline int GetDimensionalValueCount() const { return m_dimensionalValueCount; }
    inline bool DimensionalValueCountHasBeenSet() const { return m_dimensionalValueCountHasBeenSet; }
    inline void SetDimensionalValueCount(int value) { m_dimensionalValueCountHasBeenSet = true; m_dimensionalValueCount = value; }
    inline AnomalyMonitor& WithDimensionalValueCount(int value) { SetDimensionalValueCount(value); return *this;}
    ///@}
  private:

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::String m_creationDate;
    bool m_creationDateHasBeenSet = false;

    Aws::String m_lastUpdatedDate;
    bool m_lastUpdatedDateHasBeenSet = false;

    Aws::String m_lastEvaluatedDate;
    bool m_lastEvaluatedDateHasBeenSet = false;

    MonitorType m_monitorType{MonitorType::NOT_SET};
    bool m_monitorTypeHasBeenSet = false;

    MonitorDimension m_monitorDimension{MonitorDimension::NOT_SET};
    bool m_monitorDimensionHasBeenSet = false;

    Expression m_monitorSpecification;
    bool m_monitorSpecificationHasBeenSet = false;

    int m_dimensionalValueCount{0};
    bool m_dimensionalValueCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
