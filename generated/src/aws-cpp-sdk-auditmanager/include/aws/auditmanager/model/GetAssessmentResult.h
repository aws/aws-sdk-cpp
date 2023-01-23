/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/Assessment.h>
#include <aws/auditmanager/model/Role.h>
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
  class GetAssessmentResult
  {
  public:
    AWS_AUDITMANAGER_API GetAssessmentResult();
    AWS_AUDITMANAGER_API GetAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Assessment& GetAssessment() const{ return m_assessment; }

    
    inline void SetAssessment(const Assessment& value) { m_assessment = value; }

    
    inline void SetAssessment(Assessment&& value) { m_assessment = std::move(value); }

    
    inline GetAssessmentResult& WithAssessment(const Assessment& value) { SetAssessment(value); return *this;}

    
    inline GetAssessmentResult& WithAssessment(Assessment&& value) { SetAssessment(std::move(value)); return *this;}


    
    inline const Role& GetUserRole() const{ return m_userRole; }

    
    inline void SetUserRole(const Role& value) { m_userRole = value; }

    
    inline void SetUserRole(Role&& value) { m_userRole = std::move(value); }

    
    inline GetAssessmentResult& WithUserRole(const Role& value) { SetUserRole(value); return *this;}

    
    inline GetAssessmentResult& WithUserRole(Role&& value) { SetUserRole(std::move(value)); return *this;}

  private:

    Assessment m_assessment;

    Role m_userRole;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
