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
    AWS_MACIE2_API FederatedUser() = default;
    AWS_MACIE2_API FederatedUser(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API FederatedUser& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Web Services access key ID that identifies the credentials.</p>
     */
    inline const Aws::String& GetAccessKeyId() const { return m_accessKeyId; }
    inline bool AccessKeyIdHasBeenSet() const { return m_accessKeyIdHasBeenSet; }
    template<typename AccessKeyIdT = Aws::String>
    void SetAccessKeyId(AccessKeyIdT&& value) { m_accessKeyIdHasBeenSet = true; m_accessKeyId = std::forward<AccessKeyIdT>(value); }
    template<typename AccessKeyIdT = Aws::String>
    FederatedUser& WithAccessKeyId(AccessKeyIdT&& value) { SetAccessKeyId(std::forward<AccessKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the Amazon Web Services account that owns the
     * entity that was used to get the credentials.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    FederatedUser& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the entity that was used to get the
     * credentials.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    FederatedUser& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the entity that was used to get the
     * credentials.</p>
     */
    inline const Aws::String& GetPrincipalId() const { return m_principalId; }
    inline bool PrincipalIdHasBeenSet() const { return m_principalIdHasBeenSet; }
    template<typename PrincipalIdT = Aws::String>
    void SetPrincipalId(PrincipalIdT&& value) { m_principalIdHasBeenSet = true; m_principalId = std::forward<PrincipalIdT>(value); }
    template<typename PrincipalIdT = Aws::String>
    FederatedUser& WithPrincipalId(PrincipalIdT&& value) { SetPrincipalId(std::forward<PrincipalIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The details of the session that was created for the credentials, including
     * the entity that issued the session.</p>
     */
    inline const SessionContext& GetSessionContext() const { return m_sessionContext; }
    inline bool SessionContextHasBeenSet() const { return m_sessionContextHasBeenSet; }
    template<typename SessionContextT = SessionContext>
    void SetSessionContext(SessionContextT&& value) { m_sessionContextHasBeenSet = true; m_sessionContext = std::forward<SessionContextT>(value); }
    template<typename SessionContextT = SessionContext>
    FederatedUser& WithSessionContext(SessionContextT&& value) { SetSessionContext(std::forward<SessionContextT>(value)); return *this;}
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
