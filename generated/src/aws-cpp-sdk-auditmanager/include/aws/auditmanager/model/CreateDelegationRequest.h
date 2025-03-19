/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/auditmanager/model/RoleType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AuditManager
{
namespace Model
{

  /**
   * <p> A collection of attributes that's used to create a delegation for an
   * assessment in Audit Manager. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/auditmanager-2017-07-25/CreateDelegationRequest">AWS
   * API Reference</a></p>
   */
  class CreateDelegationRequest
  {
  public:
    AWS_AUDITMANAGER_API CreateDelegationRequest() = default;
    AWS_AUDITMANAGER_API CreateDelegationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API CreateDelegationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A comment that's related to the delegation request. </p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    CreateDelegationRequest& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline const Aws::String& GetControlSetId() const { return m_controlSetId; }
    inline bool ControlSetIdHasBeenSet() const { return m_controlSetIdHasBeenSet; }
    template<typename ControlSetIdT = Aws::String>
    void SetControlSetId(ControlSetIdT&& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = std::forward<ControlSetIdT>(value); }
    template<typename ControlSetIdT = Aws::String>
    CreateDelegationRequest& WithControlSetId(ControlSetIdT&& value) { SetControlSetId(std::forward<ControlSetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateDelegationRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of customer persona. </p>  <p>In
     * <code>CreateAssessment</code>, <code>roleType</code> can only be
     * <code>PROCESS_OWNER</code>. </p> <p>In <code>UpdateSettings</code>,
     * <code>roleType</code> can only be <code>PROCESS_OWNER</code>.</p> <p>In
     * <code>BatchCreateDelegationByAssessment</code>, <code>roleType</code> can only
     * be <code>RESOURCE_OWNER</code>.</p> 
     */
    inline RoleType GetRoleType() const { return m_roleType; }
    inline bool RoleTypeHasBeenSet() const { return m_roleTypeHasBeenSet; }
    inline void SetRoleType(RoleType value) { m_roleTypeHasBeenSet = true; m_roleType = value; }
    inline CreateDelegationRequest& WithRoleType(RoleType value) { SetRoleType(value); return *this;}
    ///@}
  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_controlSetId;
    bool m_controlSetIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    RoleType m_roleType{RoleType::NOT_SET};
    bool m_roleTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
