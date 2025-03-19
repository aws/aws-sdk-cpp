/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/SbomValidationResult.h>
#include <aws/iot/model/SbomValidationErrorCode.h>
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
namespace IoT
{
namespace Model
{

  /**
   * <p>A summary of the validation results for a specific software bill of materials
   * (SBOM) attached to a software package version.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SbomValidationResultSummary">AWS
   * API Reference</a></p>
   */
  class SbomValidationResultSummary
  {
  public:
    AWS_IOT_API SbomValidationResultSummary() = default;
    AWS_IOT_API SbomValidationResultSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API SbomValidationResultSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the SBOM file.</p>
     */
    inline const Aws::String& GetFileName() const { return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    template<typename FileNameT = Aws::String>
    void SetFileName(FileNameT&& value) { m_fileNameHasBeenSet = true; m_fileName = std::forward<FileNameT>(value); }
    template<typename FileNameT = Aws::String>
    SbomValidationResultSummary& WithFileName(FileNameT&& value) { SetFileName(std::forward<FileNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end result of the SBOM validation.</p>
     */
    inline SbomValidationResult GetValidationResult() const { return m_validationResult; }
    inline bool ValidationResultHasBeenSet() const { return m_validationResultHasBeenSet; }
    inline void SetValidationResult(SbomValidationResult value) { m_validationResultHasBeenSet = true; m_validationResult = value; }
    inline SbomValidationResultSummary& WithValidationResult(SbomValidationResult value) { SetValidationResult(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>errorCode</code> representing the validation failure error if the
     * SBOM validation failed.</p>
     */
    inline SbomValidationErrorCode GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(SbomValidationErrorCode value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline SbomValidationResultSummary& WithErrorCode(SbomValidationErrorCode value) { SetErrorCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>errorMessage</code> representing the validation failure error if
     * the SBOM validation failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    SbomValidationResultSummary& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    SbomValidationResult m_validationResult{SbomValidationResult::NOT_SET};
    bool m_validationResultHasBeenSet = false;

    SbomValidationErrorCode m_errorCode{SbomValidationErrorCode::NOT_SET};
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
