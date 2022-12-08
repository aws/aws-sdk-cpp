/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/states/model/SyncExecutionStatus.h>
#include <aws/states/model/CloudWatchEventsExecutionDataDetails.h>
#include <aws/states/model/BillingDetails.h>
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
namespace SFN
{
namespace Model
{
  class StartSyncExecutionResult
  {
  public:
    AWS_SFN_API StartSyncExecutionResult();
    AWS_SFN_API StartSyncExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SFN_API StartSyncExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline const Aws::String& GetExecutionArn() const{ return m_executionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline void SetExecutionArn(const Aws::String& value) { m_executionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline void SetExecutionArn(Aws::String&& value) { m_executionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline void SetExecutionArn(const char* value) { m_executionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline StartSyncExecutionResult& WithExecutionArn(const Aws::String& value) { SetExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline StartSyncExecutionResult& WithExecutionArn(Aws::String&& value) { SetExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline StartSyncExecutionResult& WithExecutionArn(const char* value) { SetExecutionArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline void SetStateMachineArn(const char* value) { m_stateMachineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline StartSyncExecutionResult& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline StartSyncExecutionResult& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the state machine.</p>
     */
    inline StartSyncExecutionResult& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}


    /**
     * <p>The name of the execution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the execution.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the execution.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the execution.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the execution.</p>
     */
    inline StartSyncExecutionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the execution.</p>
     */
    inline StartSyncExecutionResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the execution.</p>
     */
    inline StartSyncExecutionResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The date the execution is started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The date the execution is started.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDate = value; }

    /**
     * <p>The date the execution is started.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDate = std::move(value); }

    /**
     * <p>The date the execution is started.</p>
     */
    inline StartSyncExecutionResult& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The date the execution is started.</p>
     */
    inline StartSyncExecutionResult& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>If the execution has already ended, the date the execution stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStopDate() const{ return m_stopDate; }

    /**
     * <p>If the execution has already ended, the date the execution stopped.</p>
     */
    inline void SetStopDate(const Aws::Utils::DateTime& value) { m_stopDate = value; }

    /**
     * <p>If the execution has already ended, the date the execution stopped.</p>
     */
    inline void SetStopDate(Aws::Utils::DateTime&& value) { m_stopDate = std::move(value); }

    /**
     * <p>If the execution has already ended, the date the execution stopped.</p>
     */
    inline StartSyncExecutionResult& WithStopDate(const Aws::Utils::DateTime& value) { SetStopDate(value); return *this;}

    /**
     * <p>If the execution has already ended, the date the execution stopped.</p>
     */
    inline StartSyncExecutionResult& WithStopDate(Aws::Utils::DateTime&& value) { SetStopDate(std::move(value)); return *this;}


    /**
     * <p>The current status of the execution.</p>
     */
    inline const SyncExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the execution.</p>
     */
    inline void SetStatus(const SyncExecutionStatus& value) { m_status = value; }

    /**
     * <p>The current status of the execution.</p>
     */
    inline void SetStatus(SyncExecutionStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current status of the execution.</p>
     */
    inline StartSyncExecutionResult& WithStatus(const SyncExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the execution.</p>
     */
    inline StartSyncExecutionResult& WithStatus(SyncExecutionStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The error code of the failure.</p>
     */
    inline const Aws::String& GetError() const{ return m_error; }

    /**
     * <p>The error code of the failure.</p>
     */
    inline void SetError(const Aws::String& value) { m_error = value; }

    /**
     * <p>The error code of the failure.</p>
     */
    inline void SetError(Aws::String&& value) { m_error = std::move(value); }

    /**
     * <p>The error code of the failure.</p>
     */
    inline void SetError(const char* value) { m_error.assign(value); }

    /**
     * <p>The error code of the failure.</p>
     */
    inline StartSyncExecutionResult& WithError(const Aws::String& value) { SetError(value); return *this;}

    /**
     * <p>The error code of the failure.</p>
     */
    inline StartSyncExecutionResult& WithError(Aws::String&& value) { SetError(std::move(value)); return *this;}

    /**
     * <p>The error code of the failure.</p>
     */
    inline StartSyncExecutionResult& WithError(const char* value) { SetError(value); return *this;}


    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline const Aws::String& GetCause() const{ return m_cause; }

    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline void SetCause(const Aws::String& value) { m_cause = value; }

    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline void SetCause(Aws::String&& value) { m_cause = std::move(value); }

    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline void SetCause(const char* value) { m_cause.assign(value); }

    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline StartSyncExecutionResult& WithCause(const Aws::String& value) { SetCause(value); return *this;}

    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline StartSyncExecutionResult& WithCause(Aws::String&& value) { SetCause(std::move(value)); return *this;}

    /**
     * <p>A more detailed explanation of the cause of the failure.</p>
     */
    inline StartSyncExecutionResult& WithCause(const char* value) { SetCause(value); return *this;}


    /**
     * <p>The string that contains the JSON input data of the execution. Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The string that contains the JSON input data of the execution. Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline void SetInput(const Aws::String& value) { m_input = value; }

    /**
     * <p>The string that contains the JSON input data of the execution. Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline void SetInput(Aws::String&& value) { m_input = std::move(value); }

    /**
     * <p>The string that contains the JSON input data of the execution. Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline void SetInput(const char* value) { m_input.assign(value); }

    /**
     * <p>The string that contains the JSON input data of the execution. Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline StartSyncExecutionResult& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The string that contains the JSON input data of the execution. Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline StartSyncExecutionResult& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The string that contains the JSON input data of the execution. Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline StartSyncExecutionResult& WithInput(const char* value) { SetInput(value); return *this;}


    
    inline const CloudWatchEventsExecutionDataDetails& GetInputDetails() const{ return m_inputDetails; }

    
    inline void SetInputDetails(const CloudWatchEventsExecutionDataDetails& value) { m_inputDetails = value; }

    
    inline void SetInputDetails(CloudWatchEventsExecutionDataDetails&& value) { m_inputDetails = std::move(value); }

    
    inline StartSyncExecutionResult& WithInputDetails(const CloudWatchEventsExecutionDataDetails& value) { SetInputDetails(value); return *this;}

    
    inline StartSyncExecutionResult& WithInputDetails(CloudWatchEventsExecutionDataDetails&& value) { SetInputDetails(std::move(value)); return *this;}


    /**
     * <p>The JSON output data of the execution. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>  <p>This
     * field is set only if the execution succeeds. If the execution fails, this field
     * is null.</p> 
     */
    inline const Aws::String& GetOutput() const{ return m_output; }

    /**
     * <p>The JSON output data of the execution. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>  <p>This
     * field is set only if the execution succeeds. If the execution fails, this field
     * is null.</p> 
     */
    inline void SetOutput(const Aws::String& value) { m_output = value; }

    /**
     * <p>The JSON output data of the execution. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>  <p>This
     * field is set only if the execution succeeds. If the execution fails, this field
     * is null.</p> 
     */
    inline void SetOutput(Aws::String&& value) { m_output = std::move(value); }

    /**
     * <p>The JSON output data of the execution. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>  <p>This
     * field is set only if the execution succeeds. If the execution fails, this field
     * is null.</p> 
     */
    inline void SetOutput(const char* value) { m_output.assign(value); }

    /**
     * <p>The JSON output data of the execution. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>  <p>This
     * field is set only if the execution succeeds. If the execution fails, this field
     * is null.</p> 
     */
    inline StartSyncExecutionResult& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}

    /**
     * <p>The JSON output data of the execution. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>  <p>This
     * field is set only if the execution succeeds. If the execution fails, this field
     * is null.</p> 
     */
    inline StartSyncExecutionResult& WithOutput(Aws::String&& value) { SetOutput(std::move(value)); return *this;}

    /**
     * <p>The JSON output data of the execution. Length constraints apply to the
     * payload size, and are expressed as bytes in UTF-8 encoding.</p>  <p>This
     * field is set only if the execution succeeds. If the execution fails, this field
     * is null.</p> 
     */
    inline StartSyncExecutionResult& WithOutput(const char* value) { SetOutput(value); return *this;}


    
    inline const CloudWatchEventsExecutionDataDetails& GetOutputDetails() const{ return m_outputDetails; }

    
    inline void SetOutputDetails(const CloudWatchEventsExecutionDataDetails& value) { m_outputDetails = value; }

    
    inline void SetOutputDetails(CloudWatchEventsExecutionDataDetails&& value) { m_outputDetails = std::move(value); }

    
    inline StartSyncExecutionResult& WithOutputDetails(const CloudWatchEventsExecutionDataDetails& value) { SetOutputDetails(value); return *this;}

    
    inline StartSyncExecutionResult& WithOutputDetails(CloudWatchEventsExecutionDataDetails&& value) { SetOutputDetails(std::move(value)); return *this;}


    /**
     * <p>The X-Ray trace header that was passed to the execution.</p>
     */
    inline const Aws::String& GetTraceHeader() const{ return m_traceHeader; }

    /**
     * <p>The X-Ray trace header that was passed to the execution.</p>
     */
    inline void SetTraceHeader(const Aws::String& value) { m_traceHeader = value; }

    /**
     * <p>The X-Ray trace header that was passed to the execution.</p>
     */
    inline void SetTraceHeader(Aws::String&& value) { m_traceHeader = std::move(value); }

    /**
     * <p>The X-Ray trace header that was passed to the execution.</p>
     */
    inline void SetTraceHeader(const char* value) { m_traceHeader.assign(value); }

    /**
     * <p>The X-Ray trace header that was passed to the execution.</p>
     */
    inline StartSyncExecutionResult& WithTraceHeader(const Aws::String& value) { SetTraceHeader(value); return *this;}

    /**
     * <p>The X-Ray trace header that was passed to the execution.</p>
     */
    inline StartSyncExecutionResult& WithTraceHeader(Aws::String&& value) { SetTraceHeader(std::move(value)); return *this;}

    /**
     * <p>The X-Ray trace header that was passed to the execution.</p>
     */
    inline StartSyncExecutionResult& WithTraceHeader(const char* value) { SetTraceHeader(value); return *this;}


    /**
     * <p>An object that describes workflow billing details, including billed duration
     * and memory use.</p>
     */
    inline const BillingDetails& GetBillingDetails() const{ return m_billingDetails; }

    /**
     * <p>An object that describes workflow billing details, including billed duration
     * and memory use.</p>
     */
    inline void SetBillingDetails(const BillingDetails& value) { m_billingDetails = value; }

    /**
     * <p>An object that describes workflow billing details, including billed duration
     * and memory use.</p>
     */
    inline void SetBillingDetails(BillingDetails&& value) { m_billingDetails = std::move(value); }

    /**
     * <p>An object that describes workflow billing details, including billed duration
     * and memory use.</p>
     */
    inline StartSyncExecutionResult& WithBillingDetails(const BillingDetails& value) { SetBillingDetails(value); return *this;}

    /**
     * <p>An object that describes workflow billing details, including billed duration
     * and memory use.</p>
     */
    inline StartSyncExecutionResult& WithBillingDetails(BillingDetails&& value) { SetBillingDetails(std::move(value)); return *this;}

  private:

    Aws::String m_executionArn;

    Aws::String m_stateMachineArn;

    Aws::String m_name;

    Aws::Utils::DateTime m_startDate;

    Aws::Utils::DateTime m_stopDate;

    SyncExecutionStatus m_status;

    Aws::String m_error;

    Aws::String m_cause;

    Aws::String m_input;

    CloudWatchEventsExecutionDataDetails m_inputDetails;

    Aws::String m_output;

    CloudWatchEventsExecutionDataDetails m_outputDetails;

    Aws::String m_traceHeader;

    BillingDetails m_billingDetails;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
