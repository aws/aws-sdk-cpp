/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/SecretsManagerCredentialsProvider.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   * <p>Contains information about the credential provider for user
   * administration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/CredentialsProvider">AWS
   * API Reference</a></p>
   */
  class CredentialsProvider
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API CredentialsProvider() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API CredentialsProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API CredentialsProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Identifies the Secrets Manager secret that contains credentials needed for
     * user administration in the Active Directory.</p>
     */
    inline const SecretsManagerCredentialsProvider& GetSecretsManagerCredentialsProvider() const { return m_secretsManagerCredentialsProvider; }
    inline bool SecretsManagerCredentialsProviderHasBeenSet() const { return m_secretsManagerCredentialsProviderHasBeenSet; }
    template<typename SecretsManagerCredentialsProviderT = SecretsManagerCredentialsProvider>
    void SetSecretsManagerCredentialsProvider(SecretsManagerCredentialsProviderT&& value) { m_secretsManagerCredentialsProviderHasBeenSet = true; m_secretsManagerCredentialsProvider = std::forward<SecretsManagerCredentialsProviderT>(value); }
    template<typename SecretsManagerCredentialsProviderT = SecretsManagerCredentialsProvider>
    CredentialsProvider& WithSecretsManagerCredentialsProvider(SecretsManagerCredentialsProviderT&& value) { SetSecretsManagerCredentialsProvider(std::forward<SecretsManagerCredentialsProviderT>(value)); return *this;}
    ///@}
  private:

    SecretsManagerCredentialsProvider m_secretsManagerCredentialsProvider;
    bool m_secretsManagerCredentialsProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
