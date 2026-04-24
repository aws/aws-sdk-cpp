/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/ProtectedJobWorkerComputeType.h>
#include <aws/cleanrooms/model/WorkerComputeConfigurationProperties.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>The configuration of the compute resources for a PySpark job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/ProtectedJobWorkerComputeConfiguration">AWS
 * API Reference</a></p>
 */
class ProtectedJobWorkerComputeConfiguration {
 public:
  AWS_CLEANROOMS_API ProtectedJobWorkerComputeConfiguration() = default;
  AWS_CLEANROOMS_API ProtectedJobWorkerComputeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API ProtectedJobWorkerComputeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The worker compute configuration type.</p>
   */
  inline ProtectedJobWorkerComputeType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(ProtectedJobWorkerComputeType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline ProtectedJobWorkerComputeConfiguration& WithType(ProtectedJobWorkerComputeType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of workers for a PySpark job.</p>
   */
  inline int GetNumber() const { return m_number; }
  inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
  inline void SetNumber(int value) {
    m_numberHasBeenSet = true;
    m_number = value;
  }
  inline ProtectedJobWorkerComputeConfiguration& WithNumber(int value) {
    SetNumber(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration properties for the worker compute environment. These
   * properties allow you to customize the compute settings for your Clean Rooms
   * workloads.</p>
   */
  inline const WorkerComputeConfigurationProperties& GetProperties() const { return m_properties; }
  inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
  template <typename PropertiesT = WorkerComputeConfigurationProperties>
  void SetProperties(PropertiesT&& value) {
    m_propertiesHasBeenSet = true;
    m_properties = std::forward<PropertiesT>(value);
  }
  template <typename PropertiesT = WorkerComputeConfigurationProperties>
  ProtectedJobWorkerComputeConfiguration& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  ///@}
 private:
  ProtectedJobWorkerComputeType m_type{ProtectedJobWorkerComputeType::NOT_SET};

  int m_number{0};

  WorkerComputeConfigurationProperties m_properties;
  bool m_typeHasBeenSet = false;
  bool m_numberHasBeenSet = false;
  bool m_propertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
