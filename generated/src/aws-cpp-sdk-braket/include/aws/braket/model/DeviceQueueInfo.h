/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/QueueName.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/QueuePriority.h>
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
   * <p>Information about quantum tasks and hybrid jobs queued on a
   * device.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/DeviceQueueInfo">AWS
   * API Reference</a></p>
   */
  class DeviceQueueInfo
  {
  public:
    AWS_BRAKET_API DeviceQueueInfo() = default;
    AWS_BRAKET_API DeviceQueueInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API DeviceQueueInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the queue. </p>
     */
    inline QueueName GetQueue() const { return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    inline void SetQueue(QueueName value) { m_queueHasBeenSet = true; m_queue = value; }
    inline DeviceQueueInfo& WithQueue(QueueName value) { SetQueue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of hybrid jobs or quantum tasks in the queue for a given device.
     * </p>
     */
    inline const Aws::String& GetQueueSize() const { return m_queueSize; }
    inline bool QueueSizeHasBeenSet() const { return m_queueSizeHasBeenSet; }
    template<typename QueueSizeT = Aws::String>
    void SetQueueSize(QueueSizeT&& value) { m_queueSizeHasBeenSet = true; m_queueSize = std::forward<QueueSizeT>(value); }
    template<typename QueueSizeT = Aws::String>
    DeviceQueueInfo& WithQueueSize(QueueSizeT&& value) { SetQueueSize(std::forward<QueueSizeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. Specifies the priority of the queue. Quantum tasks in a priority
     * queue are processed before the quantum tasks in a normal queue.</p>
     */
    inline QueuePriority GetQueuePriority() const { return m_queuePriority; }
    inline bool QueuePriorityHasBeenSet() const { return m_queuePriorityHasBeenSet; }
    inline void SetQueuePriority(QueuePriority value) { m_queuePriorityHasBeenSet = true; m_queuePriority = value; }
    inline DeviceQueueInfo& WithQueuePriority(QueuePriority value) { SetQueuePriority(value); return *this;}
    ///@}
  private:

    QueueName m_queue{QueueName::NOT_SET};
    bool m_queueHasBeenSet = false;

    Aws::String m_queueSize;
    bool m_queueSizeHasBeenSet = false;

    QueuePriority m_queuePriority{QueuePriority::NOT_SET};
    bool m_queuePriorityHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
