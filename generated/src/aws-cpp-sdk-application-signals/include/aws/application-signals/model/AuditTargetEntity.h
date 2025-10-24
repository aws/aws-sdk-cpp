/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/ServiceEntity.h>
#include <aws/application-signals/model/ServiceLevelObjectiveEntity.h>
#include <aws/application-signals/model/ServiceOperationEntity.h>

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
 * <p>A union structure that contains the specific entity information for different
 * types of audit targets.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/AuditTargetEntity">AWS
 * API Reference</a></p>
 */
class AuditTargetEntity {
 public:
  AWS_APPLICATIONSIGNALS_API AuditTargetEntity() = default;
  AWS_APPLICATIONSIGNALS_API AuditTargetEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API AuditTargetEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Service entity information when the audit target is a service.</p>
   */
  inline const ServiceEntity& GetService() const { return m_service; }
  inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
  template <typename ServiceT = ServiceEntity>
  void SetService(ServiceT&& value) {
    m_serviceHasBeenSet = true;
    m_service = std::forward<ServiceT>(value);
  }
  template <typename ServiceT = ServiceEntity>
  AuditTargetEntity& WithService(ServiceT&& value) {
    SetService(std::forward<ServiceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SLO entity information when the audit target is a service level
   * objective.</p>
   */
  inline const ServiceLevelObjectiveEntity& GetSlo() const { return m_slo; }
  inline bool SloHasBeenSet() const { return m_sloHasBeenSet; }
  template <typename SloT = ServiceLevelObjectiveEntity>
  void SetSlo(SloT&& value) {
    m_sloHasBeenSet = true;
    m_slo = std::forward<SloT>(value);
  }
  template <typename SloT = ServiceLevelObjectiveEntity>
  AuditTargetEntity& WithSlo(SloT&& value) {
    SetSlo(std::forward<SloT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Service operation entity information when the audit target is a specific
   * service operation.</p>
   */
  inline const ServiceOperationEntity& GetServiceOperation() const { return m_serviceOperation; }
  inline bool ServiceOperationHasBeenSet() const { return m_serviceOperationHasBeenSet; }
  template <typename ServiceOperationT = ServiceOperationEntity>
  void SetServiceOperation(ServiceOperationT&& value) {
    m_serviceOperationHasBeenSet = true;
    m_serviceOperation = std::forward<ServiceOperationT>(value);
  }
  template <typename ServiceOperationT = ServiceOperationEntity>
  AuditTargetEntity& WithServiceOperation(ServiceOperationT&& value) {
    SetServiceOperation(std::forward<ServiceOperationT>(value));
    return *this;
  }
  ///@}
 private:
  ServiceEntity m_service;
  bool m_serviceHasBeenSet = false;

  ServiceLevelObjectiveEntity m_slo;
  bool m_sloHasBeenSet = false;

  ServiceOperationEntity m_serviceOperation;
  bool m_serviceOperationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
