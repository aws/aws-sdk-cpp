/**
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
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataExchange
{
namespace Model
{

  /**
   * <p>An event action is an object that defines the relationship between a specific
   * event and an automated action that will be taken on behalf of the
   * customer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/EventActionEntry">AWS
   * API Reference</a></p>
   */
  class EventActionEntry
  {
  public:
    AWS_DATAEXCHANGE_API EventActionEntry();
    AWS_DATAEXCHANGE_API EventActionEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API EventActionEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>What occurs after a certain event.</p>
     */
    inline const Action& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const Action& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(Action&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline EventActionEntry& WithAction(const Action& value) { SetAction(value); return *this;}
    inline EventActionEntry& WithAction(Action&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the event action.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline EventActionEntry& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline EventActionEntry& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline EventActionEntry& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the event action was created, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline EventActionEntry& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline EventActionEntry& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>What occurs to start an action.</p>
     */
    inline const Event& GetEvent() const{ return m_event; }
    inline bool EventHasBeenSet() const { return m_eventHasBeenSet; }
    inline void SetEvent(const Event& value) { m_eventHasBeenSet = true; m_event = value; }
    inline void SetEvent(Event&& value) { m_eventHasBeenSet = true; m_event = std::move(value); }
    inline EventActionEntry& WithEvent(const Event& value) { SetEvent(value); return *this;}
    inline EventActionEntry& WithEvent(Event&& value) { SetEvent(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the event action.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline EventActionEntry& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline EventActionEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline EventActionEntry& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the event action was last updated, in ISO 8601
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline EventActionEntry& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline EventActionEntry& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Event m_event;
    bool m_eventHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
