/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/ShareRequestType.h>
#include <aws/auditmanager/model/ShareRequestAction.h>
#include <utility>

namespace Aws
{
namespace AuditManager
{
namespace Model
{

  /**
   */
  class UpdateAssessmentFrameworkShareRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API UpdateAssessmentFrameworkShareRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAssessmentFrameworkShare"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The unique identifier for the share request. </p>
     */
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAssessmentFrameworkShareRequest& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the share request is a sent request or a received
     * request.</p>
     */
    inline ShareRequestType GetRequestType() const { return m_requestType; }
    inline bool RequestTypeHasBeenSet() const { return m_requestTypeHasBeenSet; }
    inline void SetRequestType(ShareRequestType value) { m_requestTypeHasBeenSet = true; m_requestType = value; }
    inline UpdateAssessmentFrameworkShareRequest& WithRequestType(ShareRequestType value) { SetRequestType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the update action for the share request.</p>
     */
    inline ShareRequestAction GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(ShareRequestAction value) { m_actionHasBeenSet = true; m_action = value; }
    inline UpdateAssessmentFrameworkShareRequest& WithAction(ShareRequestAction value) { SetAction(value); return *this;}
    ///@}
  private:

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;

    ShareRequestType m_requestType{ShareRequestType::NOT_SET};
    bool m_requestTypeHasBeenSet = false;

    ShareRequestAction m_action{ShareRequestAction::NOT_SET};
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
