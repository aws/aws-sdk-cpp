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
    AWS_IOT_API UpdateDynamicThingGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDynamicThingGroup"; }

    AWS_IOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the dynamic thing group to update.</p>
     */
    inline const Aws::String& GetThingGroupName() const { return m_thingGroupName; }
    inline bool ThingGroupNameHasBeenSet() const { return m_thingGroupNameHasBeenSet; }
    template<typename ThingGroupNameT = Aws::String>
    void SetThingGroupName(ThingGroupNameT&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::forward<ThingGroupNameT>(value); }
    template<typename ThingGroupNameT = Aws::String>
    UpdateDynamicThingGroupRequest& WithThingGroupName(ThingGroupNameT&& value) { SetThingGroupName(std::forward<ThingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group properties to update.</p>
     */
    inline const ThingGroupProperties& GetThingGroupProperties() const { return m_thingGroupProperties; }
    inline bool ThingGroupPropertiesHasBeenSet() const { return m_thingGroupPropertiesHasBeenSet; }
    template<typename ThingGroupPropertiesT = ThingGroupProperties>
    void SetThingGroupProperties(ThingGroupPropertiesT&& value) { m_thingGroupPropertiesHasBeenSet = true; m_thingGroupProperties = std::forward<ThingGroupPropertiesT>(value); }
    template<typename ThingGroupPropertiesT = ThingGroupProperties>
    UpdateDynamicThingGroupRequest& WithThingGroupProperties(ThingGroupPropertiesT&& value) { SetThingGroupProperties(std::forward<ThingGroupPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The expected version of the dynamic thing group to update.</p>
     */
    inline long long GetExpectedVersion() const { return m_expectedVersion; }
    inline bool ExpectedVersionHasBeenSet() const { return m_expectedVersionHasBeenSet; }
    inline void SetExpectedVersion(long long value) { m_expectedVersionHasBeenSet = true; m_expectedVersion = value; }
    inline UpdateDynamicThingGroupRequest& WithExpectedVersion(long long value) { SetExpectedVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group index to update.</p>  <p>Currently one index is
     * supported: <code>AWS_Things</code>.</p> 
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    inline bool IndexNameHasBeenSet() const { return m_indexNameHasBeenSet; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    UpdateDynamicThingGroupRequest& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group search query string to update.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    inline bool QueryStringHasBeenSet() const { return m_queryStringHasBeenSet; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    UpdateDynamicThingGroupRequest& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group query version to update.</p>  <p>Currently one
     * query version is supported: "2017-09-30". If not specified, the query version
     * defaults to this value.</p> 
     */
    inline const Aws::String& GetQueryVersion() const { return m_queryVersion; }
    inline bool QueryVersionHasBeenSet() const { return m_queryVersionHasBeenSet; }
    template<typename QueryVersionT = Aws::String>
    void SetQueryVersion(QueryVersionT&& value) { m_queryVersionHasBeenSet = true; m_queryVersion = std::forward<QueryVersionT>(value); }
    template<typename QueryVersionT = Aws::String>
    UpdateDynamicThingGroupRequest& WithQueryVersion(QueryVersionT&& value) { SetQueryVersion(std::forward<QueryVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet = false;

    ThingGroupProperties m_thingGroupProperties;
    bool m_thingGroupPropertiesHasBeenSet = false;

    long long m_expectedVersion{0};
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
