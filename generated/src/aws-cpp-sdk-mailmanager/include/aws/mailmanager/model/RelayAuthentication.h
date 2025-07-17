/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mailmanager/model/NoAuthentication.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>Authentication for the relay destination server—specify the secretARN where
   * the SMTP credentials are stored, or specify an empty NoAuthentication structure
   * if the relay destination server does not require SMTP credential
   * authentication.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/RelayAuthentication">AWS
   * API Reference</a></p>
   */
  class RelayAuthentication
  {
  public:
    AWS_MAILMANAGER_API RelayAuthentication() = default;
    AWS_MAILMANAGER_API RelayAuthentication(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API RelayAuthentication& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the secret created in secrets manager where the relay server's
     * SMTP credentials are stored.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    RelayAuthentication& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Keep an empty structure if the relay destination server does not require SMTP
     * credential authentication.</p>
     */
    inline const NoAuthentication& GetNoAuthentication() const { return m_noAuthentication; }
    inline bool NoAuthenticationHasBeenSet() const { return m_noAuthenticationHasBeenSet; }
    template<typename NoAuthenticationT = NoAuthentication>
    void SetNoAuthentication(NoAuthenticationT&& value) { m_noAuthenticationHasBeenSet = true; m_noAuthentication = std::forward<NoAuthenticationT>(value); }
    template<typename NoAuthenticationT = NoAuthentication>
    RelayAuthentication& WithNoAuthentication(NoAuthenticationT&& value) { SetNoAuthentication(std::forward<NoAuthenticationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    NoAuthentication m_noAuthentication;
    bool m_noAuthenticationHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
