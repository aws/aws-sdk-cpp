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
    AWS_IOT_API DescribeThingGroupResult();
    AWS_IOT_API DescribeThingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API DescribeThingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the thing group.</p>
     */
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupName = value; }
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupName = std::move(value); }
    inline void SetThingGroupName(const char* value) { m_thingGroupName.assign(value); }
    inline DescribeThingGroupResult& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}
    inline DescribeThingGroupResult& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}
    inline DescribeThingGroupResult& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group ID.</p>
     */
    inline const Aws::String& GetThingGroupId() const{ return m_thingGroupId; }
    inline void SetThingGroupId(const Aws::String& value) { m_thingGroupId = value; }
    inline void SetThingGroupId(Aws::String&& value) { m_thingGroupId = std::move(value); }
    inline void SetThingGroupId(const char* value) { m_thingGroupId.assign(value); }
    inline DescribeThingGroupResult& WithThingGroupId(const Aws::String& value) { SetThingGroupId(value); return *this;}
    inline DescribeThingGroupResult& WithThingGroupId(Aws::String&& value) { SetThingGroupId(std::move(value)); return *this;}
    inline DescribeThingGroupResult& WithThingGroupId(const char* value) { SetThingGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group ARN.</p>
     */
    inline const Aws::String& GetThingGroupArn() const{ return m_thingGroupArn; }
    inline void SetThingGroupArn(const Aws::String& value) { m_thingGroupArn = value; }
    inline void SetThingGroupArn(Aws::String&& value) { m_thingGroupArn = std::move(value); }
    inline void SetThingGroupArn(const char* value) { m_thingGroupArn.assign(value); }
    inline DescribeThingGroupResult& WithThingGroupArn(const Aws::String& value) { SetThingGroupArn(value); return *this;}
    inline DescribeThingGroupResult& WithThingGroupArn(Aws::String&& value) { SetThingGroupArn(std::move(value)); return *this;}
    inline DescribeThingGroupResult& WithThingGroupArn(const char* value) { SetThingGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the thing group.</p>
     */
    inline long long GetVersion() const{ return m_version; }
    inline void SetVersion(long long value) { m_version = value; }
    inline DescribeThingGroupResult& WithVersion(long long value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The thing group properties.</p>
     */
    inline const ThingGroupProperties& GetThingGroupProperties() const{ return m_thingGroupProperties; }
    inline void SetThingGroupProperties(const ThingGroupProperties& value) { m_thingGroupProperties = value; }
    inline void SetThingGroupProperties(ThingGroupProperties&& value) { m_thingGroupProperties = std::move(value); }
    inline DescribeThingGroupResult& WithThingGroupProperties(const ThingGroupProperties& value) { SetThingGroupProperties(value); return *this;}
    inline DescribeThingGroupResult& WithThingGroupProperties(ThingGroupProperties&& value) { SetThingGroupProperties(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Thing group metadata.</p>
     */
    inline const ThingGroupMetadata& GetThingGroupMetadata() const{ return m_thingGroupMetadata; }
    inline void SetThingGroupMetadata(const ThingGroupMetadata& value) { m_thingGroupMetadata = value; }
    inline void SetThingGroupMetadata(ThingGroupMetadata&& value) { m_thingGroupMetadata = std::move(value); }
    inline DescribeThingGroupResult& WithThingGroupMetadata(const ThingGroupMetadata& value) { SetThingGroupMetadata(value); return *this;}
    inline DescribeThingGroupResult& WithThingGroupMetadata(ThingGroupMetadata&& value) { SetThingGroupMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group index name.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }
    inline DescribeThingGroupResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline DescribeThingGroupResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline DescribeThingGroupResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group search query string.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline void SetQueryString(const Aws::String& value) { m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryString.assign(value); }
    inline DescribeThingGroupResult& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline DescribeThingGroupResult& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline DescribeThingGroupResult& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group query version.</p>
     */
    inline const Aws::String& GetQueryVersion() const{ return m_queryVersion; }
    inline void SetQueryVersion(const Aws::String& value) { m_queryVersion = value; }
    inline void SetQueryVersion(Aws::String&& value) { m_queryVersion = std::move(value); }
    inline void SetQueryVersion(const char* value) { m_queryVersion.assign(value); }
    inline DescribeThingGroupResult& WithQueryVersion(const Aws::String& value) { SetQueryVersion(value); return *this;}
    inline DescribeThingGroupResult& WithQueryVersion(Aws::String&& value) { SetQueryVersion(std::move(value)); return *this;}
    inline DescribeThingGroupResult& WithQueryVersion(const char* value) { SetQueryVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group status.</p>
     */
    inline const DynamicGroupStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DynamicGroupStatus& value) { m_status = value; }
    inline void SetStatus(DynamicGroupStatus&& value) { m_status = std::move(value); }
    inline DescribeThingGroupResult& WithStatus(const DynamicGroupStatus& value) { SetStatus(value); return *this;}
    inline DescribeThingGroupResult& WithStatus(DynamicGroupStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeThingGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeThingGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeThingGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_thingGroupName;

    Aws::String m_thingGroupId;

    Aws::String m_thingGroupArn;

    long long m_version;

    ThingGroupProperties m_thingGroupProperties;

    ThingGroupMetadata m_thingGroupMetadata;

    Aws::String m_indexName;

    Aws::String m_queryString;

    Aws::String m_queryVersion;

    DynamicGroupStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
