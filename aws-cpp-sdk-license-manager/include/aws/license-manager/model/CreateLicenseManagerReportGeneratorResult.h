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
  class CreateLicenseManagerReportGeneratorResult
  {
  public:
    AWS_LICENSEMANAGER_API CreateLicenseManagerReportGeneratorResult();
    AWS_LICENSEMANAGER_API CreateLicenseManagerReportGeneratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API CreateLicenseManagerReportGeneratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the new report generator.</p>
     */
    inline const Aws::String& GetLicenseManagerReportGeneratorArn() const{ return m_licenseManagerReportGeneratorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new report generator.</p>
     */
    inline void SetLicenseManagerReportGeneratorArn(const Aws::String& value) { m_licenseManagerReportGeneratorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the new report generator.</p>
     */
    inline void SetLicenseManagerReportGeneratorArn(Aws::String&& value) { m_licenseManagerReportGeneratorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new report generator.</p>
     */
    inline void SetLicenseManagerReportGeneratorArn(const char* value) { m_licenseManagerReportGeneratorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the new report generator.</p>
     */
    inline CreateLicenseManagerReportGeneratorResult& WithLicenseManagerReportGeneratorArn(const Aws::String& value) { SetLicenseManagerReportGeneratorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new report generator.</p>
     */
    inline CreateLicenseManagerReportGeneratorResult& WithLicenseManagerReportGeneratorArn(Aws::String&& value) { SetLicenseManagerReportGeneratorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the new report generator.</p>
     */
    inline CreateLicenseManagerReportGeneratorResult& WithLicenseManagerReportGeneratorArn(const char* value) { SetLicenseManagerReportGeneratorArn(value); return *this;}

  private:

    Aws::String m_licenseManagerReportGeneratorArn;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
