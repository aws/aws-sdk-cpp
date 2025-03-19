/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/directory-service-data/model/GroupScope.h>
#include <aws/directory-service-data/model/GroupType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A structure containing a subset of fields of a group object from a
   * directory.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directory-service-data-2023-05-31/GroupSummary">AWS
   * API Reference</a></p>
   */
  class GroupSummary
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API GroupSummary() = default;
    AWS_DIRECTORYSERVICEDATA_API GroupSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API GroupSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICEDATA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The scope of the AD group. For details, see <a
     * href="https://learn.microsoft.com/en-us/windows-server/identity/ad-ds/manage/understand-security-groups#group-scope">Active
     * Directory security groups</a>.</p>
     */
    inline GroupScope GetGroupScope() const { return m_groupScope; }
    inline bool GroupScopeHasBeenSet() const { return m_groupScopeHasBeenSet; }
    inline void SetGroupScope(GroupScope value) { m_groupScopeHasBeenSet = true; m_groupScope = value; }
    inline GroupSummary& WithGroupScope(GroupScope value) { SetGroupScope(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AD group type. For details, see <a
     * href="https://learn.microsoft.com/en-us/windows-server/identity/ad-ds/manage/understand-security-groups#how-active-directory-security-groups-work">Active
     * Directory security group type</a>.</p>
     */
    inline GroupType GetGroupType() const { return m_groupType; }
    inline bool GroupTypeHasBeenSet() const { return m_groupTypeHasBeenSet; }
    inline void SetGroupType(GroupType value) { m_groupTypeHasBeenSet = true; m_groupType = value; }
    inline GroupSummary& WithGroupType(GroupType value) { SetGroupType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the group.</p>
     */
    inline const Aws::String& GetSAMAccountName() const { return m_sAMAccountName; }
    inline bool SAMAccountNameHasBeenSet() const { return m_sAMAccountNameHasBeenSet; }
    template<typename SAMAccountNameT = Aws::String>
    void SetSAMAccountName(SAMAccountNameT&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::forward<SAMAccountNameT>(value); }
    template<typename SAMAccountNameT = Aws::String>
    GroupSummary& WithSAMAccountName(SAMAccountNameT&& value) { SetSAMAccountName(std::forward<SAMAccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique security identifier (SID) of the group.</p>
     */
    inline const Aws::String& GetSID() const { return m_sID; }
    inline bool SIDHasBeenSet() const { return m_sIDHasBeenSet; }
    template<typename SIDT = Aws::String>
    void SetSID(SIDT&& value) { m_sIDHasBeenSet = true; m_sID = std::forward<SIDT>(value); }
    template<typename SIDT = Aws::String>
    GroupSummary& WithSID(SIDT&& value) { SetSID(std::forward<SIDT>(value)); return *this;}
    ///@}
  private:

    GroupScope m_groupScope{GroupScope::NOT_SET};
    bool m_groupScopeHasBeenSet = false;

    GroupType m_groupType{GroupType::NOT_SET};
    bool m_groupTypeHasBeenSet = false;

    Aws::String m_sAMAccountName;
    bool m_sAMAccountNameHasBeenSet = false;

    Aws::String m_sID;
    bool m_sIDHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
