/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies the configuration for notifications of inference results for
   * asynchronous inference.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AsyncInferenceNotificationConfig">AWS
   * API Reference</a></p>
   */
  class AsyncInferenceNotificationConfig
  {
  public:
    AWS_SAGEMAKER_API AsyncInferenceNotificationConfig();
    AWS_SAGEMAKER_API AsyncInferenceNotificationConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API AsyncInferenceNotificationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Amazon SNS topic to post a notification to when inference completes
     * successfully. If no topic is provided, no notification is sent on success.</p>
     */
    inline const Aws::String& GetSuccessTopic() const{ return m_successTopic; }

    /**
     * <p>Amazon SNS topic to post a notification to when inference completes
     * successfully. If no topic is provided, no notification is sent on success.</p>
     */
    inline bool SuccessTopicHasBeenSet() const { return m_successTopicHasBeenSet; }

    /**
     * <p>Amazon SNS topic to post a notification to when inference completes
     * successfully. If no topic is provided, no notification is sent on success.</p>
     */
    inline void SetSuccessTopic(const Aws::String& value) { m_successTopicHasBeenSet = true; m_successTopic = value; }

    /**
     * <p>Amazon SNS topic to post a notification to when inference completes
     * successfully. If no topic is provided, no notification is sent on success.</p>
     */
    inline void SetSuccessTopic(Aws::String&& value) { m_successTopicHasBeenSet = true; m_successTopic = std::move(value); }

    /**
     * <p>Amazon SNS topic to post a notification to when inference completes
     * successfully. If no topic is provided, no notification is sent on success.</p>
     */
    inline void SetSuccessTopic(const char* value) { m_successTopicHasBeenSet = true; m_successTopic.assign(value); }

    /**
     * <p>Amazon SNS topic to post a notification to when inference completes
     * successfully. If no topic is provided, no notification is sent on success.</p>
     */
    inline AsyncInferenceNotificationConfig& WithSuccessTopic(const Aws::String& value) { SetSuccessTopic(value); return *this;}

    /**
     * <p>Amazon SNS topic to post a notification to when inference completes
     * successfully. If no topic is provided, no notification is sent on success.</p>
     */
    inline AsyncInferenceNotificationConfig& WithSuccessTopic(Aws::String&& value) { SetSuccessTopic(std::move(value)); return *this;}

    /**
     * <p>Amazon SNS topic to post a notification to when inference completes
     * successfully. If no topic is provided, no notification is sent on success.</p>
     */
    inline AsyncInferenceNotificationConfig& WithSuccessTopic(const char* value) { SetSuccessTopic(value); return *this;}


    /**
     * <p>Amazon SNS topic to post a notification to when inference fails. If no topic
     * is provided, no notification is sent on failure.</p>
     */
    inline const Aws::String& GetErrorTopic() const{ return m_errorTopic; }

    /**
     * <p>Amazon SNS topic to post a notification to when inference fails. If no topic
     * is provided, no notification is sent on failure.</p>
     */
    inline bool ErrorTopicHasBeenSet() const { return m_errorTopicHasBeenSet; }

    /**
     * <p>Amazon SNS topic to post a notification to when inference fails. If no topic
     * is provided, no notification is sent on failure.</p>
     */
    inline void SetErrorTopic(const Aws::String& value) { m_errorTopicHasBeenSet = true; m_errorTopic = value; }

    /**
     * <p>Amazon SNS topic to post a notification to when inference fails. If no topic
     * is provided, no notification is sent on failure.</p>
     */
    inline void SetErrorTopic(Aws::String&& value) { m_errorTopicHasBeenSet = true; m_errorTopic = std::move(value); }

    /**
     * <p>Amazon SNS topic to post a notification to when inference fails. If no topic
     * is provided, no notification is sent on failure.</p>
     */
    inline void SetErrorTopic(const char* value) { m_errorTopicHasBeenSet = true; m_errorTopic.assign(value); }

    /**
     * <p>Amazon SNS topic to post a notification to when inference fails. If no topic
     * is provided, no notification is sent on failure.</p>
     */
    inline AsyncInferenceNotificationConfig& WithErrorTopic(const Aws::String& value) { SetErrorTopic(value); return *this;}

    /**
     * <p>Amazon SNS topic to post a notification to when inference fails. If no topic
     * is provided, no notification is sent on failure.</p>
     */
    inline AsyncInferenceNotificationConfig& WithErrorTopic(Aws::String&& value) { SetErrorTopic(std::move(value)); return *this;}

    /**
     * <p>Amazon SNS topic to post a notification to when inference fails. If no topic
     * is provided, no notification is sent on failure.</p>
     */
    inline AsyncInferenceNotificationConfig& WithErrorTopic(const char* value) { SetErrorTopic(value); return *this;}

  private:

    Aws::String m_successTopic;
    bool m_successTopicHasBeenSet = false;

    Aws::String m_errorTopic;
    bool m_errorTopicHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
