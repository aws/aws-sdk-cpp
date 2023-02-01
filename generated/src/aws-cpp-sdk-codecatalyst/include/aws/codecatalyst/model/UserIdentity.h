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


    /**
     * <p>The role assigned to the user in a Amazon CodeCatalyst space or project when
     * the event occurred.</p>
     */
    inline const UserType& GetUserType() const{ return m_userType; }

    /**
     * <p>The role assigned to the user in a Amazon CodeCatalyst space or project when
     * the event occurred.</p>
     */
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }

    /**
     * <p>The role assigned to the user in a Amazon CodeCatalyst space or project when
     * the event occurred.</p>
     */
    inline void SetUserType(const UserType& value) { m_userTypeHasBeenSet = true; m_userType = value; }

    /**
     * <p>The role assigned to the user in a Amazon CodeCatalyst space or project when
     * the event occurred.</p>
     */
    inline void SetUserType(UserType&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }

    /**
     * <p>The role assigned to the user in a Amazon CodeCatalyst space or project when
     * the event occurred.</p>
     */
    inline UserIdentity& WithUserType(const UserType& value) { SetUserType(value); return *this;}

    /**
     * <p>The role assigned to the user in a Amazon CodeCatalyst space or project when
     * the event occurred.</p>
     */
    inline UserIdentity& WithUserType(UserType&& value) { SetUserType(std::move(value)); return *this;}


    /**
     * <p/>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p/>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p/>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p/>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p/>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p/>
     */
    inline UserIdentity& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p/>
     */
    inline UserIdentity& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p/>
     */
    inline UserIdentity& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The display name of the user in Amazon CodeCatalyst.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The display name of the user in Amazon CodeCatalyst.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The display name of the user in Amazon CodeCatalyst.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The display name of the user in Amazon CodeCatalyst.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The display name of the user in Amazon CodeCatalyst.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The display name of the user in Amazon CodeCatalyst.</p>
     */
    inline UserIdentity& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The display name of the user in Amazon CodeCatalyst.</p>
     */
    inline UserIdentity& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The display name of the user in Amazon CodeCatalyst.</p>
     */
    inline UserIdentity& WithUserName(const char* value) { SetUserName(value); return *this;}


    /**
     * <p>The Amazon Web Services account number of the user in Amazon Web Services, if
     * any.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account number of the user in Amazon Web Services, if
     * any.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account number of the user in Amazon Web Services, if
     * any.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account number of the user in Amazon Web Services, if
     * any.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account number of the user in Amazon Web Services, if
     * any.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account number of the user in Amazon Web Services, if
     * any.</p>
     */
    inline UserIdentity& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account number of the user in Amazon Web Services, if
     * any.</p>
     */
    inline UserIdentity& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account number of the user in Amazon Web Services, if
     * any.</p>
     */
    inline UserIdentity& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}

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
