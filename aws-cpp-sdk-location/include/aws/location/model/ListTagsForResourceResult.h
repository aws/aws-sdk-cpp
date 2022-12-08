/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/location/LocationService_EXPORTS.h>
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
namespace LocationService
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_LOCATIONSERVICE_API ListTagsForResourceResult();
    AWS_LOCATIONSERVICE_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LOCATIONSERVICE_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Tags that have been applied to the specified resource. Tags are mapped from
     * the tag key to the tag value: <code>"TagKey" : "TagValue"</code>.</p> <ul> <li>
     * <p>Format example: <code>{"tag1" : "value1", "tag2" : "value2"} </code> </p>
     * </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags that have been applied to the specified resource. Tags are mapped from
     * the tag key to the tag value: <code>"TagKey" : "TagValue"</code>.</p> <ul> <li>
     * <p>Format example: <code>{"tag1" : "value1", "tag2" : "value2"} </code> </p>
     * </li> </ul>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Tags that have been applied to the specified resource. Tags are mapped from
     * the tag key to the tag value: <code>"TagKey" : "TagValue"</code>.</p> <ul> <li>
     * <p>Format example: <code>{"tag1" : "value1", "tag2" : "value2"} </code> </p>
     * </li> </ul>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Tags that have been applied to the specified resource. Tags are mapped from
     * the tag key to the tag value: <code>"TagKey" : "TagValue"</code>.</p> <ul> <li>
     * <p>Format example: <code>{"tag1" : "value1", "tag2" : "value2"} </code> </p>
     * </li> </ul>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags that have been applied to the specified resource. Tags are mapped from
     * the tag key to the tag value: <code>"TagKey" : "TagValue"</code>.</p> <ul> <li>
     * <p>Format example: <code>{"tag1" : "value1", "tag2" : "value2"} </code> </p>
     * </li> </ul>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags that have been applied to the specified resource. Tags are mapped from
     * the tag key to the tag value: <code>"TagKey" : "TagValue"</code>.</p> <ul> <li>
     * <p>Format example: <code>{"tag1" : "value1", "tag2" : "value2"} </code> </p>
     * </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Tags that have been applied to the specified resource. Tags are mapped from
     * the tag key to the tag value: <code>"TagKey" : "TagValue"</code>.</p> <ul> <li>
     * <p>Format example: <code>{"tag1" : "value1", "tag2" : "value2"} </code> </p>
     * </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags that have been applied to the specified resource. Tags are mapped from
     * the tag key to the tag value: <code>"TagKey" : "TagValue"</code>.</p> <ul> <li>
     * <p>Format example: <code>{"tag1" : "value1", "tag2" : "value2"} </code> </p>
     * </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags that have been applied to the specified resource. Tags are mapped from
     * the tag key to the tag value: <code>"TagKey" : "TagValue"</code>.</p> <ul> <li>
     * <p>Format example: <code>{"tag1" : "value1", "tag2" : "value2"} </code> </p>
     * </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Tags that have been applied to the specified resource. Tags are mapped from
     * the tag key to the tag value: <code>"TagKey" : "TagValue"</code>.</p> <ul> <li>
     * <p>Format example: <code>{"tag1" : "value1", "tag2" : "value2"} </code> </p>
     * </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Tags that have been applied to the specified resource. Tags are mapped from
     * the tag key to the tag value: <code>"TagKey" : "TagValue"</code>.</p> <ul> <li>
     * <p>Format example: <code>{"tag1" : "value1", "tag2" : "value2"} </code> </p>
     * </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Tags that have been applied to the specified resource. Tags are mapped from
     * the tag key to the tag value: <code>"TagKey" : "TagValue"</code>.</p> <ul> <li>
     * <p>Format example: <code>{"tag1" : "value1", "tag2" : "value2"} </code> </p>
     * </li> </ul>
     */
    inline ListTagsForResourceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace LocationService
} // namespace Aws
