/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/AuditTargetEntity.h>
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
 * <p>Specifies a target resource for auditing, such as a service, SLO, or
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/AuditTarget">AWS
 * API Reference</a></p>
 */
class AuditTarget {
 public:
  AWS_APPLICATIONSIGNALS_API AuditTarget() = default;
  AWS_APPLICATIONSIGNALS_API AuditTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API AuditTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of resource being targeted for audit, such as "Service", "SLO",
   * "ServiceOperation", or "Canary".</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  AuditTarget& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific data or entity information for the audit target, containing
   * details needed to identify and examine the resource.</p>
   */
  inline const AuditTargetEntity& GetData() const { return m_data; }
  inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
  template <typename DataT = AuditTargetEntity>
  void SetData(DataT&& value) {
    m_dataHasBeenSet = true;
    m_data = std::forward<DataT>(value);
  }
  template <typename DataT = AuditTargetEntity>
  AuditTarget& WithData(DataT&& value) {
    SetData(std::forward<DataT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_type;
  bool m_typeHasBeenSet = false;

  AuditTargetEntity m_data;
  bool m_dataHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
