/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProviderSummary.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeregisterIdentityProviderResult() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeregisterIdentityProviderResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API DeregisterIdentityProviderResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Metadata that describes the results of an identity provider operation.</p>
     */
    inline const IdentityProviderSummary& GetIdentityProviderSummary() const { return m_identityProviderSummary; }
    template<typename IdentityProviderSummaryT = IdentityProviderSummary>
    void SetIdentityProviderSummary(IdentityProviderSummaryT&& value) { m_identityProviderSummaryHasBeenSet = true; m_identityProviderSummary = std::forward<IdentityProviderSummaryT>(value); }
    template<typename IdentityProviderSummaryT = IdentityProviderSummary>
    DeregisterIdentityProviderResult& WithIdentityProviderSummary(IdentityProviderSummaryT&& value) { SetIdentityProviderSummary(std::forward<IdentityProviderSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeregisterIdentityProviderResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    IdentityProviderSummary m_identityProviderSummary;
    bool m_identityProviderSummaryHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
