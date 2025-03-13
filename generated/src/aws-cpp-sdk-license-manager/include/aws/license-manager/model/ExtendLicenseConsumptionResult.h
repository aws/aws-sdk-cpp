/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
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
namespace LicenseManager
{
namespace Model
{
  class ExtendLicenseConsumptionResult
  {
  public:
    AWS_LICENSEMANAGER_API ExtendLicenseConsumptionResult() = default;
    AWS_LICENSEMANAGER_API ExtendLicenseConsumptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ExtendLicenseConsumptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>License consumption token.</p>
     */
    inline const Aws::String& GetLicenseConsumptionToken() const { return m_licenseConsumptionToken; }
    template<typename LicenseConsumptionTokenT = Aws::String>
    void SetLicenseConsumptionToken(LicenseConsumptionTokenT&& value) { m_licenseConsumptionTokenHasBeenSet = true; m_licenseConsumptionToken = std::forward<LicenseConsumptionTokenT>(value); }
    template<typename LicenseConsumptionTokenT = Aws::String>
    ExtendLicenseConsumptionResult& WithLicenseConsumptionToken(LicenseConsumptionTokenT&& value) { SetLicenseConsumptionToken(std::forward<LicenseConsumptionTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time at which the license consumption expires.</p>
     */
    inline const Aws::String& GetExpiration() const { return m_expiration; }
    template<typename ExpirationT = Aws::String>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::String>
    ExtendLicenseConsumptionResult& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ExtendLicenseConsumptionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_licenseConsumptionToken;
    bool m_licenseConsumptionTokenHasBeenSet = false;

    Aws::String m_expiration;
    bool m_expirationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
