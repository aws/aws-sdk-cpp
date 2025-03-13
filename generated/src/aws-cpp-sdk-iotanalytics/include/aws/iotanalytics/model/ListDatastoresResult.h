/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotanalytics/IoTAnalytics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotanalytics/model/DatastoreSummary.h>
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
namespace IoTAnalytics
{
namespace Model
{
  class ListDatastoresResult
  {
  public:
    AWS_IOTANALYTICS_API ListDatastoresResult() = default;
    AWS_IOTANALYTICS_API ListDatastoresResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTANALYTICS_API ListDatastoresResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>DatastoreSummary</code> objects.</p>
     */
    inline const Aws::Vector<DatastoreSummary>& GetDatastoreSummaries() const { return m_datastoreSummaries; }
    template<typename DatastoreSummariesT = Aws::Vector<DatastoreSummary>>
    void SetDatastoreSummaries(DatastoreSummariesT&& value) { m_datastoreSummariesHasBeenSet = true; m_datastoreSummaries = std::forward<DatastoreSummariesT>(value); }
    template<typename DatastoreSummariesT = Aws::Vector<DatastoreSummary>>
    ListDatastoresResult& WithDatastoreSummaries(DatastoreSummariesT&& value) { SetDatastoreSummaries(std::forward<DatastoreSummariesT>(value)); return *this;}
    template<typename DatastoreSummariesT = DatastoreSummary>
    ListDatastoresResult& AddDatastoreSummaries(DatastoreSummariesT&& value) { m_datastoreSummariesHasBeenSet = true; m_datastoreSummaries.emplace_back(std::forward<DatastoreSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to retrieve the next set of results, or <code>null</code> if there
     * are no more results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatastoresResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDatastoresResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DatastoreSummary> m_datastoreSummaries;
    bool m_datastoreSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
