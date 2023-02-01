/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RoutingProfileQueueReference.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Contains information about the queue and channel for which priority and delay
   * can be set.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RoutingProfileQueueConfig">AWS
   * API Reference</a></p>
   */
  class RoutingProfileQueueConfig
  {
  public:
    AWS_CONNECT_API RoutingProfileQueueConfig();
    AWS_CONNECT_API RoutingProfileQueueConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RoutingProfileQueueConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Contains information about a queue resource.</p>
     */
    inline const RoutingProfileQueueReference& GetQueueReference() const{ return m_queueReference; }

    /**
     * <p>Contains information about a queue resource.</p>
     */
    inline bool QueueReferenceHasBeenSet() const { return m_queueReferenceHasBeenSet; }

    /**
     * <p>Contains information about a queue resource.</p>
     */
    inline void SetQueueReference(const RoutingProfileQueueReference& value) { m_queueReferenceHasBeenSet = true; m_queueReference = value; }

    /**
     * <p>Contains information about a queue resource.</p>
     */
    inline void SetQueueReference(RoutingProfileQueueReference&& value) { m_queueReferenceHasBeenSet = true; m_queueReference = std::move(value); }

    /**
     * <p>Contains information about a queue resource.</p>
     */
    inline RoutingProfileQueueConfig& WithQueueReference(const RoutingProfileQueueReference& value) { SetQueueReference(value); return *this;}

    /**
     * <p>Contains information about a queue resource.</p>
     */
    inline RoutingProfileQueueConfig& WithQueueReference(RoutingProfileQueueReference&& value) { SetQueueReference(std::move(value)); return *this;}


    /**
     * <p>The order in which contacts are to be handled for the queue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing-profiles-priority.html">Queues:
     * priority and delay</a>.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The order in which contacts are to be handled for the queue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing-profiles-priority.html">Queues:
     * priority and delay</a>.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The order in which contacts are to be handled for the queue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing-profiles-priority.html">Queues:
     * priority and delay</a>.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The order in which contacts are to be handled for the queue. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing-profiles-priority.html">Queues:
     * priority and delay</a>.</p>
     */
    inline RoutingProfileQueueConfig& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The delay, in seconds, a contact should be in the queue before they are
     * routed to an available agent. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing-profiles-priority.html">Queues:
     * priority and delay</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline int GetDelay() const{ return m_delay; }

    /**
     * <p>The delay, in seconds, a contact should be in the queue before they are
     * routed to an available agent. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing-profiles-priority.html">Queues:
     * priority and delay</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline bool DelayHasBeenSet() const { return m_delayHasBeenSet; }

    /**
     * <p>The delay, in seconds, a contact should be in the queue before they are
     * routed to an available agent. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing-profiles-priority.html">Queues:
     * priority and delay</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline void SetDelay(int value) { m_delayHasBeenSet = true; m_delay = value; }

    /**
     * <p>The delay, in seconds, a contact should be in the queue before they are
     * routed to an available agent. For more information, see <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/concepts-routing-profiles-priority.html">Queues:
     * priority and delay</a> in the <i>Amazon Connect Administrator Guide</i>.</p>
     */
    inline RoutingProfileQueueConfig& WithDelay(int value) { SetDelay(value); return *this;}

  private:

    RoutingProfileQueueReference m_queueReference;
    bool m_queueReferenceHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    int m_delay;
    bool m_delayHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
