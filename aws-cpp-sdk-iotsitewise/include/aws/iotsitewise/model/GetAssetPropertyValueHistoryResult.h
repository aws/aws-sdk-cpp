/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetPropertyValue.h>
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
  class GetAssetPropertyValueHistoryResult
  {
  public:
    AWS_IOTSITEWISE_API GetAssetPropertyValueHistoryResult();
    AWS_IOTSITEWISE_API GetAssetPropertyValueHistoryResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API GetAssetPropertyValueHistoryResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The asset property's value history.</p>
     */
    inline const Aws::Vector<AssetPropertyValue>& GetAssetPropertyValueHistory() const{ return m_assetPropertyValueHistory; }

    /**
     * <p>The asset property's value history.</p>
     */
    inline void SetAssetPropertyValueHistory(const Aws::Vector<AssetPropertyValue>& value) { m_assetPropertyValueHistory = value; }

    /**
     * <p>The asset property's value history.</p>
     */
    inline void SetAssetPropertyValueHistory(Aws::Vector<AssetPropertyValue>&& value) { m_assetPropertyValueHistory = std::move(value); }

    /**
     * <p>The asset property's value history.</p>
     */
    inline GetAssetPropertyValueHistoryResult& WithAssetPropertyValueHistory(const Aws::Vector<AssetPropertyValue>& value) { SetAssetPropertyValueHistory(value); return *this;}

    /**
     * <p>The asset property's value history.</p>
     */
    inline GetAssetPropertyValueHistoryResult& WithAssetPropertyValueHistory(Aws::Vector<AssetPropertyValue>&& value) { SetAssetPropertyValueHistory(std::move(value)); return *this;}

    /**
     * <p>The asset property's value history.</p>
     */
    inline GetAssetPropertyValueHistoryResult& AddAssetPropertyValueHistory(const AssetPropertyValue& value) { m_assetPropertyValueHistory.push_back(value); return *this; }

    /**
     * <p>The asset property's value history.</p>
     */
    inline GetAssetPropertyValueHistoryResult& AddAssetPropertyValueHistory(AssetPropertyValue&& value) { m_assetPropertyValueHistory.push_back(std::move(value)); return *this; }


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
    inline GetAssetPropertyValueHistoryResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline GetAssetPropertyValueHistoryResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline GetAssetPropertyValueHistoryResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssetPropertyValue> m_assetPropertyValueHistory;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
