/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/ReportGenerator.h>
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
  class GetLicenseManagerReportGeneratorResult
  {
  public:
    AWS_LICENSEMANAGER_API GetLicenseManagerReportGeneratorResult();
    AWS_LICENSEMANAGER_API GetLicenseManagerReportGeneratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API GetLicenseManagerReportGeneratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A report generator that creates periodic reports about your license
     * configurations.</p>
     */
    inline const ReportGenerator& GetReportGenerator() const{ return m_reportGenerator; }

    /**
     * <p>A report generator that creates periodic reports about your license
     * configurations.</p>
     */
    inline void SetReportGenerator(const ReportGenerator& value) { m_reportGenerator = value; }

    /**
     * <p>A report generator that creates periodic reports about your license
     * configurations.</p>
     */
    inline void SetReportGenerator(ReportGenerator&& value) { m_reportGenerator = std::move(value); }

    /**
     * <p>A report generator that creates periodic reports about your license
     * configurations.</p>
     */
    inline GetLicenseManagerReportGeneratorResult& WithReportGenerator(const ReportGenerator& value) { SetReportGenerator(value); return *this;}

    /**
     * <p>A report generator that creates periodic reports about your license
     * configurations.</p>
     */
    inline GetLicenseManagerReportGeneratorResult& WithReportGenerator(ReportGenerator&& value) { SetReportGenerator(std::move(value)); return *this;}

  private:

    ReportGenerator m_reportGenerator;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
