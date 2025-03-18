/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetPropertyValue.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class GetAssetPropertyValueHistoryResult
  {
  public:
    AWS_IOTSITEWISE_API GetAssetPropertyValueHistoryResult() = default;
    AWS_IOTSITEWISE_API GetAssetPropertyValueHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API GetAssetPropertyValueHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The asset property's value history.</p>
     */
    inline const Aws::Vector<AssetPropertyValue>& GetAssetPropertyValueHistory() const { return m_assetPropertyValueHistory; }
    template<typename AssetPropertyValueHistoryT = Aws::Vector<AssetPropertyValue>>
    void SetAssetPropertyValueHistory(AssetPropertyValueHistoryT&& value) { m_assetPropertyValueHistoryHasBeenSet = true; m_assetPropertyValueHistory = std::forward<AssetPropertyValueHistoryT>(value); }
    template<typename AssetPropertyValueHistoryT = Aws::Vector<AssetPropertyValue>>
    GetAssetPropertyValueHistoryResult& WithAssetPropertyValueHistory(AssetPropertyValueHistoryT&& value) { SetAssetPropertyValueHistory(std::forward<AssetPropertyValueHistoryT>(value)); return *this;}
    template<typename AssetPropertyValueHistoryT = AssetPropertyValue>
    GetAssetPropertyValueHistoryResult& AddAssetPropertyValueHistory(AssetPropertyValueHistoryT&& value) { m_assetPropertyValueHistoryHasBeenSet = true; m_assetPropertyValueHistory.emplace_back(std::forward<AssetPropertyValueHistoryT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAssetPropertyValueHistoryResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetAssetPropertyValueHistoryResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssetPropertyValue> m_assetPropertyValueHistory;
    bool m_assetPropertyValueHistoryHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
