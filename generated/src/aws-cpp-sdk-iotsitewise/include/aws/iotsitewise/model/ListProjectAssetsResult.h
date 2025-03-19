/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class ListProjectAssetsResult
  {
  public:
    AWS_IOTSITEWISE_API ListProjectAssetsResult() = default;
    AWS_IOTSITEWISE_API ListProjectAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListProjectAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that contains the IDs of each asset associated with the project.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssetIds() const { return m_assetIds; }
    template<typename AssetIdsT = Aws::Vector<Aws::String>>
    void SetAssetIds(AssetIdsT&& value) { m_assetIdsHasBeenSet = true; m_assetIds = std::forward<AssetIdsT>(value); }
    template<typename AssetIdsT = Aws::Vector<Aws::String>>
    ListProjectAssetsResult& WithAssetIds(AssetIdsT&& value) { SetAssetIds(std::forward<AssetIdsT>(value)); return *this;}
    template<typename AssetIdsT = Aws::String>
    ListProjectAssetsResult& AddAssetIds(AssetIdsT&& value) { m_assetIdsHasBeenSet = true; m_assetIds.emplace_back(std::forward<AssetIdsT>(value)); return *this; }
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
    ListProjectAssetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListProjectAssetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_assetIds;
    bool m_assetIdsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
