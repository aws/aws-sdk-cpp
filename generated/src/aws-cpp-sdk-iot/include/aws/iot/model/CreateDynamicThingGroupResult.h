/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateDynamicThingGroupResult
  {
  public:
    AWS_IOT_API CreateDynamicThingGroupResult();
    AWS_IOT_API CreateDynamicThingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateDynamicThingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The dynamic thing group name.</p>
     */
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupName = value; }
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupName = std::move(value); }
    inline void SetThingGroupName(const char* value) { m_thingGroupName.assign(value); }
    inline CreateDynamicThingGroupResult& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}
    inline CreateDynamicThingGroupResult& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}
    inline CreateDynamicThingGroupResult& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group ARN.</p>
     */
    inline const Aws::String& GetThingGroupArn() const{ return m_thingGroupArn; }
    inline void SetThingGroupArn(const Aws::String& value) { m_thingGroupArn = value; }
    inline void SetThingGroupArn(Aws::String&& value) { m_thingGroupArn = std::move(value); }
    inline void SetThingGroupArn(const char* value) { m_thingGroupArn.assign(value); }
    inline CreateDynamicThingGroupResult& WithThingGroupArn(const Aws::String& value) { SetThingGroupArn(value); return *this;}
    inline CreateDynamicThingGroupResult& WithThingGroupArn(Aws::String&& value) { SetThingGroupArn(std::move(value)); return *this;}
    inline CreateDynamicThingGroupResult& WithThingGroupArn(const char* value) { SetThingGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group ID.</p>
     */
    inline const Aws::String& GetThingGroupId() const{ return m_thingGroupId; }
    inline void SetThingGroupId(const Aws::String& value) { m_thingGroupId = value; }
    inline void SetThingGroupId(Aws::String&& value) { m_thingGroupId = std::move(value); }
    inline void SetThingGroupId(const char* value) { m_thingGroupId.assign(value); }
    inline CreateDynamicThingGroupResult& WithThingGroupId(const Aws::String& value) { SetThingGroupId(value); return *this;}
    inline CreateDynamicThingGroupResult& WithThingGroupId(Aws::String&& value) { SetThingGroupId(std::move(value)); return *this;}
    inline CreateDynamicThingGroupResult& WithThingGroupId(const char* value) { SetThingGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group index name.</p>
     */
    inline const Aws::String& GetIndexName() const{ return m_indexName; }
    inline void SetIndexName(const Aws::String& value) { m_indexName = value; }
    inline void SetIndexName(Aws::String&& value) { m_indexName = std::move(value); }
    inline void SetIndexName(const char* value) { m_indexName.assign(value); }
    inline CreateDynamicThingGroupResult& WithIndexName(const Aws::String& value) { SetIndexName(value); return *this;}
    inline CreateDynamicThingGroupResult& WithIndexName(Aws::String&& value) { SetIndexName(std::move(value)); return *this;}
    inline CreateDynamicThingGroupResult& WithIndexName(const char* value) { SetIndexName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group search query string.</p>
     */
    inline const Aws::String& GetQueryString() const{ return m_queryString; }
    inline void SetQueryString(const Aws::String& value) { m_queryString = value; }
    inline void SetQueryString(Aws::String&& value) { m_queryString = std::move(value); }
    inline void SetQueryString(const char* value) { m_queryString.assign(value); }
    inline CreateDynamicThingGroupResult& WithQueryString(const Aws::String& value) { SetQueryString(value); return *this;}
    inline CreateDynamicThingGroupResult& WithQueryString(Aws::String&& value) { SetQueryString(std::move(value)); return *this;}
    inline CreateDynamicThingGroupResult& WithQueryString(const char* value) { SetQueryString(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dynamic thing group query version.</p>
     */
    inline const Aws::String& GetQueryVersion() const{ return m_queryVersion; }
    inline void SetQueryVersion(const Aws::String& value) { m_queryVersion = value; }
    inline void SetQueryVersion(Aws::String&& value) { m_queryVersion = std::move(value); }
    inline void SetQueryVersion(const char* value) { m_queryVersion.assign(value); }
    inline CreateDynamicThingGroupResult& WithQueryVersion(const Aws::String& value) { SetQueryVersion(value); return *this;}
    inline CreateDynamicThingGroupResult& WithQueryVersion(Aws::String&& value) { SetQueryVersion(std::move(value)); return *this;}
    inline CreateDynamicThingGroupResult& WithQueryVersion(const char* value) { SetQueryVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateDynamicThingGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateDynamicThingGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateDynamicThingGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_thingGroupName;

    Aws::String m_thingGroupArn;

    Aws::String m_thingGroupId;

    Aws::String m_indexName;

    Aws::String m_queryString;

    Aws::String m_queryVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
