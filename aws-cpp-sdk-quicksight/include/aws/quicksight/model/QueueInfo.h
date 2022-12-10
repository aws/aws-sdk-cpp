/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Information about a queued dataset SPICE ingestion.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/QueueInfo">AWS
   * API Reference</a></p>
   */
  class QueueInfo
  {
  public:
    AWS_QUICKSIGHT_API QueueInfo();
    AWS_QUICKSIGHT_API QueueInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API QueueInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the queued ingestion.</p>
     */
    inline const Aws::String& GetWaitingOnIngestion() const{ return m_waitingOnIngestion; }

    /**
     * <p>The ID of the queued ingestion.</p>
     */
    inline bool WaitingOnIngestionHasBeenSet() const { return m_waitingOnIngestionHasBeenSet; }

    /**
     * <p>The ID of the queued ingestion.</p>
     */
    inline void SetWaitingOnIngestion(const Aws::String& value) { m_waitingOnIngestionHasBeenSet = true; m_waitingOnIngestion = value; }

    /**
     * <p>The ID of the queued ingestion.</p>
     */
    inline void SetWaitingOnIngestion(Aws::String&& value) { m_waitingOnIngestionHasBeenSet = true; m_waitingOnIngestion = std::move(value); }

    /**
     * <p>The ID of the queued ingestion.</p>
     */
    inline void SetWaitingOnIngestion(const char* value) { m_waitingOnIngestionHasBeenSet = true; m_waitingOnIngestion.assign(value); }

    /**
     * <p>The ID of the queued ingestion.</p>
     */
    inline QueueInfo& WithWaitingOnIngestion(const Aws::String& value) { SetWaitingOnIngestion(value); return *this;}

    /**
     * <p>The ID of the queued ingestion.</p>
     */
    inline QueueInfo& WithWaitingOnIngestion(Aws::String&& value) { SetWaitingOnIngestion(std::move(value)); return *this;}

    /**
     * <p>The ID of the queued ingestion.</p>
     */
    inline QueueInfo& WithWaitingOnIngestion(const char* value) { SetWaitingOnIngestion(value); return *this;}


    /**
     * <p>The ID of the ongoing ingestion. The queued ingestion is waiting for the
     * ongoing ingestion to complete.</p>
     */
    inline const Aws::String& GetQueuedIngestion() const{ return m_queuedIngestion; }

    /**
     * <p>The ID of the ongoing ingestion. The queued ingestion is waiting for the
     * ongoing ingestion to complete.</p>
     */
    inline bool QueuedIngestionHasBeenSet() const { return m_queuedIngestionHasBeenSet; }

    /**
     * <p>The ID of the ongoing ingestion. The queued ingestion is waiting for the
     * ongoing ingestion to complete.</p>
     */
    inline void SetQueuedIngestion(const Aws::String& value) { m_queuedIngestionHasBeenSet = true; m_queuedIngestion = value; }

    /**
     * <p>The ID of the ongoing ingestion. The queued ingestion is waiting for the
     * ongoing ingestion to complete.</p>
     */
    inline void SetQueuedIngestion(Aws::String&& value) { m_queuedIngestionHasBeenSet = true; m_queuedIngestion = std::move(value); }

    /**
     * <p>The ID of the ongoing ingestion. The queued ingestion is waiting for the
     * ongoing ingestion to complete.</p>
     */
    inline void SetQueuedIngestion(const char* value) { m_queuedIngestionHasBeenSet = true; m_queuedIngestion.assign(value); }

    /**
     * <p>The ID of the ongoing ingestion. The queued ingestion is waiting for the
     * ongoing ingestion to complete.</p>
     */
    inline QueueInfo& WithQueuedIngestion(const Aws::String& value) { SetQueuedIngestion(value); return *this;}

    /**
     * <p>The ID of the ongoing ingestion. The queued ingestion is waiting for the
     * ongoing ingestion to complete.</p>
     */
    inline QueueInfo& WithQueuedIngestion(Aws::String&& value) { SetQueuedIngestion(std::move(value)); return *this;}

    /**
     * <p>The ID of the ongoing ingestion. The queued ingestion is waiting for the
     * ongoing ingestion to complete.</p>
     */
    inline QueueInfo& WithQueuedIngestion(const char* value) { SetQueuedIngestion(value); return *this;}

  private:

    Aws::String m_waitingOnIngestion;
    bool m_waitingOnIngestionHasBeenSet = false;

    Aws::String m_queuedIngestion;
    bool m_queuedIngestionHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
