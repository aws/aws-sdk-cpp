/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/HistoryEventExecutionDataDetails.h>
#include <aws/states/model/TaskCredentials.h>
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
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about a Lambda function scheduled during an
   * execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/LambdaFunctionScheduledEventDetails">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionScheduledEventDetails
  {
  public:
    AWS_SFN_API LambdaFunctionScheduledEventDetails();
    AWS_SFN_API LambdaFunctionScheduledEventDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API LambdaFunctionScheduledEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SFN_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled Lambda function.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled Lambda function.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled Lambda function.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled Lambda function.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled Lambda function.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled Lambda function.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled Lambda function.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the scheduled Lambda function.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The JSON data input to the Lambda function. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The JSON data input to the Lambda function. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The JSON data input to the Lambda function. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The JSON data input to the Lambda function. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The JSON data input to the Lambda function. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The JSON data input to the Lambda function. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The JSON data input to the Lambda function. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The JSON data input to the Lambda function. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>Contains details about input for an execution history event.</p>
     */
    inline const HistoryEventExecutionDataDetails& GetInputDetails() const{ return m_inputDetails; }

    /**
     * <p>Contains details about input for an execution history event.</p>
     */
    inline bool InputDetailsHasBeenSet() const { return m_inputDetailsHasBeenSet; }

    /**
     * <p>Contains details about input for an execution history event.</p>
     */
    inline void SetInputDetails(const HistoryEventExecutionDataDetails& value) { m_inputDetailsHasBeenSet = true; m_inputDetails = value; }

    /**
     * <p>Contains details about input for an execution history event.</p>
     */
    inline void SetInputDetails(HistoryEventExecutionDataDetails&& value) { m_inputDetailsHasBeenSet = true; m_inputDetails = std::move(value); }

    /**
     * <p>Contains details about input for an execution history event.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithInputDetails(const HistoryEventExecutionDataDetails& value) { SetInputDetails(value); return *this;}

    /**
     * <p>Contains details about input for an execution history event.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithInputDetails(HistoryEventExecutionDataDetails&& value) { SetInputDetails(std::move(value)); return *this;}


    /**
     * <p>The maximum allowed duration of the Lambda function.</p>
     */
    inline long long GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>The maximum allowed duration of the Lambda function.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>The maximum allowed duration of the Lambda function.</p>
     */
    inline void SetTimeoutInSeconds(long long value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>The maximum allowed duration of the Lambda function.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithTimeoutInSeconds(long long value) { SetTimeoutInSeconds(value); return *this;}


    /**
     * <p>The credentials that Step Functions uses for the task.</p>
     */
    inline const TaskCredentials& GetTaskCredentials() const{ return m_taskCredentials; }

    /**
     * <p>The credentials that Step Functions uses for the task.</p>
     */
    inline bool TaskCredentialsHasBeenSet() const { return m_taskCredentialsHasBeenSet; }

    /**
     * <p>The credentials that Step Functions uses for the task.</p>
     */
    inline void SetTaskCredentials(const TaskCredentials& value) { m_taskCredentialsHasBeenSet = true; m_taskCredentials = value; }

    /**
     * <p>The credentials that Step Functions uses for the task.</p>
     */
    inline void SetTaskCredentials(TaskCredentials&& value) { m_taskCredentialsHasBeenSet = true; m_taskCredentials = std::move(value); }

    /**
     * <p>The credentials that Step Functions uses for the task.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithTaskCredentials(const TaskCredentials& value) { SetTaskCredentials(value); return *this;}

    /**
     * <p>The credentials that Step Functions uses for the task.</p>
     */
    inline LambdaFunctionScheduledEventDetails& WithTaskCredentials(TaskCredentials&& value) { SetTaskCredentials(std::move(value)); return *this;}

  private:

    Aws::String m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    HistoryEventExecutionDataDetails m_inputDetails;
    bool m_inputDetailsHasBeenSet = false;

    long long m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet = false;

    TaskCredentials m_taskCredentials;
    bool m_taskCredentialsHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
