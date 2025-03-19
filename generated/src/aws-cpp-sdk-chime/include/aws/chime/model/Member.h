/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/MemberType.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The member details, such as email address, name, member ID, and member
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/Member">AWS API
   * Reference</a></p>
   */
  class Member
  {
  public:
    AWS_CHIME_API Member() = default;
    AWS_CHIME_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The member ID (user ID or bot ID).</p>
     */
    inline const Aws::String& GetMemberId() const { return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    template<typename MemberIdT = Aws::String>
    void SetMemberId(MemberIdT&& value) { m_memberIdHasBeenSet = true; m_memberId = std::forward<MemberIdT>(value); }
    template<typename MemberIdT = Aws::String>
    Member& WithMemberId(MemberIdT&& value) { SetMemberId(std::forward<MemberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member type.</p>
     */
    inline MemberType GetMemberType() const { return m_memberType; }
    inline bool MemberTypeHasBeenSet() const { return m_memberTypeHasBeenSet; }
    inline void SetMemberType(MemberType value) { m_memberTypeHasBeenSet = true; m_memberType = value; }
    inline Member& WithMemberType(MemberType value) { SetMemberType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member email address.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    Member& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member name.</p>
     */
    inline const Aws::String& GetFullName() const { return m_fullName; }
    inline bool FullNameHasBeenSet() const { return m_fullNameHasBeenSet; }
    template<typename FullNameT = Aws::String>
    void SetFullName(FullNameT&& value) { m_fullNameHasBeenSet = true; m_fullName = std::forward<FullNameT>(value); }
    template<typename FullNameT = Aws::String>
    Member& WithFullName(FullNameT&& value) { SetFullName(std::forward<FullNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Member& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;

    MemberType m_memberType{MemberType::NOT_SET};
    bool m_memberTypeHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_fullName;
    bool m_fullNameHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
