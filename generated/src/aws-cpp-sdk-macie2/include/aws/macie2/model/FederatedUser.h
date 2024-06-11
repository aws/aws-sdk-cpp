/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/macie2/model/SessionContext.h>
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
   * <p>Provides information about an identity that performed an action on an
   * affected resource by using temporary security credentials. The credentials were
   * obtained using the GetFederationToken operation of the Security Token Service
   * (STS) API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/FederatedUser">AWS
   * API Reference</a></p>
   */
  class FederatedUser
  {
  public:
    AWS_MACIE2_API FederatedUser();
    AWS_MACIE2_API FederatedUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API FederatedUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services access key ID that identifies the credentials.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }
    inline FederatedUser& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}
    inline FederatedUser& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}
    inline FederatedUser& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * entity that was used to get the credentials.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline FederatedUser& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline FederatedUser& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline FederatedUser& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the entity that was used to get the
     * credentials.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline FederatedUser& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline FederatedUser& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline FederatedUser& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the entity that was used to get the
     * credentials.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }
    inline FederatedUser& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}
    inline FederatedUser& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}
    inline FederatedUser& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the session that was created for the credentials, including
     * the entity that issued the session.</p>
     */
    inline const SessionContext& GetSessionContext() const{ return m_sessionContext; }
    inline bool SessionContextHasBeenSet() const { return m_sessionContextHasBeenSet; }
    inline void SetSessionContext(const SessionContext& value) { m_sessionContextHasBeenSet = true; m_sessionContext = value; }
    inline void SetSessionContext(SessionContext&& value) { m_sessionContextHasBeenSet = true; m_sessionContext = std::move(value); }
    inline FederatedUser& WithSessionContext(const SessionContext& value) { SetSessionContext(value); return *this;}
    inline FederatedUser& WithSessionContext(SessionContext&& value) { SetSessionContext(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet = false;

    SessionContext m_sessionContext;
    bool m_sessionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
