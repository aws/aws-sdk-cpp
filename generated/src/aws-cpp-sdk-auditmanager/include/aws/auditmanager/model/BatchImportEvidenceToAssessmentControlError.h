/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/ManualEvidence.h>
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
   * <p> An error entity for the <code>BatchImportEvidenceToAssessmentControl</code>
   * API. This is used to provide more meaningful errors than a simple string
   * message. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/BatchImportEvidenceToAssessmentControlError">AWS
   * API Reference</a></p>
   */
  class BatchImportEvidenceToAssessmentControlError
  {
  public:
    AWS_AUDITMANAGER_API BatchImportEvidenceToAssessmentControlError() = default;
    AWS_AUDITMANAGER_API BatchImportEvidenceToAssessmentControlError(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API BatchImportEvidenceToAssessmentControlError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> Manual evidence that can't be collected automatically by Audit Manager. </p>
     */
    inline const ManualEvidence& GetManualEvidence() const { return m_manualEvidence; }
    inline bool ManualEvidenceHasBeenSet() const { return m_manualEvidenceHasBeenSet; }
    template<typename ManualEvidenceT = ManualEvidence>
    void SetManualEvidence(ManualEvidenceT&& value) { m_manualEvidenceHasBeenSet = true; m_manualEvidence = std::forward<ManualEvidenceT>(value); }
    template<typename ManualEvidenceT = ManualEvidence>
    BatchImportEvidenceToAssessmentControlError& WithManualEvidence(ManualEvidenceT&& value) { SetManualEvidence(std::forward<ManualEvidenceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error code that the <code>BatchImportEvidenceToAssessmentControl</code>
     * API returned. </p>
     */
    inline const Aws::String& GetErrorCode() const { return m_errorCode; }
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }
    template<typename ErrorCodeT = Aws::String>
    void SetErrorCode(ErrorCodeT&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::forward<ErrorCodeT>(value); }
    template<typename ErrorCodeT = Aws::String>
    BatchImportEvidenceToAssessmentControlError& WithErrorCode(ErrorCodeT&& value) { SetErrorCode(std::forward<ErrorCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The error message that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = Aws::String>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = Aws::String>
    BatchImportEvidenceToAssessmentControlError& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}
  private:

    ManualEvidence m_manualEvidence;
    bool m_manualEvidenceHasBeenSet = false;

    Aws::String m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    Aws::String m_errorMessage;
    bool m_errorMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
