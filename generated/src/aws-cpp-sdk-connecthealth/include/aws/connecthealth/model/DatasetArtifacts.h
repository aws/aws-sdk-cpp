/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/MedicalCodingDatasetArtifacts.h>

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
 * <p>The results of building a Dataset, by dataset type.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/DatasetArtifacts">AWS
 * API Reference</a></p>
 */
class DatasetArtifacts {
 public:
  AWS_CONNECTHEALTH_API DatasetArtifacts() = default;
  AWS_CONNECTHEALTH_API DatasetArtifacts(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API DatasetArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The results of building a medical coding dataset.</p>
   */
  inline const MedicalCodingDatasetArtifacts& GetMedicalCoding() const { return m_medicalCoding; }
  inline bool MedicalCodingHasBeenSet() const { return m_medicalCodingHasBeenSet; }
  template <typename MedicalCodingT = MedicalCodingDatasetArtifacts>
  void SetMedicalCoding(MedicalCodingT&& value) {
    m_medicalCodingHasBeenSet = true;
    m_medicalCoding = std::forward<MedicalCodingT>(value);
  }
  template <typename MedicalCodingT = MedicalCodingDatasetArtifacts>
  DatasetArtifacts& WithMedicalCoding(MedicalCodingT&& value) {
    SetMedicalCoding(std::forward<MedicalCodingT>(value));
    return *this;
  }
  ///@}
 private:
  MedicalCodingDatasetArtifacts m_medicalCoding;
  bool m_medicalCodingHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
