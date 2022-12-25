/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/AssetEntry.h>
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
namespace DataExchange
{
namespace Model
{
  class ListRevisionAssetsResult
  {
  public:
    AWS_DATAEXCHANGE_API ListRevisionAssetsResult();
    AWS_DATAEXCHANGE_API ListRevisionAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAEXCHANGE_API ListRevisionAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline const Aws::Vector<AssetEntry>& GetAssets() const{ return m_assets; }

    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline void SetAssets(const Aws::Vector<AssetEntry>& value) { m_assets = value; }

    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline void SetAssets(Aws::Vector<AssetEntry>&& value) { m_assets = std::move(value); }

    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline ListRevisionAssetsResult& WithAssets(const Aws::Vector<AssetEntry>& value) { SetAssets(value); return *this;}

    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline ListRevisionAssetsResult& WithAssets(Aws::Vector<AssetEntry>&& value) { SetAssets(std::move(value)); return *this;}

    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline ListRevisionAssetsResult& AddAssets(const AssetEntry& value) { m_assets.push_back(value); return *this; }

    /**
     * <p>The asset objects listed by the request.</p>
     */
    inline ListRevisionAssetsResult& AddAssets(AssetEntry&& value) { m_assets.push_back(std::move(value)); return *this; }


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListRevisionAssetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListRevisionAssetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListRevisionAssetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssetEntry> m_assets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
