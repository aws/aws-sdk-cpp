/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-sync/CognitoSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cognito-sync/model/Dataset.h>
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
namespace CognitoSync
{
namespace Model
{
  /**
   * Returned for a successful ListDatasets request.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-sync-2014-06-30/ListDatasetsResponse">AWS
   * API Reference</a></p>
   */
  class ListDatasetsResult
  {
  public:
    AWS_COGNITOSYNC_API ListDatasetsResult() = default;
    AWS_COGNITOSYNC_API ListDatasetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOSYNC_API ListDatasetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A set of datasets.
     */
    inline const Aws::Vector<Dataset>& GetDatasets() const { return m_datasets; }
    template<typename DatasetsT = Aws::Vector<Dataset>>
    void SetDatasets(DatasetsT&& value) { m_datasetsHasBeenSet = true; m_datasets = std::forward<DatasetsT>(value); }
    template<typename DatasetsT = Aws::Vector<Dataset>>
    ListDatasetsResult& WithDatasets(DatasetsT&& value) { SetDatasets(std::forward<DatasetsT>(value)); return *this;}
    template<typename DatasetsT = Dataset>
    ListDatasetsResult& AddDatasets(DatasetsT&& value) { m_datasetsHasBeenSet = true; m_datasets.emplace_back(std::forward<DatasetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * Number of datasets returned.
     */
    inline int GetCount() const { return m_count; }
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }
    inline ListDatasetsResult& WithCount(int value) { SetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * A pagination token for obtaining the next page of results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDatasetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDatasetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Dataset> m_datasets;
    bool m_datasetsHasBeenSet = false;

    int m_count{0};
    bool m_countHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoSync
} // namespace Aws
