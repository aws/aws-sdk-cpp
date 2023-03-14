/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/Framework.h>
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
  class CreateAssessmentFrameworkResult
  {
  public:
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkResult();
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API CreateAssessmentFrameworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the new framework that the
     * <code>CreateAssessmentFramework</code> API returned. </p>
     */
    inline const Framework& GetFramework() const{ return m_framework; }

    /**
     * <p> The name of the new framework that the
     * <code>CreateAssessmentFramework</code> API returned. </p>
     */
    inline void SetFramework(const Framework& value) { m_framework = value; }

    /**
     * <p> The name of the new framework that the
     * <code>CreateAssessmentFramework</code> API returned. </p>
     */
    inline void SetFramework(Framework&& value) { m_framework = std::move(value); }

    /**
     * <p> The name of the new framework that the
     * <code>CreateAssessmentFramework</code> API returned. </p>
     */
    inline CreateAssessmentFrameworkResult& WithFramework(const Framework& value) { SetFramework(value); return *this;}

    /**
     * <p> The name of the new framework that the
     * <code>CreateAssessmentFramework</code> API returned. </p>
     */
    inline CreateAssessmentFrameworkResult& WithFramework(Framework&& value) { SetFramework(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAssessmentFrameworkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAssessmentFrameworkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAssessmentFrameworkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Framework m_framework;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
