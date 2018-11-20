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
  class AWS_IOT_API CreateDynamicThingGroupResult
  {
  public:
    CreateDynamicThingGroupResult();
    CreateDynamicThingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateDynamicThingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The dynamic thing group name.</p>
     */
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }

    /**
     * <p>The dynamic thing group name.</p>
     */
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupName = value; }

    /**
     * <p>The dynamic thing group name.</p>
     */
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupName = std::move(value); }

    /**
     * <p>The dynamic thing group name.</p>
     */
    inline void SetThingGroupName(const char* value) { m_thingGroupName.assign(value); }

    /**
     * <p>The dynamic thing group name.</p>
     */
    inline CreateDynamicThingGroupResult& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}

    /**
     * <p>The dynamic thing group name.</p>
     */
    inline CreateDynamicThingGroupResult& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}

    /**
     * <p>The dynamic thing group name.</p>
     */
    inline CreateDynamicThingGroupResult& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}


    /**
     * <p>The dynamic thing group ARN.</p>
     */
    inline const Aws::String& GetThingGroupArn() const{ return m_thingGroupArn; }

    /**
     * <p>The dynamic thing group ARN.</p>
     */
    inline void SetThingGroupArn(const Aws::String& value) { m_thingGroupArn = value; }

    /**
     * <p>The dynamic thing group ARN.</p>
     */
    inline void SetThingGroupArn(Aws::String&& value) { m_thingGroupArn = std::move(value); }

    /**
     * <p>The dynamic thing group ARN.</p>
     */
    inline void SetThingGroupArn(const char* value) { m_thingGroupArn.assign(value); }

    /**
     * <p>The dynamic thing group ARN.</p>
     */
    inline CreateDynamicThingGroupResult& WithThingGroupArn(const Aws::String& value) { SetThingGroupArn(value); return *this;}

    /**
     * <p>The dynamic thing group ARN.</p>
     */
    inline CreateDynamicThingGroupResult& WithThingGroupArn(Aws::String&& value) { SetThingGroupArn(std::move(value)); return *this;}

    /**
     * <p>The dynamic thing group ARN.</p>
     */
    inline CreateDynamicThingGroupResult& WithThingGroupArn(const char* value) { SetThingGroupArn(value); return *this;}


    /**
     * <p>The dynamic thing group ID.</p>
     */
    inline const Aws::String& GetThingGroupId() const{ return m_thingGroupId; }

    /**
     * <p>The dynamic thing group ID.</p>
     */
    inline void SetThingGroupId(const Aws::String& value) { m_thingGroupId = value; }

    /**
     * <p>The dynamic thing group ID.</p>
     */
    inline void SetThingGroupId(Aws::String&& value) { m_thingGroupId = std::move(value); }

    /**
     * <p>The dynamic thing group ID.</p>
     */
    inline void SetThingGroupId(const char* value) { m_thingGroupId.assign(value); }

    /**
     * <p>The dynamic thing group ID.</p>
     */
    inline CreateDynamicThingGroupResult& WithThingGroupId(const Aws::String& value) { SetThingGroupId(value); return *this;}

    /**
     * <p>The dynamic thing group ID.</p>
     */
    inline CreateDynamicThingGroupResult& WithThingGroupId(Aws::String&& value) { SetThingGroupId(std::move(value)); return *this;}

    /**
     * <p>The dynamic thing group ID.</p>
     */
    inline CreateDynamicThingGroupResult& WithThingGroupId(const char* value) { SetThingGroupId(value); return *this;}


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
    inline CreateDynamicThingGroupResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}

    /**
     * <p>The dynamic thing group index name.</p>
     */
    inline CreateDynamicThingGroupResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}

    /**
     * <p>The dynamic thing group index name.</p>
     */
    inline CreateDynamicThingGroupResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}


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
    inline CreateDynamicThingGroupResult& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}

    /**
     * <p>The dynamic thing group search query string.</p>
     */
    inline CreateDynamicThingGroupResult& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}

    /**
     * <p>The dynamic thing group search query string.</p>
     */
    inline CreateDynamicThingGroupResult& WithQueryString(const char* value) { SetQueryString(value); return *this;}


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
    inline CreateDynamicThingGroupResult& WithQueryVersion(const Aws::String& value) { SetQueryVersion(value); return *this;}

    /**
     * <p>The dynamic thing group query version.</p>
     */
    inline CreateDynamicThingGroupResult& WithQueryVersion(Aws::String&& value) { SetQueryVersion(std::move(value)); return *this;}

    /**
     * <p>The dynamic thing group query version.</p>
     */
    inline CreateDynamicThingGroupResult& WithQueryVersion(const char* value) { SetQueryVersion(value); return *this;}

  private:

    Aws::String m_thingGroupName;

    Aws::String m_thingGroupArn;

    Aws::String m_thingGroupId;

    Aws::String m_indexName;

    Aws::String m_queryString;

    Aws::String m_queryVersion;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
