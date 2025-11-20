/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

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
class RetryImageResult {
 public:
  AWS_IMAGEBUILDER_API RetryImageResult() = default;
  AWS_IMAGEBUILDER_API RetryImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IMAGEBUILDER_API RetryImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The client token that uniquely identifies the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  RetryImageResult& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the image to be retried.</p>
   */
  inline const Aws::String& GetImageBuildVersionArn() const { return m_imageBuildVersionArn; }
  template <typename ImageBuildVersionArnT = Aws::String>
  void SetImageBuildVersionArn(ImageBuildVersionArnT&& value) {
    m_imageBuildVersionArnHasBeenSet = true;
    m_imageBuildVersionArn = std::forward<ImageBuildVersionArnT>(value);
  }
  template <typename ImageBuildVersionArnT = Aws::String>
  RetryImageResult& WithImageBuildVersionArn(ImageBuildVersionArnT&& value) {
    SetImageBuildVersionArn(std::forward<ImageBuildVersionArnT>(value));
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
  RetryImageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientToken;
  bool m_clientTokenHasBeenSet = false;

  Aws::String m_imageBuildVersionArn;
  bool m_imageBuildVersionArnHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
