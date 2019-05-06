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
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/CloudWatchLogsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

  /**
   */
  class AWS_CLOUDWATCHLOGS_API UntagLogGroupRequest : public CloudWatchLogsRequest
  {
  public:
    UntagLogGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagLogGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the log group.</p>
     */
    inline const Aws::String& GetLogGroupName() const{ return m_logGroupName; }

    /**
     * <p>The name of the log group.</p>
     */
    inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const Aws::String& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = value; }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(Aws::String&& value) { m_logGroupNameHasBeenSet = true; m_logGroupName = std::move(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline void SetLogGroupName(const char* value) { m_logGroupNameHasBeenSet = true; m_logGroupName.assign(value); }

    /**
     * <p>The name of the log group.</p>
     */
    inline UntagLogGroupRequest& WithLogGroupName(const Aws::String& value) { SetLogGroupName(value); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline UntagLogGroupRequest& WithLogGroupName(Aws::String&& value) { SetLogGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the log group.</p>
     */
    inline UntagLogGroupRequest& WithLogGroupName(const char* value) { SetLogGroupName(value); return *this;}


    /**
     * <p>The tag keys. The corresponding tags are removed from the log group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tag keys. The corresponding tags are removed from the log group.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tag keys. The corresponding tags are removed from the log group.</p>
     */
    inline void SetTags(const Aws::Vector<Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tag keys. The corresponding tags are removed from the log group.</p>
     */
    inline void SetTags(Aws::Vector<Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tag keys. The corresponding tags are removed from the log group.</p>
     */
    inline UntagLogGroupRequest& WithTags(const Aws::Vector<Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tag keys. The corresponding tags are removed from the log group.</p>
     */
    inline UntagLogGroupRequest& WithTags(Aws::Vector<Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tag keys. The corresponding tags are removed from the log group.</p>
     */
    inline UntagLogGroupRequest& AddTags(const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tag keys. The corresponding tags are removed from the log group.</p>
     */
    inline UntagLogGroupRequest& AddTags(Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

    /**
     * <p>The tag keys. The corresponding tags are removed from the log group.</p>
     */
    inline UntagLogGroupRequest& AddTags(const char* value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:

    Aws::String m_logGroupName;
    bool m_logGroupNameHasBeenSet;

    Aws::Vector<Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
