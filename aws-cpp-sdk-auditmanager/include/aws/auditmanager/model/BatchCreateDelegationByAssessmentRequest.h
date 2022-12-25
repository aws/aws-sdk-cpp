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
    AWS_AUDITMANAGER_API BatchCreateDelegationByAssessmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateDelegationByAssessment"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p> The API request to batch create delegations in Audit Manager. </p>
     */
    inline const Aws::Vector<CreateDelegationRequest>& GetCreateDelegationRequests() const{ return m_createDelegationRequests; }

    /**
     * <p> The API request to batch create delegations in Audit Manager. </p>
     */
    inline bool CreateDelegationRequestsHasBeenSet() const { return m_createDelegationRequestsHasBeenSet; }

    /**
     * <p> The API request to batch create delegations in Audit Manager. </p>
     */
    inline void SetCreateDelegationRequests(const Aws::Vector<CreateDelegationRequest>& value) { m_createDelegationRequestsHasBeenSet = true; m_createDelegationRequests = value; }

    /**
     * <p> The API request to batch create delegations in Audit Manager. </p>
     */
    inline void SetCreateDelegationRequests(Aws::Vector<CreateDelegationRequest>&& value) { m_createDelegationRequestsHasBeenSet = true; m_createDelegationRequests = std::move(value); }

    /**
     * <p> The API request to batch create delegations in Audit Manager. </p>
     */
    inline BatchCreateDelegationByAssessmentRequest& WithCreateDelegationRequests(const Aws::Vector<CreateDelegationRequest>& value) { SetCreateDelegationRequests(value); return *this;}

    /**
     * <p> The API request to batch create delegations in Audit Manager. </p>
     */
    inline BatchCreateDelegationByAssessmentRequest& WithCreateDelegationRequests(Aws::Vector<CreateDelegationRequest>&& value) { SetCreateDelegationRequests(std::move(value)); return *this;}

    /**
     * <p> The API request to batch create delegations in Audit Manager. </p>
     */
    inline BatchCreateDelegationByAssessmentRequest& AddCreateDelegationRequests(const CreateDelegationRequest& value) { m_createDelegationRequestsHasBeenSet = true; m_createDelegationRequests.push_back(value); return *this; }

    /**
     * <p> The API request to batch create delegations in Audit Manager. </p>
     */
    inline BatchCreateDelegationByAssessmentRequest& AddCreateDelegationRequests(CreateDelegationRequest&& value) { m_createDelegationRequestsHasBeenSet = true; m_createDelegationRequests.push_back(std::move(value)); return *this; }


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
    inline BatchCreateDelegationByAssessmentRequest& WithAssessmentId(const Aws::String& value) { SetAssessmentId(value); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline BatchCreateDelegationByAssessmentRequest& WithAssessmentId(Aws::String&& value) { SetAssessmentId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the assessment. </p>
     */
    inline BatchCreateDelegationByAssessmentRequest& WithAssessmentId(const char* value) { SetAssessmentId(value); return *this;}

  private:

    Aws::Vector<CreateDelegationRequest> m_createDelegationRequests;
    bool m_createDelegationRequestsHasBeenSet = false;

    Aws::String m_assessmentId;
    bool m_assessmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
