/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/LicenseUsage.h>
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
  class GetLicenseUsageResult
  {
  public:
    AWS_LICENSEMANAGER_API GetLicenseUsageResult() = default;
    AWS_LICENSEMANAGER_API GetLicenseUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API GetLicenseUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>License usage details.</p>
     */
    inline const LicenseUsage& GetLicenseUsage() const { return m_licenseUsage; }
    template<typename LicenseUsageT = LicenseUsage>
    void SetLicenseUsage(LicenseUsageT&& value) { m_licenseUsageHasBeenSet = true; m_licenseUsage = std::forward<LicenseUsageT>(value); }
    template<typename LicenseUsageT = LicenseUsage>
    GetLicenseUsageResult& WithLicenseUsage(LicenseUsageT&& value) { SetLicenseUsage(std::forward<LicenseUsageT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLicenseUsageResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    LicenseUsage m_licenseUsage;
    bool m_licenseUsageHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
