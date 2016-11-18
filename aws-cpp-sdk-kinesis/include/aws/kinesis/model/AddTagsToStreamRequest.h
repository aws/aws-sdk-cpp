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
#include <aws/kinesis/Kinesis_EXPORTS.h>
#include <aws/kinesis/KinesisRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace Kinesis
{
namespace Model
{

  /**
   * <p>Represents the input for <code>AddTagsToStream</code>.</p>
   */
  class AWS_KINESIS_API AddTagsToStreamRequest : public KinesisRequest
  {
  public:
    AddTagsToStreamRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The name of the stream.</p>
     */
    inline const Aws::String& GetStreamName() const{ return m_streamName; }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(const Aws::String& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(Aws::String&& value) { m_streamNameHasBeenSet = true; m_streamName = value; }

    /**
     * <p>The name of the stream.</p>
     */
    inline void SetStreamName(const char* value) { m_streamNameHasBeenSet = true; m_streamName.assign(value); }

    /**
     * <p>The name of the stream.</p>
     */
    inline AddTagsToStreamRequest& WithStreamName(const Aws::String& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream.</p>
     */
    inline AddTagsToStreamRequest& WithStreamName(Aws::String&& value) { SetStreamName(value); return *this;}

    /**
     * <p>The name of the stream.</p>
     */
    inline AddTagsToStreamRequest& WithStreamName(const char* value) { SetStreamName(value); return *this;}

    /**
     * <p>The set of key-value pairs to use to create the tags.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The set of key-value pairs to use to create the tags.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The set of key-value pairs to use to create the tags.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The set of key-value pairs to use to create the tags.</p>
     */
    inline AddTagsToStreamRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The set of key-value pairs to use to create the tags.</p>
     */
    inline AddTagsToStreamRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(value); return *this;}

    /**
     * <p>The set of key-value pairs to use to create the tags.</p>
     */
    inline AddTagsToStreamRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The set of key-value pairs to use to create the tags.</p>
     */
    inline AddTagsToStreamRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The set of key-value pairs to use to create the tags.</p>
     */
    inline AddTagsToStreamRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The set of key-value pairs to use to create the tags.</p>
     */
    inline AddTagsToStreamRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The set of key-value pairs to use to create the tags.</p>
     */
    inline AddTagsToStreamRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The set of key-value pairs to use to create the tags.</p>
     */
    inline AddTagsToStreamRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

    /**
     * <p>The set of key-value pairs to use to create the tags.</p>
     */
    inline AddTagsToStreamRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags[key] = value; return *this; }

  private:
    Aws::String m_streamName;
    bool m_streamNameHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace Kinesis
} // namespace Aws
