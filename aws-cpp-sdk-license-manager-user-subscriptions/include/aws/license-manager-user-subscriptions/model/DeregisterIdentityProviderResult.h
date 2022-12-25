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
  class DeregisterIdentityProviderResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeregisterIdentityProviderResult();
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeregisterIdentityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeregisterIdentityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata that describes the results of an identity provider operation.</p>
     */
    inline const IdentityProviderSummary& GetIdentityProviderSummary() const{ return m_identityProviderSummary; }

    /**
     * <p>Metadata that describes the results of an identity provider operation.</p>
     */
    inline void SetIdentityProviderSummary(const IdentityProviderSummary& value) { m_identityProviderSummary = value; }

    /**
     * <p>Metadata that describes the results of an identity provider operation.</p>
     */
    inline void SetIdentityProviderSummary(IdentityProviderSummary&& value) { m_identityProviderSummary = std::move(value); }

    /**
     * <p>Metadata that describes the results of an identity provider operation.</p>
     */
    inline DeregisterIdentityProviderResult& WithIdentityProviderSummary(const IdentityProviderSummary& value) { SetIdentityProviderSummary(value); return *this;}

    /**
     * <p>Metadata that describes the results of an identity provider operation.</p>
     */
    inline DeregisterIdentityProviderResult& WithIdentityProviderSummary(IdentityProviderSummary&& value) { SetIdentityProviderSummary(std::move(value)); return *this;}

  private:

    IdentityProviderSummary m_identityProviderSummary;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
