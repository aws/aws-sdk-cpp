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
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/storagegateway/StorageGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/Tag.h>

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>AddTagsToResourceInput</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/AddTagsToResourceInput">AWS
   * API Reference</a></p>
   */
  class AWS_STORAGEGATEWAY_API AddTagsToResourceRequest : public StorageGatewayRequest
  {
  public:
    AddTagsToResourceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline AddTagsToResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline AddTagsToResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to add tags to.</p>
     */
    inline AddTagsToResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @.</p> </note>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @.</p> </note>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @.</p> </note>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @.</p> </note>
     */
    inline AddTagsToResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @.</p> </note>
     */
    inline AddTagsToResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(value); return *this;}

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @.</p> </note>
     */
    inline AddTagsToResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The key-value pair that represents the tag you want to add to the resource.
     * The value can be an empty string.</p> <note> <p>Valid characters for key and
     * value are letters, spaces, and numbers representable in UTF-8 format, and the
     * following special characters: + - = . _ : / @.</p> </note>
     */
    inline AddTagsToResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

  private:
    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;
    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
