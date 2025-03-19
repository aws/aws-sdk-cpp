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
    AWS_DIRECTORYSERVICEDATA_API Group() = default;
    AWS_DIRECTORYSERVICEDATA_API Group(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Group& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://learn.microsoft.com/en-us/windows/win32/ad/object-names-and-identities#distinguished-name">distinguished
     * name</a> of the object. </p>
     */
    inline const Aws::String& GetDistinguishedName() const { return m_distinguishedName; }
    inline bool DistinguishedNameHasBeenSet() const { return m_distinguishedNameHasBeenSet; }
    template<typename DistinguishedNameT = Aws::String>
    void SetDistinguishedName(DistinguishedNameT&& value) { m_distinguishedNameHasBeenSet = true; m_distinguishedName = std::forward<DistinguishedNameT>(value); }
    template<typename DistinguishedNameT = Aws::String>
    Group& WithDistinguishedName(DistinguishedNameT&& value) { SetDistinguishedName(std::forward<DistinguishedNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The scope of the AD group. For details, see <a
     * href="https://learn.microsoft.com/en-us/windows-server/identity/ad-ds/manage/understand-security-groups#group-scope">Active
     * Directory security groups</a> </p>
     */
    inline GroupScope GetGroupScope() const { return m_groupScope; }
    inline bool GroupScopeHasBeenSet() const { return m_groupScopeHasBeenSet; }
    inline void SetGroupScope(GroupScope value) { m_groupScopeHasBeenSet = true; m_groupScope = value; }
    inline Group& WithGroupScope(GroupScope value) { SetGroupScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The AD group type. For details, see <a
     * href="https://learn.microsoft.com/en-us/windows-server/identity/ad-ds/manage/understand-security-groups#how-active-directory-security-groups-work">Active
     * Directory security group type</a>. </p>
     */
    inline GroupType GetGroupType() const { return m_groupType; }
    inline bool GroupTypeHasBeenSet() const { return m_groupTypeHasBeenSet; }
    inline void SetGroupType(GroupType value) { m_groupTypeHasBeenSet = true; m_groupType = value; }
    inline Group& WithGroupType(GroupType value) { SetGroupType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An expression of one or more attributes, data types, and the values of a
     * group. </p>
     */
    inline const Aws::Map<Aws::String, AttributeValue>& GetOtherAttributes() const { return m_otherAttributes; }
    inline bool OtherAttributesHasBeenSet() const { return m_otherAttributesHasBeenSet; }
    template<typename OtherAttributesT = Aws::Map<Aws::String, AttributeValue>>
    void SetOtherAttributes(OtherAttributesT&& value) { m_otherAttributesHasBeenSet = true; m_otherAttributes = std::forward<OtherAttributesT>(value); }
    template<typename OtherAttributesT = Aws::Map<Aws::String, AttributeValue>>
    Group& WithOtherAttributes(OtherAttributesT&& value) { SetOtherAttributes(std::forward<OtherAttributesT>(value)); return *this;}
    template<typename OtherAttributesKeyT = Aws::String, typename OtherAttributesValueT = AttributeValue>
    Group& AddOtherAttributes(OtherAttributesKeyT&& key, OtherAttributesValueT&& value) {
      m_otherAttributesHasBeenSet = true; m_otherAttributes.emplace(std::forward<OtherAttributesKeyT>(key), std::forward<OtherAttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p> The name of the group. </p>
     */
    inline const Aws::String& GetSAMAccountName() const { return m_sAMAccountName; }
    inline bool SAMAccountNameHasBeenSet() const { return m_sAMAccountNameHasBeenSet; }
    template<typename SAMAccountNameT = Aws::String>
    void SetSAMAccountName(SAMAccountNameT&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::forward<SAMAccountNameT>(value); }
    template<typename SAMAccountNameT = Aws::String>
    Group& WithSAMAccountName(SAMAccountNameT&& value) { SetSAMAccountName(std::forward<SAMAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique security identifier (SID) of the group. </p>
     */
    inline const Aws::String& GetSID() const { return m_sID; }
    inline bool SIDHasBeenSet() const { return m_sIDHasBeenSet; }
    template<typename SIDT = Aws::String>
    void SetSID(SIDT&& value) { m_sIDHasBeenSet = true; m_sID = std::forward<SIDT>(value); }
    template<typename SIDT = Aws::String>
    Group& WithSID(SIDT&& value) { SetSID(std::forward<SIDT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_distinguishedName;
    bool m_distinguishedNameHasBeenSet = false;

    GroupScope m_groupScope{GroupScope::NOT_SET};
    bool m_groupScopeHasBeenSet = false;

    GroupType m_groupType{GroupType::NOT_SET};
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
