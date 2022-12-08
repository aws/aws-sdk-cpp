/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class StartSyncExecutionRequest : public SFNRequest
  {
  public:
    AWS_SFN_API StartSyncExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartSyncExecution"; }

    AWS_SFN_API Aws::String SerializePayload() const override;

    AWS_SFN_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline bool StateMachineArnHasBeenSet() const { return m_stateMachineArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline void SetStateMachineArn(const char* value) { m_stateMachineArnHasBeenSet = true; m_stateMachineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline StartSyncExecutionRequest& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline StartSyncExecutionRequest& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the state machine to execute.</p>
     */
    inline StartSyncExecutionRequest& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}


    /**
     * <p>The name of the execution.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the execution.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the execution.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the execution.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the execution.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the execution.</p>
     */
    inline StartSyncExecutionRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the execution.</p>
     */
    inline StartSyncExecutionRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the execution.</p>
     */
    inline StartSyncExecutionRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> 
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p>  <p>Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> 
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p>  <p>Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> 
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p>  <p>Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline void SetInput(const Aws::String& value) { m_inputHasBeenSet = true; m_input = value; }

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> 
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p>  <p>Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline void SetInput(Aws::String&& value) { m_inputHasBeenSet = true; m_input = std::move(value); }

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> 
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p>  <p>Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline void SetInput(const char* value) { m_inputHasBeenSet = true; m_input.assign(value); }

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> 
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p>  <p>Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline StartSyncExecutionRequest& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> 
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p>  <p>Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline StartSyncExecutionRequest& WithInput(Aws::String&& value) { SetInput(std::move(value)); return *this;}

    /**
     * <p>The string that contains the JSON input data for the execution, for
     * example:</p> <p> <code>"input": "{\"first_name\" : \"test\"}"</code> </p> 
     * <p>If you don't include any JSON input data, you still must include the two
     * braces, for example: <code>"input": "{}"</code> </p>  <p>Length
     * constraints apply to the payload size, and are expressed as bytes in UTF-8
     * encoding.</p>
     */
    inline StartSyncExecutionRequest& WithInput(const char* value) { SetInput(value); return *this;}


    /**
     * <p>Passes the X-Ray trace header. The trace header can also be passed in the
     * request payload.</p>
     */
    inline const Aws::String& GetTraceHeader() const{ return m_traceHeader; }

    /**
     * <p>Passes the X-Ray trace header. The trace header can also be passed in the
     * request payload.</p>
     */
    inline bool TraceHeaderHasBeenSet() const { return m_traceHeaderHasBeenSet; }

    /**
     * <p>Passes the X-Ray trace header. The trace header can also be passed in the
     * request payload.</p>
     */
    inline void SetTraceHeader(const Aws::String& value) { m_traceHeaderHasBeenSet = true; m_traceHeader = value; }

    /**
     * <p>Passes the X-Ray trace header. The trace header can also be passed in the
     * request payload.</p>
     */
    inline void SetTraceHeader(Aws::String&& value) { m_traceHeaderHasBeenSet = true; m_traceHeader = std::move(value); }

    /**
     * <p>Passes the X-Ray trace header. The trace header can also be passed in the
     * request payload.</p>
     */
    inline void SetTraceHeader(const char* value) { m_traceHeaderHasBeenSet = true; m_traceHeader.assign(value); }

    /**
     * <p>Passes the X-Ray trace header. The trace header can also be passed in the
     * request payload.</p>
     */
    inline StartSyncExecutionRequest& WithTraceHeader(const Aws::String& value) { SetTraceHeader(value); return *this;}

    /**
     * <p>Passes the X-Ray trace header. The trace header can also be passed in the
     * request payload.</p>
     */
    inline StartSyncExecutionRequest& WithTraceHeader(Aws::String&& value) { SetTraceHeader(std::move(value)); return *this;}

    /**
     * <p>Passes the X-Ray trace header. The trace header can also be passed in the
     * request payload.</p>
     */
    inline StartSyncExecutionRequest& WithTraceHeader(const char* value) { SetTraceHeader(value); return *this;}

  private:

    Aws::String m_stateMachineArn;
    bool m_stateMachineArnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_input;
    bool m_inputHasBeenSet = false;

    Aws::String m_traceHeader;
    bool m_traceHeaderHasBeenSet = false;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
