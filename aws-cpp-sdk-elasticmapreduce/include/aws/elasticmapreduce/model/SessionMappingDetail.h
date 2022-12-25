/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/IdentityType.h>
#include <aws/core/utils/DateTime.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Details for an Amazon EMR Studio session mapping including creation time,
   * user or group ID, Studio ID, and so on.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SessionMappingDetail">AWS
   * API Reference</a></p>
   */
  class SessionMappingDetail
  {
  public:
    AWS_EMR_API SessionMappingDetail();
    AWS_EMR_API SessionMappingDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API SessionMappingDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline SessionMappingDetail& WithStudioId(const Aws::String& value) { SetStudioId(value); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline SessionMappingDetail& WithStudioId(Aws::String&& value) { SetStudioId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon EMR Studio.</p>
     */
    inline SessionMappingDetail& WithStudioId(const char* value) { SetStudioId(value); return *this;}


    /**
     * <p>The globally unique identifier (GUID) of the user or group.</p>
     */
    inline const Aws::String& GetIdentityId() const{ return m_identityId; }

    /**
     * <p>The globally unique identifier (GUID) of the user or group.</p>
     */
    inline bool IdentityIdHasBeenSet() const { return m_identityIdHasBeenSet; }

    /**
     * <p>The globally unique identifier (GUID) of the user or group.</p>
     */
    inline void SetIdentityId(const Aws::String& value) { m_identityIdHasBeenSet = true; m_identityId = value; }

    /**
     * <p>The globally unique identifier (GUID) of the user or group.</p>
     */
    inline void SetIdentityId(Aws::String&& value) { m_identityIdHasBeenSet = true; m_identityId = std::move(value); }

    /**
     * <p>The globally unique identifier (GUID) of the user or group.</p>
     */
    inline void SetIdentityId(const char* value) { m_identityIdHasBeenSet = true; m_identityId.assign(value); }

    /**
     * <p>The globally unique identifier (GUID) of the user or group.</p>
     */
    inline SessionMappingDetail& WithIdentityId(const Aws::String& value) { SetIdentityId(value); return *this;}

    /**
     * <p>The globally unique identifier (GUID) of the user or group.</p>
     */
    inline SessionMappingDetail& WithIdentityId(Aws::String&& value) { SetIdentityId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier (GUID) of the user or group.</p>
     */
    inline SessionMappingDetail& WithIdentityId(const char* value) { SetIdentityId(value); return *this;}


    /**
     * <p>The name of the user or group. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>.</p>
     */
    inline const Aws::String& GetIdentityName() const{ return m_identityName; }

    /**
     * <p>The name of the user or group. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>.</p>
     */
    inline bool IdentityNameHasBeenSet() const { return m_identityNameHasBeenSet; }

    /**
     * <p>The name of the user or group. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>.</p>
     */
    inline void SetIdentityName(const Aws::String& value) { m_identityNameHasBeenSet = true; m_identityName = value; }

    /**
     * <p>The name of the user or group. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>.</p>
     */
    inline void SetIdentityName(Aws::String&& value) { m_identityNameHasBeenSet = true; m_identityName = std::move(value); }

    /**
     * <p>The name of the user or group. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>.</p>
     */
    inline void SetIdentityName(const char* value) { m_identityNameHasBeenSet = true; m_identityName.assign(value); }

    /**
     * <p>The name of the user or group. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>.</p>
     */
    inline SessionMappingDetail& WithIdentityName(const Aws::String& value) { SetIdentityName(value); return *this;}

    /**
     * <p>The name of the user or group. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>.</p>
     */
    inline SessionMappingDetail& WithIdentityName(Aws::String&& value) { SetIdentityName(std::move(value)); return *this;}

    /**
     * <p>The name of the user or group. For more information, see <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_User.html#singlesignon-Type-User-UserName">UserName</a>
     * and <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/IdentityStoreAPIReference/API_Group.html#singlesignon-Type-Group-DisplayName">DisplayName</a>
     * in the <i>Amazon Web Services SSO Identity Store API Reference</i>.</p>
     */
    inline SessionMappingDetail& WithIdentityName(const char* value) { SetIdentityName(value); return *this;}


    /**
     * <p>Specifies whether the identity mapped to the Amazon EMR Studio is a user or a
     * group.</p>
     */
    inline const IdentityType& GetIdentityType() const{ return m_identityType; }

    /**
     * <p>Specifies whether the identity mapped to the Amazon EMR Studio is a user or a
     * group.</p>
     */
    inline bool IdentityTypeHasBeenSet() const { return m_identityTypeHasBeenSet; }

    /**
     * <p>Specifies whether the identity mapped to the Amazon EMR Studio is a user or a
     * group.</p>
     */
    inline void SetIdentityType(const IdentityType& value) { m_identityTypeHasBeenSet = true; m_identityType = value; }

    /**
     * <p>Specifies whether the identity mapped to the Amazon EMR Studio is a user or a
     * group.</p>
     */
    inline void SetIdentityType(IdentityType&& value) { m_identityTypeHasBeenSet = true; m_identityType = std::move(value); }

    /**
     * <p>Specifies whether the identity mapped to the Amazon EMR Studio is a user or a
     * group.</p>
     */
    inline SessionMappingDetail& WithIdentityType(const IdentityType& value) { SetIdentityType(value); return *this;}

    /**
     * <p>Specifies whether the identity mapped to the Amazon EMR Studio is a user or a
     * group.</p>
     */
    inline SessionMappingDetail& WithIdentityType(IdentityType&& value) { SetIdentityType(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the session policy associated with the user
     * or group.</p>
     */
    inline const Aws::String& GetSessionPolicyArn() const{ return m_sessionPolicyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the session policy associated with the user
     * or group.</p>
     */
    inline bool SessionPolicyArnHasBeenSet() const { return m_sessionPolicyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the session policy associated with the user
     * or group.</p>
     */
    inline void SetSessionPolicyArn(const Aws::String& value) { m_sessionPolicyArnHasBeenSet = true; m_sessionPolicyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the session policy associated with the user
     * or group.</p>
     */
    inline void SetSessionPolicyArn(Aws::String&& value) { m_sessionPolicyArnHasBeenSet = true; m_sessionPolicyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the session policy associated with the user
     * or group.</p>
     */
    inline void SetSessionPolicyArn(const char* value) { m_sessionPolicyArnHasBeenSet = true; m_sessionPolicyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the session policy associated with the user
     * or group.</p>
     */
    inline SessionMappingDetail& WithSessionPolicyArn(const Aws::String& value) { SetSessionPolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the session policy associated with the user
     * or group.</p>
     */
    inline SessionMappingDetail& WithSessionPolicyArn(Aws::String&& value) { SetSessionPolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the session policy associated with the user
     * or group.</p>
     */
    inline SessionMappingDetail& WithSessionPolicyArn(const char* value) { SetSessionPolicyArn(value); return *this;}


    /**
     * <p>The time the session mapping was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time the session mapping was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time the session mapping was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time the session mapping was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time the session mapping was created.</p>
     */
    inline SessionMappingDetail& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time the session mapping was created.</p>
     */
    inline SessionMappingDetail& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time the session mapping was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time the session mapping was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The time the session mapping was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The time the session mapping was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time the session mapping was last modified.</p>
     */
    inline SessionMappingDetail& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time the session mapping was last modified.</p>
     */
    inline SessionMappingDetail& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}

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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
