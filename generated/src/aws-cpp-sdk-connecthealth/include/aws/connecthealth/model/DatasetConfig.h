/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/MedicalCodingDatasetConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>The configuration of a Dataset. Set one member, which determines the dataset
 * type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/DatasetConfig">AWS
 * API Reference</a></p>
 */
class DatasetConfig {
 public:
  AWS_CONNECTHEALTH_API DatasetConfig() = default;
  AWS_CONNECTHEALTH_API DatasetConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API DatasetConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration of a medical coding dataset, which tailors medical coding
   * jobs to your coded examples.</p>
   */
  inline const MedicalCodingDatasetConfig& GetMedicalCoding() const { return m_medicalCoding; }
  inline bool MedicalCodingHasBeenSet() const { return m_medicalCodingHasBeenSet; }
  template <typename MedicalCodingT = MedicalCodingDatasetConfig>
  void SetMedicalCoding(MedicalCodingT&& value) {
    m_medicalCodingHasBeenSet = true;
    m_medicalCoding = std::forward<MedicalCodingT>(value);
  }
  template <typename MedicalCodingT = MedicalCodingDatasetConfig>
  DatasetConfig& WithMedicalCoding(MedicalCodingT&& value) {
    SetMedicalCoding(std::forward<MedicalCodingT>(value));
    return *this;
  }
  ///@}
 private:
  MedicalCodingDatasetConfig m_medicalCoding;
  bool m_medicalCodingHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
