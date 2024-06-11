﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/AssessmentFrameworkShareRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class StartAssessmentFrameworkShareResult
  {
  public:
    AWS_AUDITMANAGER_API StartAssessmentFrameworkShareResult();
    AWS_AUDITMANAGER_API StartAssessmentFrameworkShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API StartAssessmentFrameworkShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The share request that's created by the
     * <code>StartAssessmentFrameworkShare</code> API. </p>
     */
    inline const AssessmentFrameworkShareRequest& GetAssessmentFrameworkShareRequest() const{ return m_assessmentFrameworkShareRequest; }
    inline void SetAssessmentFrameworkShareRequest(const AssessmentFrameworkShareRequest& value) { m_assessmentFrameworkShareRequest = value; }
    inline void SetAssessmentFrameworkShareRequest(AssessmentFrameworkShareRequest&& value) { m_assessmentFrameworkShareRequest = std::move(value); }
    inline StartAssessmentFrameworkShareResult& WithAssessmentFrameworkShareRequest(const AssessmentFrameworkShareRequest& value) { SetAssessmentFrameworkShareRequest(value); return *this;}
    inline StartAssessmentFrameworkShareResult& WithAssessmentFrameworkShareRequest(AssessmentFrameworkShareRequest&& value) { SetAssessmentFrameworkShareRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline StartAssessmentFrameworkShareResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline StartAssessmentFrameworkShareResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline StartAssessmentFrameworkShareResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    AssessmentFrameworkShareRequest m_assessmentFrameworkShareRequest;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
