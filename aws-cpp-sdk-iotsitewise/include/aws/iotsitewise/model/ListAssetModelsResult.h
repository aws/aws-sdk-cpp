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
    AWS_IOTSITEWISE_API ListAssetModelsResult();
    AWS_IOTSITEWISE_API ListAssetModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAssetModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each asset model.</p>
     */
    inline const Aws::Vector<AssetModelSummary>& GetAssetModelSummaries() const{ return m_assetModelSummaries; }

    /**
     * <p>A list that summarizes each asset model.</p>
     */
    inline void SetAssetModelSummaries(const Aws::Vector<AssetModelSummary>& value) { m_assetModelSummaries = value; }

    /**
     * <p>A list that summarizes each asset model.</p>
     */
    inline void SetAssetModelSummaries(Aws::Vector<AssetModelSummary>&& value) { m_assetModelSummaries = std::move(value); }

    /**
     * <p>A list that summarizes each asset model.</p>
     */
    inline ListAssetModelsResult& WithAssetModelSummaries(const Aws::Vector<AssetModelSummary>& value) { SetAssetModelSummaries(value); return *this;}

    /**
     * <p>A list that summarizes each asset model.</p>
     */
    inline ListAssetModelsResult& WithAssetModelSummaries(Aws::Vector<AssetModelSummary>&& value) { SetAssetModelSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each asset model.</p>
     */
    inline ListAssetModelsResult& AddAssetModelSummaries(const AssetModelSummary& value) { m_assetModelSummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each asset model.</p>
     */
    inline ListAssetModelsResult& AddAssetModelSummaries(AssetModelSummary&& value) { m_assetModelSummaries.push_back(std::move(value)); return *this; }


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
    inline ListAssetModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssetModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssetModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssetModelSummary> m_assetModelSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
