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
    AWS_AUDITMANAGER_API CreateDelegationRequest();
    AWS_AUDITMANAGER_API CreateDelegationRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API CreateDelegationRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AUDITMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A comment that's related to the delegation request. </p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline CreateDelegationRequest& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline CreateDelegationRequest& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline CreateDelegationRequest& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier for the control set. </p>
     */
    inline const Aws::String& GetControlSetId() const{ return m_controlSetId; }
    inline bool ControlSetIdHasBeenSet() const { return m_controlSetIdHasBeenSet; }
    inline void SetControlSetId(const Aws::String& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = value; }
    inline void SetControlSetId(Aws::String&& value) { m_controlSetIdHasBeenSet = true; m_controlSetId = std::move(value); }
    inline void SetControlSetId(const char* value) { m_controlSetIdHasBeenSet = true; m_controlSetId.assign(value); }
    inline CreateDelegationRequest& WithControlSetId(const Aws::String& value) { SetControlSetId(value); return *this;}
    inline CreateDelegationRequest& WithControlSetId(Aws::String&& value) { SetControlSetId(std::move(value)); return *this;}
    inline CreateDelegationRequest& WithControlSetId(const char* value) { SetControlSetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of the IAM role. </p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreateDelegationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreateDelegationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreateDelegationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
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
    inline const RoleType& GetRoleType() const{ return m_roleType; }
    inline bool RoleTypeHasBeenSet() const { return m_roleTypeHasBeenSet; }
    inline void SetRoleType(const RoleType& value) { m_roleTypeHasBeenSet = true; m_roleType = value; }
    inline void SetRoleType(RoleType&& value) { m_roleTypeHasBeenSet = true; m_roleType = std::move(value); }
    inline CreateDelegationRequest& WithRoleType(const RoleType& value) { SetRoleType(value); return *this;}
    inline CreateDelegationRequest& WithRoleType(RoleType&& value) { SetRoleType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_controlSetId;
    bool m_controlSetIdHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    RoleType m_roleType;
    bool m_roleTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
