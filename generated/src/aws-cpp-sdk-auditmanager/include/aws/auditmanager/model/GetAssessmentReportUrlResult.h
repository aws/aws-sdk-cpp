/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/URL.h>
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
  class GetAssessmentReportUrlResult
  {
  public:
    AWS_AUDITMANAGER_API GetAssessmentReportUrlResult();
    AWS_AUDITMANAGER_API GetAssessmentReportUrlResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetAssessmentReportUrlResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const URL& GetPreSignedUrl() const{ return m_preSignedUrl; }

    
    inline void SetPreSignedUrl(const URL& value) { m_preSignedUrl = value; }

    
    inline void SetPreSignedUrl(URL&& value) { m_preSignedUrl = std::move(value); }

    
    inline GetAssessmentReportUrlResult& WithPreSignedUrl(const URL& value) { SetPreSignedUrl(value); return *this;}

    
    inline GetAssessmentReportUrlResult& WithPreSignedUrl(URL&& value) { SetPreSignedUrl(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetAssessmentReportUrlResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetAssessmentReportUrlResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetAssessmentReportUrlResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    URL m_preSignedUrl;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
