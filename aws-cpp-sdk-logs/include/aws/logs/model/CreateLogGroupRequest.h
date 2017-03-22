/*
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
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API CreateLogGroupRequest : public CloudWatchLogsRequest
  {
  public:
    CreateLogGroupRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline CreateLogGroupRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline CreateLogGroupRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline CreateLogGroupRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The key-value pairs to use for the tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pairs to use for the tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pairs to use for the tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pairs to use for the tags.</p>
     */
    inline CreateLogGroupRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pairs to use for the tags.</p>
     */
    inline CreateLogGroupRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pairs to use for the tags.</p>
     */
    inline CreateLogGroupRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The key-value pairs to use for the tags.</p>
     */
    inline CreateLogGroupRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The key-value pairs to use for the tags.</p>
     */
    inline CreateLogGroupRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The key-value pairs to use for the tags.</p>
     */
    inline CreateLogGroupRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The key-value pairs to use for the tags.</p>
     */
    inline CreateLogGroupRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The key-value pairs to use for the tags.</p>
     */
    inline CreateLogGroupRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The key-value pairs to use for the tags.</p>
     */
    inline CreateLogGroupRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

  private:
    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
