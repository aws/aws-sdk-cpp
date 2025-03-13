/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/model/AssessmentControlSet.h>
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
  class UpdateAssessmentControlSetStatusResult
  {
  public:
    AWS_AUDITMANAGER_API UpdateAssessmentControlSetStatusResult() = default;
    AWS_AUDITMANAGER_API UpdateAssessmentControlSetStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_AUDITMANAGER_API UpdateAssessmentControlSetStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The name of the updated control set that the
     * <code>UpdateAssessmentControlSetStatus</code> API returned. </p>
     */
    inline const AssessmentControlSet& GetControlSet() const { return m_controlSet; }
    template<typename ControlSetT = AssessmentControlSet>
    void SetControlSet(ControlSetT&& value) { m_controlSetHasBeenSet = true; m_controlSet = std::forward<ControlSetT>(value); }
    template<typename ControlSetT = AssessmentControlSet>
    UpdateAssessmentControlSetStatusResult& WithControlSet(ControlSetT&& value) { SetControlSet(std::forward<ControlSetT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAssessmentControlSetStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AssessmentControlSet m_controlSet;
    bool m_controlSetHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
