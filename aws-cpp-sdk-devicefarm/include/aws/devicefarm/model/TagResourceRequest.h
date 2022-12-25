/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devicefarm/DeviceFarm_EXPORTS.h>
#include <aws/devicefarm/DeviceFarmRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devicefarm/model/Tag.h>
#include <utility>

namespace Aws
{
namespace DeviceFarm
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public DeviceFarmRequest
  {
  public:
    AWS_DEVICEFARM_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_DEVICEFARM_API Aws::String SerializePayload() const override;

    AWS_DEVICEFARM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the resource or resources to which to add
     * tags. You can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource or resources to which to add
     * tags. You can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource or resources to which to add
     * tags. You can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource or resources to which to add
     * tags. You can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource or resources to which to add
     * tags. You can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the resource or resources to which to add
     * tags. You can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline TagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource or resources to which to add
     * tags. You can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline TagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the resource or resources to which to add
     * tags. You can associate tags with the following Device Farm resources:
     * <code>PROJECT</code>, <code>RUN</code>, <code>NETWORK_PROFILE</code>,
     * <code>INSTANCE_PROFILE</code>, <code>DEVICE_INSTANCE</code>,
     * <code>SESSION</code>, <code>DEVICE_POOL</code>, <code>DEVICE</code>, and
     * <code>VPCE_CONFIGURATION</code>.</p>
     */
    inline TagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters. Tag values can have
     * a maximum length of 256 characters.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters. Tag values can have
     * a maximum length of 256 characters.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters. Tag values can have
     * a maximum length of 256 characters.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters. Tag values can have
     * a maximum length of 256 characters.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters. Tag values can have
     * a maximum length of 256 characters.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters. Tag values can have
     * a maximum length of 256 characters.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters. Tag values can have
     * a maximum length of 256 characters.</p>
     */
    inline TagResourceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to add to the resource. A tag is an array of key-value pairs. Tag
     * keys can have a maximum character length of 128 characters. Tag values can have
     * a maximum length of 256 characters.</p>
     */
    inline TagResourceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace DeviceFarm
} // namespace Aws
