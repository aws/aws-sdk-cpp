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
    AWS_IOTSITEWISE_API ListAssetModelPropertiesResult();
    AWS_IOTSITEWISE_API ListAssetModelPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAssetModelPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list that summarizes the properties associated with the specified asset
     * model.</p>
     */
    inline const Aws::Vector<AssetModelPropertySummary>& GetAssetModelPropertySummaries() const{ return m_assetModelPropertySummaries; }

    /**
     * <p>A list that summarizes the properties associated with the specified asset
     * model.</p>
     */
    inline void SetAssetModelPropertySummaries(const Aws::Vector<AssetModelPropertySummary>& value) { m_assetModelPropertySummaries = value; }

    /**
     * <p>A list that summarizes the properties associated with the specified asset
     * model.</p>
     */
    inline void SetAssetModelPropertySummaries(Aws::Vector<AssetModelPropertySummary>&& value) { m_assetModelPropertySummaries = std::move(value); }

    /**
     * <p>A list that summarizes the properties associated with the specified asset
     * model.</p>
     */
    inline ListAssetModelPropertiesResult& WithAssetModelPropertySummaries(const Aws::Vector<AssetModelPropertySummary>& value) { SetAssetModelPropertySummaries(value); return *this;}

    /**
     * <p>A list that summarizes the properties associated with the specified asset
     * model.</p>
     */
    inline ListAssetModelPropertiesResult& WithAssetModelPropertySummaries(Aws::Vector<AssetModelPropertySummary>&& value) { SetAssetModelPropertySummaries(std::move(value)); return *this;}

    /**
     * <p>A list that summarizes the properties associated with the specified asset
     * model.</p>
     */
    inline ListAssetModelPropertiesResult& AddAssetModelPropertySummaries(const AssetModelPropertySummary& value) { m_assetModelPropertySummaries.push_back(value); return *this; }

    /**
     * <p>A list that summarizes the properties associated with the specified asset
     * model.</p>
     */
    inline ListAssetModelPropertiesResult& AddAssetModelPropertySummaries(AssetModelPropertySummary&& value) { m_assetModelPropertySummaries.push_back(std::move(value)); return *this; }


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
    inline ListAssetModelPropertiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssetModelPropertiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline ListAssetModelPropertiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssetModelPropertySummary> m_assetModelPropertySummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
