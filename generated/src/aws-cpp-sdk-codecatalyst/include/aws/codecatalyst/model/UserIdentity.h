/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/model/UserType.h>
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
namespace CodeCatalyst
{
namespace Model
{

  /**
   * <p>Information about a user whose activity is recorded in an event for a
   * space.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codecatalyst-2022-09-28/UserIdentity">AWS
   * API Reference</a></p>
   */
  class UserIdentity
  {
  public:
    AWS_CODECATALYST_API UserIdentity();
    AWS_CODECATALYST_API UserIdentity(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API UserIdentity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODECATALYST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The role assigned to the user in a Amazon CodeCatalyst space or project when
     * the event occurred.</p>
     */
    inline const UserType& GetUserType() const{ return m_userType; }
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
    inline void SetUserType(const UserType& value) { m_userTypeHasBeenSet = true; m_userType = value; }
    inline void SetUserType(UserType&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }
    inline UserIdentity& WithUserType(const UserType& value) { SetUserType(value); return *this;}
    inline UserIdentity& WithUserType(UserType&& value) { SetUserType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon CodeCatalyst service principal.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline UserIdentity& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline UserIdentity& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline UserIdentity& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the user in Amazon CodeCatalyst.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }
    inline UserIdentity& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}
    inline UserIdentity& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}
    inline UserIdentity& WithUserName(const char* value) { SetUserName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account number of the user in Amazon Web Services, if
     * any.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline UserIdentity& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline UserIdentity& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline UserIdentity& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}
  private:

    UserType m_userType;
    bool m_userTypeHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
