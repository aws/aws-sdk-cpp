/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/QueueName.h>
#include <aws/braket/model/QueuePriority.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Information about tasks and jobs queued on a device.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/DeviceQueueInfo">AWS
   * API Reference</a></p>
   */
  class DeviceQueueInfo
  {
  public:
    AWS_BRAKET_API DeviceQueueInfo();
    AWS_BRAKET_API DeviceQueueInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API DeviceQueueInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the queue. </p>
     */
    inline const QueueName& GetQueue() const{ return m_queue; }

    /**
     * <p>The name of the queue. </p>
     */
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }

    /**
     * <p>The name of the queue. </p>
     */
    inline void SetQueue(const QueueName& value) { m_queueHasBeenSet = true; m_queue = value; }

    /**
     * <p>The name of the queue. </p>
     */
    inline void SetQueue(QueueName&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }

    /**
     * <p>The name of the queue. </p>
     */
    inline DeviceQueueInfo& WithQueue(const QueueName& value) { SetQueue(value); return *this;}

    /**
     * <p>The name of the queue. </p>
     */
    inline DeviceQueueInfo& WithQueue(QueueName&& value) { SetQueue(std::move(value)); return *this;}


    /**
     * <p>Optional. Specifies the priority of the queue. Tasks in a priority queue are
     * processed before the tasks in a normal queue.</p>
     */
    inline const QueuePriority& GetQueuePriority() const{ return m_queuePriority; }

    /**
     * <p>Optional. Specifies the priority of the queue. Tasks in a priority queue are
     * processed before the tasks in a normal queue.</p>
     */
    inline bool QueuePriorityHasBeenSet() const { return m_queuePriorityHasBeenSet; }

    /**
     * <p>Optional. Specifies the priority of the queue. Tasks in a priority queue are
     * processed before the tasks in a normal queue.</p>
     */
    inline void SetQueuePriority(const QueuePriority& value) { m_queuePriorityHasBeenSet = true; m_queuePriority = value; }

    /**
     * <p>Optional. Specifies the priority of the queue. Tasks in a priority queue are
     * processed before the tasks in a normal queue.</p>
     */
    inline void SetQueuePriority(QueuePriority&& value) { m_queuePriorityHasBeenSet = true; m_queuePriority = std::move(value); }

    /**
     * <p>Optional. Specifies the priority of the queue. Tasks in a priority queue are
     * processed before the tasks in a normal queue.</p>
     */
    inline DeviceQueueInfo& WithQueuePriority(const QueuePriority& value) { SetQueuePriority(value); return *this;}

    /**
     * <p>Optional. Specifies the priority of the queue. Tasks in a priority queue are
     * processed before the tasks in a normal queue.</p>
     */
    inline DeviceQueueInfo& WithQueuePriority(QueuePriority&& value) { SetQueuePriority(std::move(value)); return *this;}


    /**
     * <p>The number of jobs or tasks in the queue for a given device. </p>
     */
    inline const Aws::String& GetQueueSize() const{ return m_queueSize; }

    /**
     * <p>The number of jobs or tasks in the queue for a given device. </p>
     */
    inline bool QueueSizeHasBeenSet() const { return m_queueSizeHasBeenSet; }

    /**
     * <p>The number of jobs or tasks in the queue for a given device. </p>
     */
    inline void SetQueueSize(const Aws::String& value) { m_queueSizeHasBeenSet = true; m_queueSize = value; }

    /**
     * <p>The number of jobs or tasks in the queue for a given device. </p>
     */
    inline void SetQueueSize(Aws::String&& value) { m_queueSizeHasBeenSet = true; m_queueSize = std::move(value); }

    /**
     * <p>The number of jobs or tasks in the queue for a given device. </p>
     */
    inline void SetQueueSize(const char* value) { m_queueSizeHasBeenSet = true; m_queueSize.assign(value); }

    /**
     * <p>The number of jobs or tasks in the queue for a given device. </p>
     */
    inline DeviceQueueInfo& WithQueueSize(const Aws::String& value) { SetQueueSize(value); return *this;}

    /**
     * <p>The number of jobs or tasks in the queue for a given device. </p>
     */
    inline DeviceQueueInfo& WithQueueSize(Aws::String&& value) { SetQueueSize(std::move(value)); return *this;}

    /**
     * <p>The number of jobs or tasks in the queue for a given device. </p>
     */
    inline DeviceQueueInfo& WithQueueSize(const char* value) { SetQueueSize(value); return *this;}

  private:

    QueueName m_queue;
    bool m_queueHasBeenSet = false;

    QueuePriority m_queuePriority;
    bool m_queuePriorityHasBeenSet = false;

    Aws::String m_queueSize;
    bool m_queueSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
