/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>The summary of a queue environment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/QueueEnvironmentSummary">AWS
   * API Reference</a></p>
   */
  class QueueEnvironmentSummary
  {
  public:
    AWS_DEADLINE_API QueueEnvironmentSummary();
    AWS_DEADLINE_API QueueEnvironmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API QueueEnvironmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the queue environment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the queue environment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the queue environment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the queue environment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the queue environment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the queue environment.</p>
     */
    inline QueueEnvironmentSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the queue environment.</p>
     */
    inline QueueEnvironmentSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the queue environment.</p>
     */
    inline QueueEnvironmentSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The queue environment's priority.</p>
     */
    inline int GetPriority() const{ return m_priority; }

    /**
     * <p>The queue environment's priority.</p>
     */
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }

    /**
     * <p>The queue environment's priority.</p>
     */
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }

    /**
     * <p>The queue environment's priority.</p>
     */
    inline QueueEnvironmentSummary& WithPriority(int value) { SetPriority(value); return *this;}


    /**
     * <p>The queue environment ID.</p>
     */
    inline const Aws::String& GetQueueEnvironmentId() const{ return m_queueEnvironmentId; }

    /**
     * <p>The queue environment ID.</p>
     */
    inline bool QueueEnvironmentIdHasBeenSet() const { return m_queueEnvironmentIdHasBeenSet; }

    /**
     * <p>The queue environment ID.</p>
     */
    inline void SetQueueEnvironmentId(const Aws::String& value) { m_queueEnvironmentIdHasBeenSet = true; m_queueEnvironmentId = value; }

    /**
     * <p>The queue environment ID.</p>
     */
    inline void SetQueueEnvironmentId(Aws::String&& value) { m_queueEnvironmentIdHasBeenSet = true; m_queueEnvironmentId = std::move(value); }

    /**
     * <p>The queue environment ID.</p>
     */
    inline void SetQueueEnvironmentId(const char* value) { m_queueEnvironmentIdHasBeenSet = true; m_queueEnvironmentId.assign(value); }

    /**
     * <p>The queue environment ID.</p>
     */
    inline QueueEnvironmentSummary& WithQueueEnvironmentId(const Aws::String& value) { SetQueueEnvironmentId(value); return *this;}

    /**
     * <p>The queue environment ID.</p>
     */
    inline QueueEnvironmentSummary& WithQueueEnvironmentId(Aws::String&& value) { SetQueueEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The queue environment ID.</p>
     */
    inline QueueEnvironmentSummary& WithQueueEnvironmentId(const char* value) { SetQueueEnvironmentId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    Aws::String m_queueEnvironmentId;
    bool m_queueEnvironmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
