/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Description of the source and destination queues between which the job has
   * moved, along with the timestamp of the move<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/QueueTransition">AWS
   * API Reference</a></p>
   */
  class QueueTransition
  {
  public:
    AWS_MEDIACONVERT_API QueueTransition();
    AWS_MEDIACONVERT_API QueueTransition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API QueueTransition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The queue that the job was on after the transition.
     */
    inline const Aws::String& GetDestinationQueue() const{ return m_destinationQueue; }

    /**
     * The queue that the job was on after the transition.
     */
    inline bool DestinationQueueHasBeenSet() const { return m_destinationQueueHasBeenSet; }

    /**
     * The queue that the job was on after the transition.
     */
    inline void SetDestinationQueue(const Aws::String& value) { m_destinationQueueHasBeenSet = true; m_destinationQueue = value; }

    /**
     * The queue that the job was on after the transition.
     */
    inline void SetDestinationQueue(Aws::String&& value) { m_destinationQueueHasBeenSet = true; m_destinationQueue = std::move(value); }

    /**
     * The queue that the job was on after the transition.
     */
    inline void SetDestinationQueue(const char* value) { m_destinationQueueHasBeenSet = true; m_destinationQueue.assign(value); }

    /**
     * The queue that the job was on after the transition.
     */
    inline QueueTransition& WithDestinationQueue(const Aws::String& value) { SetDestinationQueue(value); return *this;}

    /**
     * The queue that the job was on after the transition.
     */
    inline QueueTransition& WithDestinationQueue(Aws::String&& value) { SetDestinationQueue(std::move(value)); return *this;}

    /**
     * The queue that the job was on after the transition.
     */
    inline QueueTransition& WithDestinationQueue(const char* value) { SetDestinationQueue(value); return *this;}


    /**
     * The queue that the job was on before the transition.
     */
    inline const Aws::String& GetSourceQueue() const{ return m_sourceQueue; }

    /**
     * The queue that the job was on before the transition.
     */
    inline bool SourceQueueHasBeenSet() const { return m_sourceQueueHasBeenSet; }

    /**
     * The queue that the job was on before the transition.
     */
    inline void SetSourceQueue(const Aws::String& value) { m_sourceQueueHasBeenSet = true; m_sourceQueue = value; }

    /**
     * The queue that the job was on before the transition.
     */
    inline void SetSourceQueue(Aws::String&& value) { m_sourceQueueHasBeenSet = true; m_sourceQueue = std::move(value); }

    /**
     * The queue that the job was on before the transition.
     */
    inline void SetSourceQueue(const char* value) { m_sourceQueueHasBeenSet = true; m_sourceQueue.assign(value); }

    /**
     * The queue that the job was on before the transition.
     */
    inline QueueTransition& WithSourceQueue(const Aws::String& value) { SetSourceQueue(value); return *this;}

    /**
     * The queue that the job was on before the transition.
     */
    inline QueueTransition& WithSourceQueue(Aws::String&& value) { SetSourceQueue(std::move(value)); return *this;}

    /**
     * The queue that the job was on before the transition.
     */
    inline QueueTransition& WithSourceQueue(const char* value) { SetSourceQueue(value); return *this;}


    /**
     * The time, in Unix epoch format, that the job moved from the source queue to the
     * destination queue.
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * The time, in Unix epoch format, that the job moved from the source queue to the
     * destination queue.
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * The time, in Unix epoch format, that the job moved from the source queue to the
     * destination queue.
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * The time, in Unix epoch format, that the job moved from the source queue to the
     * destination queue.
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * The time, in Unix epoch format, that the job moved from the source queue to the
     * destination queue.
     */
    inline QueueTransition& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * The time, in Unix epoch format, that the job moved from the source queue to the
     * destination queue.
     */
    inline QueueTransition& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}

  private:

    Aws::String m_destinationQueue;
    bool m_destinationQueueHasBeenSet = false;

    Aws::String m_sourceQueue;
    bool m_sourceQueueHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
