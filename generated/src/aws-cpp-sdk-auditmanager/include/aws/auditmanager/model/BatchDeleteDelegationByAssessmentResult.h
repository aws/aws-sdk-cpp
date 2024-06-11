﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/BatchDeleteDelegationByAssessmentError.h>
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
  class BatchDeleteDelegationByAssessmentResult
  {
  public:
    AWS_AUDITMANAGER_API BatchDeleteDelegationByAssessmentResult();
    AWS_AUDITMANAGER_API BatchDeleteDelegationByAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API BatchDeleteDelegationByAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of errors that the <code>BatchDeleteDelegationByAssessment</code> API
     * returned. </p>
     */
    inline const Aws::Vector<BatchDeleteDelegationByAssessmentError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchDeleteDelegationByAssessmentError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchDeleteDelegationByAssessmentError>&& value) { m_errors = std::move(value); }
    inline BatchDeleteDelegationByAssessmentResult& WithErrors(const Aws::Vector<BatchDeleteDelegationByAssessmentError>& value) { SetErrors(value); return *this;}
    inline BatchDeleteDelegationByAssessmentResult& WithErrors(Aws::Vector<BatchDeleteDelegationByAssessmentError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchDeleteDelegationByAssessmentResult& AddErrors(const BatchDeleteDelegationByAssessmentError& value) { m_errors.push_back(value); return *this; }
    inline BatchDeleteDelegationByAssessmentResult& AddErrors(BatchDeleteDelegationByAssessmentError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchDeleteDelegationByAssessmentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchDeleteDelegationByAssessmentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchDeleteDelegationByAssessmentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchDeleteDelegationByAssessmentError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
