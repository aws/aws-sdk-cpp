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
  class AWS_IOT_API DescribeThingGroupResult
  {
  public:
    DescribeThingGroupResult();
    DescribeThingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeThingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the thing group.</p>
     */
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }

    /**
     * <p>The name of the thing group.</p>
     */
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupName = value; }

    /**
     * <p>The name of the thing group.</p>
     */
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupName = std::move(value); }

    /**
     * <p>The name of the thing group.</p>
     */
    inline void SetThingGroupName(const char* value) { m_thingGroupName.assign(value); }

    /**
     * <p>The name of the thing group.</p>
     */
    inline DescribeThingGroupResult& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}

    /**
     * <p>The name of the thing group.</p>
     */
    inline DescribeThingGroupResult& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}

    /**
     * <p>The name of the thing group.</p>
     */
    inline DescribeThingGroupResult& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}


    /**
     * <p>The thing group ID.</p>
     */
    inline const Aws::String& GetThingGroupId() const{ return m_thingGroupId; }

    /**
     * <p>The thing group ID.</p>
     */
    inline void SetThingGroupId(const Aws::String& value) { m_thingGroupId = value; }

    /**
     * <p>The thing group ID.</p>
     */
    inline void SetThingGroupId(Aws::String&& value) { m_thingGroupId = std::move(value); }

    /**
     * <p>The thing group ID.</p>
     */
    inline void SetThingGroupId(const char* value) { m_thingGroupId.assign(value); }

    /**
     * <p>The thing group ID.</p>
     */
    inline DescribeThingGroupResult& WithThingGroupId(const Aws::String& value) { SetThingGroupId(value); return *this;}

    /**
     * <p>The thing group ID.</p>
     */
    inline DescribeThingGroupResult& WithThingGroupId(Aws::String&& value) { SetThingGroupId(std::move(value)); return *this;}

    /**
     * <p>The thing group ID.</p>
     */
    inline DescribeThingGroupResult& WithThingGroupId(const char* value) { SetThingGroupId(value); return *this;}


    /**
     * <p>The thing group ARN.</p>
     */
    inline const Aws::String& GetThingGroupArn() const{ return m_thingGroupArn; }

    /**
     * <p>The thing group ARN.</p>
     */
    inline void SetThingGroupArn(const Aws::String& value) { m_thingGroupArn = value; }

    /**
     * <p>The thing group ARN.</p>
     */
    inline void SetThingGroupArn(Aws::String&& value) { m_thingGroupArn = std::move(value); }

    /**
     * <p>The thing group ARN.</p>
     */
    inline void SetThingGroupArn(const char* value) { m_thingGroupArn.assign(value); }

    /**
     * <p>The thing group ARN.</p>
     */
    inline DescribeThingGroupResult& WithThingGroupArn(const Aws::String& value) { SetThingGroupArn(value); return *this;}

    /**
     * <p>The thing group ARN.</p>
     */
    inline DescribeThingGroupResult& WithThingGroupArn(Aws::String&& value) { SetThingGroupArn(std::move(value)); return *this;}

    /**
     * <p>The thing group ARN.</p>
     */
    inline DescribeThingGroupResult& WithThingGroupArn(const char* value) { SetThingGroupArn(value); return *this;}


    /**
     * <p>The version of the thing group.</p>
     */
    inline long long GetVersion() const{ return m_version; }

    /**
     * <p>The version of the thing group.</p>
     */
    inline void SetVersion(long long value) { m_version = value; }

    /**
     * <p>The version of the thing group.</p>
     */
    inline DescribeThingGroupResult& WithVersion(long long value) { SetVersion(value); return *this;}


    /**
     * <p>The thing group properties.</p>
     */
    inline const ThingGroupProperties& GetThingGroupProperties() const{ return m_thingGroupProperties; }

    /**
     * <p>The thing group properties.</p>
     */
    inline void SetThingGroupProperties(const ThingGroupProperties& value) { m_thingGroupProperties = value; }

    /**
     * <p>The thing group properties.</p>
     */
    inline void SetThingGroupProperties(ThingGroupProperties&& value) { m_thingGroupProperties = std::move(value); }

    /**
     * <p>The thing group properties.</p>
     */
    inline DescribeThingGroupResult& WithThingGroupProperties(const ThingGroupProperties& value) { SetThingGroupProperties(value); return *this;}

    /**
     * <p>The thing group properties.</p>
     */
    inline DescribeThingGroupResult& WithThingGroupProperties(ThingGroupProperties&& value) { SetThingGroupProperties(std::move(value)); return *this;}


    /**
     * <p>Thing group metadata.</p>
     */
    inline const ThingGroupMetadata& GetThingGroupMetadata() const{ return m_thingGroupMetadata; }

    /**
     * <p>Thing group metadata.</p>
     */
    inline void SetThingGroupMetadata(const ThingGroupMetadata& value) { m_thingGroupMetadata = value; }

    /**
     * <p>Thing group metadata.</p>
     */
    inline void SetThingGroupMetadata(ThingGroupMetadata&& value) { m_thingGroupMetadata = std::move(value); }

    /**
     * <p>Thing group metadata.</p>
     */
    inline DescribeThingGroupResult& WithThingGroupMetadata(const ThingGroupMetadata& value) { SetThingGroupMetadata(value); return *this;}

    /**
     * <p>Thing group metadata.</p>
     */
    inline DescribeThingGroupResult& WithThingGroupMetadata(ThingGroupMetadata&& value) { SetThingGroupMetadata(std::move(value)); return *this;}


    /**
     * <p>The dynamic thing group index name.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }

    /**
     * <p>The dynamic thing group index name.</p>
     */
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }

    /**
     * <p>The dynamic thing group index name.</p>
     */
    inline void SetIndexName(Aws::String&& value) { m_indexName = std::move(value); }

    /**
     * <p>The dynamic thing group index name.</p>
     */
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }

    /**
     * <p>The dynamic thing group index name.</p>
     */
    inline DescribeThingGroupResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The dynamic thing group index name.</p>
     */
    inline DescribeThingGroupResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The dynamic thing group index name.</p>
     */
    inline DescribeThingGroupResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}


    /**
     * <p>The dynamic thing group search query string.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }

    /**
     * <p>The dynamic thing group search query string.</p>
     */
    inline void SetQueryString(const Aws::String& value) { m_queryString = value; }

    /**
     * <p>The dynamic thing group search query string.</p>
     */
    inline void SetQueryString(Aws::String&& value) { m_queryString = std::move(value); }

    /**
     * <p>The dynamic thing group search query string.</p>
     */
    inline void SetQueryString(const char* value) { m_queryString.assign(value); }

    /**
     * <p>The dynamic thing group search query string.</p>
     */
    inline DescribeThingGroupResult& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The dynamic thing group search query string.</p>
     */
    inline DescribeThingGroupResult& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The dynamic thing group search query string.</p>
     */
    inline DescribeThingGroupResult& WithQueryString(const char* value) { SetQueryString(value); return *this;}


    /**
     * <p>The dynamic thing group query version.</p>
     */
    inline const Aws::String& GetQueryVersion() const{ return m_queryVersion; }

    /**
     * <p>The dynamic thing group query version.</p>
     */
    inline void SetQueryVersion(const Aws::String& value) { m_queryVersion = value; }

    /**
     * <p>The dynamic thing group query version.</p>
     */
    inline void SetQueryVersion(Aws::String&& value) { m_queryVersion = std::move(value); }

    /**
     * <p>The dynamic thing group query version.</p>
     */
    inline void SetQueryVersion(const char* value) { m_queryVersion.assign(value); }

    /**
     * <p>The dynamic thing group query version.</p>
     */
    inline DescribeThingGroupResult& WithQueryVersion(const Aws::String& value) { SetQueryVersion(value); return *this;}

    /**
     * <p>The dynamic thing group query version.</p>
     */
    inline DescribeThingGroupResult& WithQueryVersion(Aws::String&& value) { SetQueryVersion(std::move(value)); return *this;}

    /**
     * <p>The dynamic thing group query version.</p>
     */
    inline DescribeThingGroupResult& WithQueryVersion(const char* value) { SetQueryVersion(value); return *this;}


    /**
     * <p>The dynamic thing group status.</p>
     */
    inline const DynamicGroupStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The dynamic thing group status.</p>
     */
    inline void SetStatus(const DynamicGroupStatus& value) { m_status = value; }

    /**
     * <p>The dynamic thing group status.</p>
     */
    inline void SetStatus(DynamicGroupStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The dynamic thing group status.</p>
     */
    inline DescribeThingGroupResult& WithStatus(const DynamicGroupStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The dynamic thing group status.</p>
     */
    inline DescribeThingGroupResult& WithStatus(DynamicGroupStatus&& value) { SetStatus(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
