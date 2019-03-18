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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/CommandFilterKey.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Describes a command filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CommandFilter">AWS
   * API Reference</a></p>
   */
  class AWS_SSM_API CommandFilter
  {
  public:
    CommandFilter();
    CommandFilter(Aws::Utils::Json::JsonView jsonValue);
    CommandFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the filter.</p>
     */
    inline const CommandFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The name of the filter.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(const CommandFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the filter.</p>
     */
    inline void SetKey(CommandFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the filter.</p>
     */
    inline CommandFilter& WithKey(const CommandFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the filter.</p>
     */
    inline CommandFilter& WithKey(CommandFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2018-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2018, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2018-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2018.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. Status
     * values you can specify include:</p> <ul> <li> <p> <code>Pending</code> </p>
     * </li> <li> <p> <code>InProgress</code> </p> </li> <li> <p> <code>Success</code>
     * </p> </li> <li> <p> <code>Cancelled</code> </p> </li> <li> <p>
     * <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> </p> </li> <li>
     * <p> <code>Cancelling</code> </p> </li> </ul> </li> <li> <p> <b>DocumentName</b>:
     * Specify name of the SSM document for which you want to see command execution
     * results. For example, specify <code>AWS-RunPatchBaseline</code> to see command
     * executions that used this SSM document to perform security patching operations
     * on instances. </p> </li> <li> <p> <b>ExecutionStage</b>: Specify one of the
     * following values:</p> <ul> <li> <p> <code>Executing</code>: Returns a list of
     * command executions that are currently still running.</p> </li> <li> <p>
     * <code>Complete</code>: Returns a list of command executions that have already
     * completed. </p> </li> </ul> </li> </ul>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2018-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2018, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2018-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2018.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. Status
     * values you can specify include:</p> <ul> <li> <p> <code>Pending</code> </p>
     * </li> <li> <p> <code>InProgress</code> </p> </li> <li> <p> <code>Success</code>
     * </p> </li> <li> <p> <code>Cancelled</code> </p> </li> <li> <p>
     * <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> </p> </li> <li>
     * <p> <code>Cancelling</code> </p> </li> </ul> </li> <li> <p> <b>DocumentName</b>:
     * Specify name of the SSM document for which you want to see command execution
     * results. For example, specify <code>AWS-RunPatchBaseline</code> to see command
     * executions that used this SSM document to perform security patching operations
     * on instances. </p> </li> <li> <p> <b>ExecutionStage</b>: Specify one of the
     * following values:</p> <ul> <li> <p> <code>Executing</code>: Returns a list of
     * command executions that are currently still running.</p> </li> <li> <p>
     * <code>Complete</code>: Returns a list of command executions that have already
     * completed. </p> </li> </ul> </li> </ul>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2018-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2018, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2018-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2018.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. Status
     * values you can specify include:</p> <ul> <li> <p> <code>Pending</code> </p>
     * </li> <li> <p> <code>InProgress</code> </p> </li> <li> <p> <code>Success</code>
     * </p> </li> <li> <p> <code>Cancelled</code> </p> </li> <li> <p>
     * <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> </p> </li> <li>
     * <p> <code>Cancelling</code> </p> </li> </ul> </li> <li> <p> <b>DocumentName</b>:
     * Specify name of the SSM document for which you want to see command execution
     * results. For example, specify <code>AWS-RunPatchBaseline</code> to see command
     * executions that used this SSM document to perform security patching operations
     * on instances. </p> </li> <li> <p> <b>ExecutionStage</b>: Specify one of the
     * following values:</p> <ul> <li> <p> <code>Executing</code>: Returns a list of
     * command executions that are currently still running.</p> </li> <li> <p>
     * <code>Complete</code>: Returns a list of command executions that have already
     * completed. </p> </li> </ul> </li> </ul>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2018-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2018, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2018-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2018.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. Status
     * values you can specify include:</p> <ul> <li> <p> <code>Pending</code> </p>
     * </li> <li> <p> <code>InProgress</code> </p> </li> <li> <p> <code>Success</code>
     * </p> </li> <li> <p> <code>Cancelled</code> </p> </li> <li> <p>
     * <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> </p> </li> <li>
     * <p> <code>Cancelling</code> </p> </li> </ul> </li> <li> <p> <b>DocumentName</b>:
     * Specify name of the SSM document for which you want to see command execution
     * results. For example, specify <code>AWS-RunPatchBaseline</code> to see command
     * executions that used this SSM document to perform security patching operations
     * on instances. </p> </li> <li> <p> <b>ExecutionStage</b>: Specify one of the
     * following values:</p> <ul> <li> <p> <code>Executing</code>: Returns a list of
     * command executions that are currently still running.</p> </li> <li> <p>
     * <code>Complete</code>: Returns a list of command executions that have already
     * completed. </p> </li> </ul> </li> </ul>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2018-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2018, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2018-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2018.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. Status
     * values you can specify include:</p> <ul> <li> <p> <code>Pending</code> </p>
     * </li> <li> <p> <code>InProgress</code> </p> </li> <li> <p> <code>Success</code>
     * </p> </li> <li> <p> <code>Cancelled</code> </p> </li> <li> <p>
     * <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> </p> </li> <li>
     * <p> <code>Cancelling</code> </p> </li> </ul> </li> <li> <p> <b>DocumentName</b>:
     * Specify name of the SSM document for which you want to see command execution
     * results. For example, specify <code>AWS-RunPatchBaseline</code> to see command
     * executions that used this SSM document to perform security patching operations
     * on instances. </p> </li> <li> <p> <b>ExecutionStage</b>: Specify one of the
     * following values:</p> <ul> <li> <p> <code>Executing</code>: Returns a list of
     * command executions that are currently still running.</p> </li> <li> <p>
     * <code>Complete</code>: Returns a list of command executions that have already
     * completed. </p> </li> </ul> </li> </ul>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2018-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2018, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2018-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2018.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. Status
     * values you can specify include:</p> <ul> <li> <p> <code>Pending</code> </p>
     * </li> <li> <p> <code>InProgress</code> </p> </li> <li> <p> <code>Success</code>
     * </p> </li> <li> <p> <code>Cancelled</code> </p> </li> <li> <p>
     * <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> </p> </li> <li>
     * <p> <code>Cancelling</code> </p> </li> </ul> </li> <li> <p> <b>DocumentName</b>:
     * Specify name of the SSM document for which you want to see command execution
     * results. For example, specify <code>AWS-RunPatchBaseline</code> to see command
     * executions that used this SSM document to perform security patching operations
     * on instances. </p> </li> <li> <p> <b>ExecutionStage</b>: Specify one of the
     * following values:</p> <ul> <li> <p> <code>Executing</code>: Returns a list of
     * command executions that are currently still running.</p> </li> <li> <p>
     * <code>Complete</code>: Returns a list of command executions that have already
     * completed. </p> </li> </ul> </li> </ul>
     */
    inline CommandFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2018-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2018, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2018-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2018.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. Status
     * values you can specify include:</p> <ul> <li> <p> <code>Pending</code> </p>
     * </li> <li> <p> <code>InProgress</code> </p> </li> <li> <p> <code>Success</code>
     * </p> </li> <li> <p> <code>Cancelled</code> </p> </li> <li> <p>
     * <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> </p> </li> <li>
     * <p> <code>Cancelling</code> </p> </li> </ul> </li> <li> <p> <b>DocumentName</b>:
     * Specify name of the SSM document for which you want to see command execution
     * results. For example, specify <code>AWS-RunPatchBaseline</code> to see command
     * executions that used this SSM document to perform security patching operations
     * on instances. </p> </li> <li> <p> <b>ExecutionStage</b>: Specify one of the
     * following values:</p> <ul> <li> <p> <code>Executing</code>: Returns a list of
     * command executions that are currently still running.</p> </li> <li> <p>
     * <code>Complete</code>: Returns a list of command executions that have already
     * completed. </p> </li> </ul> </li> </ul>
     */
    inline CommandFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The filter value. Valid values for each filter key are as follows:</p> <ul>
     * <li> <p> <b>InvokedAfter</b>: Specify a timestamp to limit your results. For
     * example, specify <code>2018-07-07T00:00:00Z</code> to see a list of command
     * executions occurring July 7, 2018, and later.</p> </li> <li> <p>
     * <b>InvokedBefore</b>: Specify a timestamp to limit your results. For example,
     * specify <code>2018-07-07T00:00:00Z</code> to see a list of command executions
     * from before July 7, 2018.</p> </li> <li> <p> <b>Status</b>: Specify a valid
     * command status to see a list of all command executions with that status. Status
     * values you can specify include:</p> <ul> <li> <p> <code>Pending</code> </p>
     * </li> <li> <p> <code>InProgress</code> </p> </li> <li> <p> <code>Success</code>
     * </p> </li> <li> <p> <code>Cancelled</code> </p> </li> <li> <p>
     * <code>Failed</code> </p> </li> <li> <p> <code>TimedOut</code> </p> </li> <li>
     * <p> <code>Cancelling</code> </p> </li> </ul> </li> <li> <p> <b>DocumentName</b>:
     * Specify name of the SSM document for which you want to see command execution
     * results. For example, specify <code>AWS-RunPatchBaseline</code> to see command
     * executions that used this SSM document to perform security patching operations
     * on instances. </p> </li> <li> <p> <b>ExecutionStage</b>: Specify one of the
     * following values:</p> <ul> <li> <p> <code>Executing</code>: Returns a list of
     * command executions that are currently still running.</p> </li> <li> <p>
     * <code>Complete</code>: Returns a list of command executions that have already
     * completed. </p> </li> </ul> </li> </ul>
     */
    inline CommandFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    CommandFilterKey m_key;
    bool m_keyHasBeenSet;

    Aws::String m_value;
    bool m_valueHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
