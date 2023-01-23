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
    AWS_LICENSEMANAGER_API ExtendLicenseConsumptionResult();
    AWS_LICENSEMANAGER_API ExtendLicenseConsumptionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ExtendLicenseConsumptionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>License consumption token.</p>
     */
    inline const Aws::String& GetLicenseConsumptionToken() const{ return m_licenseConsumptionToken; }

    /**
     * <p>License consumption token.</p>
     */
    inline void SetLicenseConsumptionToken(const Aws::String& value) { m_licenseConsumptionToken = value; }

    /**
     * <p>License consumption token.</p>
     */
    inline void SetLicenseConsumptionToken(Aws::String&& value) { m_licenseConsumptionToken = std::move(value); }

    /**
     * <p>License consumption token.</p>
     */
    inline void SetLicenseConsumptionToken(const char* value) { m_licenseConsumptionToken.assign(value); }

    /**
     * <p>License consumption token.</p>
     */
    inline ExtendLicenseConsumptionResult& WithLicenseConsumptionToken(const Aws::String& value) { SetLicenseConsumptionToken(value); return *this;}

    /**
     * <p>License consumption token.</p>
     */
    inline ExtendLicenseConsumptionResult& WithLicenseConsumptionToken(Aws::String&& value) { SetLicenseConsumptionToken(std::move(value)); return *this;}

    /**
     * <p>License consumption token.</p>
     */
    inline ExtendLicenseConsumptionResult& WithLicenseConsumptionToken(const char* value) { SetLicenseConsumptionToken(value); return *this;}


    /**
     * <p>Date and time at which the license consumption expires.</p>
     */
    inline const Aws::String& GetExpiration() const{ return m_expiration; }

    /**
     * <p>Date and time at which the license consumption expires.</p>
     */
    inline void SetExpiration(const Aws::String& value) { m_expiration = value; }

    /**
     * <p>Date and time at which the license consumption expires.</p>
     */
    inline void SetExpiration(Aws::String&& value) { m_expiration = std::move(value); }

    /**
     * <p>Date and time at which the license consumption expires.</p>
     */
    inline void SetExpiration(const char* value) { m_expiration.assign(value); }

    /**
     * <p>Date and time at which the license consumption expires.</p>
     */
    inline ExtendLicenseConsumptionResult& WithExpiration(const Aws::String& value) { SetExpiration(value); return *this;}

    /**
     * <p>Date and time at which the license consumption expires.</p>
     */
    inline ExtendLicenseConsumptionResult& WithExpiration(Aws::String&& value) { SetExpiration(std::move(value)); return *this;}

    /**
     * <p>Date and time at which the license consumption expires.</p>
     */
    inline ExtendLicenseConsumptionResult& WithExpiration(const char* value) { SetExpiration(value); return *this;}

  private:

    Aws::String m_licenseConsumptionToken;

    Aws::String m_expiration;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
