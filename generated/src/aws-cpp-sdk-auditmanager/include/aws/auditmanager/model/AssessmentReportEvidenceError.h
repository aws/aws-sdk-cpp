/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
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
namespace AuditManager
{
namespace Model
{

  /**
   * <p> An error entity for assessment report evidence errors. This is used to
   * provide more meaningful errors than a simple string message. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/AssessmentReportEvidenceError">AWS
   * API Reference</a></p>
   */
  class AssessmentReportEvidenceError
  {
  public:
    AWS_AUDITMANAGER_API AssessmentReportEvidenceError() = default;
    AWS_AUDITMANAGER_API AssessmentReportEvidenceError(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentReportEvidenceError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The identifier for the evidence. </p>
     */
    inline const Aws::String& GetEvidenceId() const { return m_evidenceId; }
    inline bool EvidenceIdHasBeenSet() const { return m_evidenceIdHasBeenSet; }
    template<typename EvidenceIdT = Aws::String>
    void SetEvidenceId(EvidenceIdT&& value) { m_evidenceIdHasBeenSet = true; m_evidenceId = std::forward<EvidenceIdT>(value); }
    template<typename EvidenceIdT = Aws::String>
    AssessmentReportEvidenceError& WithEvidenceId(EvidenceIdT&& value) { SetEvidenceId(std::forward<EvidenceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error code that was returned. </p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    AssessmentReportEvidenceError& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error message that was returned. </p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    AssessmentReportEvidenceError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_evidenceId;
    bool m_evidenceIdHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
