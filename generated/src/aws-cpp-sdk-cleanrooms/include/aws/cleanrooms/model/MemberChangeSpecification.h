/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cleanrooms/model/MemberAbility.h>
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
namespace CleanRooms
{
namespace Model
{

  /**
   * <p>Specifies changes to collaboration membership, including adding new members
   * with their abilities and display names.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/MemberChangeSpecification">AWS
   * API Reference</a></p>
   */
  class MemberChangeSpecification
  {
  public:
    AWS_CLEANROOMS_API MemberChangeSpecification() = default;
    AWS_CLEANROOMS_API MemberChangeSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API MemberChangeSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services account ID of the member to add to the
     * collaboration.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    MemberChangeSpecification& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The abilities granted to the collaboration member. These determine what
     * actions the member can perform within the collaboration.</p>  <p>The
     * following values are currently not supported: <code>CAN_QUERY</code>,
     * <code>CAN_RECEIVE_RESULTS,</code> and <code>CAN_RUN_JOB</code>. </p> <p>Set the
     * value of <code>memberAbilities</code> to <code>[]</code> to allow a member to
     * contribute data.</p> 
     */
    inline const Aws::Vector<MemberAbility>& GetMemberAbilities() const { return m_memberAbilities; }
    inline bool MemberAbilitiesHasBeenSet() const { return m_memberAbilitiesHasBeenSet; }
    template<typename MemberAbilitiesT = Aws::Vector<MemberAbility>>
    void SetMemberAbilities(MemberAbilitiesT&& value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities = std::forward<MemberAbilitiesT>(value); }
    template<typename MemberAbilitiesT = Aws::Vector<MemberAbility>>
    MemberChangeSpecification& WithMemberAbilities(MemberAbilitiesT&& value) { SetMemberAbilities(std::forward<MemberAbilitiesT>(value)); return *this;}
    inline MemberChangeSpecification& AddMemberAbilities(MemberAbility value) { m_memberAbilitiesHasBeenSet = true; m_memberAbilities.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the display name that will be shown for this member in the
     * collaboration. While this field is required when inviting new members, it
     * becomes optional when modifying abilities of existing collaboration members.
     * </p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    MemberChangeSpecification& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<MemberAbility> m_memberAbilities;
    bool m_memberAbilitiesHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
