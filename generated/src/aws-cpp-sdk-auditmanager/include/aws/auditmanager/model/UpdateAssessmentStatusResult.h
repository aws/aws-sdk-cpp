/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/Assessment.h>
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
  class UpdateAssessmentStatusResult
  {
  public:
    AWS_AUDITMANAGER_API UpdateAssessmentStatusResult();
    AWS_AUDITMANAGER_API UpdateAssessmentStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API UpdateAssessmentStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The name of the updated assessment that the
     * <code>UpdateAssessmentStatus</code> API returned. </p>
     */
    inline const Assessment& GetAssessment() const{ return m_assessment; }

    /**
     * <p> The name of the updated assessment that the
     * <code>UpdateAssessmentStatus</code> API returned. </p>
     */
    inline void SetAssessment(const Assessment& value) { m_assessment = value; }

    /**
     * <p> The name of the updated assessment that the
     * <code>UpdateAssessmentStatus</code> API returned. </p>
     */
    inline void SetAssessment(Assessment&& value) { m_assessment = std::move(value); }

    /**
     * <p> The name of the updated assessment that the
     * <code>UpdateAssessmentStatus</code> API returned. </p>
     */
    inline UpdateAssessmentStatusResult& WithAssessment(const Assessment& value) { SetAssessment(value); return *this;}

    /**
     * <p> The name of the updated assessment that the
     * <code>UpdateAssessmentStatus</code> API returned. </p>
     */
    inline UpdateAssessmentStatusResult& WithAssessment(Assessment&& value) { SetAssessment(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAssessmentStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAssessmentStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAssessmentStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Assessment m_assessment;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
