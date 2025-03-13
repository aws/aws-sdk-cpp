/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace LookoutforVision
{
namespace Model
{
  class ListDatasetEntriesResult
  {
  public:
    AWS_LOOKOUTFORVISION_API ListDatasetEntriesResult() = default;
    AWS_LOOKOUTFORVISION_API ListDatasetEntriesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOOKOUTFORVISION_API ListDatasetEntriesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of the entries (JSON Lines) within the dataset.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDatasetEntries() const { return m_datasetEntries; }
    template<typename DatasetEntriesT = Aws::Vector<Aws::String>>
    void SetDatasetEntries(DatasetEntriesT&& value) { m_datasetEntriesHasBeenSet = true; m_datasetEntries = std::forward<DatasetEntriesT>(value); }
    template<typename DatasetEntriesT = Aws::Vector<Aws::String>>
    ListDatasetEntriesResult& WithDatasetEntries(DatasetEntriesT&& value) { SetDatasetEntries(std::forward<DatasetEntriesT>(value)); return *this;}
    template<typename DatasetEntriesT = Aws::String>
    ListDatasetEntriesResult& AddDatasetEntries(DatasetEntriesT&& value) { m_datasetEntriesHasBeenSet = true; m_datasetEntries.emplace_back(std::forward<DatasetEntriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the response is truncated, Amazon Lookout for Vision returns this token
     * that you can use in the subsequent request to retrieve the next set ofdataset
     * entries.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatasetEntriesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDatasetEntriesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_datasetEntries;
    bool m_datasetEntriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
