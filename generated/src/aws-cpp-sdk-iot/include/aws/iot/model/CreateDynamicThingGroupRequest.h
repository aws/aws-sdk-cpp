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
    AWS_IOT_API CreateDynamicThingGroupRequest();

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
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = value; }
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::move(value); }
    inline void SetThingGroupName(const char* value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName.assign(value); }
    inline CreateDynamicThingGroupRequest& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}
    inline CreateDynamicThingGroupRequest& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}
    inline CreateDynamicThingGroupRequest& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group properties.</p>
     */
    inline const ThingGroupProperties& GetThingGroupProperties() const{ return m_thingGroupProperties; }
    inline bool ThingGroupPropertiesHasBeenSet() const { return m_thingGroupPropertiesHasBeenSet; }
    inline void SetThingGroupProperties(const ThingGroupProperties& value) { m_thingGroupPropertiesHasBeenSet = true; m_thingGroupProperties = value; }
    inline void SetThingGroupProperties(ThingGroupProperties&& value) { m_thingGroupPropertiesHasBeenSet = true; m_thingGroupProperties = std::move(value); }
    inline CreateDynamicThingGroupRequest& WithThingGroupProperties(const ThingGroupProperties& value) { SetThingGroupProperties(value); return *this;}
    inline CreateDynamicThingGroupRequest& WithThingGroupProperties(ThingGroupProperties&& value) { SetThingGroupProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group index name.</p>  <p>Currently one index is
     * supported: <code>AWS_Things</code>.</p> 
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }
    inline CreateDynamicThingGroupRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline CreateDynamicThingGroupRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline CreateDynamicThingGroupRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group search query string.</p> <p>See <a
     * href="https://docs.aws.amazon.com/iot/latest/developerguide/query-syntax.html">Query
     * Syntax</a> for information about query string syntax.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }
    inline CreateDynamicThingGroupRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline CreateDynamicThingGroupRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline CreateDynamicThingGroupRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group query version.</p>  <p>Currently one query
     * version is supported: "2017-09-30". If not specified, the query version defaults
     * to this value.</p> 
     */
    inline const Aws::String& GetQueryVersion() const{ return m_queryVersion; }
    inline bool QueryVersionHasBeenSet() const { return m_queryVersionHasBeenSet; }
    inline void SetQueryVersion(const Aws::String& value) { m_queryVersionHasBeenSet = true; m_queryVersion = value; }
    inline void SetQueryVersion(Aws::String&& value) { m_queryVersionHasBeenSet = true; m_queryVersion = std::move(value); }
    inline void SetQueryVersion(const char* value) { m_queryVersionHasBeenSet = true; m_queryVersion.assign(value); }
    inline CreateDynamicThingGroupRequest& WithQueryVersion(const Aws::String& value) { SetQueryVersion(value); return *this;}
    inline CreateDynamicThingGroupRequest& WithQueryVersion(Aws::String&& value) { SetQueryVersion(std::move(value)); return *this;}
    inline CreateDynamicThingGroupRequest& WithQueryVersion(const char* value) { SetQueryVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata which can be used to manage the dynamic thing group.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDynamicThingGroupRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateDynamicThingGroupRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDynamicThingGroupRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateDynamicThingGroupRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
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
