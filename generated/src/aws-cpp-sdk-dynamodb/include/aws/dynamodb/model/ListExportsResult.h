/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dynamodb/model/ExportSummary.h>
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
namespace DynamoDB
{
namespace Model
{
  class ListExportsResult
  {
  public:
    AWS_DYNAMODB_API ListExportsResult() = default;
    AWS_DYNAMODB_API ListExportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DYNAMODB_API ListExportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>ExportSummary</code> objects.</p>
     */
    inline const Aws::Vector<ExportSummary>& GetExportSummaries() const { return m_exportSummaries; }
    template<typename ExportSummariesT = Aws::Vector<ExportSummary>>
    void SetExportSummaries(ExportSummariesT&& value) { m_exportSummariesHasBeenSet = true; m_exportSummaries = std::forward<ExportSummariesT>(value); }
    template<typename ExportSummariesT = Aws::Vector<ExportSummary>>
    ListExportsResult& WithExportSummaries(ExportSummariesT&& value) { SetExportSummaries(std::forward<ExportSummariesT>(value)); return *this;}
    template<typename ExportSummariesT = ExportSummary>
    ListExportsResult& AddExportSummaries(ExportSummariesT&& value) { m_exportSummariesHasBeenSet = true; m_exportSummaries.emplace_back(std::forward<ExportSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If this value is returned, there are additional results to be displayed. To
     * retrieve them, call <code>ListExports</code> again, with <code>NextToken</code>
     * set to this value.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListExportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListExportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExportSummary> m_exportSummaries;
    bool m_exportSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
