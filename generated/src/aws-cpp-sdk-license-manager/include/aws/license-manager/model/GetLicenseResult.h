/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/License.h>
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
  class GetLicenseResult
  {
  public:
    AWS_LICENSEMANAGER_API GetLicenseResult();
    AWS_LICENSEMANAGER_API GetLicenseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API GetLicenseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>License details.</p>
     */
    inline const License& GetLicense() const{ return m_license; }

    /**
     * <p>License details.</p>
     */
    inline void SetLicense(const License& value) { m_license = value; }

    /**
     * <p>License details.</p>
     */
    inline void SetLicense(License&& value) { m_license = std::move(value); }

    /**
     * <p>License details.</p>
     */
    inline GetLicenseResult& WithLicense(const License& value) { SetLicense(value); return *this;}

    /**
     * <p>License details.</p>
     */
    inline GetLicenseResult& WithLicense(License&& value) { SetLicense(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLicenseResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLicenseResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLicenseResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    License m_license;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
