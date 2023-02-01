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
    AWS_AUDITMANAGER_API BatchImportEvidenceToAssessmentControlError();
    AWS_AUDITMANAGER_API BatchImportEvidenceToAssessmentControlError(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API BatchImportEvidenceToAssessmentControlError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Manual evidence that can't be collected automatically by Audit Manager. </p>
     */
    inline const ManualEvidence& GetManualEvidence() const{ return m_manualEvidence; }

    /**
     * <p> Manual evidence that can't be collected automatically by Audit Manager. </p>
     */
    inline bool ManualEvidenceHasBeenSet() const { return m_manualEvidenceHasBeenSet; }

    /**
     * <p> Manual evidence that can't be collected automatically by Audit Manager. </p>
     */
    inline void SetManualEvidence(const ManualEvidence& value) { m_manualEvidenceHasBeenSet = true; m_manualEvidence = value; }

    /**
     * <p> Manual evidence that can't be collected automatically by Audit Manager. </p>
     */
    inline void SetManualEvidence(ManualEvidence&& value) { m_manualEvidenceHasBeenSet = true; m_manualEvidence = std::move(value); }

    /**
     * <p> Manual evidence that can't be collected automatically by Audit Manager. </p>
     */
    inline BatchImportEvidenceToAssessmentControlError& WithManualEvidence(const ManualEvidence& value) { SetManualEvidence(value); return *this;}

    /**
     * <p> Manual evidence that can't be collected automatically by Audit Manager. </p>
     */
    inline BatchImportEvidenceToAssessmentControlError& WithManualEvidence(ManualEvidence&& value) { SetManualEvidence(std::move(value)); return *this;}


    /**
     * <p> The error code that the <code>BatchImportEvidenceToAssessmentControl</code>
     * API returned. </p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p> The error code that the <code>BatchImportEvidenceToAssessmentControl</code>
     * API returned. </p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p> The error code that the <code>BatchImportEvidenceToAssessmentControl</code>
     * API returned. </p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p> The error code that the <code>BatchImportEvidenceToAssessmentControl</code>
     * API returned. </p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p> The error code that the <code>BatchImportEvidenceToAssessmentControl</code>
     * API returned. </p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p> The error code that the <code>BatchImportEvidenceToAssessmentControl</code>
     * API returned. </p>
     */
    inline BatchImportEvidenceToAssessmentControlError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p> The error code that the <code>BatchImportEvidenceToAssessmentControl</code>
     * API returned. </p>
     */
    inline BatchImportEvidenceToAssessmentControlError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p> The error code that the <code>BatchImportEvidenceToAssessmentControl</code>
     * API returned. </p>
     */
    inline BatchImportEvidenceToAssessmentControlError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p> The error message that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p> The error message that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p> The error message that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p> The error message that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p> The error message that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p> The error message that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline BatchImportEvidenceToAssessmentControlError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p> The error message that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline BatchImportEvidenceToAssessmentControlError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p> The error message that the
     * <code>BatchImportEvidenceToAssessmentControl</code> API returned. </p>
     */
    inline BatchImportEvidenceToAssessmentControlError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

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
