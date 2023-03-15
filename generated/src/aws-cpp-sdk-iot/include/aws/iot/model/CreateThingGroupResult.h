﻿/**
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
  class CreateThingGroupResult
  {
  public:
    AWS_IOT_API CreateThingGroupResult();
    AWS_IOT_API CreateThingGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API CreateThingGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The thing group name.</p>
     */
    inline const Aws::String& GetThingGroupName() const{ return m_thingGroupName; }

    /**
     * <p>The thing group name.</p>
     */
    inline void SetThingGroupName(const Aws::String& value) { m_thingGroupName = value; }

    /**
     * <p>The thing group name.</p>
     */
    inline void SetThingGroupName(Aws::String&& value) { m_thingGroupName = std::move(value); }

    /**
     * <p>The thing group name.</p>
     */
    inline void SetThingGroupName(const char* value) { m_thingGroupName.assign(value); }

    /**
     * <p>The thing group name.</p>
     */
    inline CreateThingGroupResult& WithThingGroupName(const Aws::String& value) { SetThingGroupName(value); return *this;}

    /**
     * <p>The thing group name.</p>
     */
    inline CreateThingGroupResult& WithThingGroupName(Aws::String&& value) { SetThingGroupName(std::move(value)); return *this;}

    /**
     * <p>The thing group name.</p>
     */
    inline CreateThingGroupResult& WithThingGroupName(const char* value) { SetThingGroupName(value); return *this;}


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
    inline CreateThingGroupResult& WithThingGroupArn(const Aws::String& value) { SetThingGroupArn(value); return *this;}

    /**
     * <p>The thing group ARN.</p>
     */
    inline CreateThingGroupResult& WithThingGroupArn(Aws::String&& value) { SetThingGroupArn(std::move(value)); return *this;}

    /**
     * <p>The thing group ARN.</p>
     */
    inline CreateThingGroupResult& WithThingGroupArn(const char* value) { SetThingGroupArn(value); return *this;}


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
    inline CreateThingGroupResult& WithThingGroupId(const Aws::String& value) { SetThingGroupId(value); return *this;}

    /**
     * <p>The thing group ID.</p>
     */
    inline CreateThingGroupResult& WithThingGroupId(Aws::String&& value) { SetThingGroupId(std::move(value)); return *this;}

    /**
     * <p>The thing group ID.</p>
     */
    inline CreateThingGroupResult& WithThingGroupId(const char* value) { SetThingGroupId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateThingGroupResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateThingGroupResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateThingGroupResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_thingGroupName;

    Aws::String m_thingGroupArn;

    Aws::String m_thingGroupId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
