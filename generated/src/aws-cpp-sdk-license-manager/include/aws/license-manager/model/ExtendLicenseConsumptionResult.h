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


    ///@{
    /**
     * <p>License consumption token.</p>
     */
    inline const Aws::String& GetLicenseConsumptionToken() const{ return m_licenseConsumptionToken; }
    inline void SetLicenseConsumptionToken(const Aws::String& value) { m_licenseConsumptionToken = value; }
    inline void SetLicenseConsumptionToken(Aws::String&& value) { m_licenseConsumptionToken = std::move(value); }
    inline void SetLicenseConsumptionToken(const char* value) { m_licenseConsumptionToken.assign(value); }
    inline ExtendLicenseConsumptionResult& WithLicenseConsumptionToken(const Aws::String& value) { SetLicenseConsumptionToken(value); return *this;}
    inline ExtendLicenseConsumptionResult& WithLicenseConsumptionToken(Aws::String&& value) { SetLicenseConsumptionToken(std::move(value)); return *this;}
    inline ExtendLicenseConsumptionResult& WithLicenseConsumptionToken(const char* value) { SetLicenseConsumptionToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Date and time at which the license consumption expires.</p>
     */
    inline const Aws::String& GetExpiration() const{ return m_expiration; }
    inline void SetExpiration(const Aws::String& value) { m_expiration = value; }
    inline void SetExpiration(Aws::String&& value) { m_expiration = std::move(value); }
    inline void SetExpiration(const char* value) { m_expiration.assign(value); }
    inline ExtendLicenseConsumptionResult& WithExpiration(const Aws::String& value) { SetExpiration(value); return *this;}
    inline ExtendLicenseConsumptionResult& WithExpiration(Aws::String&& value) { SetExpiration(std::move(value)); return *this;}
    inline ExtendLicenseConsumptionResult& WithExpiration(const char* value) { SetExpiration(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ExtendLicenseConsumptionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ExtendLicenseConsumptionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ExtendLicenseConsumptionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_licenseConsumptionToken;

    Aws::String m_expiration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
