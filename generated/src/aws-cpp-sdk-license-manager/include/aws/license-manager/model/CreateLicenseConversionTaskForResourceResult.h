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
  class CreateLicenseConversionTaskForResourceResult
  {
  public:
    AWS_LICENSEMANAGER_API CreateLicenseConversionTaskForResourceResult();
    AWS_LICENSEMANAGER_API CreateLicenseConversionTaskForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API CreateLicenseConversionTaskForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the created license type conversion task.</p>
     */
    inline const Aws::String& GetLicenseConversionTaskId() const{ return m_licenseConversionTaskId; }

    /**
     * <p>The ID of the created license type conversion task.</p>
     */
    inline void SetLicenseConversionTaskId(const Aws::String& value) { m_licenseConversionTaskId = value; }

    /**
     * <p>The ID of the created license type conversion task.</p>
     */
    inline void SetLicenseConversionTaskId(Aws::String&& value) { m_licenseConversionTaskId = std::move(value); }

    /**
     * <p>The ID of the created license type conversion task.</p>
     */
    inline void SetLicenseConversionTaskId(const char* value) { m_licenseConversionTaskId.assign(value); }

    /**
     * <p>The ID of the created license type conversion task.</p>
     */
    inline CreateLicenseConversionTaskForResourceResult& WithLicenseConversionTaskId(const Aws::String& value) { SetLicenseConversionTaskId(value); return *this;}

    /**
     * <p>The ID of the created license type conversion task.</p>
     */
    inline CreateLicenseConversionTaskForResourceResult& WithLicenseConversionTaskId(Aws::String&& value) { SetLicenseConversionTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the created license type conversion task.</p>
     */
    inline CreateLicenseConversionTaskForResourceResult& WithLicenseConversionTaskId(const char* value) { SetLicenseConversionTaskId(value); return *this;}

  private:

    Aws::String m_licenseConversionTaskId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
