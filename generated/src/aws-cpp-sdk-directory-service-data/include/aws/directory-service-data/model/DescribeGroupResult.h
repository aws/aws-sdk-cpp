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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectoryServiceData
{
namespace Model
{
  class DescribeGroupResult
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API DescribeGroupResult();
    AWS_DIRECTORYSERVICEDATA_API DescribeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTORYSERVICEDATA_API DescribeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The identifier (ID) of the directory that's associated with the group. </p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryId.assign(value); }
    inline DescribeGroupResult& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline DescribeGroupResult& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline DescribeGroupResult& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <a
     * href="https://learn.microsoft.com/en-us/windows/win32/ad/object-names-and-identities#distinguished-name">distinguished
     * name</a> of the object. </p>
     */
    inline const Aws::String& GetDistinguishedName() const{ return m_distinguishedName; }
    inline void SetDistinguishedName(const Aws::String& value) { m_distinguishedName = value; }
    inline void SetDistinguishedName(Aws::String&& value) { m_distinguishedName = std::move(value); }
    inline void SetDistinguishedName(const char* value) { m_distinguishedName.assign(value); }
    inline DescribeGroupResult& WithDistinguishedName(const Aws::String& value) { SetDistinguishedName(value); return *this;}
    inline DescribeGroupResult& WithDistinguishedName(Aws::String&& value) { SetDistinguishedName(std::move(value)); return *this;}
    inline DescribeGroupResult& WithDistinguishedName(const char* value) { SetDistinguishedName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The scope of the AD group. For details, see <a
     * href="https://learn.microsoft.com/en-us/windows-server/identity/ad-ds/manage/understand-security-groups#group-scope">Active
     * Directory security groups</a>. </p>
     */
    inline const GroupScope& GetGroupScope() const{ return m_groupScope; }
    inline void SetGroupScope(const GroupScope& value) { m_groupScope = value; }
    inline void SetGroupScope(GroupScope&& value) { m_groupScope = std::move(value); }
    inline DescribeGroupResult& WithGroupScope(const GroupScope& value) { SetGroupScope(value); return *this;}
    inline DescribeGroupResult& WithGroupScope(GroupScope&& value) { SetGroupScope(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The AD group type. For details, see <a
     * href="https://learn.microsoft.com/en-us/windows-server/identity/ad-ds/manage/understand-security-groups#how-active-directory-security-groups-work">Active
     * Directory security group type</a>. </p>
     */
    inline const GroupType& GetGroupType() const{ return m_groupType; }
    inline void SetGroupType(const GroupType& value) { m_groupType = value; }
    inline void SetGroupType(GroupType&& value) { m_groupType = std::move(value); }
    inline DescribeGroupResult& WithGroupType(const GroupType& value) { SetGroupType(value); return *this;}
    inline DescribeGroupResult& WithGroupType(GroupType&& value) { SetGroupType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The attribute values that are returned for the attribute names that are
     * included in the request. </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetOtherAttributes() const{ return m_otherAttributes; }
    inline void SetOtherAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { m_otherAttributes = value; }
    inline void SetOtherAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { m_otherAttributes = std::move(value); }
    inline DescribeGroupResult& WithOtherAttributes(const Aws::Map<Aws::String, AttributeValue>& value) { SetOtherAttributes(value); return *this;}
    inline DescribeGroupResult& WithOtherAttributes(Aws::Map<Aws::String, AttributeValue>&& value) { SetOtherAttributes(std::move(value)); return *this;}
    inline DescribeGroupResult& AddOtherAttributes(const Aws::String& key, const AttributeValue& value) { m_otherAttributes.emplace(key, value); return *this; }
    inline DescribeGroupResult& AddOtherAttributes(Aws::String&& key, const AttributeValue& value) { m_otherAttributes.emplace(std::move(key), value); return *this; }
    inline DescribeGroupResult& AddOtherAttributes(const Aws::String& key, AttributeValue&& value) { m_otherAttributes.emplace(key, std::move(value)); return *this; }
    inline DescribeGroupResult& AddOtherAttributes(Aws::String&& key, AttributeValue&& value) { m_otherAttributes.emplace(std::move(key), std::move(value)); return *this; }
    inline DescribeGroupResult& AddOtherAttributes(const char* key, AttributeValue&& value) { m_otherAttributes.emplace(key, std::move(value)); return *this; }
    inline DescribeGroupResult& AddOtherAttributes(const char* key, const AttributeValue& value) { m_otherAttributes.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The domain name that's associated with the group. </p>
     */
    inline const Aws::String& GetRealm() const{ return m_realm; }
    inline void SetRealm(const Aws::String& value) { m_realm = value; }
    inline void SetRealm(Aws::String&& value) { m_realm = std::move(value); }
    inline void SetRealm(const char* value) { m_realm.assign(value); }
    inline DescribeGroupResult& WithRealm(const Aws::String& value) { SetRealm(value); return *this;}
    inline DescribeGroupResult& WithRealm(Aws::String&& value) { SetRealm(std::move(value)); return *this;}
    inline DescribeGroupResult& WithRealm(const char* value) { SetRealm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name of the group. </p>
     */
    inline const Aws::String& GetSAMAccountName() const{ return m_sAMAccountName; }
    inline void SetSAMAccountName(const Aws::String& value) { m_sAMAccountName = value; }
    inline void SetSAMAccountName(Aws::String&& value) { m_sAMAccountName = std::move(value); }
    inline void SetSAMAccountName(const char* value) { m_sAMAccountName.assign(value); }
    inline DescribeGroupResult& WithSAMAccountName(const Aws::String& value) { SetSAMAccountName(value); return *this;}
    inline DescribeGroupResult& WithSAMAccountName(Aws::String&& value) { SetSAMAccountName(std::move(value)); return *this;}
    inline DescribeGroupResult& WithSAMAccountName(const char* value) { SetSAMAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique security identifier (SID) of the group. </p>
     */
    inline const Aws::String& GetSID() const{ return m_sID; }
    inline void SetSID(const Aws::String& value) { m_sID = value; }
    inline void SetSID(Aws::String&& value) { m_sID = std::move(value); }
    inline void SetSID(const char* value) { m_sID.assign(value); }
    inline DescribeGroupResult& WithSID(const Aws::String& value) { SetSID(value); return *this;}
    inline DescribeGroupResult& WithSID(Aws::String&& value) { SetSID(std::move(value)); return *this;}
    inline DescribeGroupResult& WithSID(const char* value) { SetSID(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;

    Aws::String m_distinguishedName;

    GroupScope m_groupScope;

    GroupType m_groupType;

    Aws::Map<Aws::String, AttributeValue> m_otherAttributes;

    Aws::String m_realm;

    Aws::String m_sAMAccountName;

    Aws::String m_sID;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
