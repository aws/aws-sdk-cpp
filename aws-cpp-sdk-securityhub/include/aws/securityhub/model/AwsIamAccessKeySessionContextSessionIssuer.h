/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about the entity that created the session.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsIamAccessKeySessionContextSessionIssuer">AWS
   * API Reference</a></p>
   */
  class AwsIamAccessKeySessionContextSessionIssuer
  {
  public:
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContextSessionIssuer();
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContextSessionIssuer(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsIamAccessKeySessionContextSessionIssuer& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of principal (user, role, or group) that created the session.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of principal (user, role, or group) that created the session.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of principal (user, role, or group) that created the session.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of principal (user, role, or group) that created the session.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of principal (user, role, or group) that created the session.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of principal (user, role, or group) that created the session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of principal (user, role, or group) that created the session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of principal (user, role, or group) that created the session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The principal ID of the principal (user, role, or group) that created the
     * session.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>The principal ID of the principal (user, role, or group) that created the
     * session.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>The principal ID of the principal (user, role, or group) that created the
     * session.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>The principal ID of the principal (user, role, or group) that created the
     * session.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>The principal ID of the principal (user, role, or group) that created the
     * session.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>The principal ID of the principal (user, role, or group) that created the
     * session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The principal ID of the principal (user, role, or group) that created the
     * session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The principal ID of the principal (user, role, or group) that created the
     * session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The ARN of the session.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the session.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the session.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the session.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the session.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services account that created the
     * session.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The identifier of the Amazon Web Services account that created the
     * session.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services account that created the
     * session.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The identifier of the Amazon Web Services account that created the
     * session.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that created the
     * session.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that created the
     * session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that created the
     * session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that created the
     * session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The name of the principal that created the session.</p>
     */
    inline const Aws::String& GetUserName() const{ return m_userName; }

    /**
     * <p>The name of the principal that created the session.</p>
     */
    inline bool UserNameHasBeenSet() const { return m_userNameHasBeenSet; }

    /**
     * <p>The name of the principal that created the session.</p>
     */
    inline void SetUserName(const Aws::String& value) { m_userNameHasBeenSet = true; m_userName = value; }

    /**
     * <p>The name of the principal that created the session.</p>
     */
    inline void SetUserName(Aws::String&& value) { m_userNameHasBeenSet = true; m_userName = std::move(value); }

    /**
     * <p>The name of the principal that created the session.</p>
     */
    inline void SetUserName(const char* value) { m_userNameHasBeenSet = true; m_userName.assign(value); }

    /**
     * <p>The name of the principal that created the session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithUserName(const Aws::String& value) { SetUserName(value); return *this;}

    /**
     * <p>The name of the principal that created the session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithUserName(Aws::String&& value) { SetUserName(std::move(value)); return *this;}

    /**
     * <p>The name of the principal that created the session.</p>
     */
    inline AwsIamAccessKeySessionContextSessionIssuer& WithUserName(const char* value) { SetUserName(value); return *this;}

  private:

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_userName;
    bool m_userNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
