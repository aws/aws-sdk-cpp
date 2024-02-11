/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/braket/model/QueueName.h>
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
   * <p>Information about the queue for a specified job.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/HybridJobQueueInfo">AWS
   * API Reference</a></p>
   */
  class HybridJobQueueInfo
  {
  public:
    AWS_BRAKET_API HybridJobQueueInfo();
    AWS_BRAKET_API HybridJobQueueInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API HybridJobQueueInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Optional. Provides more information about the queue position. For example, if
     * the job is complete and no longer in the queue, the message field contains that
     * information.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Optional. Provides more information about the queue position. For example, if
     * the job is complete and no longer in the queue, the message field contains that
     * information.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Optional. Provides more information about the queue position. For example, if
     * the job is complete and no longer in the queue, the message field contains that
     * information.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Optional. Provides more information about the queue position. For example, if
     * the job is complete and no longer in the queue, the message field contains that
     * information.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Optional. Provides more information about the queue position. For example, if
     * the job is complete and no longer in the queue, the message field contains that
     * information.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Optional. Provides more information about the queue position. For example, if
     * the job is complete and no longer in the queue, the message field contains that
     * information.</p>
     */
    inline HybridJobQueueInfo& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Optional. Provides more information about the queue position. For example, if
     * the job is complete and no longer in the queue, the message field contains that
     * information.</p>
     */
    inline HybridJobQueueInfo& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Optional. Provides more information about the queue position. For example, if
     * the job is complete and no longer in the queue, the message field contains that
     * information.</p>
     */
    inline HybridJobQueueInfo& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Current position of the job in the jobs queue.</p>
     */
    inline const Aws::String& GetPosition() const{ return m_position; }

    /**
     * <p>Current position of the job in the jobs queue.</p>
     */
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }

    /**
     * <p>Current position of the job in the jobs queue.</p>
     */
    inline void SetPosition(const Aws::String& value) { m_positionHasBeenSet = true; m_position = value; }

    /**
     * <p>Current position of the job in the jobs queue.</p>
     */
    inline void SetPosition(Aws::String&& value) { m_positionHasBeenSet = true; m_position = std::move(value); }

    /**
     * <p>Current position of the job in the jobs queue.</p>
     */
    inline void SetPosition(const char* value) { m_positionHasBeenSet = true; m_position.assign(value); }

    /**
     * <p>Current position of the job in the jobs queue.</p>
     */
    inline HybridJobQueueInfo& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    /**
     * <p>Current position of the job in the jobs queue.</p>
     */
    inline HybridJobQueueInfo& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}

    /**
     * <p>Current position of the job in the jobs queue.</p>
     */
    inline HybridJobQueueInfo& WithPosition(const char* value) { SetPosition(value); return *this;}


    /**
     * <p>The name of the queue.</p>
     */
    inline const QueueName& GetQueue() const{ return m_queue; }

    /**
     * <p>The name of the queue.</p>
     */
    inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetQueue(const QueueName& value) { m_queueHasBeenSet = true; m_queue = value; }

    /**
     * <p>The name of the queue.</p>
     */
    inline void SetQueue(QueueName&& value) { m_queueHasBeenSet = true; m_queue = std::move(value); }

    /**
     * <p>The name of the queue.</p>
     */
    inline HybridJobQueueInfo& WithQueue(const QueueName& value) { SetQueue(value); return *this;}

    /**
     * <p>The name of the queue.</p>
     */
    inline HybridJobQueueInfo& WithQueue(QueueName&& value) { SetQueue(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_position;
    bool m_positionHasBeenSet = false;

    QueueName m_queue;
    bool m_queueHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
