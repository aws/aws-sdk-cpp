/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cur/CostandUsageReportService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cur/model/ReportDefinition.h>
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
namespace CostandUsageReportService
{
namespace Model
{
  /**
   * <p>If the action is successful, the service sends back an HTTP 200
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cur-2017-01-06/DescribeReportDefinitionsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReportDefinitionsResult
  {
  public:
    AWS_COSTANDUSAGEREPORTSERVICE_API DescribeReportDefinitionsResult() = default;
    AWS_COSTANDUSAGEREPORTSERVICE_API DescribeReportDefinitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COSTANDUSAGEREPORTSERVICE_API DescribeReportDefinitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An Amazon Web Services Cost and Usage Report list owned by the account.</p>
     */
    inline const Aws::Vector<ReportDefinition>& GetReportDefinitions() const { return m_reportDefinitions; }
    template<typename ReportDefinitionsT = Aws::Vector<ReportDefinition>>
    void SetReportDefinitions(ReportDefinitionsT&& value) { m_reportDefinitionsHasBeenSet = true; m_reportDefinitions = std::forward<ReportDefinitionsT>(value); }
    template<typename ReportDefinitionsT = Aws::Vector<ReportDefinition>>
    DescribeReportDefinitionsResult& WithReportDefinitions(ReportDefinitionsT&& value) { SetReportDefinitions(std::forward<ReportDefinitionsT>(value)); return *this;}
    template<typename ReportDefinitionsT = ReportDefinition>
    DescribeReportDefinitionsResult& AddReportDefinitions(ReportDefinitionsT&& value) { m_reportDefinitionsHasBeenSet = true; m_reportDefinitions.emplace_back(std::forward<ReportDefinitionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeReportDefinitionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeReportDefinitionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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
} // namespace CostandUsageReportService
} // namespace Aws
