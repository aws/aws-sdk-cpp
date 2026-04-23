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
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace MediaConnect
{
namespace Model
{
  class AWS_MEDIACONNECT_API ListTagsForResourceResult
  {
  public:
    ListTagsForResourceResult();
    ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline ListTagsForResourceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline ListTagsForResourceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline ListTagsForResourceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline ListTagsForResourceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline ListTagsForResourceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
