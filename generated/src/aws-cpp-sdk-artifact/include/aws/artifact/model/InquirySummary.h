/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/artifact/Artifact_EXPORTS.h>
#include <aws/artifact/model/InputSource.h>
#include <aws/artifact/model/InquiryStatus.h>
#include <aws/artifact/model/InquiryStatusMessage.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Artifact {
namespace Model {

/**
 * <p>Summary information about a compliance inquiry.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/artifact-2018-05-10/InquirySummary">AWS
 * API Reference</a></p>
 */
class InquirySummary {
 public:
  AWS_ARTIFACT_API InquirySummary() = default;
  AWS_ARTIFACT_API InquirySummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARTIFACT_API InquirySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ARTIFACT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>ARN of the compliance inquiry resource.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  InquirySummary& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Title of the inquiry.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  InquirySummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique resource ID for the compliance inquiry.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  InquirySummary& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current processing status of the inquiry.</p>
   */
  inline InquiryStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(InquiryStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline InquirySummary& WithStatus(InquiryStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Status message providing additional context.</p>
   */
  inline InquiryStatusMessage GetStatusMessage() const { return m_statusMessage; }
  inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
  inline void SetStatusMessage(InquiryStatusMessage value) {
    m_statusMessageHasBeenSet = true;
    m_statusMessage = value;
  }
  inline InquirySummary& WithStatusMessage(InquiryStatusMessage value) {
    SetStatusMessage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Type of inquiry content (text or file).</p>
   */
  inline InputSource GetInputSource() const { return m_inputSource; }
  inline bool InputSourceHasBeenSet() const { return m_inputSourceHasBeenSet; }
  inline void SetInputSource(InputSource value) {
    m_inputSourceHasBeenSet = true;
    m_inputSource = value;
  }
  inline InquirySummary& WithInputSource(InputSource value) {
    SetInputSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp indicating when the resource was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  InquirySummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_arn;

  Aws::String m_name;

  Aws::String m_id;

  InquiryStatus m_status{InquiryStatus::NOT_SET};

  InquiryStatusMessage m_statusMessage{InquiryStatusMessage::NOT_SET};

  InputSource m_inputSource{InputSource::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};
  bool m_arnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusMessageHasBeenSet = false;
  bool m_inputSourceHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
};

}  // namespace Model
}  // namespace Artifact
}  // namespace Aws
