/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/directory-service-data/model/AttributeValue.h>
#include <aws/directory-service-data/model/GroupScope.h>
#include <aws/directory-service-data/model/GroupType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DirectoryServiceData {
namespace Model {
class DescribeGroupResult {
 public:
  AWS_DIRECTORYSERVICEDATA_API DescribeGroupResult() = default;
  AWS_DIRECTORYSERVICEDATA_API DescribeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DIRECTORYSERVICEDATA_API DescribeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The identifier (ID) of the directory that's associated with the group. </p>
   */
  inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
  template <typename DirectoryIdT = Aws::String>
  void SetDirectoryId(DirectoryIdT&& value) {
    m_directoryIdHasBeenSet = true;
    m_directoryId = std::forward<DirectoryIdT>(value);
  }
  template <typename DirectoryIdT = Aws::String>
  DescribeGroupResult& WithDirectoryId(DirectoryIdT&& value) {
    SetDirectoryId(std::forward<DirectoryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The <a
   * href="https://learn.microsoft.com/en-us/windows/win32/ad/object-names-and-identities#distinguished-name">distinguished
   * name</a> of the object. </p>
   */
  inline const Aws::String& GetDistinguishedName() const { return m_distinguishedName; }
  template <typename DistinguishedNameT = Aws::String>
  void SetDistinguishedName(DistinguishedNameT&& value) {
    m_distinguishedNameHasBeenSet = true;
    m_distinguishedName = std::forward<DistinguishedNameT>(value);
  }
  template <typename DistinguishedNameT = Aws::String>
  DescribeGroupResult& WithDistinguishedName(DistinguishedNameT&& value) {
    SetDistinguishedName(std::forward<DistinguishedNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The scope of the AD group. For details, see <a
   * href="https://learn.microsoft.com/en-us/windows-server/identity/ad-ds/manage/understand-security-groups#group-scope">Active
   * Directory security groups</a>. </p>
   */
  inline GroupScope GetGroupScope() const { return m_groupScope; }
  inline void SetGroupScope(GroupScope value) {
    m_groupScopeHasBeenSet = true;
    m_groupScope = value;
  }
  inline DescribeGroupResult& WithGroupScope(GroupScope value) {
    SetGroupScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The AD group type. For details, see <a
   * href="https://learn.microsoft.com/en-us/windows-server/identity/ad-ds/manage/understand-security-groups#how-active-directory-security-groups-work">Active
   * Directory security group type</a>. </p>
   */
  inline GroupType GetGroupType() const { return m_groupType; }
  inline void SetGroupType(GroupType value) {
    m_groupTypeHasBeenSet = true;
    m_groupType = value;
  }
  inline DescribeGroupResult& WithGroupType(GroupType value) {
    SetGroupType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The attribute values that are returned for the attribute names that are
   * included in the request. </p>
   */
  inline const Aws::Map<Aws::String, AttributeValue>& GetOtherAttributes() const { return m_otherAttributes; }
  template <typename OtherAttributesT = Aws::Map<Aws::String, AttributeValue>>
  void SetOtherAttributes(OtherAttributesT&& value) {
    m_otherAttributesHasBeenSet = true;
    m_otherAttributes = std::forward<OtherAttributesT>(value);
  }
  template <typename OtherAttributesT = Aws::Map<Aws::String, AttributeValue>>
  DescribeGroupResult& WithOtherAttributes(OtherAttributesT&& value) {
    SetOtherAttributes(std::forward<OtherAttributesT>(value));
    return *this;
  }
  template <typename OtherAttributesKeyT = Aws::String, typename OtherAttributesValueT = AttributeValue>
  DescribeGroupResult& AddOtherAttributes(OtherAttributesKeyT&& key, OtherAttributesValueT&& value) {
    m_otherAttributesHasBeenSet = true;
    m_otherAttributes.emplace(std::forward<OtherAttributesKeyT>(key), std::forward<OtherAttributesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The domain name that's associated with the group. </p>
   */
  inline const Aws::String& GetRealm() const { return m_realm; }
  template <typename RealmT = Aws::String>
  void SetRealm(RealmT&& value) {
    m_realmHasBeenSet = true;
    m_realm = std::forward<RealmT>(value);
  }
  template <typename RealmT = Aws::String>
  DescribeGroupResult& WithRealm(RealmT&& value) {
    SetRealm(std::forward<RealmT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The name of the group. </p>
   */
  inline const Aws::String& GetSAMAccountName() const { return m_sAMAccountName; }
  template <typename SAMAccountNameT = Aws::String>
  void SetSAMAccountName(SAMAccountNameT&& value) {
    m_sAMAccountNameHasBeenSet = true;
    m_sAMAccountName = std::forward<SAMAccountNameT>(value);
  }
  template <typename SAMAccountNameT = Aws::String>
  DescribeGroupResult& WithSAMAccountName(SAMAccountNameT&& value) {
    SetSAMAccountName(std::forward<SAMAccountNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique security identifier (SID) of the group. </p>
   */
  inline const Aws::String& GetSID() const { return m_sID; }
  template <typename SIDT = Aws::String>
  void SetSID(SIDT&& value) {
    m_sIDHasBeenSet = true;
    m_sID = std::forward<SIDT>(value);
  }
  template <typename SIDT = Aws::String>
  DescribeGroupResult& WithSID(SIDT&& value) {
    SetSID(std::forward<SIDT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeGroupResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_directoryId;

  Aws::String m_distinguishedName;

  GroupScope m_groupScope{GroupScope::NOT_SET};

  GroupType m_groupType{GroupType::NOT_SET};

  Aws::Map<Aws::String, AttributeValue> m_otherAttributes;

  Aws::String m_realm;

  Aws::String m_sAMAccountName;

  Aws::String m_sID;

  Aws::String m_requestId;
  bool m_directoryIdHasBeenSet = false;
  bool m_distinguishedNameHasBeenSet = false;
  bool m_groupScopeHasBeenSet = false;
  bool m_groupTypeHasBeenSet = false;
  bool m_otherAttributesHasBeenSet = false;
  bool m_realmHasBeenSet = false;
  bool m_sAMAccountNameHasBeenSet = false;
  bool m_sIDHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DirectoryServiceData
}  // namespace Aws
