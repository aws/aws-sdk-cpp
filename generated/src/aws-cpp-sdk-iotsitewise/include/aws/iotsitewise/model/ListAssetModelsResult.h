/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetModelSummary.h>
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
  class ListAssetModelsResult
  {
  public:
    AWS_IOTSITEWISE_API ListAssetModelsResult() = default;
    AWS_IOTSITEWISE_API ListAssetModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAssetModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each asset model.</p>
     */
    inline const Aws::Vector<AssetModelSummary>& GetAssetModelSummaries() const { return m_assetModelSummaries; }
    template<typename AssetModelSummariesT = Aws::Vector<AssetModelSummary>>
    void SetAssetModelSummaries(AssetModelSummariesT&& value) { m_assetModelSummariesHasBeenSet = true; m_assetModelSummaries = std::forward<AssetModelSummariesT>(value); }
    template<typename AssetModelSummariesT = Aws::Vector<AssetModelSummary>>
    ListAssetModelsResult& WithAssetModelSummaries(AssetModelSummariesT&& value) { SetAssetModelSummaries(std::forward<AssetModelSummariesT>(value)); return *this;}
    template<typename AssetModelSummariesT = AssetModelSummary>
    ListAssetModelsResult& AddAssetModelSummaries(AssetModelSummariesT&& value) { m_assetModelSummariesHasBeenSet = true; m_assetModelSummaries.emplace_back(std::forward<AssetModelSummariesT>(value)); return *this; }
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
    ListAssetModelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssetModelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssetModelSummary> m_assetModelSummaries;
    bool m_assetModelSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
