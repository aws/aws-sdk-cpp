/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/UpgradeHistory.h>
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
namespace ElasticsearchService
{
namespace Model
{
  /**
   * <p> Container for response returned by <code> <a>GetUpgradeHistory</a> </code>
   * operation. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/GetUpgradeHistoryResponse">AWS
   * API Reference</a></p>
   */
  class GetUpgradeHistoryResult
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API GetUpgradeHistoryResult() = default;
    AWS_ELASTICSEARCHSERVICE_API GetUpgradeHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ELASTICSEARCHSERVICE_API GetUpgradeHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A list of <code> <a>UpgradeHistory</a> </code> objects corresponding to each
     * Upgrade or Upgrade Eligibility Check performed on a domain returned as part of
     * <code> <a>GetUpgradeHistoryResponse</a> </code> object. </p>
     */
    inline const Aws::Vector<UpgradeHistory>& GetUpgradeHistories() const { return m_upgradeHistories; }
    template<typename UpgradeHistoriesT = Aws::Vector<UpgradeHistory>>
    void SetUpgradeHistories(UpgradeHistoriesT&& value) { m_upgradeHistoriesHasBeenSet = true; m_upgradeHistories = std::forward<UpgradeHistoriesT>(value); }
    template<typename UpgradeHistoriesT = Aws::Vector<UpgradeHistory>>
    GetUpgradeHistoryResult& WithUpgradeHistories(UpgradeHistoriesT&& value) { SetUpgradeHistories(std::forward<UpgradeHistoriesT>(value)); return *this;}
    template<typename UpgradeHistoriesT = UpgradeHistory>
    GetUpgradeHistoryResult& AddUpgradeHistories(UpgradeHistoriesT&& value) { m_upgradeHistoriesHasBeenSet = true; m_upgradeHistories.emplace_back(std::forward<UpgradeHistoriesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token that needs to be supplied to the next call to get the next
     * page of results</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetUpgradeHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetUpgradeHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UpgradeHistory> m_upgradeHistories;
    bool m_upgradeHistoriesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
