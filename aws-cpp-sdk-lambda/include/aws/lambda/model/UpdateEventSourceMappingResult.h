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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
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
  class AWS_LAMBDA_API UpdateEventSourceMappingResult
  {
  public:
    UpdateEventSourceMappingResult();
    UpdateEventSourceMappingResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateEventSourceMappingResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline const Aws::String& GetUUID() const{ return m_uUID; }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline void SetUUID(const Aws::String& value) { m_uUID = value; }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline void SetUUID(Aws::String&& value) { m_uUID = std::move(value); }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline void SetUUID(const char* value) { m_uUID.assign(value); }

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline UpdateEventSourceMappingResult& WithUUID(const Aws::String& value) { SetUUID(value); return *this;}

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline UpdateEventSourceMappingResult& WithUUID(Aws::String&& value) { SetUUID(std::move(value)); return *this;}

    /**
     * <p>The identifier of the event source mapping.</p>
     */
    inline UpdateEventSourceMappingResult& WithUUID(const char* value) { SetUUID(value); return *this;}


    /**
     * <p>The maximum number of items to retrieve in a single batch.</p>
     */
    inline int GetBatchSize() const{ return m_batchSize; }

    /**
     * <p>The maximum number of items to retrieve in a single batch.</p>
     */
    inline void SetBatchSize(int value) { m_batchSize = value; }

    /**
     * <p>The maximum number of items to retrieve in a single batch.</p>
     */
    inline UpdateEventSourceMappingResult& WithBatchSize(int value) { SetBatchSize(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline const Aws::String& GetEventSourceArn() const{ return m_eventSourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(const Aws::String& value) { m_eventSourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(Aws::String&& value) { m_eventSourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline void SetEventSourceArn(const char* value) { m_eventSourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline UpdateEventSourceMappingResult& WithEventSourceArn(const Aws::String& value) { SetEventSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline UpdateEventSourceMappingResult& WithEventSourceArn(Aws::String&& value) { SetEventSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the event source.</p>
     */
    inline UpdateEventSourceMappingResult& WithEventSourceArn(const char* value) { SetEventSourceArn(value); return *this;}


    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline const Aws::String& GetFunctionArn() const{ return m_functionArn; }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(const Aws::String& value) { m_functionArn = value; }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(Aws::String&& value) { m_functionArn = std::move(value); }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline void SetFunctionArn(const char* value) { m_functionArn.assign(value); }

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline UpdateEventSourceMappingResult& WithFunctionArn(const Aws::String& value) { SetFunctionArn(value); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline UpdateEventSourceMappingResult& WithFunctionArn(Aws::String&& value) { SetFunctionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Lambda function.</p>
     */
    inline UpdateEventSourceMappingResult& WithFunctionArn(const char* value) { SetFunctionArn(value); return *this;}


    /**
     * <p>The date that the event source mapping was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }

    /**
     * <p>The date that the event source mapping was last updated.</p>
     */
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModified = value; }

    /**
     * <p>The date that the event source mapping was last updated.</p>
     */
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModified = std::move(value); }

    /**
     * <p>The date that the event source mapping was last updated.</p>
     */
    inline UpdateEventSourceMappingResult& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}

    /**
     * <p>The date that the event source mapping was last updated.</p>
     */
    inline UpdateEventSourceMappingResult& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}


    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline const Aws::String& GetLastProcessingResult() const{ return m_lastProcessingResult; }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline void SetLastProcessingResult(const Aws::String& value) { m_lastProcessingResult = value; }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline void SetLastProcessingResult(Aws::String&& value) { m_lastProcessingResult = std::move(value); }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline void SetLastProcessingResult(const char* value) { m_lastProcessingResult.assign(value); }

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline UpdateEventSourceMappingResult& WithLastProcessingResult(const Aws::String& value) { SetLastProcessingResult(value); return *this;}

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline UpdateEventSourceMappingResult& WithLastProcessingResult(Aws::String&& value) { SetLastProcessingResult(std::move(value)); return *this;}

    /**
     * <p>The result of the last AWS Lambda invocation of your Lambda function.</p>
     */
    inline UpdateEventSourceMappingResult& WithLastProcessingResult(const char* value) { SetLastProcessingResult(value); return *this;}


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
    inline void SetState(const Aws::String& value) { m_state = value; }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline void SetState(Aws::String&& value) { m_state = std::move(value); }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline void SetState(const char* value) { m_state.assign(value); }

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline UpdateEventSourceMappingResult& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline UpdateEventSourceMappingResult& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The state of the event source mapping. It can be one of the following:
     * <code>Creating</code>, <code>Enabling</code>, <code>Enabled</code>,
     * <code>Disabling</code>, <code>Disabled</code>, <code>Updating</code>, or
     * <code>Deleting</code>.</p>
     */
    inline UpdateEventSourceMappingResult& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline const Aws::String& GetStateTransitionReason() const{ return m_stateTransitionReason; }

    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline void SetStateTransitionReason(const Aws::String& value) { m_stateTransitionReason = value; }

    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline void SetStateTransitionReason(Aws::String&& value) { m_stateTransitionReason = std::move(value); }

    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline void SetStateTransitionReason(const char* value) { m_stateTransitionReason.assign(value); }

    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline UpdateEventSourceMappingResult& WithStateTransitionReason(const Aws::String& value) { SetStateTransitionReason(value); return *this;}

    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline UpdateEventSourceMappingResult& WithStateTransitionReason(Aws::String&& value) { SetStateTransitionReason(std::move(value)); return *this;}

    /**
     * <p>The cause of the last state change, either <code>User initiated</code> or
     * <code>Lambda initiated</code>.</p>
     */
    inline UpdateEventSourceMappingResult& WithStateTransitionReason(const char* value) { SetStateTransitionReason(value); return *this;}

  private:

    Aws::String m_uUID;

    int m_batchSize;

    Aws::String m_eventSourceArn;

    Aws::String m_functionArn;

    Aws::Utils::DateTime m_lastModified;

    Aws::String m_lastProcessingResult;

    Aws::String m_state;

    Aws::String m_stateTransitionReason;
  };

} // namespace Model
} // namespace Lambda
} // namespace Aws
