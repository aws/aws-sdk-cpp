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
  class DeleteStudioSessionMappingRequest : public EMRRequest
  {
  public:
    AWS_EMR_API DeleteStudioSessionMappingRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteStudioSessionMapping"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline const Aws::String& GetStudioId() const{ return m_studioId; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline bool StudioIdHasBeenSet() const { return m_studioIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(const Aws::String& value) { m_studioIdHasBeenSet = true; m_studioId = value; }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(Aws::String&& value) { m_studioIdHasBeenSet = true; m_studioId = std::move(value); }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline void SetStudioId(const char* value) { m_studioIdHasBeenSet = true; m_studioId.assign(value); }

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline DeleteStudioSessionMappingRequest& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline DeleteStudioSessionMappingRequest& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline DeleteStudioSessionMappingRequest& WithStudioId(const char* value) { SetStudioId(value); return *this;}


    /**
     * <p>The globally unique identifier (GUID) of the user or group to remove from the
     * Amazon EMR Studio. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserId">UserId</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-GroupId">GroupId</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>The globally unique identifier (GUID) of the user or group to remove from the
     * Amazon EMR Studio. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserId">UserId</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-GroupId">GroupId</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }

    /**
     * <p>The globally unique identifier (GUID) of the user or group to remove from the
     * Amazon EMR Studio. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserId">UserId</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-GroupId">GroupId</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>The globally unique identifier (GUID) of the user or group to remove from the
     * Amazon EMR Studio. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserId">UserId</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-GroupId">GroupId</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }

    /**
     * <p>The globally unique identifier (GUID) of the user or group to remove from the
     * Amazon EMR Studio. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserId">UserId</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-GroupId">GroupId</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * <p>The globally unique identifier (GUID) of the user or group to remove from the
     * Amazon EMR Studio. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserId">UserId</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-GroupId">GroupId</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline DeleteStudioSessionMappingRequest& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>The globally unique identifier (GUID) of the user or group to remove from the
     * Amazon EMR Studio. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserId">UserId</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-GroupId">GroupId</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline DeleteStudioSessionMappingRequest& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier (GUID) of the user or group to remove from the
     * Amazon EMR Studio. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserId">UserId</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-GroupId">GroupId</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline DeleteStudioSessionMappingRequest& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}


    /**
     * <p>The name of the user name or group to remove from the Amazon EMR Studio. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline const Aws::String& GetIdentityName() const{ return m_identityName; }

    /**
     * <p>The name of the user name or group to remove from the Amazon EMR Studio. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline bool IdentityNameHasBeenSet() const { return m_identityNameHasBeenSet; }

    /**
     * <p>The name of the user name or group to remove from the Amazon EMR Studio. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline void SetIdentityName(const Aws::String& value) { m_identityNameHasBeenSet = true; m_identityName = value; }

    /**
     * <p>The name of the user name or group to remove from the Amazon EMR Studio. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline void SetIdentityName(Aws::String&& value) { m_identityNameHasBeenSet = true; m_identityName = std::move(value); }

    /**
     * <p>The name of the user name or group to remove from the Amazon EMR Studio. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline void SetIdentityName(const char* value) { m_identityNameHasBeenSet = true; m_identityName.assign(value); }

    /**
     * <p>The name of the user name or group to remove from the Amazon EMR Studio. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline DeleteStudioSessionMappingRequest& WithIdentityName(const Aws::String& value) { SetIdentityName(value); return *this;}

    /**
     * <p>The name of the user name or group to remove from the Amazon EMR Studio. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline DeleteStudioSessionMappingRequest& WithIdentityName(Aws::String&& value) { SetIdentityName(std::move(value)); return *this;}

    /**
     * <p>The name of the user name or group to remove from the Amazon EMR Studio. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Store API Reference</i>. Either
     * <code>IdentityName</code> or <code>IdentityId</code> must be specified.</p>
     */
    inline DeleteStudioSessionMappingRequest& WithIdentityName(const char* value) { SetIdentityName(value); return *this;}


    /**
     * <p>Specifies whether the identity to delete from the Amazon EMR Studio is a user
     * or a group.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>Specifies whether the identity to delete from the Amazon EMR Studio is a user
     * or a group.</p>
     */
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }

    /**
     * <p>Specifies whether the identity to delete from the Amazon EMR Studio is a user
     * or a group.</p>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>Specifies whether the identity to delete from the Amazon EMR Studio is a user
     * or a group.</p>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }

    /**
     * <p>Specifies whether the identity to delete from the Amazon EMR Studio is a user
     * or a group.</p>
     */
    inline DeleteStudioSessionMappingRequest& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>Specifies whether the identity to delete from the Amazon EMR Studio is a user
     * or a group.</p>
     */
    inline DeleteStudioSessionMappingRequest& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}

  private:

    Aws::String m_studioId;
    bool m_studioIdHasBeenSet = false;

    Aws::String m_identityId;
    bool m_identityIdHasBeenSet = false;

    Aws::String m_identityName;
    bool m_identityNameHasBeenSet = false;

    IdentityType m_identityType;
    bool m_identityTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
