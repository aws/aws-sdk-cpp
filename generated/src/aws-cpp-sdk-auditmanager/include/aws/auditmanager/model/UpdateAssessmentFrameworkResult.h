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
  class UpdateAssessmentFrameworkResult
  {
  public:
    AWS_AUDITMANAGER_API UpdateAssessmentFrameworkResult();
    AWS_AUDITMANAGER_API UpdateAssessmentFrameworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API UpdateAssessmentFrameworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the framework. </p>
     */
    inline const Framework& GetFramework() const{ return m_framework; }

    /**
     * <p> The name of the framework. </p>
     */
    inline void SetFramework(const Framework& value) { m_framework = value; }

    /**
     * <p> The name of the framework. </p>
     */
    inline void SetFramework(Framework&& value) { m_framework = std::move(value); }

    /**
     * <p> The name of the framework. </p>
     */
    inline UpdateAssessmentFrameworkResult& WithFramework(const Framework& value) { SetFramework(value); return *this;}

    /**
     * <p> The name of the framework. </p>
     */
    inline UpdateAssessmentFrameworkResult& WithFramework(Framework&& value) { SetFramework(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAssessmentFrameworkResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAssessmentFrameworkResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAssessmentFrameworkResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Framework m_framework;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
