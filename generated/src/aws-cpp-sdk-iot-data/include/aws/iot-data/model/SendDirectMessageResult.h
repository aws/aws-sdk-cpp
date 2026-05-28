/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot-data/IoTDataPlane_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTDataPlane {
namespace Model {
/**
 * <p>The output from the SendDirectMessage operation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-data-2015-05-28/SendDirectMessageResponse">AWS
 * API Reference</a></p>
 */
class SendDirectMessageResult {
 public:
  AWS_IOTDATAPLANE_API SendDirectMessageResult() = default;
  AWS_IOTDATAPLANE_API SendDirectMessageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTDATAPLANE_API SendDirectMessageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The status message indicating the result of the operation.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  SendDirectMessageResult& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique identifier for the request. Include this value when contacting
   * Amazon Web Services Support for troubleshooting.</p>
   */
  inline const Aws::String& GetTraceId() const { return m_traceId; }
  template <typename TraceIdT = Aws::String>
  void SetTraceId(TraceIdT&& value) {
    m_traceIdHasBeenSet = true;
    m_traceId = std::forward<TraceIdT>(value);
  }
  template <typename TraceIdT = Aws::String>
  SendDirectMessageResult& WithTraceId(TraceIdT&& value) {
    SetTraceId(std::forward<TraceIdT>(value));
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
  SendDirectMessageResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_message;

  Aws::String m_traceId;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_messageHasBeenSet = false;
  bool m_traceIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTDataPlane
}  // namespace Aws
