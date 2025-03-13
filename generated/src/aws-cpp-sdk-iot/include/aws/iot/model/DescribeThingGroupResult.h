/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/ThingGroupProperties.h>
#include <aws/iot/model/ThingGroupMetadata.h>
#include <aws/iot/model/DynamicGroupStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace IoT
{
namespace Model
{
  class DescribeThingGroupResult
  {
  public:
    AWS_IOT_API DescribeThingGroupResult() = default;
    AWS_IOT_API DescribeThingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeThingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the thing group.</p>
     */
    inline const Aws::String& GetThingGroupName() const { return m_thingGroupName; }
    template<typename ThingGroupNameT = Aws::String>
    void SetThingGroupName(ThingGroupNameT&& value) { m_thingGroupNameHasBeenSet = true; m_thingGroupName = std::forward<ThingGroupNameT>(value); }
    template<typename ThingGroupNameT = Aws::String>
    DescribeThingGroupResult& WithThingGroupName(ThingGroupNameT&& value) { SetThingGroupName(std::forward<ThingGroupNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group ID.</p>
     */
    inline const Aws::String& GetThingGroupId() const { return m_thingGroupId; }
    template<typename ThingGroupIdT = Aws::String>
    void SetThingGroupId(ThingGroupIdT&& value) { m_thingGroupIdHasBeenSet = true; m_thingGroupId = std::forward<ThingGroupIdT>(value); }
    template<typename ThingGroupIdT = Aws::String>
    DescribeThingGroupResult& WithThingGroupId(ThingGroupIdT&& value) { SetThingGroupId(std::forward<ThingGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group ARN.</p>
     */
    inline const Aws::String& GetThingGroupArn() const { return m_thingGroupArn; }
    template<typename ThingGroupArnT = Aws::String>
    void SetThingGroupArn(ThingGroupArnT&& value) { m_thingGroupArnHasBeenSet = true; m_thingGroupArn = std::forward<ThingGroupArnT>(value); }
    template<typename ThingGroupArnT = Aws::String>
    DescribeThingGroupResult& WithThingGroupArn(ThingGroupArnT&& value) { SetThingGroupArn(std::forward<ThingGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the thing group.</p>
     */
    inline long long GetVersion() const { return m_version; }
    inline void SetVersion(long long value) { m_versionHasBeenSet = true; m_version = value; }
    inline DescribeThingGroupResult& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group properties.</p>
     */
    inline const ThingGroupProperties& GetThingGroupProperties() const { return m_thingGroupProperties; }
    template<typename ThingGroupPropertiesT = ThingGroupProperties>
    void SetThingGroupProperties(ThingGroupPropertiesT&& value) { m_thingGroupPropertiesHasBeenSet = true; m_thingGroupProperties = std::forward<ThingGroupPropertiesT>(value); }
    template<typename ThingGroupPropertiesT = ThingGroupProperties>
    DescribeThingGroupResult& WithThingGroupProperties(ThingGroupPropertiesT&& value) { SetThingGroupProperties(std::forward<ThingGroupPropertiesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Thing group metadata.</p>
     */
    inline const ThingGroupMetadata& GetThingGroupMetadata() const { return m_thingGroupMetadata; }
    template<typename ThingGroupMetadataT = ThingGroupMetadata>
    void SetThingGroupMetadata(ThingGroupMetadataT&& value) { m_thingGroupMetadataHasBeenSet = true; m_thingGroupMetadata = std::forward<ThingGroupMetadataT>(value); }
    template<typename ThingGroupMetadataT = ThingGroupMetadata>
    DescribeThingGroupResult& WithThingGroupMetadata(ThingGroupMetadataT&& value) { SetThingGroupMetadata(std::forward<ThingGroupMetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group index name.</p>
     */
    inline const Aws::String& GetIndexName() const { return m_indexName; }
    template<typename IndexNameT = Aws::String>
    void SetIndexName(IndexNameT&& value) { m_indexNameHasBeenSet = true; m_indexName = std::forward<IndexNameT>(value); }
    template<typename IndexNameT = Aws::String>
    DescribeThingGroupResult& WithIndexName(IndexNameT&& value) { SetIndexName(std::forward<IndexNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group search query string.</p>
     */
    inline const Aws::String& GetQueryString() const { return m_queryString; }
    template<typename QueryStringT = Aws::String>
    void SetQueryString(QueryStringT&& value) { m_queryStringHasBeenSet = true; m_queryString = std::forward<QueryStringT>(value); }
    template<typename QueryStringT = Aws::String>
    DescribeThingGroupResult& WithQueryString(QueryStringT&& value) { SetQueryString(std::forward<QueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group query version.</p>
     */
    inline const Aws::String& GetQueryVersion() const { return m_queryVersion; }
    template<typename QueryVersionT = Aws::String>
    void SetQueryVersion(QueryVersionT&& value) { m_queryVersionHasBeenSet = true; m_queryVersion = std::forward<QueryVersionT>(value); }
    template<typename QueryVersionT = Aws::String>
    DescribeThingGroupResult& WithQueryVersion(QueryVersionT&& value) { SetQueryVersion(std::forward<QueryVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group status.</p>
     */
    inline DynamicGroupStatus GetStatus() const { return m_status; }
    inline void SetStatus(DynamicGroupStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DescribeThingGroupResult& WithStatus(DynamicGroupStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeThingGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_thingGroupName;
    bool m_thingGroupNameHasBeenSet = false;

    Aws::String m_thingGroupId;
    bool m_thingGroupIdHasBeenSet = false;

    Aws::String m_thingGroupArn;
    bool m_thingGroupArnHasBeenSet = false;

    long long m_version{0};
    bool m_versionHasBeenSet = false;

    ThingGroupProperties m_thingGroupProperties;
    bool m_thingGroupPropertiesHasBeenSet = false;

    ThingGroupMetadata m_thingGroupMetadata;
    bool m_thingGroupMetadataHasBeenSet = false;

    Aws::String m_indexName;
    bool m_indexNameHasBeenSet = false;

    Aws::String m_queryString;
    bool m_queryStringHasBeenSet = false;

    Aws::String m_queryVersion;
    bool m_queryVersionHasBeenSet = false;

    DynamicGroupStatus m_status{DynamicGroupStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
