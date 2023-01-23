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
    AWS_IOTSITEWISE_API ListProjectAssetsResult();
    AWS_IOTSITEWISE_API ListProjectAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListProjectAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that contains the IDs of each asset associated with the project.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssetIds() const{ return m_assetIds; }

    /**
     * <p>A list that contains the IDs of each asset associated with the project.</p>
     */
    inline void SetAssetIds(const Aws::Vector<Aws::String>& value) { m_assetIds = value; }

    /**
     * <p>A list that contains the IDs of each asset associated with the project.</p>
     */
    inline void SetAssetIds(Aws::Vector<Aws::String>&& value) { m_assetIds = std::move(value); }

    /**
     * <p>A list that contains the IDs of each asset associated with the project.</p>
     */
    inline ListProjectAssetsResult& WithAssetIds(const Aws::Vector<Aws::String>& value) { SetAssetIds(value); return *this;}

    /**
     * <p>A list that contains the IDs of each asset associated with the project.</p>
     */
    inline ListProjectAssetsResult& WithAssetIds(Aws::Vector<Aws::String>&& value) { SetAssetIds(std::move(value)); return *this;}

    /**
     * <p>A list that contains the IDs of each asset associated with the project.</p>
     */
    inline ListProjectAssetsResult& AddAssetIds(const Aws::String& value) { m_assetIds.push_back(value); return *this; }

    /**
     * <p>A list that contains the IDs of each asset associated with the project.</p>
     */
    inline ListProjectAssetsResult& AddAssetIds(Aws::String&& value) { m_assetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list that contains the IDs of each asset associated with the project.</p>
     */
    inline ListProjectAssetsResult& AddAssetIds(const char* value) { m_assetIds.push_back(value); return *this; }


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
    inline ListProjectAssetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListProjectAssetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListProjectAssetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_assetIds;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
