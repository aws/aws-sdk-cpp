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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/events/model/EventSourceState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>A partner event source is created by an SaaS partner. If a customer creates a
   * partner event bus that matches this event source, that AWS account can receive
   * events from the partner's applications or services.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/EventSource">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API EventSource
  {
  public:
    EventSource();
    EventSource(Aws::Utils::Json::JsonView jsonValue);
    EventSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the event source.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the event source.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the event source.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the event source.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the event source.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the event source.</p>
     */
    inline EventSource& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the event source.</p>
     */
    inline EventSource& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the event source.</p>
     */
    inline EventSource& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the partner that created the event source.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The name of the partner that created the event source.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The name of the partner that created the event source.</p>
     */
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The name of the partner that created the event source.</p>
     */
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The name of the partner that created the event source.</p>
     */
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }

    /**
     * <p>The name of the partner that created the event source.</p>
     */
    inline EventSource& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The name of the partner that created the event source.</p>
     */
    inline EventSource& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}

    /**
     * <p>The name of the partner that created the event source.</p>
     */
    inline EventSource& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}


    /**
     * <p>The date and time when the event source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The date and time when the event source was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The date and time when the event source was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The date and time when the event source was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The date and time when the event source was created.</p>
     */
    inline EventSource& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The date and time when the event source was created.</p>
     */
    inline EventSource& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The date and time when the event source will expire if the AWS account
     * doesn't create a matching event bus for it.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>The date and time when the event source will expire if the AWS account
     * doesn't create a matching event bus for it.</p>
     */
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }

    /**
     * <p>The date and time when the event source will expire if the AWS account
     * doesn't create a matching event bus for it.</p>
     */
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }

    /**
     * <p>The date and time when the event source will expire if the AWS account
     * doesn't create a matching event bus for it.</p>
     */
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }

    /**
     * <p>The date and time when the event source will expire if the AWS account
     * doesn't create a matching event bus for it.</p>
     */
    inline EventSource& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}

    /**
     * <p>The date and time when the event source will expire if the AWS account
     * doesn't create a matching event bus for it.</p>
     */
    inline EventSource& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}


    /**
     * <p>The name of the event source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the event source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the event source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the event source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the event source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the event source.</p>
     */
    inline EventSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the event source.</p>
     */
    inline EventSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the event source.</p>
     */
    inline EventSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline const EventSourceState& GetState() const{ return m_state; }

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline void SetState(const EventSourceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline void SetState(EventSourceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline EventSource& WithState(const EventSourceState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the event source. If it's <code>ACTIVE</code>, you have already
     * created a matching event bus for this event source, and that event bus is
     * active. If it's <code>PENDING</code>, either you haven't yet created a matching
     * event bus, or that event bus is deactivated. If it's <code>DELETED</code>, you
     * have created a matching event bus, but the event source has since been
     * deleted.</p>
     */
    inline EventSource& WithState(EventSourceState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    EventSourceState m_state;
    bool m_stateHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
