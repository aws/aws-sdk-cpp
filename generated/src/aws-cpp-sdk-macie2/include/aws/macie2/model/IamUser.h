/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
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
namespace Macie2
{
namespace Model
{

  /**
   * <p>Provides information about an Identity and Access Management (IAM) user who
   * performed an action on an affected resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/IamUser">AWS API
   * Reference</a></p>
   */
  class IamUser
  {
  public:
    AWS_MACIE2_API IamUser();
    AWS_MACIE2_API IamUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API IamUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the Amazon Web Services account that's associated
     * with the IAM user who performed the action.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that's associated
     * with the IAM user who performed the action.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that's associated
     * with the IAM user who performed the action.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that's associated
     * with the IAM user who performed the action.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account that's associated
     * with the IAM user who performed the action.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account that's associated
     * with the IAM user who performed the action.</p>
     */
    inline IamUser& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that's associated
     * with the IAM user who performed the action.</p>
     */
    inline IamUser& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that's associated
     * with the IAM user who performed the action.</p>
     */
    inline IamUser& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the principal that performed the action.
     * The last section of the ARN contains the name of the user who performed the
     * action.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal that performed the action.
     * The last section of the ARN contains the name of the user who performed the
     * action.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal that performed the action.
     * The last section of the ARN contains the name of the user who performed the
     * action.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal that performed the action.
     * The last section of the ARN contains the name of the user who performed the
     * action.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal that performed the action.
     * The last section of the ARN contains the name of the user who performed the
     * action.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the principal that performed the action.
     * The last section of the ARN contains the name of the user who performed the
     * action.</p>
     */
    inline IamUser& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the principal that performed the action.
     * The last section of the ARN contains the name of the user who performed the
     * action.</p>
     */
    inline IamUser& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the principal that performed the action.
     * The last section of the ARN contains the name of the user who performed the
     * action.</p>
     */
    inline IamUser& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The unique identifier for the IAM user who performed the action.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The unique identifier for the IAM user who performed the action.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The unique identifier for the IAM user who performed the action.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The unique identifier for the IAM user who performed the action.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The unique identifier for the IAM user who performed the action.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The unique identifier for the IAM user who performed the action.</p>
     */
    inline IamUser& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The unique identifier for the IAM user who performed the action.</p>
     */
    inline IamUser& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the IAM user who performed the action.</p>
     */
    inline IamUser& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The user name of the IAM user who performed the action.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The user name of the IAM user who performed the action.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The user name of the IAM user who performed the action.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The user name of the IAM user who performed the action.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The user name of the IAM user who performed the action.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The user name of the IAM user who performed the action.</p>
     */
    inline IamUser& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The user name of the IAM user who performed the action.</p>
     */
    inline IamUser& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The user name of the IAM user who performed the action.</p>
     */
    inline IamUser& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
