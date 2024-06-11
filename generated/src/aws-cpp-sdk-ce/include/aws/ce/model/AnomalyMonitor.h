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
    AWS_COSTEXPLORER_API AnomalyMonitor();
    AWS_COSTEXPLORER_API AnomalyMonitor(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API AnomalyMonitor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) value. </p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }
    inline bool MonitorArnHasBeenSet() const { return m_monitorArnHasBeenSet; }
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArnHasBeenSet = true; m_monitorArn = value; }
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::move(value); }
    inline void SetMonitorArn(const char* value) { m_monitorArnHasBeenSet = true; m_monitorArn.assign(value); }
    inline AnomalyMonitor& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}
    inline AnomalyMonitor& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}
    inline AnomalyMonitor& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the monitor. </p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }
    inline bool MonitorNameHasBeenSet() const { return m_monitorNameHasBeenSet; }
    inline void SetMonitorName(const Aws::String& value) { m_monitorNameHasBeenSet = true; m_monitorName = value; }
    inline void SetMonitorName(Aws::String&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::move(value); }
    inline void SetMonitorName(const char* value) { m_monitorNameHasBeenSet = true; m_monitorName.assign(value); }
    inline AnomalyMonitor& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}
    inline AnomalyMonitor& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}
    inline AnomalyMonitor& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the monitor was created. </p>
     */
    inline const Aws::String& GetCreationDate() const{ return m_creationDate; }
    inline bool CreationDateHasBeenSet() const { return m_creationDateHasBeenSet; }
    inline void SetCreationDate(const Aws::String& value) { m_creationDateHasBeenSet = true; m_creationDate = value; }
    inline void SetCreationDate(Aws::String&& value) { m_creationDateHasBeenSet = true; m_creationDate = std::move(value); }
    inline void SetCreationDate(const char* value) { m_creationDateHasBeenSet = true; m_creationDate.assign(value); }
    inline AnomalyMonitor& WithCreationDate(const Aws::String& value) { SetCreationDate(value); return *this;}
    inline AnomalyMonitor& WithCreationDate(Aws::String&& value) { SetCreationDate(std::move(value)); return *this;}
    inline AnomalyMonitor& WithCreationDate(const char* value) { SetCreationDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the monitor was last updated. </p>
     */
    inline const Aws::String& GetLastUpdatedDate() const{ return m_lastUpdatedDate; }
    inline bool LastUpdatedDateHasBeenSet() const { return m_lastUpdatedDateHasBeenSet; }
    inline void SetLastUpdatedDate(const Aws::String& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = value; }
    inline void SetLastUpdatedDate(Aws::String&& value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate = std::move(value); }
    inline void SetLastUpdatedDate(const char* value) { m_lastUpdatedDateHasBeenSet = true; m_lastUpdatedDate.assign(value); }
    inline AnomalyMonitor& WithLastUpdatedDate(const Aws::String& value) { SetLastUpdatedDate(value); return *this;}
    inline AnomalyMonitor& WithLastUpdatedDate(Aws::String&& value) { SetLastUpdatedDate(std::move(value)); return *this;}
    inline AnomalyMonitor& WithLastUpdatedDate(const char* value) { SetLastUpdatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the monitor last evaluated for anomalies. </p>
     */
    inline const Aws::String& GetLastEvaluatedDate() const{ return m_lastEvaluatedDate; }
    inline bool LastEvaluatedDateHasBeenSet() const { return m_lastEvaluatedDateHasBeenSet; }
    inline void SetLastEvaluatedDate(const Aws::String& value) { m_lastEvaluatedDateHasBeenSet = true; m_lastEvaluatedDate = value; }
    inline void SetLastEvaluatedDate(Aws::String&& value) { m_lastEvaluatedDateHasBeenSet = true; m_lastEvaluatedDate = std::move(value); }
    inline void SetLastEvaluatedDate(const char* value) { m_lastEvaluatedDateHasBeenSet = true; m_lastEvaluatedDate.assign(value); }
    inline AnomalyMonitor& WithLastEvaluatedDate(const Aws::String& value) { SetLastEvaluatedDate(value); return *this;}
    inline AnomalyMonitor& WithLastEvaluatedDate(Aws::String&& value) { SetLastEvaluatedDate(std::move(value)); return *this;}
    inline AnomalyMonitor& WithLastEvaluatedDate(const char* value) { SetLastEvaluatedDate(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The possible type values. </p>
     */
    inline const MonitorType& GetMonitorType() const{ return m_monitorType; }
    inline bool MonitorTypeHasBeenSet() const { return m_monitorTypeHasBeenSet; }
    inline void SetMonitorType(const MonitorType& value) { m_monitorTypeHasBeenSet = true; m_monitorType = value; }
    inline void SetMonitorType(MonitorType&& value) { m_monitorTypeHasBeenSet = true; m_monitorType = std::move(value); }
    inline AnomalyMonitor& WithMonitorType(const MonitorType& value) { SetMonitorType(value); return *this;}
    inline AnomalyMonitor& WithMonitorType(MonitorType&& value) { SetMonitorType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dimensions to evaluate. </p>
     */
    inline const MonitorDimension& GetMonitorDimension() const{ return m_monitorDimension; }
    inline bool MonitorDimensionHasBeenSet() const { return m_monitorDimensionHasBeenSet; }
    inline void SetMonitorDimension(const MonitorDimension& value) { m_monitorDimensionHasBeenSet = true; m_monitorDimension = value; }
    inline void SetMonitorDimension(MonitorDimension&& value) { m_monitorDimensionHasBeenSet = true; m_monitorDimension = std::move(value); }
    inline AnomalyMonitor& WithMonitorDimension(const MonitorDimension& value) { SetMonitorDimension(value); return *this;}
    inline AnomalyMonitor& WithMonitorDimension(MonitorDimension&& value) { SetMonitorDimension(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Expression& GetMonitorSpecification() const{ return m_monitorSpecification; }
    inline bool MonitorSpecificationHasBeenSet() const { return m_monitorSpecificationHasBeenSet; }
    inline void SetMonitorSpecification(const Expression& value) { m_monitorSpecificationHasBeenSet = true; m_monitorSpecification = value; }
    inline void SetMonitorSpecification(Expression&& value) { m_monitorSpecificationHasBeenSet = true; m_monitorSpecification = std::move(value); }
    inline AnomalyMonitor& WithMonitorSpecification(const Expression& value) { SetMonitorSpecification(value); return *this;}
    inline AnomalyMonitor& WithMonitorSpecification(Expression&& value) { SetMonitorSpecification(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value for evaluated dimensions. </p>
     */
    inline int GetDimensionalValueCount() const{ return m_dimensionalValueCount; }
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

    MonitorType m_monitorType;
    bool m_monitorTypeHasBeenSet = false;

    MonitorDimension m_monitorDimension;
    bool m_monitorDimensionHasBeenSet = false;

    Expression m_monitorSpecification;
    bool m_monitorSpecificationHasBeenSet = false;

    int m_dimensionalValueCount;
    bool m_dimensionalValueCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
