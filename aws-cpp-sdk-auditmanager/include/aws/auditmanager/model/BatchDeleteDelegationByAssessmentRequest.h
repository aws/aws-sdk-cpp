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
    AWS_AUDITMANAGER_API BatchDeleteDelegationByAssessmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteDelegationByAssessment"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The identifiers for the delegations. </p>
     */
    inline const Aws::Vector<Aws::String>& GetDelegationIds() const{ return m_delegationIds; }

    /**
     * <p> The identifiers for the delegations. </p>
     */
    inline bool DelegationIdsHasBeenSet() const { return m_delegationIdsHasBeenSet; }

    /**
     * <p> The identifiers for the delegations. </p>
     */
    inline void SetDelegationIds(const Aws::Vector<Aws::String>& value) { m_delegationIdsHasBeenSet = true; m_delegationIds = value; }

    /**
     * <p> The identifiers for the delegations. </p>
     */
    inline void SetDelegationIds(Aws::Vector<Aws::String>&& value) { m_delegationIdsHasBeenSet = true; m_delegationIds = std::move(value); }

    /**
     * <p> The identifiers for the delegations. </p>
     */
    inline BatchDeleteDelegationByAssessmentRequest& WithDelegationIds(const Aws::Vector<Aws::String>& value) { SetDelegationIds(value); return *this;}

    /**
     * <p> The identifiers for the delegations. </p>
     */
    inline BatchDeleteDelegationByAssessmentRequest& WithDelegationIds(Aws::Vector<Aws::String>&& value) { SetDelegationIds(std::move(value)); return *this;}

    /**
     * <p> The identifiers for the delegations. </p>
     */
    inline BatchDeleteDelegationByAssessmentRequest& AddDelegationIds(const Aws::String& value) { m_delegationIdsHasBeenSet = true; m_delegationIds.push_back(value); return *this; }

    /**
     * <p> The identifiers for the delegations. </p>
     */
    inline BatchDeleteDelegationByAssessmentRequest& AddDelegationIds(Aws::String&& value) { m_delegationIdsHasBeenSet = true; m_delegationIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The identifiers for the delegations. </p>
     */
    inline BatchDeleteDelegationByAssessmentRequest& AddDelegationIds(const char* value) { m_delegationIdsHasBeenSet = true; m_delegationIds.push_back(value); return *this; }


    /**
     * <p> The identifier for the assessment. </p>
     */
    inline const Aws::String& GetAssessmentId() const{ return m_assessmentId; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline bool AssessmentIdHasBeenSet() const { return m_assessmentIdHasBeenSet; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const Aws::String& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = value; }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(Aws::String&& value) { m_assessmentIdHasBeenSet = true; m_assessmentId = std::move(value); }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline void SetAssessmentId(const char* value) { m_assessmentIdHasBeenSet = true; m_assessmentId.assign(value); }

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline BatchDeleteDelegationByAssessmentRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline BatchDeleteDelegationByAssessmentRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline BatchDeleteDelegationByAssessmentRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_delegationIds;
    bool m_delegationIdsHasBeenSet = false;

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
