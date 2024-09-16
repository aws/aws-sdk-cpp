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
    AWS_IOT_API SbomValidationResultSummary();
    AWS_IOT_API SbomValidationResultSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API SbomValidationResultSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the SBOM file.</p>
     */
    inline const Aws::String& GetFileName() const{ return m_fileName; }
    inline bool FileNameHasBeenSet() const { return m_fileNameHasBeenSet; }
    inline void SetFileName(const Aws::String& value) { m_fileNameHasBeenSet = true; m_fileName = value; }
    inline void SetFileName(Aws::String&& value) { m_fileNameHasBeenSet = true; m_fileName = std::move(value); }
    inline void SetFileName(const char* value) { m_fileNameHasBeenSet = true; m_fileName.assign(value); }
    inline SbomValidationResultSummary& WithFileName(const Aws::String& value) { SetFileName(value); return *this;}
    inline SbomValidationResultSummary& WithFileName(Aws::String&& value) { SetFileName(std::move(value)); return *this;}
    inline SbomValidationResultSummary& WithFileName(const char* value) { SetFileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end result of the SBOM validation.</p>
     */
    inline const SbomValidationResult& GetValidationResult() const{ return m_validationResult; }
    inline bool ValidationResultHasBeenSet() const { return m_validationResultHasBeenSet; }
    inline void SetValidationResult(const SbomValidationResult& value) { m_validationResultHasBeenSet = true; m_validationResult = value; }
    inline void SetValidationResult(SbomValidationResult&& value) { m_validationResultHasBeenSet = true; m_validationResult = std::move(value); }
    inline SbomValidationResultSummary& WithValidationResult(const SbomValidationResult& value) { SetValidationResult(value); return *this;}
    inline SbomValidationResultSummary& WithValidationResult(SbomValidationResult&& value) { SetValidationResult(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>errorCode</code> representing the validation failure error if the
     * SBOM validation failed.</p>
     */
    inline const SbomValidationErrorCode& GetErrorCode() const{ return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    inline void SetErrorCode(const SbomValidationErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }
    inline void SetErrorCode(SbomValidationErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }
    inline SbomValidationResultSummary& WithErrorCode(const SbomValidationErrorCode& value) { SetErrorCode(value); return *this;}
    inline SbomValidationResultSummary& WithErrorCode(SbomValidationErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>errorMessage</code> representing the validation failure error if
     * the SBOM validation failed.</p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }
    inline SbomValidationResultSummary& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}
    inline SbomValidationResultSummary& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}
    inline SbomValidationResultSummary& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_fileName;
    bool m_fileNameHasBeenSet = false;

    SbomValidationResult m_validationResult;
    bool m_validationResultHasBeenSet = false;

    SbomValidationErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
