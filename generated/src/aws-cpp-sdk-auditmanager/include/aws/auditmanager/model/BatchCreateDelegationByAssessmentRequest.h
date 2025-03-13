/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/CreateDelegationRequest.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class BatchCreateDelegationByAssessmentRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API BatchCreateDelegationByAssessmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateDelegationByAssessment"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The API request to batch create delegations in Audit Manager. </p>
     */
    inline const Aws::Vector<CreateDelegationRequest>& GetCreateDelegationRequests() const { return m_createDelegationRequests; }
    inline bool CreateDelegationRequestsHasBeenSet() const { return m_createDelegationRequestsHasBeenSet; }
    template<typename CreateDelegationRequestsT = Aws::Vector<CreateDelegationRequest>>
    void SetCreateDelegationRequests(CreateDelegationRequestsT&& value) { m_createDelegationRequestsHasBeenSet = true; m_createDelegationRequests = std::forward<CreateDelegationRequestsT>(value); }
    template<typename CreateDelegationRequestsT = Aws::Vector<CreateDelegationRequest>>
    BatchCreateDelegationByAssessmentRequest& WithCreateDelegationRequests(CreateDelegationRequestsT&& value) { SetCreateDelegationRequests(std::forward<CreateDelegationRequestsT>(value)); return *this;}
    template<typename CreateDelegationRequestsT = CreateDelegationRequest>
    BatchCreateDelegationByAssessmentRequest& AddCreateDelegationRequests(CreateDelegationRequestsT&& value) { m_createDelegationRequestsHasBeenSet = true; m_createDelegationRequests.emplace_back(std::forward<CreateDelegationRequestsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const { return m_assessmentId; }
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }
    template<typename AssessmentIdT = Aws::String>
    void SetAssessmentId(AssessmentIdT&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::forward<AssessmentIdT>(value); }
    template<typename AssessmentIdT = Aws::String>
    BatchCreateDelegationByAssessmentRequest& WithAssessmentId(AssessmentIdT&& value) { SetAssessmentId(std::forward<AssessmentIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CreateDelegationRequest> m_createDelegationRequests;
    bool m_createDelegationRequestsHasBeenSet = false;

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
