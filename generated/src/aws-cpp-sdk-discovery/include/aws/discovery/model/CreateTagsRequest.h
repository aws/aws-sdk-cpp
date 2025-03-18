/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateTagsRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API CreateTagsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTags"; }

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONDISCOVERYSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of configuration items that you want to tag.</p>
     */
    inline const Aws::Vector<Aws::String>& GetConfigurationIds() const { return m_configurationIds; }
    inline bool ConfigurationIdsHasBeenSet() const { return m_configurationIdsHasBeenSet; }
    template<typename ConfigurationIdsT = Aws::Vector<Aws::String>>
    void SetConfigurationIds(ConfigurationIdsT&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds = std::forward<ConfigurationIdsT>(value); }
    template<typename ConfigurationIdsT = Aws::Vector<Aws::String>>
    CreateTagsRequest& WithConfigurationIds(ConfigurationIdsT&& value) { SetConfigurationIds(std::forward<ConfigurationIdsT>(value)); return *this;}
    template<typename ConfigurationIdsT = Aws::String>
    CreateTagsRequest& AddConfigurationIds(ConfigurationIdsT&& value) { m_configurationIdsHasBeenSet = true; m_configurationIds.emplace_back(std::forward<ConfigurationIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Tags that you want to associate with one or more configuration items. Specify
     * the tags that you want to create in a <i>key</i>-<i>value</i> format. For
     * example:</p> <p> <code>{"key": "serverType", "value": "webServer"}</code> </p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateTagsRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateTagsRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_configurationIds;
    bool m_configurationIdsHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
