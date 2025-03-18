/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetPropertySummary.h>
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
  class ListAssetPropertiesResult
  {
  public:
    AWS_IOTSITEWISE_API ListAssetPropertiesResult() = default;
    AWS_IOTSITEWISE_API ListAssetPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAssetPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes the properties associated with the specified
     * asset.</p>
     */
    inline const Aws::Vector<AssetPropertySummary>& GetAssetPropertySummaries() const { return m_assetPropertySummaries; }
    template<typename AssetPropertySummariesT = Aws::Vector<AssetPropertySummary>>
    void SetAssetPropertySummaries(AssetPropertySummariesT&& value) { m_assetPropertySummariesHasBeenSet = true; m_assetPropertySummaries = std::forward<AssetPropertySummariesT>(value); }
    template<typename AssetPropertySummariesT = Aws::Vector<AssetPropertySummary>>
    ListAssetPropertiesResult& WithAssetPropertySummaries(AssetPropertySummariesT&& value) { SetAssetPropertySummaries(std::forward<AssetPropertySummariesT>(value)); return *this;}
    template<typename AssetPropertySummariesT = AssetPropertySummary>
    ListAssetPropertiesResult& AddAssetPropertySummaries(AssetPropertySummariesT&& value) { m_assetPropertySummariesHasBeenSet = true; m_assetPropertySummaries.emplace_back(std::forward<AssetPropertySummariesT>(value)); return *this; }
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
    ListAssetPropertiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssetPropertiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssetPropertySummary> m_assetPropertySummaries;
    bool m_assetPropertySummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
