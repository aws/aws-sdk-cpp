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
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace MediaConnect
{
namespace Model
{

  /**
   * The tags to add to the resource. A tag is an array of key-value pairs. Tag keys
   * can have a maximum character length of 128 characters, and tag values can have a
   * maximum length of 256 characters.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/TagResourceRequest">AWS
   * API Reference</a></p>
   */
  class AWS_MEDIACONNECT_API TagResourceRequest : public MediaConnectRequest
  {
  public:
    TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    Aws::String SerializePayload() const override;


    /**
     * The Amazon Resource Name (ARN) that identifies the AWS Elemental MediaConnect
     * resource to which to add tags.
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * The Amazon Resource Name (ARN) that identifies the AWS Elemental MediaConnect
     * resource to which to add tags.
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * The Amazon Resource Name (ARN) that identifies the AWS Elemental MediaConnect
     * resource to which to add tags.
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * The Amazon Resource Name (ARN) that identifies the AWS Elemental MediaConnect
     * resource to which to add tags.
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * The Amazon Resource Name (ARN) that identifies the AWS Elemental MediaConnect
     * resource to which to add tags.
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * The Amazon Resource Name (ARN) that identifies the AWS Elemental MediaConnect
     * resource to which to add tags.
     */
    inline TagResourceRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * The Amazon Resource Name (ARN) that identifies the AWS Elemental MediaConnect
     * resource to which to add tags.
     */
    inline TagResourceRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * The Amazon Resource Name (ARN) that identifies the AWS Elemental MediaConnect
     * resource to which to add tags.
     */
    inline TagResourceRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline TagResourceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline TagResourceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline TagResourceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * A map from tag keys to values. Tag keys can have a maximum character length of
     * 128 characters, and tag values can have a maximum length of 256 characters.
     */
    inline TagResourceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
