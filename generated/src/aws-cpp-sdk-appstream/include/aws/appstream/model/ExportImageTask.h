/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/ErrorDetails.h>
#include <aws/appstream/model/ExportImageTaskState.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppStream {
namespace Model {

/**
 * <p>Information about an export image task, including its current state,
 * timestamps, and any error details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/ExportImageTask">AWS
 * API Reference</a></p>
 */
class ExportImageTask {
 public:
  AWS_APPSTREAM_API ExportImageTask() = default;
  AWS_APPSTREAM_API ExportImageTask(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API ExportImageTask& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier for the export image task. Use this ID to track the
   * task's progress and retrieve its details.</p>
   */
  inline const Aws::String& GetTaskId() const { return m_taskId; }
  inline bool TaskIdHasBeenSet() const { return m_taskIdHasBeenSet; }
  template <typename TaskIdT = Aws::String>
  void SetTaskId(TaskIdT&& value) {
    m_taskIdHasBeenSet = true;
    m_taskId = std::forward<TaskIdT>(value);
  }
  template <typename TaskIdT = Aws::String>
  ExportImageTask& WithTaskId(TaskIdT&& value) {
    SetTaskId(std::forward<TaskIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the WorkSpaces Applications image being exported.</p>
   */
  inline const Aws::String& GetImageArn() const { return m_imageArn; }
  inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }
  template <typename ImageArnT = Aws::String>
  void SetImageArn(ImageArnT&& value) {
    m_imageArnHasBeenSet = true;
    m_imageArn = std::forward<ImageArnT>(value);
  }
  template <typename ImageArnT = Aws::String>
  ExportImageTask& WithImageArn(ImageArnT&& value) {
    SetImageArn(std::forward<ImageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the EC2 AMI that will be created by this export task.</p>
   */
  inline const Aws::String& GetAmiName() const { return m_amiName; }
  inline bool AmiNameHasBeenSet() const { return m_amiNameHasBeenSet; }
  template <typename AmiNameT = Aws::String>
  void SetAmiName(AmiNameT&& value) {
    m_amiNameHasBeenSet = true;
    m_amiName = std::forward<AmiNameT>(value);
  }
  template <typename AmiNameT = Aws::String>
  ExportImageTask& WithAmiName(AmiNameT&& value) {
    SetAmiName(std::forward<AmiNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the export image task was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
  inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  void SetCreatedDate(CreatedDateT&& value) {
    m_createdDateHasBeenSet = true;
    m_createdDate = std::forward<CreatedDateT>(value);
  }
  template <typename CreatedDateT = Aws::Utils::DateTime>
  ExportImageTask& WithCreatedDate(CreatedDateT&& value) {
    SetCreatedDate(std::forward<CreatedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description that will be applied to the exported EC2 AMI.</p>
   */
  inline const Aws::String& GetAmiDescription() const { return m_amiDescription; }
  inline bool AmiDescriptionHasBeenSet() const { return m_amiDescriptionHasBeenSet; }
  template <typename AmiDescriptionT = Aws::String>
  void SetAmiDescription(AmiDescriptionT&& value) {
    m_amiDescriptionHasBeenSet = true;
    m_amiDescription = std::forward<AmiDescriptionT>(value);
  }
  template <typename AmiDescriptionT = Aws::String>
  ExportImageTask& WithAmiDescription(AmiDescriptionT&& value) {
    SetAmiDescription(std::forward<AmiDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the export image task, such as PENDING, RUNNING,
   * COMPLETED, or FAILED.</p>
   */
  inline ExportImageTaskState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(ExportImageTaskState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline ExportImageTask& WithState(ExportImageTaskState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the EC2 AMI that was created by this export task. This field is
   * only populated when the task completes successfully.</p>
   */
  inline const Aws::String& GetAmiId() const { return m_amiId; }
  inline bool AmiIdHasBeenSet() const { return m_amiIdHasBeenSet; }
  template <typename AmiIdT = Aws::String>
  void SetAmiId(AmiIdT&& value) {
    m_amiIdHasBeenSet = true;
    m_amiId = std::forward<AmiIdT>(value);
  }
  template <typename AmiIdT = Aws::String>
  ExportImageTask& WithAmiId(AmiIdT&& value) {
    SetAmiId(std::forward<AmiIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags that will be applied to the exported EC2 AMI.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTagSpecifications() const { return m_tagSpecifications; }
  inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
  template <typename TagSpecificationsT = Aws::Map<Aws::String, Aws::String>>
  void SetTagSpecifications(TagSpecificationsT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications = std::forward<TagSpecificationsT>(value);
  }
  template <typename TagSpecificationsT = Aws::Map<Aws::String, Aws::String>>
  ExportImageTask& WithTagSpecifications(TagSpecificationsT&& value) {
    SetTagSpecifications(std::forward<TagSpecificationsT>(value));
    return *this;
  }
  template <typename TagSpecificationsKeyT = Aws::String, typename TagSpecificationsValueT = Aws::String>
  ExportImageTask& AddTagSpecifications(TagSpecificationsKeyT&& key, TagSpecificationsValueT&& value) {
    m_tagSpecificationsHasBeenSet = true;
    m_tagSpecifications.emplace(std::forward<TagSpecificationsKeyT>(key), std::forward<TagSpecificationsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about any errors that occurred during the export process. This field
   * is only populated when the task fails.</p>
   */
  inline const Aws::Vector<ErrorDetails>& GetErrorDetails() const { return m_errorDetails; }
  inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
  template <typename ErrorDetailsT = Aws::Vector<ErrorDetails>>
  void SetErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails = std::forward<ErrorDetailsT>(value);
  }
  template <typename ErrorDetailsT = Aws::Vector<ErrorDetails>>
  ExportImageTask& WithErrorDetails(ErrorDetailsT&& value) {
    SetErrorDetails(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  template <typename ErrorDetailsT = ErrorDetails>
  ExportImageTask& AddErrorDetails(ErrorDetailsT&& value) {
    m_errorDetailsHasBeenSet = true;
    m_errorDetails.emplace_back(std::forward<ErrorDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_taskId;

  Aws::String m_imageArn;

  Aws::String m_amiName;

  Aws::Utils::DateTime m_createdDate{};

  Aws::String m_amiDescription;

  ExportImageTaskState m_state{ExportImageTaskState::NOT_SET};

  Aws::String m_amiId;

  Aws::Map<Aws::String, Aws::String> m_tagSpecifications;

  Aws::Vector<ErrorDetails> m_errorDetails;
  bool m_taskIdHasBeenSet = false;
  bool m_imageArnHasBeenSet = false;
  bool m_amiNameHasBeenSet = false;
  bool m_createdDateHasBeenSet = false;
  bool m_amiDescriptionHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_amiIdHasBeenSet = false;
  bool m_tagSpecificationsHasBeenSet = false;
  bool m_errorDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
