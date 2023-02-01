/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetSummary.h>
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
  class ListAssetsResult
  {
  public:
    AWS_IOTSITEWISE_API ListAssetsResult();
    AWS_IOTSITEWISE_API ListAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each asset.</p>
     */
    inline const Aws::Vector<AssetSummary>& GetAssetSummaries() const{ return m_assetSummaries; }

    /**
     * <p>A list that summarizes each asset.</p>
     */
    inline void SetAssetSummaries(const Aws::Vector<AssetSummary>& value) { m_assetSummaries = value; }

    /**
     * <p>A list that summarizes each asset.</p>
     */
    inline void SetAssetSummaries(Aws::Vector<AssetSummary>&& value) { m_assetSummaries = std::move(value); }

    /**
     * <p>A list that summarizes each asset.</p>
     */
    inline ListAssetsResult& WithAssetSummaries(const Aws::Vector<AssetSummary>& value) { SetAssetSummaries(value); return *this;}

    /**
     * <p>A list that summarizes each asset.</p>
     */
    inline ListAssetsResult& WithAssetSummaries(Aws::Vector<AssetSummary>&& value) { SetAssetSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each asset.</p>
     */
    inline ListAssetsResult& AddAssetSummaries(const AssetSummary& value) { m_assetSummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each asset.</p>
     */
    inline ListAssetsResult& AddAssetSummaries(AssetSummary&& value) { m_assetSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssetSummary> m_assetSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
