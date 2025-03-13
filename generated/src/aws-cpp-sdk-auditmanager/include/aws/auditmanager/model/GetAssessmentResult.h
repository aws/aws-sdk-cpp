/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/Assessment.h>
#include <aws/auditmanager/model/Role.h>
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
  class GetAssessmentResult
  {
  public:
    AWS_AUDITMANAGER_API GetAssessmentResult() = default;
    AWS_AUDITMANAGER_API GetAssessmentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API GetAssessmentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Assessment& GetAssessment() const { return m_assessment; }
    template<typename AssessmentT = Assessment>
    void SetAssessment(AssessmentT&& value) { m_assessmentHasBeenSet = true; m_assessment = std::forward<AssessmentT>(value); }
    template<typename AssessmentT = Assessment>
    GetAssessmentResult& WithAssessment(AssessmentT&& value) { SetAssessment(std::forward<AssessmentT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Role& GetUserRole() const { return m_userRole; }
    template<typename UserRoleT = Role>
    void SetUserRole(UserRoleT&& value) { m_userRoleHasBeenSet = true; m_userRole = std::forward<UserRoleT>(value); }
    template<typename UserRoleT = Role>
    GetAssessmentResult& WithUserRole(UserRoleT&& value) { SetUserRole(std::forward<UserRoleT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAssessmentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Assessment m_assessment;
    bool m_assessmentHasBeenSet = false;

    Role m_userRole;
    bool m_userRoleHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
