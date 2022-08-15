/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/ConnectWisdomServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wisdom/model/FeedbackData.h>
#include <aws/wisdom/model/TargetType.h>
#include <utility>

namespace Aws
{
namespace ConnectWisdomService
{
namespace Model
{

  /**
   */
  class AWS_CONNECTWISDOMSERVICE_API PutFeedbackRequest : public ConnectWisdomServiceRequest
  {
  public:
    PutFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFeedback"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline const Aws::String& GetAssistantId() const{ return m_assistantId; }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline bool AssistantIdHasBeenSet() const { return m_assistantIdHasBeenSet; }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetAssistantId(const Aws::String& value) { m_assistantIdHasBeenSet = true; m_assistantId = value; }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetAssistantId(Aws::String&& value) { m_assistantIdHasBeenSet = true; m_assistantId = std::move(value); }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline void SetAssistantId(const char* value) { m_assistantIdHasBeenSet = true; m_assistantId.assign(value); }

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline PutFeedbackRequest& WithAssistantId(const Aws::String& value) { SetAssistantId(value); return *this;}

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline PutFeedbackRequest& WithAssistantId(Aws::String&& value) { SetAssistantId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Wisdom assistant. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline PutFeedbackRequest& WithAssistantId(const char* value) { SetAssistantId(value); return *this;}


    /**
     * <p>The feedback.</p>
     */
    inline const FeedbackData& GetFeedback() const{ return m_feedback; }

    /**
     * <p>The feedback.</p>
     */
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }

    /**
     * <p>The feedback.</p>
     */
    inline void SetFeedback(const FeedbackData& value) { m_feedbackHasBeenSet = true; m_feedback = value; }

    /**
     * <p>The feedback.</p>
     */
    inline void SetFeedback(FeedbackData&& value) { m_feedbackHasBeenSet = true; m_feedback = std::move(value); }

    /**
     * <p>The feedback.</p>
     */
    inline PutFeedbackRequest& WithFeedback(const FeedbackData& value) { SetFeedback(value); return *this;}

    /**
     * <p>The feedback.</p>
     */
    inline PutFeedbackRequest& WithFeedback(FeedbackData&& value) { SetFeedback(std::move(value)); return *this;}


    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline const Aws::String& GetTargetId() const{ return m_targetId; }

    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline bool TargetIdHasBeenSet() const { return m_targetIdHasBeenSet; }

    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline void SetTargetId(const Aws::String& value) { m_targetIdHasBeenSet = true; m_targetId = value; }

    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline void SetTargetId(Aws::String&& value) { m_targetIdHasBeenSet = true; m_targetId = std::move(value); }

    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline void SetTargetId(const char* value) { m_targetIdHasBeenSet = true; m_targetId.assign(value); }

    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline PutFeedbackRequest& WithTargetId(const Aws::String& value) { SetTargetId(value); return *this;}

    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline PutFeedbackRequest& WithTargetId(Aws::String&& value) { SetTargetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a recommendation. or The identifier of the result data.</p>
     */
    inline PutFeedbackRequest& WithTargetId(const char* value) { SetTargetId(value); return *this;}


    /**
     * <p>The type of the targetId for which The feedback. is targeted.</p>
     */
    inline const TargetType& GetTargetType() const{ return m_targetType; }

    /**
     * <p>The type of the targetId for which The feedback. is targeted.</p>
     */
    inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }

    /**
     * <p>The type of the targetId for which The feedback. is targeted.</p>
     */
    inline void SetTargetType(const TargetType& value) { m_targetTypeHasBeenSet = true; m_targetType = value; }

    /**
     * <p>The type of the targetId for which The feedback. is targeted.</p>
     */
    inline void SetTargetType(TargetType&& value) { m_targetTypeHasBeenSet = true; m_targetType = std::move(value); }

    /**
     * <p>The type of the targetId for which The feedback. is targeted.</p>
     */
    inline PutFeedbackRequest& WithTargetType(const TargetType& value) { SetTargetType(value); return *this;}

    /**
     * <p>The type of the targetId for which The feedback. is targeted.</p>
     */
    inline PutFeedbackRequest& WithTargetType(TargetType&& value) { SetTargetType(std::move(value)); return *this;}

  private:

    Aws::String m_assistantId;
    bool m_assistantIdHasBeenSet;

    FeedbackData m_feedback;
    bool m_feedbackHasBeenSet;

    Aws::String m_targetId;
    bool m_targetIdHasBeenSet;

    TargetType m_targetType;
    bool m_targetTypeHasBeenSet;
  };

} // namespace Model
} // namespace ConnectWisdomService
} // namespace Aws
