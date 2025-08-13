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
   * <p>The queue information for the specified quantum task.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/QuantumTaskQueueInfo">AWS
   * API Reference</a></p>
   */
  class QuantumTaskQueueInfo
  {
  public:
    AWS_BRAKET_API QuantumTaskQueueInfo() = default;
    AWS_BRAKET_API QuantumTaskQueueInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API QuantumTaskQueueInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the queue. </p>
     */
    inline QueueName GetQueue() const { return m_queue; }
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
    inline void SetQueue(QueueName value) { m_queueHasBeenSet = true; m_queue = value; }
    inline QuantumTaskQueueInfo& WithQueue(QueueName value) { SetQueue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Current position of the quantum task in the quantum tasks queue.</p>
     */
    inline const Aws::String& GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    template<typename PositionT = Aws::String>
    void SetPosition(PositionT&& value) { m_positionHasBeenSet = true; m_position = std::forward<PositionT>(value); }
    template<typename PositionT = Aws::String>
    QuantumTaskQueueInfo& WithPosition(PositionT&& value) { SetPosition(std::forward<PositionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. Specifies the priority of the queue. Quantum tasks in a priority
     * queue are processed before the quantum tasks in a normal queue.</p>
     */
    inline QueuePriority GetQueuePriority() const { return m_queuePriority; }
    inline bool QueuePriorityHasBeenSet() const { return m_queuePriorityHasBeenSet; }
    inline void SetQueuePriority(QueuePriority value) { m_queuePriorityHasBeenSet = true; m_queuePriority = value; }
    inline QuantumTaskQueueInfo& WithQueuePriority(QueuePriority value) { SetQueuePriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. Provides more information about the queue position. For example, if
     * the quantum task is complete and no longer in the queue, the message field
     * contains that information.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    QuantumTaskQueueInfo& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    QueueName m_queue{QueueName::NOT_SET};
    bool m_queueHasBeenSet = false;

    Aws::String m_position;
    bool m_positionHasBeenSet = false;

    QueuePriority m_queuePriority{QueuePriority::NOT_SET};
    bool m_queuePriorityHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
