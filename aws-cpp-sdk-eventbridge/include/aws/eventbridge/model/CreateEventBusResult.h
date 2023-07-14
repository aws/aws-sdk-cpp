﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
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
namespace EventBridge
{
namespace Model
{
  class AWS_EVENTBRIDGE_API CreateEventBusResult
  {
  public:
    CreateEventBusResult();
    CreateEventBusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateEventBusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline const Aws::String& GetEventBusArn() const{ return m_eventBusArn; }

    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline void SetEventBusArn(const Aws::String& value) { m_eventBusArn = value; }

    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline void SetEventBusArn(Aws::String&& value) { m_eventBusArn = std::move(value); }

    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline void SetEventBusArn(const char* value) { m_eventBusArn.assign(value); }

    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline CreateEventBusResult& WithEventBusArn(const Aws::String& value) { SetEventBusArn(value); return *this;}

    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline CreateEventBusResult& WithEventBusArn(Aws::String&& value) { SetEventBusArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the new event bus.</p>
     */
    inline CreateEventBusResult& WithEventBusArn(const char* value) { SetEventBusArn(value); return *this;}

  private:

    Aws::String m_eventBusArn;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
