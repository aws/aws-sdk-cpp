/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager/model/LicenseStatus.h>
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
  class CreateLicenseVersionResult
  {
  public:
    AWS_LICENSEMANAGER_API CreateLicenseVersionResult();
    AWS_LICENSEMANAGER_API CreateLicenseVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API CreateLicenseVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>License ARN.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }

    /**
     * <p>License ARN.</p>
     */
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArn = value; }

    /**
     * <p>License ARN.</p>
     */
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArn = std::move(value); }

    /**
     * <p>License ARN.</p>
     */
    inline void SetLicenseArn(const char* value) { m_licenseArn.assign(value); }

    /**
     * <p>License ARN.</p>
     */
    inline CreateLicenseVersionResult& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}

    /**
     * <p>License ARN.</p>
     */
    inline CreateLicenseVersionResult& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}

    /**
     * <p>License ARN.</p>
     */
    inline CreateLicenseVersionResult& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}


    /**
     * <p>New version of the license.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>New version of the license.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>New version of the license.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>New version of the license.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>New version of the license.</p>
     */
    inline CreateLicenseVersionResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>New version of the license.</p>
     */
    inline CreateLicenseVersionResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>New version of the license.</p>
     */
    inline CreateLicenseVersionResult& WithVersion(const char* value) { SetVersion(value); return *this;}


    /**
     * <p>License status.</p>
     */
    inline const LicenseStatus& GetStatus() const{ return m_status; }

    /**
     * <p>License status.</p>
     */
    inline void SetStatus(const LicenseStatus& value) { m_status = value; }

    /**
     * <p>License status.</p>
     */
    inline void SetStatus(LicenseStatus&& value) { m_status = std::move(value); }

    /**
     * <p>License status.</p>
     */
    inline CreateLicenseVersionResult& WithStatus(const LicenseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>License status.</p>
     */
    inline CreateLicenseVersionResult& WithStatus(LicenseStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_licenseArn;

    Aws::String m_version;

    LicenseStatus m_status;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
