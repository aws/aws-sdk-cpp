﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssociatedAssetsSummary.h>
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
  class ListAssociatedAssetsResult
  {
  public:
    AWS_IOTSITEWISE_API ListAssociatedAssetsResult() = default;
    AWS_IOTSITEWISE_API ListAssociatedAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAssociatedAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes the associated assets.</p>
     */
    inline const Aws::Vector<AssociatedAssetsSummary>& GetAssetSummaries() const { return m_assetSummaries; }
    template<typename AssetSummariesT = Aws::Vector<AssociatedAssetsSummary>>
    void SetAssetSummaries(AssetSummariesT&& value) { m_assetSummariesHasBeenSet = true; m_assetSummaries = std::forward<AssetSummariesT>(value); }
    template<typename AssetSummariesT = Aws::Vector<AssociatedAssetsSummary>>
    ListAssociatedAssetsResult& WithAssetSummaries(AssetSummariesT&& value) { SetAssetSummaries(std::forward<AssetSummariesT>(value)); return *this;}
    template<typename AssetSummariesT = AssociatedAssetsSummary>
    ListAssociatedAssetsResult& AddAssetSummaries(AssetSummariesT&& value) { m_assetSummariesHasBeenSet = true; m_assetSummaries.emplace_back(std::forward<AssetSummariesT>(value)); return *this; }
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
    ListAssociatedAssetsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssociatedAssetsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssociatedAssetsSummary> m_assetSummaries;
    bool m_assetSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
