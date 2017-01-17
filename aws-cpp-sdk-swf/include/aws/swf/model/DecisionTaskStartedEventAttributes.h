﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/swf/SWF_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SWF
{
namespace Model
{

  /**
   * <p>Provides details of the <code>DecisionTaskStarted</code> event.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/swf-2012-01-25/DecisionTaskStartedEventAttributes">AWS
   * API Reference</a></p>
   */
  class AWS_SWF_API DecisionTaskStartedEventAttributes
  {
  public:
    DecisionTaskStartedEventAttributes();
    DecisionTaskStartedEventAttributes(const Aws::Utils::Json::JsonValue& jsonValue);
    DecisionTaskStartedEventAttributes& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>Identity of the decider making the request. This enables diagnostic tracing
     * when problems arise. The form of this identity is user defined.</p>
     */
    inline const Aws::String& GetIdentity() const{ return m_identity; }

    /**
     * <p>Identity of the decider making the request. This enables diagnostic tracing
     * when problems arise. The form of this identity is user defined.</p>
     */
    inline void SetIdentity(const Aws::String& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>Identity of the decider making the request. This enables diagnostic tracing
     * when problems arise. The form of this identity is user defined.</p>
     */
    inline void SetIdentity(Aws::String&& value) { m_identityHasBeenSet = true; m_identity = value; }

    /**
     * <p>Identity of the decider making the request. This enables diagnostic tracing
     * when problems arise. The form of this identity is user defined.</p>
     */
    inline void SetIdentity(const char* value) { m_identityHasBeenSet = true; m_identity.assign(value); }

    /**
     * <p>Identity of the decider making the request. This enables diagnostic tracing
     * when problems arise. The form of this identity is user defined.</p>
     */
    inline DecisionTaskStartedEventAttributes& WithIdentity(const Aws::String& value) { SetIdentity(value); return *this;}

    /**
     * <p>Identity of the decider making the request. This enables diagnostic tracing
     * when problems arise. The form of this identity is user defined.</p>
     */
    inline DecisionTaskStartedEventAttributes& WithIdentity(Aws::String&& value) { SetIdentity(value); return *this;}

    /**
     * <p>Identity of the decider making the request. This enables diagnostic tracing
     * when problems arise. The form of this identity is user defined.</p>
     */
    inline DecisionTaskStartedEventAttributes& WithIdentity(const char* value) { SetIdentity(value); return *this;}

    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline long long GetScheduledEventId() const{ return m_scheduledEventId; }

    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline void SetScheduledEventId(long long value) { m_scheduledEventIdHasBeenSet = true; m_scheduledEventId = value; }

    /**
     * <p>The ID of the <code>DecisionTaskScheduled</code> event that was recorded when
     * this decision task was scheduled. This information can be useful for diagnosing
     * problems by tracing back the chain of events leading up to this event.</p>
     */
    inline DecisionTaskStartedEventAttributes& WithScheduledEventId(long long value) { SetScheduledEventId(value); return *this;}

  private:
    Aws::String m_identity;
    bool m_identityHasBeenSet;
    long long m_scheduledEventId;
    bool m_scheduledEventIdHasBeenSet;
  };

} // namespace Model
} // namespace SWF
} // namespace Aws
