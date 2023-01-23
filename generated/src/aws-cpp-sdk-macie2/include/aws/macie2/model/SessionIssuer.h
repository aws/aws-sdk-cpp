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
   * <p>Provides information about the source and type of temporary security
   * credentials that were issued to an entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SessionIssuer">AWS
   * API Reference</a></p>
   */
  class SessionIssuer
  {
  public:
    AWS_MACIE2_API SessionIssuer();
    AWS_MACIE2_API SessionIssuer(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SessionIssuer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * entity that was used to get the credentials.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * entity that was used to get the credentials.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * entity that was used to get the credentials.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * entity that was used to get the credentials.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * entity that was used to get the credentials.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * entity that was used to get the credentials.</p>
     */
    inline SessionIssuer& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * entity that was used to get the credentials.</p>
     */
    inline SessionIssuer& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * entity that was used to get the credentials.</p>
     */
    inline SessionIssuer& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source account, IAM user, or role that
     * was used to get the credentials.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source account, IAM user, or role that
     * was used to get the credentials.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source account, IAM user, or role that
     * was used to get the credentials.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source account, IAM user, or role that
     * was used to get the credentials.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source account, IAM user, or role that
     * was used to get the credentials.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source account, IAM user, or role that
     * was used to get the credentials.</p>
     */
    inline SessionIssuer& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source account, IAM user, or role that
     * was used to get the credentials.</p>
     */
    inline SessionIssuer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source account, IAM user, or role that
     * was used to get the credentials.</p>
     */
    inline SessionIssuer& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The unique identifier for the entity that was used to get the
     * credentials.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The unique identifier for the entity that was used to get the
     * credentials.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The unique identifier for the entity that was used to get the
     * credentials.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The unique identifier for the entity that was used to get the
     * credentials.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The unique identifier for the entity that was used to get the
     * credentials.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The unique identifier for the entity that was used to get the
     * credentials.</p>
     */
    inline SessionIssuer& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The unique identifier for the entity that was used to get the
     * credentials.</p>
     */
    inline SessionIssuer& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the entity that was used to get the
     * credentials.</p>
     */
    inline SessionIssuer& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The source of the temporary security credentials, such as Root, IAMUser, or
     * Role.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The source of the temporary security credentials, such as Root, IAMUser, or
     * Role.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The source of the temporary security credentials, such as Root, IAMUser, or
     * Role.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The source of the temporary security credentials, such as Root, IAMUser, or
     * Role.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The source of the temporary security credentials, such as Root, IAMUser, or
     * Role.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The source of the temporary security credentials, such as Root, IAMUser, or
     * Role.</p>
     */
    inline SessionIssuer& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The source of the temporary security credentials, such as Root, IAMUser, or
     * Role.</p>
     */
    inline SessionIssuer& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The source of the temporary security credentials, such as Root, IAMUser, or
     * Role.</p>
     */
    inline SessionIssuer& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The name or alias of the user or role that issued the session. This value is
     * null if the credentials were obtained from a root account that doesn't have an
     * alias.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name or alias of the user or role that issued the session. This value is
     * null if the credentials were obtained from a root account that doesn't have an
     * alias.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name or alias of the user or role that issued the session. This value is
     * null if the credentials were obtained from a root account that doesn't have an
     * alias.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name or alias of the user or role that issued the session. This value is
     * null if the credentials were obtained from a root account that doesn't have an
     * alias.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name or alias of the user or role that issued the session. This value is
     * null if the credentials were obtained from a root account that doesn't have an
     * alias.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name or alias of the user or role that issued the session. This value is
     * null if the credentials were obtained from a root account that doesn't have an
     * alias.</p>
     */
    inline SessionIssuer& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name or alias of the user or role that issued the session. This value is
     * null if the credentials were obtained from a root account that doesn't have an
     * alias.</p>
     */
    inline SessionIssuer& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name or alias of the user or role that issued the session. This value is
     * null if the credentials were obtained from a root account that doesn't have an
     * alias.</p>
     */
    inline SessionIssuer& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
