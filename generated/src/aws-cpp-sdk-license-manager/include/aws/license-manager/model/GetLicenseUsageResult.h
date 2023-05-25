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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLicenseUsageResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLicenseUsageResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLicenseUsageResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LicenseUsage m_licenseUsage;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
