/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
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
namespace AppConfig
{
namespace Model
{
  class ListTagsForResourceResult
  {
  public:
    AWS_APPCONFIG_API ListTagsForResourceResult();
    AWS_APPCONFIG_API ListTagsForResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPCONFIG_API ListTagsForResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Metadata to assign to AppConfig resources. Tags help organize and categorize
     * your AppConfig resources. Each tag consists of a key and an optional value, both
     * of which you define.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata to assign to AppConfig resources. Tags help organize and categorize
     * your AppConfig resources. Each tag consists of a key and an optional value, both
     * of which you define.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>Metadata to assign to AppConfig resources. Tags help organize and categorize
     * your AppConfig resources. Each tag consists of a key and an optional value, both
     * of which you define.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>Metadata to assign to AppConfig resources. Tags help organize and categorize
     * your AppConfig resources. Each tag consists of a key and an optional value, both
     * of which you define.</p>
     */
    inline ListTagsForResourceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata to assign to AppConfig resources. Tags help organize and categorize
     * your AppConfig resources. Each tag consists of a key and an optional value, both
     * of which you define.</p>
     */
    inline ListTagsForResourceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata to assign to AppConfig resources. Tags help organize and categorize
     * your AppConfig resources. Each tag consists of a key and an optional value, both
     * of which you define.</p>
     */
    inline ListTagsForResourceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata to assign to AppConfig resources. Tags help organize and categorize
     * your AppConfig resources. Each tag consists of a key and an optional value, both
     * of which you define.</p>
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to AppConfig resources. Tags help organize and categorize
     * your AppConfig resources. Each tag consists of a key and an optional value, both
     * of which you define.</p>
     */
    inline ListTagsForResourceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to AppConfig resources. Tags help organize and categorize
     * your AppConfig resources. Each tag consists of a key and an optional value, both
     * of which you define.</p>
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to AppConfig resources. Tags help organize and categorize
     * your AppConfig resources. Each tag consists of a key and an optional value, both
     * of which you define.</p>
     */
    inline ListTagsForResourceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata to assign to AppConfig resources. Tags help organize and categorize
     * your AppConfig resources. Each tag consists of a key and an optional value, both
     * of which you define.</p>
     */
    inline ListTagsForResourceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata to assign to AppConfig resources. Tags help organize and categorize
     * your AppConfig resources. Each tag consists of a key and an optional value, both
     * of which you define.</p>
     */
    inline ListTagsForResourceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
