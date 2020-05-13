/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Reserved for future use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01T00:00:00Z/FederatedUser">AWS
   * API Reference</a></p>
   */
  class AWS_MACIE2_API FederatedUser
  {
  public:
    FederatedUser();
    FederatedUser(Aws::Utils::Json::JsonView jsonValue);
    FederatedUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetAccessKeyId() const{ return m_accessKeyId; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAccessKeyId(const Aws::String& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAccessKeyId(Aws::String&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAccessKeyId(const char* value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithAccessKeyId(const Aws::String& value) { SetAccessKeyId(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithAccessKeyId(Aws::String&& value) { SetAccessKeyId(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithAccessKeyId(const char* value) { SetAccessKeyId(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const Aws::String& GetPrincipalId() const{ return m_principalId; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetPrincipalId(const Aws::String& value) { m_principalIdHasBeenSet = true; m_principalId = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetPrincipalId(Aws::String&& value) { m_principalIdHasBeenSet = true; m_principalId = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetPrincipalId(const char* value) { m_principalIdHasBeenSet = true; m_principalId.assign(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithPrincipalId(const Aws::String& value) { SetPrincipalId(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithPrincipalId(Aws::String&& value) { SetPrincipalId(std::move(value)); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithPrincipalId(const char* value) { SetPrincipalId(value); return *this;}


    /**
     * <p>Reserved for future use.</p>
     */
    inline const SessionContext& GetSessionContext() const{ return m_sessionContext; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline bool SessionContextHasBeenSet() const { return m_sessionContextHasBeenSet; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetSessionContext(const SessionContext& value) { m_sessionContextHasBeenSet = true; m_sessionContext = value; }

    /**
     * <p>Reserved for future use.</p>
     */
    inline void SetSessionContext(SessionContext&& value) { m_sessionContextHasBeenSet = true; m_sessionContext = std::move(value); }

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithSessionContext(const SessionContext& value) { SetSessionContext(value); return *this;}

    /**
     * <p>Reserved for future use.</p>
     */
    inline FederatedUser& WithSessionContext(SessionContext&& value) { SetSessionContext(std::move(value)); return *this;}

  private:

    Aws::String m_accessKeyId;
    bool m_accessKeyIdHasBeenSet;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet;

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_principalId;
    bool m_principalIdHasBeenSet;

    SessionContext m_sessionContext;
    bool m_sessionContextHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
