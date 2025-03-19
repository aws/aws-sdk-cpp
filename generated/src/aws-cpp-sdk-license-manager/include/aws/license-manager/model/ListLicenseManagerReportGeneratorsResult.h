/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager/LicenseManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListLicenseManagerReportGeneratorsResult
  {
  public:
    AWS_LICENSEMANAGER_API ListLicenseManagerReportGeneratorsResult() = default;
    AWS_LICENSEMANAGER_API ListLicenseManagerReportGeneratorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LICENSEMANAGER_API ListLicenseManagerReportGeneratorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A report generator that creates periodic reports about your license
     * configurations.</p>
     */
    inline const Aws::Vector<ReportGenerator>& GetReportGenerators() const { return m_reportGenerators; }
    template<typename ReportGeneratorsT = Aws::Vector<ReportGenerator>>
    void SetReportGenerators(ReportGeneratorsT&& value) { m_reportGeneratorsHasBeenSet = true; m_reportGenerators = std::forward<ReportGeneratorsT>(value); }
    template<typename ReportGeneratorsT = Aws::Vector<ReportGenerator>>
    ListLicenseManagerReportGeneratorsResult& WithReportGenerators(ReportGeneratorsT&& value) { SetReportGenerators(std::forward<ReportGeneratorsT>(value)); return *this;}
    template<typename ReportGeneratorsT = ReportGenerator>
    ListLicenseManagerReportGeneratorsResult& AddReportGenerators(ReportGeneratorsT&& value) { m_reportGeneratorsHasBeenSet = true; m_reportGenerators.emplace_back(std::forward<ReportGeneratorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLicenseManagerReportGeneratorsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLicenseManagerReportGeneratorsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReportGenerator> m_reportGenerators;
    bool m_reportGeneratorsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManager
} // namespace Aws
