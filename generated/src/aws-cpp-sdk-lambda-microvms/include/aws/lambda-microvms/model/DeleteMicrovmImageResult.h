/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
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
class DeleteMicrovmImageResult {
 public:
  AWS_LAMBDAMICROVMS_API DeleteMicrovmImageResult() = default;
  AWS_LAMBDAMICROVMS_API DeleteMicrovmImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAMICROVMS_API DeleteMicrovmImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the deleted MicroVM image.</p>
   */
  inline const Aws::String& GetImageIdentifier() const { return m_imageIdentifier; }
  template <typename ImageIdentifierT = Aws::String>
  void SetImageIdentifier(ImageIdentifierT&& value) {
    m_imageIdentifierHasBeenSet = true;
    m_imageIdentifier = std::forward<ImageIdentifierT>(value);
  }
  template <typename ImageIdentifierT = Aws::String>
  DeleteMicrovmImageResult& WithImageIdentifier(ImageIdentifierT&& value) {
    SetImageIdentifier(std::forward<ImageIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the MicroVM image after deletion.</p>
   */
  inline MicrovmImageState GetState() const { return m_state; }
  inline void SetState(MicrovmImageState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline DeleteMicrovmImageResult& WithState(MicrovmImageState value) {
    SetState(value);
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
  DeleteMicrovmImageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_imageIdentifier;

  MicrovmImageState m_state{MicrovmImageState::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_imageIdentifierHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
