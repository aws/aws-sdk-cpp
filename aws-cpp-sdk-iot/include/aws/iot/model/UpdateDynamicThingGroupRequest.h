/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/IoTRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingGroupProperties.h>
#include <utility>

namespace Aws
{
namespace IoT
{
namespace Model
{

  /**
   */
  class UpdateDynamicThingGroupRequest : public IoTRequest
  {
  public:
    AWS_IOT_API UpdateDynamicThingGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDynamicThingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the dynamic thing group to update.</p>
     */
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }

    /**
     * <p>The name of the dynamic thing group to update.</p>
     */
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }

    /**
     * <p>The name of the dynamic thing group to update.</p>
     */
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = value; }

    /**
     * <p>The name of the dynamic thing group to update.</p>
     */
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::move(value); }

    /**
     * <p>The name of the dynamic thing group to update.</p>
     */
    inline void SetThingGroupName(const char* value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName.assign(value); }

    /**
     * <p>The name of the dynamic thing group to update.</p>
     */
    inline UpdateDynamicThingGroupRequest& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}

    /**
     * <p>The name of the dynamic thing group to update.</p>
     */
    inline UpdateDynamicThingGroupRequest& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the dynamic thing group to update.</p>
     */
    inline UpdateDynamicThingGroupRequest& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}


    /**
     * <p>The dynamic thing group properties to update.</p>
     */
    inline const ThingGroupProperties& GetThingGroupProperties() const{ return m_thingGroupProperties; }

    /**
     * <p>The dynamic thing group properties to update.</p>
     */
    inline bool ThingGroupPropertiesHasBeenSet() const { return m_thingGroupPropertiesHasBeenSet; }

    /**
     * <p>The dynamic thing group properties to update.</p>
     */
    inline void SetThingGroupProperties(const ThingGroupProperties& value) { m_thingGroupPropertiesHasBeenSet = true; m_thingGroupProperties = value; }

    /**
     * <p>The dynamic thing group properties to update.</p>
     */
    inline void SetThingGroupProperties(ThingGroupProperties&& value) { m_thingGroupPropertiesHasBeenSet = true; m_thingGroupProperties = std::move(value); }

    /**
     * <p>The dynamic thing group properties to update.</p>
     */
    inline UpdateDynamicThingGroupRequest& WithThingGroupProperties(const ThingGroupProperties& value) { SetThingGroupProperties(value); return *this;}

    /**
     * <p>The dynamic thing group properties to update.</p>
     */
    inline UpdateDynamicThingGroupRequest& WithThingGroupProperties(ThingGroupProperties&& value) { SetThingGroupProperties(std::move(value)); return *this;}


    /**
     * <p>The expected version of the dynamic thing group to update.</p>
     */
    inline long long GetExpectedVersion() const{ return m_expectedVersion; }

    /**
     * <p>The expected version of the dynamic thing group to update.</p>
     */
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }

    /**
     * <p>The expected version of the dynamic thing group to update.</p>
     */
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }

    /**
     * <p>The expected version of the dynamic thing group to update.</p>
     */
    inline UpdateDynamicThingGroupRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}


    /**
     * <p>The dynamic thing group index to update.</p>  <p>Currently one index is
     * supported: <code>AWS_Things</code>.</p> 
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The dynamic thing group index to update.</p>  <p>Currently one index is
     * supported: <code>AWS_Things</code>.</p> 
     */
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }

    /**
     * <p>The dynamic thing group index to update.</p>  <p>Currently one index is
     * supported: <code>AWS_Things</code>.</p> 
     */
    inline void SetIndexName(const Aws::String& value) { m_indexNameHasBeenSet = true; m_indexName = value; }

    /**
     * <p>The dynamic thing group index to update.</p>  <p>Currently one index is
     * supported: <code>AWS_Things</code>.</p> 
     */
    inline void SetIndexName(Aws::String&& value) { m_indexNameHasBeenSet = true; m_indexName = std::move(value); }

    /**
     * <p>The dynamic thing group index to update.</p>  <p>Currently one index is
     * supported: <code>AWS_Things</code>.</p> 
     */
    inline void SetIndexName(const char* value) { m_indexNameHasBeenSet = true; m_indexName.assign(value); }

    /**
     * <p>The dynamic thing group index to update.</p>  <p>Currently one index is
     * supported: <code>AWS_Things</code>.</p> 
     */
    inline UpdateDynamicThingGroupRequest& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The dynamic thing group index to update.</p>  <p>Currently one index is
     * supported: <code>AWS_Things</code>.</p> 
     */
    inline UpdateDynamicThingGroupRequest& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The dynamic thing group index to update.</p>  <p>Currently one index is
     * supported: <code>AWS_Things</code>.</p> 
     */
    inline UpdateDynamicThingGroupRequest& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The dynamic thing group search query string to update.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The dynamic thing group search query string to update.</p>
     */
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }

    /**
     * <p>The dynamic thing group search query string to update.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryStringHasBeenSet = true; m_queryString = value; }

    /**
     * <p>The dynamic thing group search query string to update.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryStringHasBeenSet = true; m_queryString = std::move(value); }

    /**
     * <p>The dynamic thing group search query string to update.</p>
     */
    inline void SetQueryString(const char* value) { m_queryStringHasBeenSet = true; m_queryString.assign(value); }

    /**
     * <p>The dynamic thing group search query string to update.</p>
     */
    inline UpdateDynamicThingGroupRequest& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The dynamic thing group search query string to update.</p>
     */
    inline UpdateDynamicThingGroupRequest& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The dynamic thing group search query string to update.</p>
     */
    inline UpdateDynamicThingGroupRequest& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The dynamic thing group query version to update.</p>  <p>Currently one
     * query version is supported: "2017-09-30". If not specified, the query version
     * defaults to this value.</p> 
     */
    inline const Aws::String& GetQueryVersion() const{ return m_queryVersion; }

    /**
     * <p>The dynamic thing group query version to update.</p>  <p>Currently one
     * query version is supported: "2017-09-30". If not specified, the query version
     * defaults to this value.</p> 
     */
    inline bool QueryVersionHasBeenSet() const { return m_queryVersionHasBeenSet; }

    /**
     * <p>The dynamic thing group query version to update.</p>  <p>Currently one
     * query version is supported: "2017-09-30". If not specified, the query version
     * defaults to this value.</p> 
     */
    inline void SetQueryVersion(const Aws::String& value) { m_queryVersionHasBeenSet = true; m_queryVersion = value; }

    /**
     * <p>The dynamic thing group query version to update.</p>  <p>Currently one
     * query version is supported: "2017-09-30". If not specified, the query version
     * defaults to this value.</p> 
     */
    inline void SetQueryVersion(Aws::String&& value) { m_queryVersionHasBeenSet = true; m_queryVersion = std::move(value); }

    /**
     * <p>The dynamic thing group query version to update.</p>  <p>Currently one
     * query version is supported: "2017-09-30". If not specified, the query version
     * defaults to this value.</p> 
     */
    inline void SetQueryVersion(const char* value) { m_queryVersionHasBeenSet = true; m_queryVersion.assign(value); }

    /**
     * <p>The dynamic thing group query version to update.</p>  <p>Currently one
     * query version is supported: "2017-09-30". If not specified, the query version
     * defaults to this value.</p> 
     */
    inline UpdateDynamicThingGroupRequest& WithQueryVersion(const Aws::String& value) { SetQueryVersion(value); return *this;}

    /**
     * <p>The dynamic thing group query version to update.</p>  <p>Currently one
     * query version is supported: "2017-09-30". If not specified, the query version
     * defaults to this value.</p> 
     */
    inline UpdateDynamicThingGroupRequest& WithQueryVersion(Aws::String&& value) { SetQueryVersion(std::move(value)); return *this;}

    /**
     * <p>The dynamic thing group query version to update.</p>  <p>Currently one
     * query version is supported: "2017-09-30". If not specified, the query version
     * defaults to this value.</p> 
     */
    inline UpdateDynamicThingGroupRequest& WithQueryVersion(const char* value) { SetQueryVersion(value); return *this;}

  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet = false;

    ThingGroupProperties m_thingGroupProperties;
    bool m_thingGroupPropertiesHasBeenSet = false;

    long long m_expectedVersion;
    bool m_expectedVersionHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_queryVersion;
    bool m_queryVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
