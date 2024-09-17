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
    AWS_AUDITMANAGER_API ValidateAssessmentReportIntegrityResult();
    AWS_AUDITMANAGER_API ValidateAssessmentReportIntegrityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API ValidateAssessmentReportIntegrityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> Specifies whether the signature key is valid. </p>
     */
    inline bool GetSignatureValid() const{ return m_signatureValid; }
    inline void SetSignatureValid(bool value) { m_signatureValid = value; }
    inline ValidateAssessmentReportIntegrityResult& WithSignatureValid(bool value) { SetSignatureValid(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The signature algorithm that's used to code sign the assessment report file.
     * </p>
     */
    inline const Aws::String& GetSignatureAlgorithm() const{ return m_signatureAlgorithm; }
    inline void SetSignatureAlgorithm(const Aws::String& value) { m_signatureAlgorithm = value; }
    inline void SetSignatureAlgorithm(Aws::String&& value) { m_signatureAlgorithm = std::move(value); }
    inline void SetSignatureAlgorithm(const char* value) { m_signatureAlgorithm.assign(value); }
    inline ValidateAssessmentReportIntegrityResult& WithSignatureAlgorithm(const Aws::String& value) { SetSignatureAlgorithm(value); return *this;}
    inline ValidateAssessmentReportIntegrityResult& WithSignatureAlgorithm(Aws::String&& value) { SetSignatureAlgorithm(std::move(value)); return *this;}
    inline ValidateAssessmentReportIntegrityResult& WithSignatureAlgorithm(const char* value) { SetSignatureAlgorithm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time signature that specifies when the assessment report was
     * created. </p>
     */
    inline const Aws::String& GetSignatureDateTime() const{ return m_signatureDateTime; }
    inline void SetSignatureDateTime(const Aws::String& value) { m_signatureDateTime = value; }
    inline void SetSignatureDateTime(Aws::String&& value) { m_signatureDateTime = std::move(value); }
    inline void SetSignatureDateTime(const char* value) { m_signatureDateTime.assign(value); }
    inline ValidateAssessmentReportIntegrityResult& WithSignatureDateTime(const Aws::String& value) { SetSignatureDateTime(value); return *this;}
    inline ValidateAssessmentReportIntegrityResult& WithSignatureDateTime(Aws::String&& value) { SetSignatureDateTime(std::move(value)); return *this;}
    inline ValidateAssessmentReportIntegrityResult& WithSignatureDateTime(const char* value) { SetSignatureDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the validation signature key. </p>
     */
    inline const Aws::String& GetSignatureKeyId() const{ return m_signatureKeyId; }
    inline void SetSignatureKeyId(const Aws::String& value) { m_signatureKeyId = value; }
    inline void SetSignatureKeyId(Aws::String&& value) { m_signatureKeyId = std::move(value); }
    inline void SetSignatureKeyId(const char* value) { m_signatureKeyId.assign(value); }
    inline ValidateAssessmentReportIntegrityResult& WithSignatureKeyId(const Aws::String& value) { SetSignatureKeyId(value); return *this;}
    inline ValidateAssessmentReportIntegrityResult& WithSignatureKeyId(Aws::String&& value) { SetSignatureKeyId(std::move(value)); return *this;}
    inline ValidateAssessmentReportIntegrityResult& WithSignatureKeyId(const char* value) { SetSignatureKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Represents any errors that occurred when validating the assessment report.
     * </p>
     */
    inline const Aws::Vector<Aws::String>& GetValidationErrors() const{ return m_validationErrors; }
    inline void SetValidationErrors(const Aws::Vector<Aws::String>& value) { m_validationErrors = value; }
    inline void SetValidationErrors(Aws::Vector<Aws::String>&& value) { m_validationErrors = std::move(value); }
    inline ValidateAssessmentReportIntegrityResult& WithValidationErrors(const Aws::Vector<Aws::String>& value) { SetValidationErrors(value); return *this;}
    inline ValidateAssessmentReportIntegrityResult& WithValidationErrors(Aws::Vector<Aws::String>&& value) { SetValidationErrors(std::move(value)); return *this;}
    inline ValidateAssessmentReportIntegrityResult& AddValidationErrors(const Aws::String& value) { m_validationErrors.push_back(value); return *this; }
    inline ValidateAssessmentReportIntegrityResult& AddValidationErrors(Aws::String&& value) { m_validationErrors.push_back(std::move(value)); return *this; }
    inline ValidateAssessmentReportIntegrityResult& AddValidationErrors(const char* value) { m_validationErrors.push_back(value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ValidateAssessmentReportIntegrityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ValidateAssessmentReportIntegrityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ValidateAssessmentReportIntegrityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    bool m_signatureValid;

    Aws::String m_signatureAlgorithm;

    Aws::String m_signatureDateTime;

    Aws::String m_signatureKeyId;

    Aws::Vector<Aws::String> m_validationErrors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
