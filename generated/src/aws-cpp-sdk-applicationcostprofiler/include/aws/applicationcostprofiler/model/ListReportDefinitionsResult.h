/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/applicationcostprofiler/model/ReportDefinition.h>
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
namespace ApplicationCostProfiler
{
namespace Model
{
  class ListReportDefinitionsResult
  {
  public:
    AWS_APPLICATIONCOSTPROFILER_API ListReportDefinitionsResult() = default;
    AWS_APPLICATIONCOSTPROFILER_API ListReportDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONCOSTPROFILER_API ListReportDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The retrieved reports.</p>
     */
    inline const Aws::Vector<ReportDefinition>& GetReportDefinitions() const { return m_reportDefinitions; }
    template<typename ReportDefinitionsT = Aws::Vector<ReportDefinition>>
    void SetReportDefinitions(ReportDefinitionsT&& value) { m_reportDefinitionsHasBeenSet = true; m_reportDefinitions = std::forward<ReportDefinitionsT>(value); }
    template<typename ReportDefinitionsT = Aws::Vector<ReportDefinition>>
    ListReportDefinitionsResult& WithReportDefinitions(ReportDefinitionsT&& value) { SetReportDefinitions(std::forward<ReportDefinitionsT>(value)); return *this;}
    template<typename ReportDefinitionsT = ReportDefinition>
    ListReportDefinitionsResult& AddReportDefinitions(ReportDefinitionsT&& value) { m_reportDefinitionsHasBeenSet = true; m_reportDefinitions.emplace_back(std::forward<ReportDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The value of the next token, if it exists. Null if there are no more
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListReportDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListReportDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ReportDefinition> m_reportDefinitions;
    bool m_reportDefinitionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationCostProfiler
} // namespace Aws
