/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/MicrovmImageState.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace LambdaMicrovms {
namespace Model {
class GetMicrovmImageResult {
 public:
  AWS_LAMBDAMICROVMS_API GetMicrovmImageResult() = default;
  AWS_LAMBDAMICROVMS_API GetMicrovmImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAMICROVMS_API GetMicrovmImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the MicroVM image.</p>
   */
  inline const Aws::String& GetImageArn() const { return m_imageArn; }
  template <typename ImageArnT = Aws::String>
  void SetImageArn(ImageArnT&& value) {
    m_imageArnHasBeenSet = true;
    m_imageArn = std::forward<ImageArnT>(value);
  }
  template <typename ImageArnT = Aws::String>
  GetMicrovmImageResult& WithImageArn(ImageArnT&& value) {
    SetImageArn(std::forward<ImageArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the MicroVM image.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  GetMicrovmImageResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the MicroVM image.</p>
   */
  inline MicrovmImageState GetState() const { return m_state; }
  inline void SetState(MicrovmImageState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline GetMicrovmImageResult& WithState(MicrovmImageState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest active version of the MicroVM image.</p>
   */
  inline const Aws::String& GetLatestActiveImageVersion() const { return m_latestActiveImageVersion; }
  template <typename LatestActiveImageVersionT = Aws::String>
  void SetLatestActiveImageVersion(LatestActiveImageVersionT&& value) {
    m_latestActiveImageVersionHasBeenSet = true;
    m_latestActiveImageVersion = std::forward<LatestActiveImageVersionT>(value);
  }
  template <typename LatestActiveImageVersionT = Aws::String>
  GetMicrovmImageResult& WithLatestActiveImageVersion(LatestActiveImageVersionT&& value) {
    SetLatestActiveImageVersion(std::forward<LatestActiveImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest failed version of the MicroVM image, if any.</p>
   */
  inline const Aws::String& GetLatestFailedImageVersion() const { return m_latestFailedImageVersion; }
  template <typename LatestFailedImageVersionT = Aws::String>
  void SetLatestFailedImageVersion(LatestFailedImageVersionT&& value) {
    m_latestFailedImageVersionHasBeenSet = true;
    m_latestFailedImageVersion = std::forward<LatestFailedImageVersionT>(value);
  }
  template <typename LatestFailedImageVersionT = Aws::String>
  GetMicrovmImageResult& WithLatestFailedImageVersion(LatestFailedImageVersionT&& value) {
    SetLatestFailedImageVersion(std::forward<LatestFailedImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the MicroVM image was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GetMicrovmImageResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A set of key-value pairs that you can attach to the resource. Use tags to
   * categorize resources for cost allocation, access control (ABAC), and
   * organization.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  GetMicrovmImageResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  GetMicrovmImageResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the MicroVM image was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GetMicrovmImageResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetMicrovmImageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_imageArn;

  Aws::String m_name;

  MicrovmImageState m_state{MicrovmImageState::NOT_SET};

  Aws::String m_latestActiveImageVersion;

  Aws::String m_latestFailedImageVersion;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Map<Aws::String, Aws::String> m_tags;

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_imageArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_latestActiveImageVersionHasBeenSet = false;
  bool m_latestFailedImageVersionHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
