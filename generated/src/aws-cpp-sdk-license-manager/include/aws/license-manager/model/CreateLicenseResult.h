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
  class CreateLicenseResult
  {
  public:
    AWS_LICENSEMANAGER_API CreateLicenseResult();
    AWS_LICENSEMANAGER_API CreateLicenseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API CreateLicenseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline const Aws::String& GetLicenseArn() const{ return m_licenseArn; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(const Aws::String& value) { m_licenseArn = value; }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(Aws::String&& value) { m_licenseArn = std::move(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline void SetLicenseArn(const char* value) { m_licenseArn.assign(value); }

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline CreateLicenseResult& WithLicenseArn(const Aws::String& value) { SetLicenseArn(value); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline CreateLicenseResult& WithLicenseArn(Aws::String&& value) { SetLicenseArn(std::move(value)); return *this;}

    /**
     * <p>Amazon Resource Name (ARN) of the license.</p>
     */
    inline CreateLicenseResult& WithLicenseArn(const char* value) { SetLicenseArn(value); return *this;}


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
    inline CreateLicenseResult& WithStatus(const LicenseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>License status.</p>
     */
    inline CreateLicenseResult& WithStatus(LicenseStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>License version.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>License version.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_version = value; }

    /**
     * <p>License version.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_version = std::move(value); }

    /**
     * <p>License version.</p>
     */
    inline void SetVersion(const char* value) { m_version.assign(value); }

    /**
     * <p>License version.</p>
     */
    inline CreateLicenseResult& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>License version.</p>
     */
    inline CreateLicenseResult& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}

    /**
     * <p>License version.</p>
     */
    inline CreateLicenseResult& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:

    Aws::String m_licenseArn;

    LicenseStatus m_status;

    Aws::String m_version;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
