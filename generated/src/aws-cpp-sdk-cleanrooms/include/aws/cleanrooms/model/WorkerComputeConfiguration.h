/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/WorkerComputeConfigurationProperties.h>
#include <aws/cleanrooms/model/WorkerComputeType.h>

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
 * <p> The configuration of the compute resources for workers running an analysis
 * with the Clean Rooms SQL analytics engine.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/WorkerComputeConfiguration">AWS
 * API Reference</a></p>
 */
class WorkerComputeConfiguration {
 public:
  AWS_CLEANROOMS_API WorkerComputeConfiguration() = default;
  AWS_CLEANROOMS_API WorkerComputeConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API WorkerComputeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The worker compute configuration type.</p>
   */
  inline WorkerComputeType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(WorkerComputeType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline WorkerComputeConfiguration& WithType(WorkerComputeType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The number of workers.</p> <p>SQL queries support a minimum value of 2 and a
   * maximum value of 400. </p> <p>PySpark jobs support a minimum value of 4 and a
   * maximum value of 128.</p>
   */
  inline int GetNumber() const { return m_number; }
  inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
  inline void SetNumber(int value) {
    m_numberHasBeenSet = true;
    m_number = value;
  }
  inline WorkerComputeConfiguration& WithNumber(int value) {
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
  WorkerComputeConfiguration& WithProperties(PropertiesT&& value) {
    SetProperties(std::forward<PropertiesT>(value));
    return *this;
  }
  ///@}
 private:
  WorkerComputeType m_type{WorkerComputeType::NOT_SET};
  bool m_typeHasBeenSet = false;

  int m_number{0};
  bool m_numberHasBeenSet = false;

  WorkerComputeConfigurationProperties m_properties;
  bool m_propertiesHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
