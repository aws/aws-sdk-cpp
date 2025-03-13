/**
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
    AWS_AUDITMANAGER_API StartAssessmentFrameworkShareResult() = default;
    AWS_AUDITMANAGER_API StartAssessmentFrameworkShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API StartAssessmentFrameworkShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The share request that's created by the
     * <code>StartAssessmentFrameworkShare</code> API. </p>
     */
    inline const AssessmentFrameworkShareRequest& GetAssessmentFrameworkShareRequest() const { return m_assessmentFrameworkShareRequest; }
    template<typename AssessmentFrameworkShareRequestT = AssessmentFrameworkShareRequest>
    void SetAssessmentFrameworkShareRequest(AssessmentFrameworkShareRequestT&& value) { m_assessmentFrameworkShareRequestHasBeenSet = true; m_assessmentFrameworkShareRequest = std::forward<AssessmentFrameworkShareRequestT>(value); }
    template<typename AssessmentFrameworkShareRequestT = AssessmentFrameworkShareRequest>
    StartAssessmentFrameworkShareResult& WithAssessmentFrameworkShareRequest(AssessmentFrameworkShareRequestT&& value) { SetAssessmentFrameworkShareRequest(std::forward<AssessmentFrameworkShareRequestT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StartAssessmentFrameworkShareResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AssessmentFrameworkShareRequest m_assessmentFrameworkShareRequest;
    bool m_assessmentFrameworkShareRequestHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
