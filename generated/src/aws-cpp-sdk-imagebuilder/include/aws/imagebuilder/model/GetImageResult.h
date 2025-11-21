/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/Image.h>
#include <aws/imagebuilder/model/LatestVersionReferences.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace imagebuilder {
namespace Model {
class GetImageResult {
 public:
  AWS_IMAGEBUILDER_API GetImageResult() = default;
  AWS_IMAGEBUILDER_API GetImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IMAGEBUILDER_API GetImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The request ID that uniquely identifies this request.</p>
   */
  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetImageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image object.</p>
   */
  inline const Image& GetImage() const { return m_image; }
  template <typename ImageT = Image>
  void SetImage(ImageT&& value) {
    m_imageHasBeenSet = true;
    m_image = std::forward<ImageT>(value);
  }
  template <typename ImageT = Image>
  GetImageResult& WithImage(ImageT&& value) {
    SetImage(std::forward<ImageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The resource ARNs with different wildcard variations of semantic
   * versioning.</p>
   */
  inline const LatestVersionReferences& GetLatestVersionReferences() const { return m_latestVersionReferences; }
  template <typename LatestVersionReferencesT = LatestVersionReferences>
  void SetLatestVersionReferences(LatestVersionReferencesT&& value) {
    m_latestVersionReferencesHasBeenSet = true;
    m_latestVersionReferences = std::forward<LatestVersionReferencesT>(value);
  }
  template <typename LatestVersionReferencesT = LatestVersionReferences>
  GetImageResult& WithLatestVersionReferences(LatestVersionReferencesT&& value) {
    SetLatestVersionReferences(std::forward<LatestVersionReferencesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;

  Image m_image;
  bool m_imageHasBeenSet = false;

  LatestVersionReferences m_latestVersionReferences;
  bool m_latestVersionReferencesHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
