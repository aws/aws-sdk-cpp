/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Lambda
{
namespace Model
{

  /**
   * <p>A response confirming that the event stream is complete.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/InvokeWithResponseStreamCompleteEvent">AWS
   * API Reference</a></p>
   */
  class InvokeWithResponseStreamCompleteEvent
  {
  public:
    AWS_LAMBDA_API InvokeWithResponseStreamCompleteEvent() = default;
    AWS_LAMBDA_API InvokeWithResponseStreamCompleteEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API InvokeWithResponseStreamCompleteEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LAMBDA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An error code.</p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    InvokeWithResponseStreamCompleteEvent& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of any returned error.</p>
     */
    inline const Aws::String& GetErrorDetails() const { return m_errorDetails; }
    inline bool ErrorDetailsHasBeenSet() const { return m_errorDetailsHasBeenSet; }
    template<typename ErrorDetailsT = Aws::String>
    void SetErrorDetails(ErrorDetailsT&& value) { m_errorDetailsHasBeenSet = true; m_errorDetails = std::forward<ErrorDetailsT>(value); }
    template<typename ErrorDetailsT = Aws::String>
    InvokeWithResponseStreamCompleteEvent& WithErrorDetails(ErrorDetailsT&& value) { SetErrorDetails(std::forward<ErrorDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last 4 KB of the execution log, which is base64-encoded.</p>
     */
    inline const Aws::String& GetLogResult() const { return m_logResult; }
    inline bool LogResultHasBeenSet() const { return m_logResultHasBeenSet; }
    template<typename LogResultT = Aws::String>
    void SetLogResult(LogResultT&& value) { m_logResultHasBeenSet = true; m_logResult = std::forward<LogResultT>(value); }
    template<typename LogResultT = Aws::String>
    InvokeWithResponseStreamCompleteEvent& WithLogResult(LogResultT&& value) { SetLogResult(std::forward<LogResultT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorDetails;
    bool m_errorDetailsHasBeenSet = false;

    Aws::String m_logResult;
    bool m_logResultHasBeenSet = false;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
