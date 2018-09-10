﻿/*
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
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/MediaConvertRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MediaConvert
{
namespace Model
{

  /**
   */
  class AWS_MEDIACONVERT_API CreateQueueRequest : public MediaConvertRequest
  {
  public:
    CreateQueueRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateQueue"; }

    Aws::String SerializePayload() const override;


    /**
     * Optional. A description of the queue you are creating.
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * Optional. A description of the queue you are creating.
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * Optional. A description of the queue you are creating.
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * Optional. A description of the queue you are creating.
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * Optional. A description of the queue you are creating.
     */
    inline CreateQueueRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * Optional. A description of the queue you are creating.
     */
    inline CreateQueueRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * Optional. A description of the queue you are creating.
     */
    inline CreateQueueRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * The name of the queue you are creating.
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * The name of the queue you are creating.
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * The name of the queue you are creating.
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * The name of the queue you are creating.
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * The name of the queue you are creating.
     */
    inline CreateQueueRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * The name of the queue you are creating.
     */
    inline CreateQueueRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * The name of the queue you are creating.
     */
    inline CreateQueueRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * The tags that you want to add to the resource. You can tag resources with a
     * key-value pair or with only a key.
     */
    inline CreateQueueRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
