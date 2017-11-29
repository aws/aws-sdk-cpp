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
#include <aws/kinesisvideo/KinesisVideo_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace KinesisVideo
{
namespace Model
{
  class AWS_KINESISVIDEO_API ListTagsForStreamResult
  {
  public:
    ListTagsForStreamResult();
    ListTagsForStreamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsForStreamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>If you specify this parameter and the result of a <code>ListTags</code> call
     * is truncated, the response includes a token that you can use in the next request
     * to fetch the next set of tags.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If you specify this parameter and the result of a <code>ListTags</code> call
     * is truncated, the response includes a token that you can use in the next request
     * to fetch the next set of tags.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If you specify this parameter and the result of a <code>ListTags</code> call
     * is truncated, the response includes a token that you can use in the next request
     * to fetch the next set of tags.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If you specify this parameter and the result of a <code>ListTags</code> call
     * is truncated, the response includes a token that you can use in the next request
     * to fetch the next set of tags.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If you specify this parameter and the result of a <code>ListTags</code> call
     * is truncated, the response includes a token that you can use in the next request
     * to fetch the next set of tags.</p>
     */
    inline ListTagsForStreamResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If you specify this parameter and the result of a <code>ListTags</code> call
     * is truncated, the response includes a token that you can use in the next request
     * to fetch the next set of tags.</p>
     */
    inline ListTagsForStreamResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If you specify this parameter and the result of a <code>ListTags</code> call
     * is truncated, the response includes a token that you can use in the next request
     * to fetch the next set of tags.</p>
     */
    inline ListTagsForStreamResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A map of tag keys and values associated with the specified stream.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map of tag keys and values associated with the specified stream.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A map of tag keys and values associated with the specified stream.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A map of tag keys and values associated with the specified stream.</p>
     */
    inline ListTagsForStreamResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map of tag keys and values associated with the specified stream.</p>
     */
    inline ListTagsForStreamResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map of tag keys and values associated with the specified stream.</p>
     */
    inline ListTagsForStreamResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map of tag keys and values associated with the specified stream.</p>
     */
    inline ListTagsForStreamResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of tag keys and values associated with the specified stream.</p>
     */
    inline ListTagsForStreamResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of tag keys and values associated with the specified stream.</p>
     */
    inline ListTagsForStreamResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of tag keys and values associated with the specified stream.</p>
     */
    inline ListTagsForStreamResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of tag keys and values associated with the specified stream.</p>
     */
    inline ListTagsForStreamResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of tag keys and values associated with the specified stream.</p>
     */
    inline ListTagsForStreamResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
