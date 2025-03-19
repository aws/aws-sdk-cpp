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
    AWS_DEADLINE_API QueueEnvironmentSummary() = default;
    AWS_DEADLINE_API QueueEnvironmentSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API QueueEnvironmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The queue environment ID.</p>
     */
    inline const Aws::String& GetQueueEnvironmentId() const { return m_queueEnvironmentId; }
    inline bool QueueEnvironmentIdHasBeenSet() const { return m_queueEnvironmentIdHasBeenSet; }
    template<typename QueueEnvironmentIdT = Aws::String>
    void SetQueueEnvironmentId(QueueEnvironmentIdT&& value) { m_queueEnvironmentIdHasBeenSet = true; m_queueEnvironmentId = std::forward<QueueEnvironmentIdT>(value); }
    template<typename QueueEnvironmentIdT = Aws::String>
    QueueEnvironmentSummary& WithQueueEnvironmentId(QueueEnvironmentIdT&& value) { SetQueueEnvironmentId(std::forward<QueueEnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the queue environment.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    QueueEnvironmentSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue environment's priority.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline QueueEnvironmentSummary& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}
  private:

    Aws::String m_queueEnvironmentId;
    bool m_queueEnvironmentIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
