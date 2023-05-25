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
   * obtained using the AssumeRole operation of the Security Token Service (STS)
   * API.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/AssumedRole">AWS
   * API Reference</a></p>
   */
  class AssumedRole
  {
  public:
    AWS_MACIE2_API AssumedRole();
    AWS_MACIE2_API AssumedRole(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API AssumedRole& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Web Services access key ID that identifies the credentials.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>The Amazon Web Services access key ID that identifies the credentials.</p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services access key ID that identifies the credentials.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>The Amazon Web Services access key ID that identifies the credentials.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>The Amazon Web Services access key ID that identifies the credentials.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>The Amazon Web Services access key ID that identifies the credentials.</p>
     */
    inline AssumedRole& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>The Amazon Web Services access key ID that identifies the credentials.</p>
     */
    inline AssumedRole& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services access key ID that identifies the credentials.</p>
     */
    inline AssumedRole& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


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
    inline AssumedRole& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * entity that was used to get the credentials.</p>
     */
    inline AssumedRole& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * entity that was used to get the credentials.</p>
     */
    inline AssumedRole& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the entity that was used to get the
     * credentials.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity that was used to get the
     * credentials.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity that was used to get the
     * credentials.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity that was used to get the
     * credentials.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity that was used to get the
     * credentials.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity that was used to get the
     * credentials.</p>
     */
    inline AssumedRole& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity that was used to get the
     * credentials.</p>
     */
    inline AssumedRole& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity that was used to get the
     * credentials.</p>
     */
    inline AssumedRole& WithArn(const char* value) { SetArn(value); return *this;}


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
    inline AssumedRole& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>The unique identifier for the entity that was used to get the
     * credentials.</p>
     */
    inline AssumedRole& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the entity that was used to get the
     * credentials.</p>
     */
    inline AssumedRole& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>The details of the session that was created for the credentials, including
     * the entity that issued the session.</p>
     */
    inline const SessionContext& GetSessionContext() const{ return m_sessionContext; }

    /**
     * <p>The details of the session that was created for the credentials, including
     * the entity that issued the session.</p>
     */
    inline bool SessionContextHasBeenSet() const { return m_sessionContextHasBeenSet; }

    /**
     * <p>The details of the session that was created for the credentials, including
     * the entity that issued the session.</p>
     */
    inline void SetSessionContext(const SessionContext& value) { m_sessionContextHasBeenSet = true; m_sessionContext = value; }

    /**
     * <p>The details of the session that was created for the credentials, including
     * the entity that issued the session.</p>
     */
    inline void SetSessionContext(SessionContext&& value) { m_sessionContextHasBeenSet = true; m_sessionContext = std::move(value); }

    /**
     * <p>The details of the session that was created for the credentials, including
     * the entity that issued the session.</p>
     */
    inline AssumedRole& WithSessionContext(const SessionContext& value) { SetSessionContext(value); return *this;}

    /**
     * <p>The details of the session that was created for the credentials, including
     * the entity that issued the session.</p>
     */
    inline AssumedRole& WithSessionContext(SessionContext&& value) { SetSessionContext(std::move(value)); return *this;}

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
