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
    AWS_IOTSITEWISE_API ListAssetModelCompositeModelsResult();
    AWS_IOTSITEWISE_API ListAssetModelCompositeModelsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAssetModelCompositeModelsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each composite model.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModelSummary>& GetAssetModelCompositeModelSummaries() const{ return m_assetModelCompositeModelSummaries; }

    /**
     * <p>A list that summarizes each composite model.</p>
     */
    inline void SetAssetModelCompositeModelSummaries(const Aws::Vector<AssetModelCompositeModelSummary>& value) { m_assetModelCompositeModelSummaries = value; }

    /**
     * <p>A list that summarizes each composite model.</p>
     */
    inline void SetAssetModelCompositeModelSummaries(Aws::Vector<AssetModelCompositeModelSummary>&& value) { m_assetModelCompositeModelSummaries = std::move(value); }

    /**
     * <p>A list that summarizes each composite model.</p>
     */
    inline ListAssetModelCompositeModelsResult& WithAssetModelCompositeModelSummaries(const Aws::Vector<AssetModelCompositeModelSummary>& value) { SetAssetModelCompositeModelSummaries(value); return *this;}

    /**
     * <p>A list that summarizes each composite model.</p>
     */
    inline ListAssetModelCompositeModelsResult& WithAssetModelCompositeModelSummaries(Aws::Vector<AssetModelCompositeModelSummary>&& value) { SetAssetModelCompositeModelSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each composite model.</p>
     */
    inline ListAssetModelCompositeModelsResult& AddAssetModelCompositeModelSummaries(const AssetModelCompositeModelSummary& value) { m_assetModelCompositeModelSummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each composite model.</p>
     */
    inline ListAssetModelCompositeModelsResult& AddAssetModelCompositeModelSummaries(AssetModelCompositeModelSummary&& value) { m_assetModelCompositeModelSummaries.push_back(std::move(value)); return *this; }


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
    inline ListAssetModelCompositeModelsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssetModelCompositeModelsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssetModelCompositeModelsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ListAssetModelCompositeModelsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ListAssetModelCompositeModelsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ListAssetModelCompositeModelsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<AssetModelCompositeModelSummary> m_assetModelCompositeModelSummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
