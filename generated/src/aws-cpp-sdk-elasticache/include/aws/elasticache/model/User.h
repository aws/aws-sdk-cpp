/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/Authentication.h>
#include <aws/elasticache/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  class User
  {
  public:
    AWS_ELASTICACHE_API User();
    AWS_ELASTICACHE_API User(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API User& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the user.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of the user.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The ID of the user.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of the user.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The ID of the user.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ID of the user.</p>
     */
    inline User& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the user.</p>
     */
    inline User& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user.</p>
     */
    inline User& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The username of the user.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The username of the user.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The username of the user.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The username of the user.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The username of the user.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The username of the user.</p>
     */
    inline User& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The username of the user.</p>
     */
    inline User& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The username of the user.</p>
     */
    inline User& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline User& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline User& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>Indicates the user status. Can be "active", "modifying" or "deleting".</p>
     */
    inline User& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The current supported value is Redis.</p>
     */
    inline const Aws::String& GetEngine() const{ return m_engine; }

    /**
     * <p>The current supported value is Redis.</p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>The current supported value is Redis.</p>
     */
    inline void SetEngine(const Aws::String& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>The current supported value is Redis.</p>
     */
    inline void SetEngine(Aws::String&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>The current supported value is Redis.</p>
     */
    inline void SetEngine(const char* value) { m_engineHasBeenSet = true; m_engine.assign(value); }

    /**
     * <p>The current supported value is Redis.</p>
     */
    inline User& WithEngine(const Aws::String& value) { SetEngine(value); return *this;}

    /**
     * <p>The current supported value is Redis.</p>
     */
    inline User& WithEngine(Aws::String&& value) { SetEngine(std::move(value)); return *this;}

    /**
     * <p>The current supported value is Redis.</p>
     */
    inline User& WithEngine(const char* value) { SetEngine(value); return *this;}


    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline const Aws::String& GetMinimumEngineVersion() const{ return m_minimumEngineVersion; }

    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline bool MinimumEngineVersionHasBeenSet() const { return m_minimumEngineVersionHasBeenSet; }

    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline void SetMinimumEngineVersion(const Aws::String& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = value; }

    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline void SetMinimumEngineVersion(Aws::String&& value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion = std::move(value); }

    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline void SetMinimumEngineVersion(const char* value) { m_minimumEngineVersionHasBeenSet = true; m_minimumEngineVersion.assign(value); }

    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline User& WithMinimumEngineVersion(const Aws::String& value) { SetMinimumEngineVersion(value); return *this;}

    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline User& WithMinimumEngineVersion(Aws::String&& value) { SetMinimumEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The minimum engine version required, which is Redis 6.0</p>
     */
    inline User& WithMinimumEngineVersion(const char* value) { SetMinimumEngineVersion(value); return *this;}


    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline const Aws::String& GetAccessString() const{ return m_accessString; }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline bool AccessStringHasBeenSet() const { return m_accessStringHasBeenSet; }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline void SetAccessString(const Aws::String& value) { m_accessStringHasBeenSet = true; m_accessString = value; }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline void SetAccessString(Aws::String&& value) { m_accessStringHasBeenSet = true; m_accessString = std::move(value); }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline void SetAccessString(const char* value) { m_accessStringHasBeenSet = true; m_accessString.assign(value); }

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline User& WithAccessString(const Aws::String& value) { SetAccessString(value); return *this;}

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline User& WithAccessString(Aws::String&& value) { SetAccessString(std::move(value)); return *this;}

    /**
     * <p>Access permissions string used for this user.</p>
     */
    inline User& WithAccessString(const char* value) { SetAccessString(value); return *this;}


    /**
     * <p>Returns a list of the user group IDs the user belongs to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetUserGroupIds() const{ return m_userGroupIds; }

    /**
     * <p>Returns a list of the user group IDs the user belongs to.</p>
     */
    inline bool UserGroupIdsHasBeenSet() const { return m_userGroupIdsHasBeenSet; }

    /**
     * <p>Returns a list of the user group IDs the user belongs to.</p>
     */
    inline void SetUserGroupIds(const Aws::Vector<Aws::String>& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds = value; }

    /**
     * <p>Returns a list of the user group IDs the user belongs to.</p>
     */
    inline void SetUserGroupIds(Aws::Vector<Aws::String>&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds = std::move(value); }

    /**
     * <p>Returns a list of the user group IDs the user belongs to.</p>
     */
    inline User& WithUserGroupIds(const Aws::Vector<Aws::String>& value) { SetUserGroupIds(value); return *this;}

    /**
     * <p>Returns a list of the user group IDs the user belongs to.</p>
     */
    inline User& WithUserGroupIds(Aws::Vector<Aws::String>&& value) { SetUserGroupIds(std::move(value)); return *this;}

    /**
     * <p>Returns a list of the user group IDs the user belongs to.</p>
     */
    inline User& AddUserGroupIds(const Aws::String& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(value); return *this; }

    /**
     * <p>Returns a list of the user group IDs the user belongs to.</p>
     */
    inline User& AddUserGroupIds(Aws::String&& value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Returns a list of the user group IDs the user belongs to.</p>
     */
    inline User& AddUserGroupIds(const char* value) { m_userGroupIdsHasBeenSet = true; m_userGroupIds.push_back(value); return *this; }


    /**
     * <p>Denotes whether the user requires a password to authenticate.</p>
     */
    inline const Authentication& GetAuthentication() const{ return m_authentication; }

    /**
     * <p>Denotes whether the user requires a password to authenticate.</p>
     */
    inline bool AuthenticationHasBeenSet() const { return m_authenticationHasBeenSet; }

    /**
     * <p>Denotes whether the user requires a password to authenticate.</p>
     */
    inline void SetAuthentication(const Authentication& value) { m_authenticationHasBeenSet = true; m_authentication = value; }

    /**
     * <p>Denotes whether the user requires a password to authenticate.</p>
     */
    inline void SetAuthentication(Authentication&& value) { m_authenticationHasBeenSet = true; m_authentication = std::move(value); }

    /**
     * <p>Denotes whether the user requires a password to authenticate.</p>
     */
    inline User& WithAuthentication(const Authentication& value) { SetAuthentication(value); return *this;}

    /**
     * <p>Denotes whether the user requires a password to authenticate.</p>
     */
    inline User& WithAuthentication(Authentication&& value) { SetAuthentication(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline User& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline User& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the user.</p>
     */
    inline User& WithARN(const char* value) { SetARN(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline bool ResponseMetadataHasBeenSet() const { return m_responseMetadataHasBeenSet; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::move(value); }

    
    inline User& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline User& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_engine;
    bool m_engineHasBeenSet = false;

    Aws::String m_minimumEngineVersion;
    bool m_minimumEngineVersionHasBeenSet = false;

    Aws::String m_accessString;
    bool m_accessStringHasBeenSet = false;

    Aws::Vector<Aws::String> m_userGroupIds;
    bool m_userGroupIdsHasBeenSet = false;

    Authentication m_authentication;
    bool m_authenticationHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
