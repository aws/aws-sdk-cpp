/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/FHIRServer.h>
#include <aws/connecthealth/model/S3Source.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Configuration details for input patient data</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/InputDataConfig">AWS
 * API Reference</a></p>
 */
class InputDataConfig {
 public:
  AWS_CONNECTHEALTH_API InputDataConfig() = default;
  AWS_CONNECTHEALTH_API InputDataConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API InputDataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>FHIR server configuration to retrieve patient data.</p>
   */
  inline const FHIRServer& GetFhirServer() const { return m_fhirServer; }
  inline bool FhirServerHasBeenSet() const { return m_fhirServerHasBeenSet; }
  template <typename FhirServerT = FHIRServer>
  void SetFhirServer(FhirServerT&& value) {
    m_fhirServerHasBeenSet = true;
    m_fhirServer = std::forward<FhirServerT>(value);
  }
  template <typename FhirServerT = FHIRServer>
  InputDataConfig& WithFhirServer(FhirServerT&& value) {
    SetFhirServer(std::forward<FhirServerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of S3 sources containing patient data.</p>
   */
  inline const Aws::Vector<S3Source>& GetS3Sources() const { return m_s3Sources; }
  inline bool S3SourcesHasBeenSet() const { return m_s3SourcesHasBeenSet; }
  template <typename S3SourcesT = Aws::Vector<S3Source>>
  void SetS3Sources(S3SourcesT&& value) {
    m_s3SourcesHasBeenSet = true;
    m_s3Sources = std::forward<S3SourcesT>(value);
  }
  template <typename S3SourcesT = Aws::Vector<S3Source>>
  InputDataConfig& WithS3Sources(S3SourcesT&& value) {
    SetS3Sources(std::forward<S3SourcesT>(value));
    return *this;
  }
  template <typename S3SourcesT = S3Source>
  InputDataConfig& AddS3Sources(S3SourcesT&& value) {
    m_s3SourcesHasBeenSet = true;
    m_s3Sources.emplace_back(std::forward<S3SourcesT>(value));
    return *this;
  }
  ///@}
 private:
  FHIRServer m_fhirServer;

  Aws::Vector<S3Source> m_s3Sources;
  bool m_fhirServerHasBeenSet = false;
  bool m_s3SourcesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
