/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class BatchDeleteDelegationByAssessmentRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API BatchDeleteDelegationByAssessmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteDelegationByAssessment"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The identifiers for the delegations. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDelegationIds() const { return m_delegationIds; }
    inline bool DelegationIdsHasBeenSet() const { return m_delegationIdsHasBeenSet; }
    template<typename DelegationIdsT = Aws::Vector<Aws::String>>
    void SetDelegationIds(DelegationIdsT&& value) { m_delegationIdsHasBeenSet = true; m_delegationIds = std::forward<DelegationIdsT>(value); }
    template<typename DelegationIdsT = Aws::Vector<Aws::String>>
    BatchDeleteDelegationByAssessmentRequest& WithDelegationIds(DelegationIdsT&& value) { SetDelegationIds(std::forward<DelegationIdsT>(value)); return *this;}
    template<typename DelegationIdsT = Aws::String>
    BatchDeleteDelegationByAssessmentRequest& AddDelegationIds(DelegationIdsT&& value) { m_delegationIdsHasBeenSet = true; m_delegationIds.emplace_back(std::forward<DelegationIdsT>(value)); return *this; }
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
    BatchDeleteDelegationByAssessmentRequest& WithAssessmentId(AssessmentIdT&& value) { SetAssessmentId(std::forward<AssessmentIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_delegationIds;
    bool m_delegationIdsHasBeenSet = false;

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
