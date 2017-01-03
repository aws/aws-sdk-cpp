﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
namespace CloudWatchLogs
{
namespace Model
{
  class AWS_CLOUDWATCHLOGS_API ListTagsLogGroupResult
  {
  public:
    ListTagsLogGroupResult();
    ListTagsLogGroupResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListTagsLogGroupResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = value; }

    /**
     * <p>The tags.</p>
     */
    inline ListTagsLogGroupResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline ListTagsLogGroupResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(value); return *this;}

    /**
     * <p>The tags.</p>
     */
    inline ListTagsLogGroupResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags[key] = value; return *this; }

    /**
     * <p>The tags.</p>
     */
    inline ListTagsLogGroupResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags[key] = value; return *this; }

    /**
     * <p>The tags.</p>
     */
    inline ListTagsLogGroupResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags[key] = value; return *this; }

    /**
     * <p>The tags.</p>
     */
    inline ListTagsLogGroupResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags[key] = value; return *this; }

    /**
     * <p>The tags.</p>
     */
    inline ListTagsLogGroupResult& AddTags(const char* key, Aws::String&& value) { m_tags[key] = value; return *this; }

    /**
     * <p>The tags.</p>
     */
    inline ListTagsLogGroupResult& AddTags(Aws::String&& key, const char* value) { m_tags[key] = value; return *this; }

    /**
     * <p>The tags.</p>
     */
    inline ListTagsLogGroupResult& AddTags(const char* key, const char* value) { m_tags[key] = value; return *this; }

  private:
    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
