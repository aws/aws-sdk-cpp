/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/CredentialsProvider.h>
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
   * <p>Server settings that are specific to a Remote Desktop Services (RDS) license
   * server.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-user-subscriptions-2018-05-10/RdsSalSettings">AWS
   * API Reference</a></p>
   */
  class RdsSalSettings
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API RdsSalSettings() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API RdsSalSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API RdsSalSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <code>CredentialsProvider</code> resource contains a reference to the
     * credentials provider that's used for RDS license server user administration.</p>
     */
    inline const CredentialsProvider& GetRdsSalCredentialsProvider() const { return m_rdsSalCredentialsProvider; }
    inline bool RdsSalCredentialsProviderHasBeenSet() const { return m_rdsSalCredentialsProviderHasBeenSet; }
    template<typename RdsSalCredentialsProviderT = CredentialsProvider>
    void SetRdsSalCredentialsProvider(RdsSalCredentialsProviderT&& value) { m_rdsSalCredentialsProviderHasBeenSet = true; m_rdsSalCredentialsProvider = std::forward<RdsSalCredentialsProviderT>(value); }
    template<typename RdsSalCredentialsProviderT = CredentialsProvider>
    RdsSalSettings& WithRdsSalCredentialsProvider(RdsSalCredentialsProviderT&& value) { SetRdsSalCredentialsProvider(std::forward<RdsSalCredentialsProviderT>(value)); return *this;}
    ///@}
  private:

    CredentialsProvider m_rdsSalCredentialsProvider;
    bool m_rdsSalCredentialsProviderHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
