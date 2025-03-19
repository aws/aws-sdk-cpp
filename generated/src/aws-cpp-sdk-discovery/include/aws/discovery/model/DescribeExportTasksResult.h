/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/ExportInfo.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class DescribeExportTasksResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeExportTasksResult() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeExportTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeExportTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains one or more sets of export request details. When the status of a
     * request is <code>SUCCEEDED</code>, the response includes a URL for an Amazon S3
     * bucket where you can view the data in a CSV file.</p>
     */
    inline const Aws::Vector<ExportInfo>& GetExportsInfo() const { return m_exportsInfo; }
    template<typename ExportsInfoT = Aws::Vector<ExportInfo>>
    void SetExportsInfo(ExportsInfoT&& value) { m_exportsInfoHasBeenSet = true; m_exportsInfo = std::forward<ExportsInfoT>(value); }
    template<typename ExportsInfoT = Aws::Vector<ExportInfo>>
    DescribeExportTasksResult& WithExportsInfo(ExportsInfoT&& value) { SetExportsInfo(std::forward<ExportsInfoT>(value)); return *this;}
    template<typename ExportsInfoT = ExportInfo>
    DescribeExportTasksResult& AddExportsInfo(ExportsInfoT&& value) { m_exportsInfoHasBeenSet = true; m_exportsInfo.emplace_back(std::forward<ExportsInfoT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeExportTasks</code> request. When the results of a
     * <code>DescribeExportTasks</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is null when
     * there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeExportTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeExportTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ExportInfo> m_exportsInfo;
    bool m_exportsInfoHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
