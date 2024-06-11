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
    AWS_MAILMANAGER_API IngressPointConfiguration();
    AWS_MAILMANAGER_API IngressPointConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressPointConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The SecretsManager::Secret ARN of the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetSecretArn() const{ return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    inline void SetSecretArn(const Aws::String& value) { m_secretArnHasBeenSet = true; m_secretArn = value; }
    inline void SetSecretArn(Aws::String&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::move(value); }
    inline void SetSecretArn(const char* value) { m_secretArnHasBeenSet = true; m_secretArn.assign(value); }
    inline IngressPointConfiguration& WithSecretArn(const Aws::String& value) { SetSecretArn(value); return *this;}
    inline IngressPointConfiguration& WithSecretArn(Aws::String&& value) { SetSecretArn(std::move(value)); return *this;}
    inline IngressPointConfiguration& WithSecretArn(const char* value) { SetSecretArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The password of the ingress endpoint resource.</p>
     */
    inline const Aws::String& GetSmtpPassword() const{ return m_smtpPassword; }
    inline bool SmtpPasswordHasBeenSet() const { return m_smtpPasswordHasBeenSet; }
    inline void SetSmtpPassword(const Aws::String& value) { m_smtpPasswordHasBeenSet = true; m_smtpPassword = value; }
    inline void SetSmtpPassword(Aws::String&& value) { m_smtpPasswordHasBeenSet = true; m_smtpPassword = std::move(value); }
    inline void SetSmtpPassword(const char* value) { m_smtpPasswordHasBeenSet = true; m_smtpPassword.assign(value); }
    inline IngressPointConfiguration& WithSmtpPassword(const Aws::String& value) { SetSmtpPassword(value); return *this;}
    inline IngressPointConfiguration& WithSmtpPassword(Aws::String&& value) { SetSmtpPassword(std::move(value)); return *this;}
    inline IngressPointConfiguration& WithSmtpPassword(const char* value) { SetSmtpPassword(value); return *this;}
    ///@}
  private:

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;

    Aws::String m_smtpPassword;
    bool m_smtpPasswordHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
