﻿/**
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
    AWS_IOTSITEWISE_API ListAssetPropertiesResult();
    AWS_IOTSITEWISE_API ListAssetPropertiesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API ListAssetPropertiesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list that summarizes the properties associated with the specified
     * asset.</p>
     */
    inline const Aws::Vector<AssetPropertySummary>& GetAssetPropertySummaries() const{ return m_assetPropertySummaries; }
    inline void SetAssetPropertySummaries(const Aws::Vector<AssetPropertySummary>& value) { m_assetPropertySummaries = value; }
    inline void SetAssetPropertySummaries(Aws::Vector<AssetPropertySummary>&& value) { m_assetPropertySummaries = std::move(value); }
    inline ListAssetPropertiesResult& WithAssetPropertySummaries(const Aws::Vector<AssetPropertySummary>& value) { SetAssetPropertySummaries(value); return *this;}
    inline ListAssetPropertiesResult& WithAssetPropertySummaries(Aws::Vector<AssetPropertySummary>&& value) { SetAssetPropertySummaries(std::move(value)); return *this;}
    inline ListAssetPropertiesResult& AddAssetPropertySummaries(const AssetPropertySummary& value) { m_assetPropertySummaries.push_back(value); return *this; }
    inline ListAssetPropertiesResult& AddAssetPropertySummaries(AssetPropertySummary&& value) { m_assetPropertySummaries.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results, or null if there are no additional
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListAssetPropertiesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssetPropertiesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssetPropertiesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListAssetPropertiesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListAssetPropertiesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListAssetPropertiesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<AssetPropertySummary> m_assetPropertySummaries;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
