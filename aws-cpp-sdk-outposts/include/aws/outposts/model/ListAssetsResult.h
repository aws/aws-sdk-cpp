/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/outposts/model/AssetInfo.h>
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
namespace Outposts
{
namespace Model
{
  class ListAssetsResult
  {
  public:
    AWS_OUTPOSTS_API ListAssetsResult();
    AWS_OUTPOSTS_API ListAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OUTPOSTS_API ListAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the hardware assets.</p>
     */
    inline const Aws::Vector<AssetInfo>& GetAssets() const{ return m_assets; }

    /**
     * <p>Information about the hardware assets.</p>
     */
    inline void SetAssets(const Aws::Vector<AssetInfo>& value) { m_assets = value; }

    /**
     * <p>Information about the hardware assets.</p>
     */
    inline void SetAssets(Aws::Vector<AssetInfo>&& value) { m_assets = std::move(value); }

    /**
     * <p>Information about the hardware assets.</p>
     */
    inline ListAssetsResult& WithAssets(const Aws::Vector<AssetInfo>& value) { SetAssets(value); return *this;}

    /**
     * <p>Information about the hardware assets.</p>
     */
    inline ListAssetsResult& WithAssets(Aws::Vector<AssetInfo>&& value) { SetAssets(std::move(value)); return *this;}

    /**
     * <p>Information about the hardware assets.</p>
     */
    inline ListAssetsResult& AddAssets(const AssetInfo& value) { m_assets.push_back(value); return *this; }

    /**
     * <p>Information about the hardware assets.</p>
     */
    inline ListAssetsResult& AddAssets(AssetInfo&& value) { m_assets.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    
    inline ListAssetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListAssetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListAssetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssetInfo> m_assets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
