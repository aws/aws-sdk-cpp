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
    AWS_AUDITMANAGER_API AssessmentReportEvidenceError();
    AWS_AUDITMANAGER_API AssessmentReportEvidenceError(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API AssessmentReportEvidenceError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The identifier for the evidence. </p>
     */
    inline const Aws::String& GetEvidenceId() const{ return m_evidenceId; }

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline bool EvidenceIdHasBeenSet() const { return m_evidenceIdHasBeenSet; }

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline void SetEvidenceId(const Aws::String& value) { m_evidenceIdHasBeenSet = true; m_evidenceId = value; }

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline void SetEvidenceId(Aws::String&& value) { m_evidenceIdHasBeenSet = true; m_evidenceId = std::move(value); }

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline void SetEvidenceId(const char* value) { m_evidenceIdHasBeenSet = true; m_evidenceId.assign(value); }

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline AssessmentReportEvidenceError& WithEvidenceId(const Aws::String& value) { SetEvidenceId(value); return *this;}

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline AssessmentReportEvidenceError& WithEvidenceId(Aws::String&& value) { SetEvidenceId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the evidence. </p>
     */
    inline AssessmentReportEvidenceError& WithEvidenceId(const char* value) { SetEvidenceId(value); return *this;}


    /**
     * <p> The error code that was returned. </p>
     */
    inline const Aws::String& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p> The error code that was returned. </p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p> The error code that was returned. </p>
     */
    inline void SetErrorCode(const Aws::String& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p> The error code that was returned. </p>
     */
    inline void SetErrorCode(Aws::String&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p> The error code that was returned. </p>
     */
    inline void SetErrorCode(const char* value) { m_errorCodeHasBeenSet = true; m_errorCode.assign(value); }

    /**
     * <p> The error code that was returned. </p>
     */
    inline AssessmentReportEvidenceError& WithErrorCode(const Aws::String& value) { SetErrorCode(value); return *this;}

    /**
     * <p> The error code that was returned. </p>
     */
    inline AssessmentReportEvidenceError& WithErrorCode(Aws::String&& value) { SetErrorCode(std::move(value)); return *this;}

    /**
     * <p> The error code that was returned. </p>
     */
    inline AssessmentReportEvidenceError& WithErrorCode(const char* value) { SetErrorCode(value); return *this;}


    /**
     * <p> The error message that was returned. </p>
     */
    inline const Aws::String& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p> The error message that was returned. </p>
     */
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    /**
     * <p> The error message that was returned. </p>
     */
    inline void SetErrorMessage(const Aws::String& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    /**
     * <p> The error message that was returned. </p>
     */
    inline void SetErrorMessage(Aws::String&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    /**
     * <p> The error message that was returned. </p>
     */
    inline void SetErrorMessage(const char* value) { m_errorMessageHasBeenSet = true; m_errorMessage.assign(value); }

    /**
     * <p> The error message that was returned. </p>
     */
    inline AssessmentReportEvidenceError& WithErrorMessage(const Aws::String& value) { SetErrorMessage(value); return *this;}

    /**
     * <p> The error message that was returned. </p>
     */
    inline AssessmentReportEvidenceError& WithErrorMessage(Aws::String&& value) { SetErrorMessage(std::move(value)); return *this;}

    /**
     * <p> The error message that was returned. </p>
     */
    inline AssessmentReportEvidenceError& WithErrorMessage(const char* value) { SetErrorMessage(value); return *this;}

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
