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

namespace Aws
{
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>RemoveTagsFromResourceInput</p>
   */
  class AWS_STORAGEGATEWAY_API RemoveTagsFromResourceRequest : public StorageGatewayRequest
  {
  public:
    RemoveTagsFromResourceRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to remove the tags
     * from.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to remove the tags
     * from.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to remove the tags
     * from.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to remove the tags
     * from.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to remove the tags
     * from.</p>
     */
    inline RemoveTagsFromResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to remove the tags
     * from.</p>
     */
    inline RemoveTagsFromResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource you want to remove the tags
     * from.</p>
     */
    inline RemoveTagsFromResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}

    /**
     * <p>The keys of the tags you want to remove from the specified resource. A tag is
     * composed of a key/value pair.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>The keys of the tags you want to remove from the specified resource. A tag is
     * composed of a key/value pair.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The keys of the tags you want to remove from the specified resource. A tag is
     * composed of a key/value pair.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>The keys of the tags you want to remove from the specified resource. A tag is
     * composed of a key/value pair.</p>
     */
    inline RemoveTagsFromResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The keys of the tags you want to remove from the specified resource. A tag is
     * composed of a key/value pair.</p>
     */
    inline RemoveTagsFromResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(value); return *this;}

    /**
     * <p>The keys of the tags you want to remove from the specified resource. A tag is
     * composed of a key/value pair.</p>
     */
    inline RemoveTagsFromResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The keys of the tags you want to remove from the specified resource. A tag is
     * composed of a key/value pair.</p>
     */
    inline RemoveTagsFromResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>The keys of the tags you want to remove from the specified resource. A tag is
     * composed of a key/value pair.</p>
     */
    inline RemoveTagsFromResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:
    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet;
    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
