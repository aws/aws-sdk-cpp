/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace AuditManager
{
namespace Model
{
  class ValidateAssessmentReportIntegrityResult
  {
  public:
    AWS_AUDITMANAGER_API ValidateAssessmentReportIntegrityResult() = default;
    AWS_AUDITMANAGER_API ValidateAssessmentReportIntegrityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ValidateAssessmentReportIntegrityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Specifies whether the signature key is valid. </p>
     */
    inline bool GetSignatureValid() const { return m_signatureValid; }
    inline void SetSignatureValid(bool value) { m_signatureValidHasBeenSet = true; m_signatureValid = value; }
    inline ValidateAssessmentReportIntegrityResult& WithSignatureValid(bool value) { SetSignatureValid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The signature algorithm that's used to code sign the assessment report file.
     * </p>
     */
    inline const Aws::String& GetSignatureAlgorithm() const { return m_signatureAlgorithm; }
    template<typename SignatureAlgorithmT = Aws::String>
    void SetSignatureAlgorithm(SignatureAlgorithmT&& value) { m_signatureAlgorithmHasBeenSet = true; m_signatureAlgorithm = std::forward<SignatureAlgorithmT>(value); }
    template<typename SignatureAlgorithmT = Aws::String>
    ValidateAssessmentReportIntegrityResult& WithSignatureAlgorithm(SignatureAlgorithmT&& value) { SetSignatureAlgorithm(std::forward<SignatureAlgorithmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time signature that specifies when the assessment report was
     * created. </p>
     */
    inline const Aws::String& GetSignatureDateTime() const { return m_signatureDateTime; }
    template<typename SignatureDateTimeT = Aws::String>
    void SetSignatureDateTime(SignatureDateTimeT&& value) { m_signatureDateTimeHasBeenSet = true; m_signatureDateTime = std::forward<SignatureDateTimeT>(value); }
    template<typename SignatureDateTimeT = Aws::String>
    ValidateAssessmentReportIntegrityResult& WithSignatureDateTime(SignatureDateTimeT&& value) { SetSignatureDateTime(std::forward<SignatureDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the validation signature key. </p>
     */
    inline const Aws::String& GetSignatureKeyId() const { return m_signatureKeyId; }
    template<typename SignatureKeyIdT = Aws::String>
    void SetSignatureKeyId(SignatureKeyIdT&& value) { m_signatureKeyIdHasBeenSet = true; m_signatureKeyId = std::forward<SignatureKeyIdT>(value); }
    template<typename SignatureKeyIdT = Aws::String>
    ValidateAssessmentReportIntegrityResult& WithSignatureKeyId(SignatureKeyIdT&& value) { SetSignatureKeyId(std::forward<SignatureKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Represents any errors that occurred when validating the assessment report.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetValidationErrors() const { return m_validationErrors; }
    template<typename ValidationErrorsT = Aws::Vector<Aws::String>>
    void SetValidationErrors(ValidationErrorsT&& value) { m_validationErrorsHasBeenSet = true; m_validationErrors = std::forward<ValidationErrorsT>(value); }
    template<typename ValidationErrorsT = Aws::Vector<Aws::String>>
    ValidateAssessmentReportIntegrityResult& WithValidationErrors(ValidationErrorsT&& value) { SetValidationErrors(std::forward<ValidationErrorsT>(value)); return *this;}
    template<typename ValidationErrorsT = Aws::String>
    ValidateAssessmentReportIntegrityResult& AddValidationErrors(ValidationErrorsT&& value) { m_validationErrorsHasBeenSet = true; m_validationErrors.emplace_back(std::forward<ValidationErrorsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ValidateAssessmentReportIntegrityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    bool m_signatureValid{false};
    bool m_signatureValidHasBeenSet = false;

    Aws::String m_signatureAlgorithm;
    bool m_signatureAlgorithmHasBeenSet = false;

    Aws::String m_signatureDateTime;
    bool m_signatureDateTimeHasBeenSet = false;

    Aws::String m_signatureKeyId;
    bool m_signatureKeyIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_validationErrors;
    bool m_validationErrorsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
