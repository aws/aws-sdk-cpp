/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/DataSetEntry.h>
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
namespace DataExchange
{
namespace Model
{
  class ListDataSetsResult
  {
  public:
    AWS_DATAEXCHANGE_API ListDataSetsResult() = default;
    AWS_DATAEXCHANGE_API ListDataSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API ListDataSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The data set objects listed by the request.</p>
     */
    inline const Aws::Vector<DataSetEntry>& GetDataSets() const { return m_dataSets; }
    template<typename DataSetsT = Aws::Vector<DataSetEntry>>
    void SetDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::forward<DataSetsT>(value); }
    template<typename DataSetsT = Aws::Vector<DataSetEntry>>
    ListDataSetsResult& WithDataSets(DataSetsT&& value) { SetDataSets(std::forward<DataSetsT>(value)); return *this;}
    template<typename DataSetsT = DataSetEntry>
    ListDataSetsResult& AddDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets.emplace_back(std::forward<DataSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDataSetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDataSetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataSetEntry> m_dataSets;
    bool m_dataSetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
