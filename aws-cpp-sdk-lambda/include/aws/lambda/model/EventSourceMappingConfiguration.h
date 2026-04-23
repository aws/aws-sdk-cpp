/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lambda/Lambda_EXPORTS.h>
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
namespace Lambda
{
namespace Model
{

  /**
   * <p>A mapping between an AWS resource and an AWS Lambda function. See
   * <a>CreateEventSourceMapping</a> for details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lambda-2015-03-31/EventSourceMappingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_LAMBDA_API EventSourceMappingConfiguration
  {
  public:
    EventSourceMappingConfiguration();
    EventSourceMappingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    EventSourceMappingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline const Aws::String& GetUUID() const{ return m_uUID; }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline bool UUIDHasBeenSet() const { return m_uUIDHasBeenSet; }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline void SetUUID(const Aws::String& value) { m_uUIDHasBeenSet = true; m_uUID = value; }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline void SetUUID(Aws::String&& value) { m_uUIDHasBeenSet = true; m_uUID = std::move(value); }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline void SetUUID(const char* value) { m_uUIDHasBeenSet = true; m_uUID.assign(value); }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithUUID(const Aws::String& value) { SetUUID(value); return *this;}

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithUUID(Aws::String&& value) { SetUUID(std::move(value)); return *this;}

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline EventSourceMappingConfiguration& WithUUID(const char* value) { SetUUID(value); return *this;}


    /**
     * <p>The maximum number of items to retrieve in a single batch.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The maximum number of items to retrieve in a single batch.</p>
     */
    inline bool BatchSizeHasBeenSet() const { return m_batchSizeHasBeenSet; }

    /**
     * <p>The maximum number of items to retrieve in a single batch.</p>
     */
    inline void SetBatchSize(int value) { m_batchSizeHasBeenSet = true; m_batchSize = value; }

    /**
     * <p>The maximum number of items to retrieve in a single batch.</p>
     */
    inline EventSourceMappingConfiguration& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline bool EventSourceArnHasBeenSet() const { return m_eventSourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArnHasBeenSet = true; m_eventSourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline EventSourceMappingConfiguration& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline EventSourceMappingConfiguration& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline EventSourceMappingConfiguration& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}


    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline bool FunctionArnHasBeenSet() const { return m_functionArnHasBeenSet; }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArnHasBeenSet = true; m_functionArn = value; }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArnHasBeenSet = true; m_functionArn = std::move(value); }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArnHasBeenSet = true; m_functionArn.assign(value); }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline EventSourceMappingConfiguration& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline EventSourceMappingConfiguration& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline EventSourceMappingConfiguration& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>The date that the event source mapping was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date that the event source mapping was last updated.</p>
     */
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }

    /**
     * <p>The date that the event source mapping was last updated.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }

    /**
     * <p>The date that the event source mapping was last updated.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }

    /**
     * <p>The date that the event source mapping was last updated.</p>
     */
    inline EventSourceMappingConfiguration& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date that the event source mapping was last updated.</p>
     */
    inline EventSourceMappingConfiguration& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline const Aws::String& GetLastProcessingResult() const{ return m_lastProcessingResult; }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline bool LastProcessingResultHasBeenSet() const { return m_lastProcessingResultHasBeenSet; }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline void SetLastProcessingResult(const Aws::String& value) { m_lastProcessingResultHasBeenSet = true; m_lastProcessingResult = value; }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline void SetLastProcessingResult(Aws::String&& value) { m_lastProcessingResultHasBeenSet = true; m_lastProcessingResult = std::move(value); }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline void SetLastProcessingResult(const char* value) { m_lastProcessingResultHasBeenSet = true; m_lastProcessingResult.assign(value); }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline EventSourceMappingConfiguration& WithLastProcessingResult(const Aws::String& value) { SetLastProcessingResult(value); return *this;}

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline EventSourceMappingConfiguration& WithLastProcessingResult(Aws::String&& value) { SetLastProcessingResult(std::move(value)); return *this;}

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline EventSourceMappingConfiguration& WithLastProcessingResult(const char* value) { SetLastProcessingResult(value); return *this;}


    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline EventSourceMappingConfiguration& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline EventSourceMappingConfiguration& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline EventSourceMappingConfiguration& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const{ return m_stateTransitionReason; }

    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline bool StateTransitionReasonHasBeenSet() const { return m_stateTransitionReasonHasBeenSet; }

    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline void SetStateTransitionReason(const Aws::String& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = value; }

    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline void SetStateTransitionReason(Aws::String&& value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason = std::move(value); }

    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline void SetStateTransitionReason(const char* value) { m_stateTransitionReasonHasBeenSet = true; m_stateTransitionReason.assign(value); }

    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline EventSourceMappingConfiguration& WithStateTransitionReason(const Aws::String& value) { SetStateTransitionReason(value); return *this;}

    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline EventSourceMappingConfiguration& WithStateTransitionReason(Aws::String&& value) { SetStateTransitionReason(std::move(value)); return *this;}

    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline EventSourceMappingConfiguration& WithStateTransitionReason(const char* value) { SetStateTransitionReason(value); return *this;}

  private:

    Aws::String m_uUID;
    bool m_uUIDHasBeenSet;

    int m_batchSize;
    bool m_batchSizeHasBeenSet;

    Aws::String m_eventSourceArn;
    bool m_eventSourceArnHasBeenSet;

    Aws::String m_functionArn;
    bool m_functionArnHasBeenSet;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet;

    Aws::String m_lastProcessingResult;
    bool m_lastProcessingResultHasBeenSet;

    Aws::String m_state;
    bool m_stateHasBeenSet;

    Aws::String m_stateTransitionReason;
    bool m_stateTransitionReasonHasBeenSet;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
