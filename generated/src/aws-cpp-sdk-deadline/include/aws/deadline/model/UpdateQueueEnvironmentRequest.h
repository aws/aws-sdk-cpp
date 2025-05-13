/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/DeadlineRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/EnvironmentTemplateType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace deadline
{
namespace Model
{

  /**
   */
  class UpdateQueueEnvironmentRequest : public DeadlineRequest
  {
  public:
    AWS_DEADLINE_API UpdateQueueEnvironmentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateQueueEnvironment"; }

    AWS_DEADLINE_API Aws::String SerializePayload() const override;

    AWS_DEADLINE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique token which the server uses to recognize retries of the same
     * request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateQueueEnvironmentRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID of the queue environment to update.</p>
     */
    inline const Aws::String& GetFarmId() const { return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    template<typename FarmIdT = Aws::String>
    void SetFarmId(FarmIdT&& value) { m_farmIdHasBeenSet = true; m_farmId = std::forward<FarmIdT>(value); }
    template<typename FarmIdT = Aws::String>
    UpdateQueueEnvironmentRequest& WithFarmId(FarmIdT&& value) { SetFarmId(std::forward<FarmIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID of the queue environment to update.</p>
     */
    inline const Aws::String& GetQueueId() const { return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    template<typename QueueIdT = Aws::String>
    void SetQueueId(QueueIdT&& value) { m_queueIdHasBeenSet = true; m_queueId = std::forward<QueueIdT>(value); }
    template<typename QueueIdT = Aws::String>
    UpdateQueueEnvironmentRequest& WithQueueId(QueueIdT&& value) { SetQueueId(std::forward<QueueIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue environment ID to update.</p>
     */
    inline const Aws::String& GetQueueEnvironmentId() const { return m_queueEnvironmentId; }
    inline bool QueueEnvironmentIdHasBeenSet() const { return m_queueEnvironmentIdHasBeenSet; }
    template<typename QueueEnvironmentIdT = Aws::String>
    void SetQueueEnvironmentId(QueueEnvironmentIdT&& value) { m_queueEnvironmentIdHasBeenSet = true; m_queueEnvironmentId = std::forward<QueueEnvironmentIdT>(value); }
    template<typename QueueEnvironmentIdT = Aws::String>
    UpdateQueueEnvironmentRequest& WithQueueEnvironmentId(QueueEnvironmentIdT&& value) { SetQueueEnvironmentId(std::forward<QueueEnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority to update.</p>
     */
    inline int GetPriority() const { return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline UpdateQueueEnvironmentRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template type to update.</p>
     */
    inline EnvironmentTemplateType GetTemplateType() const { return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(EnvironmentTemplateType value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline UpdateQueueEnvironmentRequest& WithTemplateType(EnvironmentTemplateType value) { SetTemplateType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template to update.</p>
     */
    inline const Aws::String& GetTemplate() const { return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    template<typename TemplateT = Aws::String>
    void SetTemplate(TemplateT&& value) { m_templateHasBeenSet = true; m_template = std::forward<TemplateT>(value); }
    template<typename TemplateT = Aws::String>
    UpdateQueueEnvironmentRequest& WithTemplate(TemplateT&& value) { SetTemplate(std::forward<TemplateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_queueEnvironmentId;
    bool m_queueEnvironmentIdHasBeenSet = false;

    int m_priority{0};
    bool m_priorityHasBeenSet = false;

    EnvironmentTemplateType m_templateType{EnvironmentTemplateType::NOT_SET};
    bool m_templateTypeHasBeenSet = false;

    Aws::String m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
