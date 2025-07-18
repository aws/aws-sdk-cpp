/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
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
namespace MailManager
{
namespace Model
{

  /**
   * <p>The configuration of the ingress endpoint resource.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressPointConfiguration">AWS
   * API Reference</a></p>
   */
  class IngressPointConfiguration
  {
  public:
    AWS_MAILMANAGER_API IngressPointConfiguration() = default;
    AWS_MAILMANAGER_API IngressPointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressPointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The password of the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetSmtpPassword() const { return m_smtpPassword; }
    inline bool SmtpPasswordHasBeenSet() const { return m_smtpPasswordHasBeenSet; }
    template<typename SmtpPasswordT = Aws::String>
    void SetSmtpPassword(SmtpPasswordT&& value) { m_smtpPasswordHasBeenSet = true; m_smtpPassword = std::forward<SmtpPasswordT>(value); }
    template<typename SmtpPasswordT = Aws::String>
    IngressPointConfiguration& WithSmtpPassword(SmtpPasswordT&& value) { SetSmtpPassword(std::forward<SmtpPasswordT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The SecretsManager::Secret ARN of the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    IngressPointConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_smtpPassword;
    bool m_smtpPasswordHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
