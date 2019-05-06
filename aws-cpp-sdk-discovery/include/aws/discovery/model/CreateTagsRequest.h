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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API CreateTagsRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    CreateTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTags"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of configuration items that you want to tag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationIds() const{ return m_configurationIds; }

    /**
     * <p>A list of configuration items that you want to tag.</p>
     */
    inline bool ConfigurationIdsHasBeenSet() const { return m_configurationIdsHasBeenSet; }

    /**
     * <p>A list of configuration items that you want to tag.</p>
     */
    inline void SetConfigurationIds(const Aws::Vector<Aws::String>& value) { m_configurationIdsHasBeenSet = true; m_configurationIds = value; }

    /**
     * <p>A list of configuration items that you want to tag.</p>
     */
    inline void SetConfigurationIds(Aws::Vector<Aws::String>&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds = std::move(value); }

    /**
     * <p>A list of configuration items that you want to tag.</p>
     */
    inline CreateTagsRequest& WithConfigurationIds(const Aws::Vector<Aws::String>& value) { SetConfigurationIds(value); return *this;}

    /**
     * <p>A list of configuration items that you want to tag.</p>
     */
    inline CreateTagsRequest& WithConfigurationIds(Aws::Vector<Aws::String>&& value) { SetConfigurationIds(std::move(value)); return *this;}

    /**
     * <p>A list of configuration items that you want to tag.</p>
     */
    inline CreateTagsRequest& AddConfigurationIds(const Aws::String& value) { m_configurationIdsHasBeenSet = true; m_configurationIds.push_back(value); return *this; }

    /**
     * <p>A list of configuration items that you want to tag.</p>
     */
    inline CreateTagsRequest& AddConfigurationIds(Aws::String&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of configuration items that you want to tag.</p>
     */
    inline CreateTagsRequest& AddConfigurationIds(const char* value) { m_configurationIdsHasBeenSet = true; m_configurationIds.push_back(value); return *this; }


    /**
     * <p>Tags that you want to associate with one or more configuration items. Specify
     * the tags that you want to create in a <i>key</i>-<i>value</i> format. For
     * example:</p> <p> <code>{"key": "serverType", "value": "webServer"}</code> </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags that you want to associate with one or more configuration items. Specify
     * the tags that you want to create in a <i>key</i>-<i>value</i> format. For
     * example:</p> <p> <code>{"key": "serverType", "value": "webServer"}</code> </p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags that you want to associate with one or more configuration items. Specify
     * the tags that you want to create in a <i>key</i>-<i>value</i> format. For
     * example:</p> <p> <code>{"key": "serverType", "value": "webServer"}</code> </p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags that you want to associate with one or more configuration items. Specify
     * the tags that you want to create in a <i>key</i>-<i>value</i> format. For
     * example:</p> <p> <code>{"key": "serverType", "value": "webServer"}</code> </p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags that you want to associate with one or more configuration items. Specify
     * the tags that you want to create in a <i>key</i>-<i>value</i> format. For
     * example:</p> <p> <code>{"key": "serverType", "value": "webServer"}</code> </p>
     */
    inline CreateTagsRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags that you want to associate with one or more configuration items. Specify
     * the tags that you want to create in a <i>key</i>-<i>value</i> format. For
     * example:</p> <p> <code>{"key": "serverType", "value": "webServer"}</code> </p>
     */
    inline CreateTagsRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags that you want to associate with one or more configuration items. Specify
     * the tags that you want to create in a <i>key</i>-<i>value</i> format. For
     * example:</p> <p> <code>{"key": "serverType", "value": "webServer"}</code> </p>
     */
    inline CreateTagsRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags that you want to associate with one or more configuration items. Specify
     * the tags that you want to create in a <i>key</i>-<i>value</i> format. For
     * example:</p> <p> <code>{"key": "serverType", "value": "webServer"}</code> </p>
     */
    inline CreateTagsRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_configurationIds;
    bool m_configurationIdsHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
