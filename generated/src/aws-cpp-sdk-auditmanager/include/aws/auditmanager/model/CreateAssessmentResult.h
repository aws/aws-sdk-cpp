/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/Assessment.h>
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
  class CreateAssessmentResult
  {
  public:
    AWS_AUDITMANAGER_API CreateAssessmentResult();
    AWS_AUDITMANAGER_API CreateAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API CreateAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Assessment& GetAssessment() const{ return m_assessment; }

    
    inline void SetAssessment(const Assessment& value) { m_assessment = value; }

    
    inline void SetAssessment(Assessment&& value) { m_assessment = std::move(value); }

    
    inline CreateAssessmentResult& WithAssessment(const Assessment& value) { SetAssessment(value); return *this;}

    
    inline CreateAssessmentResult& WithAssessment(Assessment&& value) { SetAssessment(std::move(value)); return *this;}

  private:

    Assessment m_assessment;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
