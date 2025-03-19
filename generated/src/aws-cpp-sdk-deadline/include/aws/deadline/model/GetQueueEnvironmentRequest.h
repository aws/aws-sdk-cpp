/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class GetQueueEnvironmentRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API GetQueueEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetQueueEnvironment"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The farm ID for the queue environment.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    GetQueueEnvironmentRequest& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID for the queue environment.</p>
     */
    inline const Aws::String& GetQueueId() const { return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    template<typename QueueIdT = Aws::String>
    void SetQueueId(QueueIdT&& value) { m_queueIdHasBeenSet = true; m_queueId = std::forward<QueueIdT>(value); }
    template<typename QueueIdT = Aws::String>
    GetQueueEnvironmentRequest& WithQueueId(QueueIdT&& value) { SetQueueId(std::forward<QueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue environment ID.</p>
     */
    inline const Aws::String& GetQueueEnvironmentId() const { return m_queueEnvironmentId; }
    inline bool QueueEnvironmentIdHasBeenSet() const { return m_queueEnvironmentIdHasBeenSet; }
    template<typename QueueEnvironmentIdT = Aws::String>
    void SetQueueEnvironmentId(QueueEnvironmentIdT&& value) { m_queueEnvironmentIdHasBeenSet = true; m_queueEnvironmentId = std::forward<QueueEnvironmentIdT>(value); }
    template<typename QueueEnvironmentIdT = Aws::String>
    GetQueueEnvironmentRequest& WithQueueEnvironmentId(QueueEnvironmentIdT&& value) { SetQueueEnvironmentId(std::forward<QueueEnvironmentIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_queueEnvironmentId;
    bool m_queueEnvironmentIdHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
