/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/IdentityType.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class CreateStudioSessionMappingRequest : public EMRRequest
  {
  public:
    AWS_EMR_API CreateStudioSessionMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateStudioSessionMapping"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the Amazon EMR Studio to which the user or group will be
     * mapped.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }
    inline CreateStudioSessionMappingRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}
    inline CreateStudioSessionMappingRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}
    inline CreateStudioSessionMappingRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The globally unique identifier (GUID) of the user or group from the IAM
     * Identity Center Identity Store. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserId">UserId</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-GroupId">GroupId</a>
     * in the <i>IAM Identity Center Identity Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified, but not
     * both.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }
    inline CreateStudioSessionMappingRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}
    inline CreateStudioSessionMappingRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}
    inline CreateStudioSessionMappingRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the user or group. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>IAM Identity Center Identity Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified, but not
     * both.</p>
     */
    inline const Aws::String& GetIdentityName() const{ return m_identityName; }
    inline bool IdentityNameHasBeenSet() const { return m_identityNameHasBeenSet; }
    inline void SetIdentityName(const Aws::String& value) { m_identityNameHasBeenSet = true; m_identityName = value; }
    inline void SetIdentityName(Aws::String&& value) { m_identityNameHasBeenSet = true; m_identityName = std::move(value); }
    inline void SetIdentityName(const char* value) { m_identityNameHasBeenSet = true; m_identityName.assign(value); }
    inline CreateStudioSessionMappingRequest& WithIdentityName(const Aws::String& value) { SetIdentityName(value); return *this;}
    inline CreateStudioSessionMappingRequest& WithIdentityName(Aws::String&& value) { SetIdentityName(std::move(value)); return *this;}
    inline CreateStudioSessionMappingRequest& WithIdentityName(const char* value) { SetIdentityName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the identity to map to the Amazon EMR Studio is a user or a
     * group.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }
    inline CreateStudioSessionMappingRequest& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}
    inline CreateStudioSessionMappingRequest& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the session policy that will be applied to
     * the user or group. You should specify the ARN for the session policy that you
     * want to apply, not the ARN of your user role. For more information, see <a
     * href="https://docs.aws.amazon.com/emr/latest/ManagementGuide/emr-studio-user-role.html">Create
     * an Amazon EMR Studio User Role with Session Policies</a>.</p>
     */
    inline const Aws::String& GetSessionPolicyArn() const{ return m_sessionPolicyArn; }
    inline bool SessionPolicyArnHasBeenSet() const { return m_sessionPolicyArnHasBeenSet; }
    inline void SetSessionPolicyArn(const Aws::String& value) { m_sessionPolicyArnHasBeenSet = true; m_sessionPolicyArn = value; }
    inline void SetSessionPolicyArn(Aws::String&& value) { m_sessionPolicyArnHasBeenSet = true; m_sessionPolicyArn = std::move(value); }
    inline void SetSessionPolicyArn(const char* value) { m_sessionPolicyArnHasBeenSet = true; m_sessionPolicyArn.assign(value); }
    inline CreateStudioSessionMappingRequest& WithSessionPolicyArn(const Aws::String& value) { SetSessionPolicyArn(value); return *this;}
    inline CreateStudioSessionMappingRequest& WithSessionPolicyArn(Aws::String&& value) { SetSessionPolicyArn(std::move(value)); return *this;}
    inline CreateStudioSessionMappingRequest& WithSessionPolicyArn(const char* value) { SetSessionPolicyArn(value); return *this;}
    ///@}
  private:

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;

    Aws::String m_identityName;
    bool m_identityNameHasBeenSet = false;

    IdentityType m_identityType;
    bool m_identityTypeHasBeenSet = false;

    Aws::String m_sessionPolicyArn;
    bool m_sessionPolicyArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
