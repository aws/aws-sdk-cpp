/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mailmanager/MailManager_EXPORTS.h>
#include <aws/mailmanager/model/IngressPointPasswordConfiguration.h>
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
   * <p>The authentication configuration for the ingress endpoint
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mailmanager-2023-10-17/IngressPointAuthConfiguration">AWS
   * API Reference</a></p>
   */
  class IngressPointAuthConfiguration
  {
  public:
    AWS_MAILMANAGER_API IngressPointAuthConfiguration() = default;
    AWS_MAILMANAGER_API IngressPointAuthConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API IngressPointAuthConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAILMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ingress endpoint password configuration for the ingress endpoint
     * resource.</p>
     */
    inline const IngressPointPasswordConfiguration& GetIngressPointPasswordConfiguration() const { return m_ingressPointPasswordConfiguration; }
    inline bool IngressPointPasswordConfigurationHasBeenSet() const { return m_ingressPointPasswordConfigurationHasBeenSet; }
    template<typename IngressPointPasswordConfigurationT = IngressPointPasswordConfiguration>
    void SetIngressPointPasswordConfiguration(IngressPointPasswordConfigurationT&& value) { m_ingressPointPasswordConfigurationHasBeenSet = true; m_ingressPointPasswordConfiguration = std::forward<IngressPointPasswordConfigurationT>(value); }
    template<typename IngressPointPasswordConfigurationT = IngressPointPasswordConfiguration>
    IngressPointAuthConfiguration& WithIngressPointPasswordConfiguration(IngressPointPasswordConfigurationT&& value) { SetIngressPointPasswordConfiguration(std::forward<IngressPointPasswordConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ingress endpoint SecretsManager::Secret ARN configuration for the ingress
     * endpoint resource.</p>
     */
    inline const Aws::String& GetSecretArn() const { return m_secretArn; }
    inline bool SecretArnHasBeenSet() const { return m_secretArnHasBeenSet; }
    template<typename SecretArnT = Aws::String>
    void SetSecretArn(SecretArnT&& value) { m_secretArnHasBeenSet = true; m_secretArn = std::forward<SecretArnT>(value); }
    template<typename SecretArnT = Aws::String>
    IngressPointAuthConfiguration& WithSecretArn(SecretArnT&& value) { SetSecretArn(std::forward<SecretArnT>(value)); return *this;}
    ///@}
  private:

    IngressPointPasswordConfiguration m_ingressPointPasswordConfiguration;
    bool m_ingressPointPasswordConfigurationHasBeenSet = false;

    Aws::String m_secretArn;
    bool m_secretArnHasBeenSet = false;
  };

} // namespace Model
} // namespace MailManager
} // namespace Aws
