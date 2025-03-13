/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetModelPropertySummary.h>
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
  class ListAssetModelPropertiesResult
  {
  public:
    AWS_IOTSITEWISE_API ListAssetModelPropertiesResult() = default;
    AWS_IOTSITEWISE_API ListAssetModelPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAssetModelPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes the properties associated with the specified asset
     * model.</p>
     */
    inline const Aws::Vector<AssetModelPropertySummary>& GetAssetModelPropertySummaries() const { return m_assetModelPropertySummaries; }
    template<typename AssetModelPropertySummariesT = Aws::Vector<AssetModelPropertySummary>>
    void SetAssetModelPropertySummaries(AssetModelPropertySummariesT&& value) { m_assetModelPropertySummariesHasBeenSet = true; m_assetModelPropertySummaries = std::forward<AssetModelPropertySummariesT>(value); }
    template<typename AssetModelPropertySummariesT = Aws::Vector<AssetModelPropertySummary>>
    ListAssetModelPropertiesResult& WithAssetModelPropertySummaries(AssetModelPropertySummariesT&& value) { SetAssetModelPropertySummaries(std::forward<AssetModelPropertySummariesT>(value)); return *this;}
    template<typename AssetModelPropertySummariesT = AssetModelPropertySummary>
    ListAssetModelPropertiesResult& AddAssetModelPropertySummaries(AssetModelPropertySummariesT&& value) { m_assetModelPropertySummariesHasBeenSet = true; m_assetModelPropertySummaries.emplace_back(std::forward<AssetModelPropertySummariesT>(value)); return *this; }
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
    ListAssetModelPropertiesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAssetModelPropertiesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssetModelPropertySummary> m_assetModelPropertySummaries;
    bool m_assetModelPropertySummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
