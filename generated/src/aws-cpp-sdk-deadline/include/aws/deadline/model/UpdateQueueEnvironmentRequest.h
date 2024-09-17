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
    AWS_DEADLINE_API UpdateQueueEnvironmentRequest();

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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateQueueEnvironmentRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateQueueEnvironmentRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateQueueEnvironmentRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The farm ID of the queue environment to update.</p>
     */
    inline const Aws::String& GetFarmId() const{ return m_farmId; }
    inline bool FarmIdHasBeenSet() const { return m_farmIdHasBeenSet; }
    inline void SetFarmId(const Aws::String& value) { m_farmIdHasBeenSet = true; m_farmId = value; }
    inline void SetFarmId(Aws::String&& value) { m_farmIdHasBeenSet = true; m_farmId = std::move(value); }
    inline void SetFarmId(const char* value) { m_farmIdHasBeenSet = true; m_farmId.assign(value); }
    inline UpdateQueueEnvironmentRequest& WithFarmId(const Aws::String& value) { SetFarmId(value); return *this;}
    inline UpdateQueueEnvironmentRequest& WithFarmId(Aws::String&& value) { SetFarmId(std::move(value)); return *this;}
    inline UpdateQueueEnvironmentRequest& WithFarmId(const char* value) { SetFarmId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue ID of the queue environment to update.</p>
     */
    inline const Aws::String& GetQueueId() const{ return m_queueId; }
    inline bool QueueIdHasBeenSet() const { return m_queueIdHasBeenSet; }
    inline void SetQueueId(const Aws::String& value) { m_queueIdHasBeenSet = true; m_queueId = value; }
    inline void SetQueueId(Aws::String&& value) { m_queueIdHasBeenSet = true; m_queueId = std::move(value); }
    inline void SetQueueId(const char* value) { m_queueIdHasBeenSet = true; m_queueId.assign(value); }
    inline UpdateQueueEnvironmentRequest& WithQueueId(const Aws::String& value) { SetQueueId(value); return *this;}
    inline UpdateQueueEnvironmentRequest& WithQueueId(Aws::String&& value) { SetQueueId(std::move(value)); return *this;}
    inline UpdateQueueEnvironmentRequest& WithQueueId(const char* value) { SetQueueId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The queue environment ID to update.</p>
     */
    inline const Aws::String& GetQueueEnvironmentId() const{ return m_queueEnvironmentId; }
    inline bool QueueEnvironmentIdHasBeenSet() const { return m_queueEnvironmentIdHasBeenSet; }
    inline void SetQueueEnvironmentId(const Aws::String& value) { m_queueEnvironmentIdHasBeenSet = true; m_queueEnvironmentId = value; }
    inline void SetQueueEnvironmentId(Aws::String&& value) { m_queueEnvironmentIdHasBeenSet = true; m_queueEnvironmentId = std::move(value); }
    inline void SetQueueEnvironmentId(const char* value) { m_queueEnvironmentIdHasBeenSet = true; m_queueEnvironmentId.assign(value); }
    inline UpdateQueueEnvironmentRequest& WithQueueEnvironmentId(const Aws::String& value) { SetQueueEnvironmentId(value); return *this;}
    inline UpdateQueueEnvironmentRequest& WithQueueEnvironmentId(Aws::String&& value) { SetQueueEnvironmentId(std::move(value)); return *this;}
    inline UpdateQueueEnvironmentRequest& WithQueueEnvironmentId(const char* value) { SetQueueEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority to update.</p>
     */
    inline int GetPriority() const{ return m_priority; }
    inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
    inline void SetPriority(int value) { m_priorityHasBeenSet = true; m_priority = value; }
    inline UpdateQueueEnvironmentRequest& WithPriority(int value) { SetPriority(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template type to update.</p>
     */
    inline const EnvironmentTemplateType& GetTemplateType() const{ return m_templateType; }
    inline bool TemplateTypeHasBeenSet() const { return m_templateTypeHasBeenSet; }
    inline void SetTemplateType(const EnvironmentTemplateType& value) { m_templateTypeHasBeenSet = true; m_templateType = value; }
    inline void SetTemplateType(EnvironmentTemplateType&& value) { m_templateTypeHasBeenSet = true; m_templateType = std::move(value); }
    inline UpdateQueueEnvironmentRequest& WithTemplateType(const EnvironmentTemplateType& value) { SetTemplateType(value); return *this;}
    inline UpdateQueueEnvironmentRequest& WithTemplateType(EnvironmentTemplateType&& value) { SetTemplateType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The template to update.</p>
     */
    inline const Aws::String& GetTemplate() const{ return m_template; }
    inline bool TemplateHasBeenSet() const { return m_templateHasBeenSet; }
    inline void SetTemplate(const Aws::String& value) { m_templateHasBeenSet = true; m_template = value; }
    inline void SetTemplate(Aws::String&& value) { m_templateHasBeenSet = true; m_template = std::move(value); }
    inline void SetTemplate(const char* value) { m_templateHasBeenSet = true; m_template.assign(value); }
    inline UpdateQueueEnvironmentRequest& WithTemplate(const Aws::String& value) { SetTemplate(value); return *this;}
    inline UpdateQueueEnvironmentRequest& WithTemplate(Aws::String&& value) { SetTemplate(std::move(value)); return *this;}
    inline UpdateQueueEnvironmentRequest& WithTemplate(const char* value) { SetTemplate(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_farmId;
    bool m_farmIdHasBeenSet = false;

    Aws::String m_queueId;
    bool m_queueIdHasBeenSet = false;

    Aws::String m_queueEnvironmentId;
    bool m_queueEnvironmentIdHasBeenSet = false;

    int m_priority;
    bool m_priorityHasBeenSet = false;

    EnvironmentTemplateType m_templateType;
    bool m_templateTypeHasBeenSet = false;

    Aws::String m_template;
    bool m_templateHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
