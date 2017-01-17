﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/states/model/ExecutionStatus.h>
#include <aws/core/utils/DateTime.h>

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
  class AWS_SFN_API DescribeExecutionResult
  {
  public:
    DescribeExecutionResult();
    DescribeExecutionResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeExecutionResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

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
    inline void SetExecutionArn(Aws::String&& value) { m_executionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline void SetExecutionArn(const char* value) { m_executionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline DescribeExecutionResult& WithExecutionArn(const Aws::String& value) { SetExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline DescribeExecutionResult& WithExecutionArn(Aws::String&& value) { SetExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that identifies the execution.</p>
     */
    inline DescribeExecutionResult& WithExecutionArn(const char* value) { SetExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the executed stated machine.</p>
     */
    inline const Aws::String& GetStateMachineArn() const{ return m_stateMachineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the executed stated machine.</p>
     */
    inline void SetStateMachineArn(const Aws::String& value) { m_stateMachineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the executed stated machine.</p>
     */
    inline void SetStateMachineArn(Aws::String&& value) { m_stateMachineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the executed stated machine.</p>
     */
    inline void SetStateMachineArn(const char* value) { m_stateMachineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the executed stated machine.</p>
     */
    inline DescribeExecutionResult& WithStateMachineArn(const Aws::String& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the executed stated machine.</p>
     */
    inline DescribeExecutionResult& WithStateMachineArn(Aws::String&& value) { SetStateMachineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the executed stated machine.</p>
     */
    inline DescribeExecutionResult& WithStateMachineArn(const char* value) { SetStateMachineArn(value); return *this;}

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
    inline void SetName(Aws::String&& value) { m_name = value; }

    /**
     * <p>The name of the execution.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the execution.</p>
     */
    inline DescribeExecutionResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the execution.</p>
     */
    inline DescribeExecutionResult& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>The name of the execution.</p>
     */
    inline DescribeExecutionResult& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>The current status of the execution.</p>
     */
    inline const ExecutionStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the execution.</p>
     */
    inline void SetStatus(const ExecutionStatus& value) { m_status = value; }

    /**
     * <p>The current status of the execution.</p>
     */
    inline void SetStatus(ExecutionStatus&& value) { m_status = value; }

    /**
     * <p>The current status of the execution.</p>
     */
    inline DescribeExecutionResult& WithStatus(const ExecutionStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the execution.</p>
     */
    inline DescribeExecutionResult& WithStatus(ExecutionStatus&& value) { SetStatus(value); return *this;}

    /**
     * <p>The date the execution was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The date the execution was started.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDate = value; }

    /**
     * <p>The date the execution was started.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDate = value; }

    /**
     * <p>The date the execution was started.</p>
     */
    inline DescribeExecutionResult& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The date the execution was started.</p>
     */
    inline DescribeExecutionResult& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(value); return *this;}

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
    inline void SetStopDate(Aws::Utils::DateTime&& value) { m_stopDate = value; }

    /**
     * <p>If the execution has already ended, the date the execution stopped.</p>
     */
    inline DescribeExecutionResult& WithStopDate(const Aws::Utils::DateTime& value) { SetStopDate(value); return *this;}

    /**
     * <p>If the execution has already ended, the date the execution stopped.</p>
     */
    inline DescribeExecutionResult& WithStopDate(Aws::Utils::DateTime&& value) { SetStopDate(value); return *this;}

    /**
     * <p>The JSON input data of the execution.</p>
     */
    inline const Aws::String& GetInput() const{ return m_input; }

    /**
     * <p>The JSON input data of the execution.</p>
     */
    inline void SetInput(const Aws::String& value) { m_input = value; }

    /**
     * <p>The JSON input data of the execution.</p>
     */
    inline void SetInput(Aws::String&& value) { m_input = value; }

    /**
     * <p>The JSON input data of the execution.</p>
     */
    inline void SetInput(const char* value) { m_input.assign(value); }

    /**
     * <p>The JSON input data of the execution.</p>
     */
    inline DescribeExecutionResult& WithInput(const Aws::String& value) { SetInput(value); return *this;}

    /**
     * <p>The JSON input data of the execution.</p>
     */
    inline DescribeExecutionResult& WithInput(Aws::String&& value) { SetInput(value); return *this;}

    /**
     * <p>The JSON input data of the execution.</p>
     */
    inline DescribeExecutionResult& WithInput(const char* value) { SetInput(value); return *this;}

    /**
     * <p>The JSON output data of the execution.</p>
     */
    inline const Aws::String& GetOutput() const{ return m_output; }

    /**
     * <p>The JSON output data of the execution.</p>
     */
    inline void SetOutput(const Aws::String& value) { m_output = value; }

    /**
     * <p>The JSON output data of the execution.</p>
     */
    inline void SetOutput(Aws::String&& value) { m_output = value; }

    /**
     * <p>The JSON output data of the execution.</p>
     */
    inline void SetOutput(const char* value) { m_output.assign(value); }

    /**
     * <p>The JSON output data of the execution.</p>
     */
    inline DescribeExecutionResult& WithOutput(const Aws::String& value) { SetOutput(value); return *this;}

    /**
     * <p>The JSON output data of the execution.</p>
     */
    inline DescribeExecutionResult& WithOutput(Aws::String&& value) { SetOutput(value); return *this;}

    /**
     * <p>The JSON output data of the execution.</p>
     */
    inline DescribeExecutionResult& WithOutput(const char* value) { SetOutput(value); return *this;}

  private:
    Aws::String m_executionArn;
    Aws::String m_stateMachineArn;
    Aws::String m_name;
    ExecutionStatus m_status;
    Aws::Utils::DateTime m_startDate;
    Aws::Utils::DateTime m_stopDate;
    Aws::String m_input;
    Aws::String m_output;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
