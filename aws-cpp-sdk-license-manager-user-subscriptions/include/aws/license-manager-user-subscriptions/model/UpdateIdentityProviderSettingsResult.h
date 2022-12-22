/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProviderSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LicenseManagerUserSubscriptions
{
namespace Model
{
  class UpdateIdentityProviderSettingsResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateIdentityProviderSettingsResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateIdentityProviderSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateIdentityProviderSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const IdentityProviderSummary& GetIdentityProviderSummary() const{ return m_identityProviderSummary; }

    
    inline void SetIdentityProviderSummary(const IdentityProviderSummary& value) { m_identityProviderSummary = value; }

    
    inline void SetIdentityProviderSummary(IdentityProviderSummary&& value) { m_identityProviderSummary = std::move(value); }

    
    inline UpdateIdentityProviderSettingsResult& WithIdentityProviderSummary(const IdentityProviderSummary& value) { SetIdentityProviderSummary(value); return *this;}

    
    inline UpdateIdentityProviderSettingsResult& WithIdentityProviderSummary(IdentityProviderSummary&& value) { SetIdentityProviderSummary(std::move(value)); return *this;}

  private:

    IdentityProviderSummary m_identityProviderSummary;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
