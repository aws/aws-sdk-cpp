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
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/model/PlaybackConfiguration.h>
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
namespace MediaTailor
{
namespace Model
{
  class AWS_MEDIATAILOR_API ListPlaybackConfigurationsResult
  {
  public:
    ListPlaybackConfigurationsResult();
    ListPlaybackConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListPlaybackConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Array of playback configurations. This might be all the available
     * configurations or a subset, depending on the settings that you provide and the
     * total number of configurations stored. </p>
     */
    inline const Aws::Vector<PlaybackConfiguration>& GetItems() const{ return m_items; }

    /**
     * <p>Array of playback configurations. This might be all the available
     * configurations or a subset, depending on the settings that you provide and the
     * total number of configurations stored. </p>
     */
    inline void SetItems(const Aws::Vector<PlaybackConfiguration>& value) { m_items = value; }

    /**
     * <p>Array of playback configurations. This might be all the available
     * configurations or a subset, depending on the settings that you provide and the
     * total number of configurations stored. </p>
     */
    inline void SetItems(Aws::Vector<PlaybackConfiguration>&& value) { m_items = std::move(value); }

    /**
     * <p>Array of playback configurations. This might be all the available
     * configurations or a subset, depending on the settings that you provide and the
     * total number of configurations stored. </p>
     */
    inline ListPlaybackConfigurationsResult& WithItems(const Aws::Vector<PlaybackConfiguration>& value) { SetItems(value); return *this;}

    /**
     * <p>Array of playback configurations. This might be all the available
     * configurations or a subset, depending on the settings that you provide and the
     * total number of configurations stored. </p>
     */
    inline ListPlaybackConfigurationsResult& WithItems(Aws::Vector<PlaybackConfiguration>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Array of playback configurations. This might be all the available
     * configurations or a subset, depending on the settings that you provide and the
     * total number of configurations stored. </p>
     */
    inline ListPlaybackConfigurationsResult& AddItems(const PlaybackConfiguration& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Array of playback configurations. This might be all the available
     * configurations or a subset, depending on the settings that you provide and the
     * total number of configurations stored. </p>
     */
    inline ListPlaybackConfigurationsResult& AddItems(PlaybackConfiguration&& value) { m_items.push_back(std::move(value)); return *this; }


    /**
     * <p>Pagination token returned by the GET list request when results exceed the
     * maximum allowed. Use the token to fetch the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Pagination token returned by the GET list request when results exceed the
     * maximum allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Pagination token returned by the GET list request when results exceed the
     * maximum allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Pagination token returned by the GET list request when results exceed the
     * maximum allowed. Use the token to fetch the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Pagination token returned by the GET list request when results exceed the
     * maximum allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListPlaybackConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Pagination token returned by the GET list request when results exceed the
     * maximum allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListPlaybackConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Pagination token returned by the GET list request when results exceed the
     * maximum allowed. Use the token to fetch the next page of results.</p>
     */
    inline ListPlaybackConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<PlaybackConfiguration> m_items;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
