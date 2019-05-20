/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediapackage-vod/MediaPackageVod_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediapackage-vod/model/AssetShallow.h>
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
namespace MediaPackageVod
{
namespace Model
{
  class AWS_MEDIAPACKAGEVOD_API ListAssetsResult
  {
  public:
    ListAssetsResult();
    ListAssetsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAssetsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A list of MediaPackage VOD Asset resources.
     */
    inline const Aws::Vector<AssetShallow>& GetAssets() const{ return m_assets; }

    /**
     * A list of MediaPackage VOD Asset resources.
     */
    inline void SetAssets(const Aws::Vector<AssetShallow>& value) { m_assets = value; }

    /**
     * A list of MediaPackage VOD Asset resources.
     */
    inline void SetAssets(Aws::Vector<AssetShallow>&& value) { m_assets = std::move(value); }

    /**
     * A list of MediaPackage VOD Asset resources.
     */
    inline ListAssetsResult& WithAssets(const Aws::Vector<AssetShallow>& value) { SetAssets(value); return *this;}

    /**
     * A list of MediaPackage VOD Asset resources.
     */
    inline ListAssetsResult& WithAssets(Aws::Vector<AssetShallow>&& value) { SetAssets(std::move(value)); return *this;}

    /**
     * A list of MediaPackage VOD Asset resources.
     */
    inline ListAssetsResult& AddAssets(const AssetShallow& value) { m_assets.push_back(value); return *this; }

    /**
     * A list of MediaPackage VOD Asset resources.
     */
    inline ListAssetsResult& AddAssets(AssetShallow&& value) { m_assets.push_back(std::move(value)); return *this; }


    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListAssetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListAssetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * A token that can be used to resume pagination from the end of the collection.
     */
    inline ListAssetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AssetShallow> m_assets;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaPackageVod
} // namespace Aws
