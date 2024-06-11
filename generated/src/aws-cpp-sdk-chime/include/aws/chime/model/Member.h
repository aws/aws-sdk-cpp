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
    AWS_CHIME_API Member();
    AWS_CHIME_API Member(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Member& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The member ID (user ID or bot ID).</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }
    inline Member& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}
    inline Member& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}
    inline Member& WithMemberId(const char* value) { SetMemberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member type.</p>
     */
    inline const MemberType& GetMemberType() const{ return m_memberType; }
    inline bool MemberTypeHasBeenSet() const { return m_memberTypeHasBeenSet; }
    inline void SetMemberType(const MemberType& value) { m_memberTypeHasBeenSet = true; m_memberType = value; }
    inline void SetMemberType(MemberType&& value) { m_memberTypeHasBeenSet = true; m_memberType = std::move(value); }
    inline Member& WithMemberType(const MemberType& value) { SetMemberType(value); return *this;}
    inline Member& WithMemberType(MemberType&& value) { SetMemberType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member email address.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline Member& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline Member& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline Member& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member name.</p>
     */
    inline const Aws::String& GetFullName() const{ return m_fullName; }
    inline bool FullNameHasBeenSet() const { return m_fullNameHasBeenSet; }
    inline void SetFullName(const Aws::String& value) { m_fullNameHasBeenSet = true; m_fullName = value; }
    inline void SetFullName(Aws::String&& value) { m_fullNameHasBeenSet = true; m_fullName = std::move(value); }
    inline void SetFullName(const char* value) { m_fullNameHasBeenSet = true; m_fullName.assign(value); }
    inline Member& WithFullName(const Aws::String& value) { SetFullName(value); return *this;}
    inline Member& WithFullName(Aws::String&& value) { SetFullName(std::move(value)); return *this;}
    inline Member& WithFullName(const char* value) { SetFullName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline Member& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline Member& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline Member& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}
  private:

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;

    MemberType m_memberType;
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
