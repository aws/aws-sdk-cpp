/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/model/UsageReportExecutionErrorCode.h>
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
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the error that is returned when a usage report can't be
   * generated.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/LastReportGenerationExecutionError">AWS
   * API Reference</a></p>
   */
  class LastReportGenerationExecutionError
  {
  public:
    AWS_APPSTREAM_API LastReportGenerationExecutionError() = default;
    AWS_APPSTREAM_API LastReportGenerationExecutionError(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API LastReportGenerationExecutionError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The error code for the error that is returned when a usage report can't be
     * generated.</p>
     */
    inline UsageReportExecutionErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(UsageReportExecutionErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline LastReportGenerationExecutionError& WithErrorCode(UsageReportExecutionErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The error message for the error that is returned when a usage report can't be
     * generated.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    LastReportGenerationExecutionError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    UsageReportExecutionErrorCode m_errorCode{UsageReportExecutionErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
