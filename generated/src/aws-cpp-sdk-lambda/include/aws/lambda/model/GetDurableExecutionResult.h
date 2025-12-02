/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/lambda/model/ErrorObject.h>
#include <aws/lambda/model/ExecutionStatus.h>
#include <aws/lambda/model/TraceHeader.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Lambda {
namespace Model {
/**
 * <p>The response from the GetDurableExecution operation, containing detailed
 * information about the durable execution.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/GetDurableExecutionResponse">AWS
 * API Reference</a></p>
 */
class GetDurableExecutionResult {
 public:
  AWS_LAMBDA_API GetDurableExecutionResult() = default;
  AWS_LAMBDA_API GetDurableExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_LAMBDA_API GetDurableExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the durable execution.</p>
   */
  inline const Aws::String& GetDurableExecutionArn() const { return m_durableExecutionArn; }
  template <typename DurableExecutionArnT = Aws::String>
  void SetDurableExecutionArn(DurableExecutionArnT&& value) {
    m_durableExecutionArnHasBeenSet = true;
    m_durableExecutionArn = std::forward<DurableExecutionArnT>(value);
  }
  template <typename DurableExecutionArnT = Aws::String>
  GetDurableExecutionResult& WithDurableExecutionArn(DurableExecutionArnT&& value) {
    SetDurableExecutionArn(std::forward<DurableExecutionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the durable execution. This is either the name you provided when
   * invoking the function, or a system-generated unique identifier if no name was
   * provided.</p>
   */
  inline const Aws::String& GetDurableExecutionName() const { return m_durableExecutionName; }
  template <typename DurableExecutionNameT = Aws::String>
  void SetDurableExecutionName(DurableExecutionNameT&& value) {
    m_durableExecutionNameHasBeenSet = true;
    m_durableExecutionName = std::forward<DurableExecutionNameT>(value);
  }
  template <typename DurableExecutionNameT = Aws::String>
  GetDurableExecutionResult& WithDurableExecutionName(DurableExecutionNameT&& value) {
    SetDurableExecutionName(std::forward<DurableExecutionNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Lambda function that was invoked to
   * start this durable execution.</p>
   */
  inline const Aws::String& GetFunctionArn() const { return m_functionArn; }
  template <typename FunctionArnT = Aws::String>
  void SetFunctionArn(FunctionArnT&& value) {
    m_functionArnHasBeenSet = true;
    m_functionArn = std::forward<FunctionArnT>(value);
  }
  template <typename FunctionArnT = Aws::String>
  GetDurableExecutionResult& WithFunctionArn(FunctionArnT&& value) {
    SetFunctionArn(std::forward<FunctionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON input payload that was provided when the durable execution was
   * started. For asynchronous invocations, this is limited to 256 KB. For
   * synchronous invocations, this can be up to 6 MB.</p>
   */
  inline const Aws::String& GetInputPayload() const { return m_inputPayload; }
  template <typename InputPayloadT = Aws::String>
  void SetInputPayload(InputPayloadT&& value) {
    m_inputPayloadHasBeenSet = true;
    m_inputPayload = std::forward<InputPayloadT>(value);
  }
  template <typename InputPayloadT = Aws::String>
  GetDurableExecutionResult& WithInputPayload(InputPayloadT&& value) {
    SetInputPayload(std::forward<InputPayloadT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON result returned by the durable execution if it completed
   * successfully. This field is only present when the execution status is
   * <code>SUCCEEDED</code>. The result is limited to 256 KB.</p>
   */
  inline const Aws::String& GetResult() const { return m_result; }
  template <typename ResultT = Aws::String>
  void SetResult(ResultT&& value) {
    m_resultHasBeenSet = true;
    m_result = std::forward<ResultT>(value);
  }
  template <typename ResultT = Aws::String>
  GetDurableExecutionResult& WithResult(ResultT&& value) {
    SetResult(std::forward<ResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Error information if the durable execution failed. This field is only present
   * when the execution status is <code>FAILED</code>, <code>TIMED_OUT</code>, or
   * <code>STOPPED</code>. The combined size of all error fields is limited to 256
   * KB.</p>
   */
  inline const ErrorObject& GetError() const { return m_error; }
  template <typename ErrorT = ErrorObject>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = ErrorObject>
  GetDurableExecutionResult& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the durable execution started, in Unix timestamp
   * format.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTimestamp() const { return m_startTimestamp; }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  void SetStartTimestamp(StartTimestampT&& value) {
    m_startTimestampHasBeenSet = true;
    m_startTimestamp = std::forward<StartTimestampT>(value);
  }
  template <typename StartTimestampT = Aws::Utils::DateTime>
  GetDurableExecutionResult& WithStartTimestamp(StartTimestampT&& value) {
    SetStartTimestamp(std::forward<StartTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the durable execution. Valid values are
   * <code>RUNNING</code>, <code>SUCCEEDED</code>, <code>FAILED</code>,
   * <code>TIMED_OUT</code>, and <code>STOPPED</code>.</p>
   */
  inline ExecutionStatus GetStatus() const { return m_status; }
  inline void SetStatus(ExecutionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetDurableExecutionResult& WithStatus(ExecutionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the durable execution ended, in Unix timestamp format.
   * This field is only present if the execution has completed (status is
   * <code>SUCCEEDED</code>, <code>FAILED</code>, <code>TIMED_OUT</code>, or
   * <code>STOPPED</code>).</p>
   */
  inline const Aws::Utils::DateTime& GetEndTimestamp() const { return m_endTimestamp; }
  template <typename EndTimestampT = Aws::Utils::DateTime>
  void SetEndTimestamp(EndTimestampT&& value) {
    m_endTimestampHasBeenSet = true;
    m_endTimestamp = std::forward<EndTimestampT>(value);
  }
  template <typename EndTimestampT = Aws::Utils::DateTime>
  GetDurableExecutionResult& WithEndTimestamp(EndTimestampT&& value) {
    SetEndTimestamp(std::forward<EndTimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the Lambda function that was invoked for this durable
   * execution. This ensures that all replays during the execution use the same
   * function version.</p>
   */
  inline const Aws::String& GetVersion() const { return m_version; }
  template <typename VersionT = Aws::String>
  void SetVersion(VersionT&& value) {
    m_versionHasBeenSet = true;
    m_version = std::forward<VersionT>(value);
  }
  template <typename VersionT = Aws::String>
  GetDurableExecutionResult& WithVersion(VersionT&& value) {
    SetVersion(std::forward<VersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The trace headers associated with the durable execution.</p>
   */
  inline const TraceHeader& GetTraceHeader() const { return m_traceHeader; }
  template <typename TraceHeaderT = TraceHeader>
  void SetTraceHeader(TraceHeaderT&& value) {
    m_traceHeaderHasBeenSet = true;
    m_traceHeader = std::forward<TraceHeaderT>(value);
  }
  template <typename TraceHeaderT = TraceHeader>
  GetDurableExecutionResult& WithTraceHeader(TraceHeaderT&& value) {
    SetTraceHeader(std::forward<TraceHeaderT>(value));
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
  GetDurableExecutionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_durableExecutionArn;
  bool m_durableExecutionArnHasBeenSet = false;

  Aws::String m_durableExecutionName;
  bool m_durableExecutionNameHasBeenSet = false;

  Aws::String m_functionArn;
  bool m_functionArnHasBeenSet = false;

  Aws::String m_inputPayload;
  bool m_inputPayloadHasBeenSet = false;

  Aws::String m_result;
  bool m_resultHasBeenSet = false;

  ErrorObject m_error;
  bool m_errorHasBeenSet = false;

  Aws::Utils::DateTime m_startTimestamp{};
  bool m_startTimestampHasBeenSet = false;

  ExecutionStatus m_status{ExecutionStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  Aws::Utils::DateTime m_endTimestamp{};
  bool m_endTimestampHasBeenSet = false;

  Aws::String m_version;
  bool m_versionHasBeenSet = false;

  TraceHeader m_traceHeader;
  bool m_traceHeaderHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Lambda
}  // namespace Aws
