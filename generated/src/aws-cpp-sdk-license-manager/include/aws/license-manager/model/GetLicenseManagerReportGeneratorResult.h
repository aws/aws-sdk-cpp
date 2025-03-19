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
    AWS_LICENSEMANAGER_API GetLicenseManagerReportGeneratorResult() = default;
    AWS_LICENSEMANAGER_API GetLicenseManagerReportGeneratorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API GetLicenseManagerReportGeneratorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A report generator that creates periodic reports about your license
     * configurations.</p>
     */
    inline const ReportGenerator& GetReportGenerator() const { return m_reportGenerator; }
    template<typename ReportGeneratorT = ReportGenerator>
    void SetReportGenerator(ReportGeneratorT&& value) { m_reportGeneratorHasBeenSet = true; m_reportGenerator = std::forward<ReportGeneratorT>(value); }
    template<typename ReportGeneratorT = ReportGenerator>
    GetLicenseManagerReportGeneratorResult& WithReportGenerator(ReportGeneratorT&& value) { SetReportGenerator(std::forward<ReportGeneratorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetLicenseManagerReportGeneratorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ReportGenerator m_reportGenerator;
    bool m_reportGeneratorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
