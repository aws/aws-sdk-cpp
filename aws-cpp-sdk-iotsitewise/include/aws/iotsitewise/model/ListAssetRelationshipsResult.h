/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetRelationshipSummary.h>
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
  class ListAssetRelationshipsResult
  {
  public:
    AWS_IOTSITEWISE_API ListAssetRelationshipsResult();
    AWS_IOTSITEWISE_API ListAssetRelationshipsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAssetRelationshipsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes each asset relationship.</p>
     */
    inline const Aws::Vector<AssetRelationshipSummary>& GetAssetRelationshipSummaries() const{ return m_assetRelationshipSummaries; }

    /**
     * <p>A list that summarizes each asset relationship.</p>
     */
    inline void SetAssetRelationshipSummaries(const Aws::Vector<AssetRelationshipSummary>& value) { m_assetRelationshipSummaries = value; }

    /**
     * <p>A list that summarizes each asset relationship.</p>
     */
    inline void SetAssetRelationshipSummaries(Aws::Vector<AssetRelationshipSummary>&& value) { m_assetRelationshipSummaries = std::move(value); }

    /**
     * <p>A list that summarizes each asset relationship.</p>
     */
    inline ListAssetRelationshipsResult& WithAssetRelationshipSummaries(const Aws::Vector<AssetRelationshipSummary>& value) { SetAssetRelationshipSummaries(value); return *this;}

    /**
     * <p>A list that summarizes each asset relationship.</p>
     */
    inline ListAssetRelationshipsResult& WithAssetRelationshipSummaries(Aws::Vector<AssetRelationshipSummary>&& value) { SetAssetRelationshipSummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes each asset relationship.</p>
     */
    inline ListAssetRelationshipsResult& AddAssetRelationshipSummaries(const AssetRelationshipSummary& value) { m_assetRelationshipSummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes each asset relationship.</p>
     */
    inline ListAssetRelationshipsResult& AddAssetRelationshipSummaries(AssetRelationshipSummary&& value) { m_assetRelationshipSummaries.push_back(std::move(value)); return *this; }


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
    inline ListAssetRelationshipsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssetRelationshipsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssetRelationshipsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssetRelationshipSummary> m_assetRelationshipSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
