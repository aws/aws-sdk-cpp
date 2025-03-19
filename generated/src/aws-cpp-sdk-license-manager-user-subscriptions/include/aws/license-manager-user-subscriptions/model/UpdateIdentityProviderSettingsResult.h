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
  class UpdateIdentityProviderSettingsResult
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateIdentityProviderSettingsResult() = default;
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateIdentityProviderSettingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API UpdateIdentityProviderSettingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const IdentityProviderSummary& GetIdentityProviderSummary() const { return m_identityProviderSummary; }
    template<typename IdentityProviderSummaryT = IdentityProviderSummary>
    void SetIdentityProviderSummary(IdentityProviderSummaryT&& value) { m_identityProviderSummaryHasBeenSet = true; m_identityProviderSummary = std::forward<IdentityProviderSummaryT>(value); }
    template<typename IdentityProviderSummaryT = IdentityProviderSummary>
    UpdateIdentityProviderSettingsResult& WithIdentityProviderSummary(IdentityProviderSummaryT&& value) { SetIdentityProviderSummary(std::forward<IdentityProviderSummaryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateIdentityProviderSettingsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
