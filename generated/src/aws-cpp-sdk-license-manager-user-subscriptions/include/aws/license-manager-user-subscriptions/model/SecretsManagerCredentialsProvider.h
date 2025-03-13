/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
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
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   * <p>Contains a credentials secret that's stored in Secrets Manager.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/SecretsManagerCredentialsProvider">AWS
   * API Reference</a></p>
   */
  class SecretsManagerCredentialsProvider
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API SecretsManagerCredentialsProvider() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API SecretsManagerCredentialsProvider(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API SecretsManagerCredentialsProvider& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the Secrets Manager secret that contains credentials.</p>
     */
    inline const Aws::String& GetSecretId() const { return m_secretId; }
    inline bool SecretIdHasBeenSet() const { return m_secretIdHasBeenSet; }
    template<typename SecretIdT = Aws::String>
    void SetSecretId(SecretIdT&& value) { m_secretIdHasBeenSet = true; m_secretId = std::forward<SecretIdT>(value); }
    template<typename SecretIdT = Aws::String>
    SecretsManagerCredentialsProvider& WithSecretId(SecretIdT&& value) { SetSecretId(std::forward<SecretIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_secretId;
    bool m_secretIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
