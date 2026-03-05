/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/PostStreamArtifactGenerationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Details about a generated artifact including location and
 * status</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/ArtifactDetails">AWS
 * API Reference</a></p>
 */
class ArtifactDetails {
 public:
  AWS_CONNECTHEALTH_API ArtifactDetails() = default;
  AWS_CONNECTHEALTH_API ArtifactDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API ArtifactDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetOutputLocation() const { return m_outputLocation; }
  inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }
  template <typename OutputLocationT = Aws::String>
  void SetOutputLocation(OutputLocationT&& value) {
    m_outputLocationHasBeenSet = true;
    m_outputLocation = std::forward<OutputLocationT>(value);
  }
  template <typename OutputLocationT = Aws::String>
  ArtifactDetails& WithOutputLocation(OutputLocationT&& value) {
    SetOutputLocation(std::forward<OutputLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The generation status of the artifact</p>
   */
  inline PostStreamArtifactGenerationStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(PostStreamArtifactGenerationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ArtifactDetails& WithStatus(PostStreamArtifactGenerationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for failure if the artifact generation failed</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  ArtifactDetails& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_outputLocation;

  PostStreamArtifactGenerationStatus m_status{PostStreamArtifactGenerationStatus::NOT_SET};

  Aws::String m_failureReason;
  bool m_outputLocationHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
