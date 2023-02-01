/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/LicenseUsage.h>
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
    AWS_LICENSEMANAGER_API GetLicenseUsageResult();
    AWS_LICENSEMANAGER_API GetLicenseUsageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API GetLicenseUsageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>License usage details.</p>
     */
    inline const LicenseUsage& GetLicenseUsage() const{ return m_licenseUsage; }

    /**
     * <p>License usage details.</p>
     */
    inline void SetLicenseUsage(const LicenseUsage& value) { m_licenseUsage = value; }

    /**
     * <p>License usage details.</p>
     */
    inline void SetLicenseUsage(LicenseUsage&& value) { m_licenseUsage = std::move(value); }

    /**
     * <p>License usage details.</p>
     */
    inline GetLicenseUsageResult& WithLicenseUsage(const LicenseUsage& value) { SetLicenseUsage(value); return *this;}

    /**
     * <p>License usage details.</p>
     */
    inline GetLicenseUsageResult& WithLicenseUsage(LicenseUsage&& value) { SetLicenseUsage(std::move(value)); return *this;}

  private:

    LicenseUsage m_licenseUsage;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
