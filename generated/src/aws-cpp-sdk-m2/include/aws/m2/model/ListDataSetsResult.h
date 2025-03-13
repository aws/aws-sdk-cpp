/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DataSetSummary.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListDataSetsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetsResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListDataSetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of data sets, containing information including the creation time,
     * the data set name, the data set organization, the data set format, and the last
     * time the data set was referenced or updated.</p>
     */
    inline const Aws::Vector<DataSetSummary>& GetDataSets() const { return m_dataSets; }
    template<typename DataSetsT = Aws::Vector<DataSetSummary>>
    void SetDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets = std::forward<DataSetsT>(value); }
    template<typename DataSetsT = Aws::Vector<DataSetSummary>>
    ListDataSetsResult& WithDataSets(DataSetsT&& value) { SetDataSets(std::forward<DataSetsT>(value)); return *this;}
    template<typename DataSetsT = DataSetSummary>
    ListDataSetsResult& AddDataSets(DataSetsT&& value) { m_dataSetsHasBeenSet = true; m_dataSets.emplace_back(std::forward<DataSetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
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

    Aws::Vector<DataSetSummary> m_dataSets;
    bool m_dataSetsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
