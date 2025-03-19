/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingGroupProperties.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/model/Tag.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class CreateDynamicThingGroupRequest : public IoTRequest
  {
  public:
    AWS_IOT_API CreateDynamicThingGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDynamicThingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The dynamic thing group name to create.</p>
     */
    inline const Aws::String& GetThingGroupName() const { return m_thingGroupName; }
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }
    template<typename ThingGroupNameT = Aws::String>
    void SetThingGroupName(ThingGroupNameT&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::forward<ThingGroupNameT>(value); }
    template<typename ThingGroupNameT = Aws::String>
    CreateDynamicThingGroupRequest& WithThingGroupName(ThingGroupNameT&& value) { SetThingGroupName(std::forward<ThingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group properties.</p>
     */
    inline const ThingGroupProperties& GetThingGroupProperties() const { return m_thingGroupProperties; }
    inline bool ThingGroupPropertiesHasBeenSet() const { return m_thingGroupPropertiesHasBeenSet; }
    template<typename ThingGroupPropertiesT = ThingGroupProperties>
    void SetThingGroupProperties(ThingGroupPropertiesT&& value) { m_thingGroupPropertiesHasBeenSet = true; m_thingGroupProperties = std::forward<ThingGroupPropertiesT>(value); }
    template<typename ThingGroupPropertiesT = ThingGroupProperties>
    CreateDynamicThingGroupRequest& WithThingGroupProperties(ThingGroupPropertiesT&& value) { SetThingGroupProperties(std::forward<ThingGroupPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group index name.</p>  <p>Currently one index is
     * supported: <code>AWS_Things</code>.</p> 
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    CreateDynamicThingGroupRequest& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group search query string.</p> <p>See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/query-syntax.html">Query
     * Syntax</a> for information about query string syntax.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    CreateDynamicThingGroupRequest& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group query version.</p>  <p>Currently one query
     * version is supported: "2017-09-30". If not specified, the query version defaults
     * to this value.</p> 
     */
    inline const Aws::String& GetQueryVersion() const { return m_queryVersion; }
    inline bool QueryVersionHasBeenSet() const { return m_queryVersionHasBeenSet; }
    template<typename QueryVersionT = Aws::String>
    void SetQueryVersion(QueryVersionT&& value) { m_queryVersionHasBeenSet = true; m_queryVersion = std::forward<QueryVersionT>(value); }
    template<typename QueryVersionT = Aws::String>
    CreateDynamicThingGroupRequest& WithQueryVersion(QueryVersionT&& value) { SetQueryVersion(std::forward<QueryVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the dynamic thing group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateDynamicThingGroupRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateDynamicThingGroupRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet = false;

    ThingGroupProperties m_thingGroupProperties;
    bool m_thingGroupPropertiesHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_queryVersion;
    bool m_queryVersionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
