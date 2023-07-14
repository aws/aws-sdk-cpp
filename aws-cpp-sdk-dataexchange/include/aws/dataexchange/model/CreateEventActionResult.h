﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/dataexchange/model/Action.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/dataexchange/model/Event.h>
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
namespace DataExchange
{
namespace Model
{
  class AWS_DATAEXCHANGE_API CreateEventActionResult
  {
  public:
    CreateEventActionResult();
    CreateEventActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateEventActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>What occurs after a certain event.</p>
     */
    inline const Action& GetAction() const{ return m_action; }

    /**
     * <p>What occurs after a certain event.</p>
     */
    inline void SetAction(const Action& value) { m_action = value; }

    /**
     * <p>What occurs after a certain event.</p>
     */
    inline void SetAction(Action&& value) { m_action = std::move(value); }

    /**
     * <p>What occurs after a certain event.</p>
     */
    inline CreateEventActionResult& WithAction(const Action& value) { SetAction(value); return *this;}

    /**
     * <p>What occurs after a certain event.</p>
     */
    inline CreateEventActionResult& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The ARN for the event action.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN for the event action.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The ARN for the event action.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The ARN for the event action.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The ARN for the event action.</p>
     */
    inline CreateEventActionResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN for the event action.</p>
     */
    inline CreateEventActionResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN for the event action.</p>
     */
    inline CreateEventActionResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that the event action was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The date and time that the event action was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The date and time that the event action was created, in ISO 8601 format.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The date and time that the event action was created, in ISO 8601 format.</p>
     */
    inline CreateEventActionResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The date and time that the event action was created, in ISO 8601 format.</p>
     */
    inline CreateEventActionResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>What occurs to start an action.</p>
     */
    inline const Event& GetEvent() const{ return m_event; }

    /**
     * <p>What occurs to start an action.</p>
     */
    inline void SetEvent(const Event& value) { m_event = value; }

    /**
     * <p>What occurs to start an action.</p>
     */
    inline void SetEvent(Event&& value) { m_event = std::move(value); }

    /**
     * <p>What occurs to start an action.</p>
     */
    inline CreateEventActionResult& WithEvent(const Event& value) { SetEvent(value); return *this;}

    /**
     * <p>What occurs to start an action.</p>
     */
    inline CreateEventActionResult& WithEvent(Event&& value) { SetEvent(std::move(value)); return *this;}


    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline CreateEventActionResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline CreateEventActionResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline CreateEventActionResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The date and time that the event action was last updated, in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The date and time that the event action was last updated, in ISO 8601
     * format.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The date and time that the event action was last updated, in ISO 8601
     * format.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The date and time that the event action was last updated, in ISO 8601
     * format.</p>
     */
    inline CreateEventActionResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The date and time that the event action was last updated, in ISO 8601
     * format.</p>
     */
    inline CreateEventActionResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Action m_action;

    Aws::String m_arn;

    Aws::Utils::DateTime m_createdAt;

    Event m_event;

    Aws::String m_id;

    Aws::Utils::DateTime m_updatedAt;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
