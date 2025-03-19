/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetModelCompositeModelSummary.h>
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
  class ListAssetModelCompositeModelsResult
  {
  public:
    AWS_IOTSITEWISE_API ListAssetModelCompositeModelsResult() = default;
    AWS_IOTSITEWISE_API ListAssetModelCompositeModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAssetModelCompositeModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes each composite model.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModelSummary>& GetAssetModelCompositeModelSummaries() const { return m_assetModelCompositeModelSummaries; }
    template<typename AssetModelCompositeModelSummariesT = Aws::Vector<AssetModelCompositeModelSummary>>
    void SetAssetModelCompositeModelSummaries(AssetModelCompositeModelSummariesT&& value) { m_assetModelCompositeModelSummariesHasBeenSet = true; m_assetModelCompositeModelSummaries = std::forward<AssetModelCompositeModelSummariesT>(value); }
    template<typename AssetModelCompositeModelSummariesT = Aws::Vector<AssetModelCompositeModelSummary>>
    ListAssetModelCompositeModelsResult& WithAssetModelCompositeModelSummaries(AssetModelCompositeModelSummariesT&& value) { SetAssetModelCompositeModelSummaries(std::forward<AssetModelCompositeModelSummariesT>(value)); return *this;}
    template<typename AssetModelCompositeModelSummariesT = AssetModelCompositeModelSummary>
    ListAssetModelCompositeModelsResult& AddAssetModelCompositeModelSummaries(AssetModelCompositeModelSummariesT&& value) { m_assetModelCompositeModelSummariesHasBeenSet = true; m_assetModelCompositeModelSummaries.emplace_back(std::forward<AssetModelCompositeModelSummariesT>(value)); return *this; }
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
    ListAssetModelCompositeModelsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssetModelCompositeModelsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssetModelCompositeModelSummary> m_assetModelCompositeModelSummaries;
    bool m_assetModelCompositeModelSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
