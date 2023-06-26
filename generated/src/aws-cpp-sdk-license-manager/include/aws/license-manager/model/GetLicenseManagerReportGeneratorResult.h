/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/license-manager/model/ReportGenerator.h>
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


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLicenseManagerReportGeneratorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLicenseManagerReportGeneratorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLicenseManagerReportGeneratorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ReportGenerator m_reportGenerator;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
