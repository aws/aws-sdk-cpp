/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/ServiceEntity.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>Represents a specific operation within a service that can be monitored and
 * audited independently.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceOperationEntity">AWS
 * API Reference</a></p>
 */
class ServiceOperationEntity {
 public:
  AWS_APPLICATIONSIGNALS_API ServiceOperationEntity() = default;
  AWS_APPLICATIONSIGNALS_API ServiceOperationEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API ServiceOperationEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The service entity that contains this operation.</p>
   */
  inline const ServiceEntity& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = ServiceEntity>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = ServiceEntity>
  ServiceOperationEntity& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the specific operation within the service.</p>
   */
  inline const Aws::String& GetOperation() const { return m_operation; }
  inline bool OperationHasBeenSet() const { return m_operationHasBeenSet; }
  template <typename OperationT = Aws::String>
  void SetOperation(OperationT&& value) {
    m_operationHasBeenSet = true;
    m_operation = std::forward<OperationT>(value);
  }
  template <typename OperationT = Aws::String>
  ServiceOperationEntity& WithOperation(OperationT&& value) {
    SetOperation(std::forward<OperationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of metric associated with this service operation, such as "Latency",
   * "ErrorRate", or "Throughput".</p>
   */
  inline const Aws::String& GetMetricType() const { return m_metricType; }
  inline bool MetricTypeHasBeenSet() const { return m_metricTypeHasBeenSet; }
  template <typename MetricTypeT = Aws::String>
  void SetMetricType(MetricTypeT&& value) {
    m_metricTypeHasBeenSet = true;
    m_metricType = std::forward<MetricTypeT>(value);
  }
  template <typename MetricTypeT = Aws::String>
  ServiceOperationEntity& WithMetricType(MetricTypeT&& value) {
    SetMetricType(std::forward<MetricTypeT>(value));
    return *this;
  }
  ///@}
 private:
  ServiceEntity m_service;
  bool m_serviceHasBeenSet = false;

  Aws::String m_operation;
  bool m_operationHasBeenSet = false;

  Aws::String m_metricType;
  bool m_metricTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
