/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directory-service-data/model/GroupScope.h>
#include <aws/directory-service-data/model/GroupType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/directory-service-data/model/AttributeValue.h>
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
namespace DirectoryServiceData
{
namespace Model
{

  /**
   * <p> A group object that contains identifying information and attributes for a
   * specified group. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/Group">AWS
   * API Reference</a></p>
   */
  class Group
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API Group();
    AWS_DIRECTORYSERVICEDATA_API Group(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://learn.microsoft.com/en-us/windows/win32/ad/object-names-and-identities#distinguished-name">distinguished
     * name</a> of the object. </p>
     */
    inline const Aws::String& GetDistinguishedName() const{ return m_distinguishedName; }
    inline bool DistinguishedNameHasBeenSet() const { return m_distinguishedNameHasBeenSet; }
    inline void SetDistinguishedName(const Aws::String& value) { m_distinguishedNameHasBeenSet = true; m_distinguishedName = value; }
    inline void SetDistinguishedName(Aws::String&& value) { m_distinguishedNameHasBeenSet = true; m_distinguishedName = std::move(value); }
    inline void SetDistinguishedName(const char* value) { m_distinguishedNameHasBeenSet = true; m_distinguishedName.assign(value); }
    inline Group& WithDistinguishedName(const Aws::String& value) { SetDistinguishedName(value); return *this;}
    inline Group& WithDistinguishedName(Aws::String&& value) { SetDistinguishedName(std::move(value)); return *this;}
    inline Group& WithDistinguishedName(const char* value) { SetDistinguishedName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The scope of the AD group. For details, see <a
     * href="https://learn.microsoft.com/en-us/windows-server/identity/ad-ds/manage/understand-security-groups#group-scope">Active
     * Directory security groups</a> </p>
     */
    inline const GroupScope& GetGroupScope() const{ return m_groupScope; }
    inline bool GroupScopeHasBeenSet() const { return m_groupScopeHasBeenSet; }
    inline void SetGroupScope(const GroupScope& value) { m_groupScopeHasBeenSet = true; m_groupScope = value; }
    inline void SetGroupScope(GroupScope&& value) { m_groupScopeHasBeenSet = true; m_groupScope = std::move(value); }
    inline Group& WithGroupScope(const GroupScope& value) { SetGroupScope(value); return *this;}
    inline Group& WithGroupScope(GroupScope&& value) { SetGroupScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The AD group type. For details, see <a
     * href="https://learn.microsoft.com/en-us/windows-server/identity/ad-ds/manage/understand-security-groups#how-active-directory-security-groups-work">Active
     * Directory security group type</a>. </p>
     */
    inline const GroupType& GetGroupType() const{ return m_groupType; }
    inline bool GroupTypeHasBeenSet() const { return m_groupTypeHasBeenSet; }
    inline void SetGroupType(const GroupType& value) { m_groupTypeHasBeenSet = true; m_groupType = value; }
    inline void SetGroupType(GroupType&& value) { m_groupTypeHasBeenSet = true; m_groupType = std::move(value); }
    inline Group& WithGroupType(const GroupType& value) { SetGroupType(value); return *this;}
    inline Group& WithGroupType(GroupType&& value) { SetGroupType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An expression of one or more attributes, data types, and the values of a
     * group. </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetOtherAttributes() const{ return m_otherAttributes; }
    inline bool OtherAttributesHasBeenSet() const { return m_otherAttributesHasBeenSet; }
    inline void SetOtherAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = value; }
    inline void SetOtherAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = std::move(value); }
    inline Group& WithOtherAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetOtherAttributes(value); return *this;}
    inline Group& WithOtherAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetOtherAttributes(std::move(value)); return *this;}
    inline Group& AddOtherAttributes(const Aws::String& key, const AttributeValue& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, value); return *this; }
    inline Group& AddOtherAttributes(Aws::String&& key, const AttributeValue& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(std::move(key), value); return *this; }
    inline Group& AddOtherAttributes(const Aws::String& key, AttributeValue&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, std::move(value)); return *this; }
    inline Group& AddOtherAttributes(Aws::String&& key, AttributeValue&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline Group& AddOtherAttributes(const char* key, AttributeValue&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, std::move(value)); return *this; }
    inline Group& AddOtherAttributes(const char* key, const AttributeValue& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(key, value); return *this; }
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
    inline Group& WithSAMAccountName(const Aws::String& value) { SetSAMAccountName(value); return *this;}
    inline Group& WithSAMAccountName(Aws::String&& value) { SetSAMAccountName(std::move(value)); return *this;}
    inline Group& WithSAMAccountName(const char* value) { SetSAMAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique security identifier (SID) of the group. </p>
     */
    inline const Aws::String& GetSID() const{ return m_sID; }
    inline bool SIDHasBeenSet() const { return m_sIDHasBeenSet; }
    inline void SetSID(const Aws::String& value) { m_sIDHasBeenSet = true; m_sID = value; }
    inline void SetSID(Aws::String&& value) { m_sIDHasBeenSet = true; m_sID = std::move(value); }
    inline void SetSID(const char* value) { m_sIDHasBeenSet = true; m_sID.assign(value); }
    inline Group& WithSID(const Aws::String& value) { SetSID(value); return *this;}
    inline Group& WithSID(Aws::String&& value) { SetSID(std::move(value)); return *this;}
    inline Group& WithSID(const char* value) { SetSID(value); return *this;}
    ///@}
  private:

    Aws::String m_distinguishedName;
    bool m_distinguishedNameHasBeenSet = false;

    GroupScope m_groupScope;
    bool m_groupScopeHasBeenSet = false;

    GroupType m_groupType;
    bool m_groupTypeHasBeenSet = false;

    Aws::Map<Aws::String, AttributeValue> m_otherAttributes;
    bool m_otherAttributesHasBeenSet = false;

    Aws::String m_sAMAccountName;
    bool m_sAMAccountNameHasBeenSet = false;

    Aws::String m_sID;
    bool m_sIDHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
