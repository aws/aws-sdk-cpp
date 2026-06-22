/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda-microvms/LambdaMicrovms_EXPORTS.h>
#include <aws/lambda-microvms/model/MicrovmImageVersionState.h>

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
class DeleteMicrovmImageVersionResult {
 public:
  AWS_LAMBDAMICROVMS_API DeleteMicrovmImageVersionResult() = default;
  AWS_LAMBDAMICROVMS_API DeleteMicrovmImageVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDAMICROVMS_API DeleteMicrovmImageVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the MicroVM image.</p>
   */
  inline const Aws::String& GetImageIdentifier() const { return m_imageIdentifier; }
  template <typename ImageIdentifierT = Aws::String>
  void SetImageIdentifier(ImageIdentifierT&& value) {
    m_imageIdentifierHasBeenSet = true;
    m_imageIdentifier = std::forward<ImageIdentifierT>(value);
  }
  template <typename ImageIdentifierT = Aws::String>
  DeleteMicrovmImageVersionResult& WithImageIdentifier(ImageIdentifierT&& value) {
    SetImageIdentifier(std::forward<ImageIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version that was deleted.</p>
   */
  inline const Aws::String& GetImageVersion() const { return m_imageVersion; }
  template <typename ImageVersionT = Aws::String>
  void SetImageVersion(ImageVersionT&& value) {
    m_imageVersionHasBeenSet = true;
    m_imageVersion = std::forward<ImageVersionT>(value);
  }
  template <typename ImageVersionT = Aws::String>
  DeleteMicrovmImageVersionResult& WithImageVersion(ImageVersionT&& value) {
    SetImageVersion(std::forward<ImageVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current state of the MicroVM image version after deletion.</p>
   */
  inline MicrovmImageVersionState GetState() const { return m_state; }
  inline void SetState(MicrovmImageVersionState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline DeleteMicrovmImageVersionResult& WithState(MicrovmImageVersionState value) {
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
  DeleteMicrovmImageVersionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_imageIdentifier;

  Aws::String m_imageVersion;

  MicrovmImageVersionState m_state{MicrovmImageVersionState::NOT_SET};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_imageIdentifierHasBeenSet = false;
  bool m_imageVersionHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LambdaMicrovms
}  // namespace Aws
