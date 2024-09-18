/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/directory-service-data/DirectoryServiceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directory-service-data/model/GroupScope.h>
#include <aws/directory-service-data/model/GroupType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/directory-service-data/model/AttributeValue.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DirectoryServiceData
{
namespace Model
{

  /**
   */
  class CreateGroupRequest : public DirectoryServiceDataRequest
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API CreateGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateGroup"; }

    AWS_DIRECTORYSERVICEDATA_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> A unique and case-sensitive identifier that you provide to make sure the
     * idempotency of the request, so multiple identical calls have the same effect as
     * one single call. </p> <p> A client token is valid for 8 hours after the first
     * request that uses it completes. After 8 hours, any request with the same client
     * token is treated as a new request. If the request succeeds, any future uses of
     * that token will be idempotent for another 8 hours. </p> <p> If you submit a
     * request with the same client token but change one of the other parameters within
     * the 8-hour idempotency window, Directory Service Data returns an
     * <code>ConflictException</code>. </p>  <p> This parameter is optional when
     * using the CLI or SDK. </p> 
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateGroupRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateGroupRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateGroupRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The identifier (ID) of the directory that's associated with the group. </p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline CreateGroupRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline CreateGroupRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline CreateGroupRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The scope of the AD group. For details, see <a
     * href="https://learn.microsoft.com/en-us/windows-server/identity/ad-ds/manage/understand-security-groups#group-scope">Active
     * Directory security group scope</a>. </p>
     */
    inline const GroupScope& GetGroupScope() const{ return m_groupScope; }
    inline bool GroupScopeHasBeenSet() const { return m_groupScopeHasBeenSet; }
    inline void SetGroupScope(const GroupScope& value) { m_groupScopeHasBeenSet = true; m_groupScope = value; }
    inline void SetGroupScope(GroupScope&& value) { m_groupScopeHasBeenSet = true; m_groupScope = std::move(value); }
    inline CreateGroupRequest& WithGroupScope(const GroupScope& value) { SetGroupScope(value); return *this;}
    inline CreateGroupRequest& WithGroupScope(GroupScope&& value) { SetGroupScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The AD group type. For details, see <a
     * href="https://learn.microsoft.com/en-us/windows-server/identity/ad-ds/manage/understand-security-groups#how-active-directory-security-groups-work">Active
     * Directory security group type</a>.</p>
     */
    inline const GroupType& GetGroupType() const{ return m_groupType; }
    inline bool GroupTypeHasBeenSet() const { return m_groupTypeHasBeenSet; }
    inline void SetGroupType(const GroupType& value) { m_groupTypeHasBeenSet = true; m_groupType = value; }
    inline void SetGroupType(GroupType&& value) { m_groupTypeHasBeenSet = true; m_groupType = std::move(value); }
    inline CreateGroupRequest& WithGroupType(const GroupType& value) { SetGroupType(value); return *this;}
    inline CreateGroupRequest& WithGroupType(GroupType&& value) { SetGroupType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An expression that defines one or more attributes with the data type and
     * value of each attribute. </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetOtherAttributes() const{ return m_otherAttributes; }
    inline bool OtherAttributesHasBeenSet() const { return m_otherAttributesHasBeenSet; }
    inline void SetOtherAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = value; }
    inline void SetOtherAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = std::move(value); }
    inline CreateGroupRequest& WithOtherAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetOtherAttributes(value); return *this;}
    inline CreateGroupRequest& WithOtherAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetOtherAttributes(std::move(value)); return *this;}
    inline CreateGroupRequest& AddOtherAttributes(const Aws::String& key, const AttributeValue& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, value); return *this; }
    inline CreateGroupRequest& AddOtherAttributes(Aws::String&& key, const AttributeValue& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(std::move(key), value); return *this; }
    inline CreateGroupRequest& AddOtherAttributes(const Aws::String& key, AttributeValue&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, std::move(value)); return *this; }
    inline CreateGroupRequest& AddOtherAttributes(Aws::String&& key, AttributeValue&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateGroupRequest& AddOtherAttributes(const char* key, AttributeValue&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, std::move(value)); return *this; }
    inline CreateGroupRequest& AddOtherAttributes(const char* key, const AttributeValue& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The name of the group. </p>
     */
    inline const Aws::String& GetSAMAccountName() const{ return m_sAMAccountName; }
    inline bool SAMAccountNameHasBeenSet() const { return m_sAMAccountNameHasBeenSet; }
    inline void SetSAMAccountName(const Aws::String& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = value; }
    inline void SetSAMAccountName(Aws::String&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::move(value); }
    inline void SetSAMAccountName(const char* value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName.assign(value); }
    inline CreateGroupRequest& WithSAMAccountName(const Aws::String& value) { SetSAMAccountName(value); return *this;}
    inline CreateGroupRequest& WithSAMAccountName(Aws::String&& value) { SetSAMAccountName(std::move(value)); return *this;}
    inline CreateGroupRequest& WithSAMAccountName(const char* value) { SetSAMAccountName(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    GroupScope m_groupScope;
    bool m_groupScopeHasBeenSet = false;

    GroupType m_groupType;
    bool m_groupTypeHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_otherAttributes;
    bool m_otherAttributesHasBeenSet = false;

    Aws::String m_sAMAccountName;
    bool m_sAMAccountNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
