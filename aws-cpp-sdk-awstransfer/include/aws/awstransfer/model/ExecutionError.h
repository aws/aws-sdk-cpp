/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/model/ExecutionErrorType.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p>Specifies the error message and type, for an error that occurs during the
   * execution of the workflow.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ExecutionError">AWS
   * API Reference</a></p>
   */
  class ExecutionError
  {
  public:
    AWS_TRANSFER_API ExecutionError();
    AWS_TRANSFER_API ExecutionError(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API ExecutionError& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TRANSFER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the error type.</p> <ul> <li> <p> <code>ALREADY_EXISTS</code>:
     * occurs for a copy step, if the overwrite option is not selected and a file with
     * the same name already exists in the target location.</p> </li> <li> <p>
     * <code>BAD_REQUEST</code>: a general bad request: for example, a step that
     * attempts to tag an EFS file returns <code>BAD_REQUEST</code>, as only S3 files
     * can be tagged.</p> </li> <li> <p> <code>CUSTOM_STEP_FAILED</code>: occurs when
     * the custom step provided a callback that indicates failure.</p> </li> <li> <p>
     * <code>INTERNAL_SERVER_ERROR</code>: a catch-all error that can occur for a
     * variety of reasons.</p> </li> <li> <p> <code>NOT_FOUND</code>: occurs when a
     * requested entity, for example a source file for a copy step, does not exist.</p>
     * </li> <li> <p> <code>PERMISSION_DENIED</code>: occurs if your policy does not
     * contain the correct permissions to complete one or more of the steps in the
     * workflow.</p> </li> <li> <p> <code>TIMEOUT</code>: occurs when the execution
     * times out.</p>  <p> You can set the <code>TimeoutSeconds</code> for a
     * custom step, anywhere from 1 second to 1800 seconds (30 minutes). </p> 
     * </li> <li> <p> <code>THROTTLED</code>: occurs if you exceed the new execution
     * refill rate of one workflow per second.</p> </li> </ul>
     */
    inline const ExecutionErrorType& GetType() const{ return m_type; }

    /**
     * <p>Specifies the error type.</p> <ul> <li> <p> <code>ALREADY_EXISTS</code>:
     * occurs for a copy step, if the overwrite option is not selected and a file with
     * the same name already exists in the target location.</p> </li> <li> <p>
     * <code>BAD_REQUEST</code>: a general bad request: for example, a step that
     * attempts to tag an EFS file returns <code>BAD_REQUEST</code>, as only S3 files
     * can be tagged.</p> </li> <li> <p> <code>CUSTOM_STEP_FAILED</code>: occurs when
     * the custom step provided a callback that indicates failure.</p> </li> <li> <p>
     * <code>INTERNAL_SERVER_ERROR</code>: a catch-all error that can occur for a
     * variety of reasons.</p> </li> <li> <p> <code>NOT_FOUND</code>: occurs when a
     * requested entity, for example a source file for a copy step, does not exist.</p>
     * </li> <li> <p> <code>PERMISSION_DENIED</code>: occurs if your policy does not
     * contain the correct permissions to complete one or more of the steps in the
     * workflow.</p> </li> <li> <p> <code>TIMEOUT</code>: occurs when the execution
     * times out.</p>  <p> You can set the <code>TimeoutSeconds</code> for a
     * custom step, anywhere from 1 second to 1800 seconds (30 minutes). </p> 
     * </li> <li> <p> <code>THROTTLED</code>: occurs if you exceed the new execution
     * refill rate of one workflow per second.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies the error type.</p> <ul> <li> <p> <code>ALREADY_EXISTS</code>:
     * occurs for a copy step, if the overwrite option is not selected and a file with
     * the same name already exists in the target location.</p> </li> <li> <p>
     * <code>BAD_REQUEST</code>: a general bad request: for example, a step that
     * attempts to tag an EFS file returns <code>BAD_REQUEST</code>, as only S3 files
     * can be tagged.</p> </li> <li> <p> <code>CUSTOM_STEP_FAILED</code>: occurs when
     * the custom step provided a callback that indicates failure.</p> </li> <li> <p>
     * <code>INTERNAL_SERVER_ERROR</code>: a catch-all error that can occur for a
     * variety of reasons.</p> </li> <li> <p> <code>NOT_FOUND</code>: occurs when a
     * requested entity, for example a source file for a copy step, does not exist.</p>
     * </li> <li> <p> <code>PERMISSION_DENIED</code>: occurs if your policy does not
     * contain the correct permissions to complete one or more of the steps in the
     * workflow.</p> </li> <li> <p> <code>TIMEOUT</code>: occurs when the execution
     * times out.</p>  <p> You can set the <code>TimeoutSeconds</code> for a
     * custom step, anywhere from 1 second to 1800 seconds (30 minutes). </p> 
     * </li> <li> <p> <code>THROTTLED</code>: occurs if you exceed the new execution
     * refill rate of one workflow per second.</p> </li> </ul>
     */
    inline void SetType(const ExecutionErrorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the error type.</p> <ul> <li> <p> <code>ALREADY_EXISTS</code>:
     * occurs for a copy step, if the overwrite option is not selected and a file with
     * the same name already exists in the target location.</p> </li> <li> <p>
     * <code>BAD_REQUEST</code>: a general bad request: for example, a step that
     * attempts to tag an EFS file returns <code>BAD_REQUEST</code>, as only S3 files
     * can be tagged.</p> </li> <li> <p> <code>CUSTOM_STEP_FAILED</code>: occurs when
     * the custom step provided a callback that indicates failure.</p> </li> <li> <p>
     * <code>INTERNAL_SERVER_ERROR</code>: a catch-all error that can occur for a
     * variety of reasons.</p> </li> <li> <p> <code>NOT_FOUND</code>: occurs when a
     * requested entity, for example a source file for a copy step, does not exist.</p>
     * </li> <li> <p> <code>PERMISSION_DENIED</code>: occurs if your policy does not
     * contain the correct permissions to complete one or more of the steps in the
     * workflow.</p> </li> <li> <p> <code>TIMEOUT</code>: occurs when the execution
     * times out.</p>  <p> You can set the <code>TimeoutSeconds</code> for a
     * custom step, anywhere from 1 second to 1800 seconds (30 minutes). </p> 
     * </li> <li> <p> <code>THROTTLED</code>: occurs if you exceed the new execution
     * refill rate of one workflow per second.</p> </li> </ul>
     */
    inline void SetType(ExecutionErrorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies the error type.</p> <ul> <li> <p> <code>ALREADY_EXISTS</code>:
     * occurs for a copy step, if the overwrite option is not selected and a file with
     * the same name already exists in the target location.</p> </li> <li> <p>
     * <code>BAD_REQUEST</code>: a general bad request: for example, a step that
     * attempts to tag an EFS file returns <code>BAD_REQUEST</code>, as only S3 files
     * can be tagged.</p> </li> <li> <p> <code>CUSTOM_STEP_FAILED</code>: occurs when
     * the custom step provided a callback that indicates failure.</p> </li> <li> <p>
     * <code>INTERNAL_SERVER_ERROR</code>: a catch-all error that can occur for a
     * variety of reasons.</p> </li> <li> <p> <code>NOT_FOUND</code>: occurs when a
     * requested entity, for example a source file for a copy step, does not exist.</p>
     * </li> <li> <p> <code>PERMISSION_DENIED</code>: occurs if your policy does not
     * contain the correct permissions to complete one or more of the steps in the
     * workflow.</p> </li> <li> <p> <code>TIMEOUT</code>: occurs when the execution
     * times out.</p>  <p> You can set the <code>TimeoutSeconds</code> for a
     * custom step, anywhere from 1 second to 1800 seconds (30 minutes). </p> 
     * </li> <li> <p> <code>THROTTLED</code>: occurs if you exceed the new execution
     * refill rate of one workflow per second.</p> </li> </ul>
     */
    inline ExecutionError& WithType(const ExecutionErrorType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the error type.</p> <ul> <li> <p> <code>ALREADY_EXISTS</code>:
     * occurs for a copy step, if the overwrite option is not selected and a file with
     * the same name already exists in the target location.</p> </li> <li> <p>
     * <code>BAD_REQUEST</code>: a general bad request: for example, a step that
     * attempts to tag an EFS file returns <code>BAD_REQUEST</code>, as only S3 files
     * can be tagged.</p> </li> <li> <p> <code>CUSTOM_STEP_FAILED</code>: occurs when
     * the custom step provided a callback that indicates failure.</p> </li> <li> <p>
     * <code>INTERNAL_SERVER_ERROR</code>: a catch-all error that can occur for a
     * variety of reasons.</p> </li> <li> <p> <code>NOT_FOUND</code>: occurs when a
     * requested entity, for example a source file for a copy step, does not exist.</p>
     * </li> <li> <p> <code>PERMISSION_DENIED</code>: occurs if your policy does not
     * contain the correct permissions to complete one or more of the steps in the
     * workflow.</p> </li> <li> <p> <code>TIMEOUT</code>: occurs when the execution
     * times out.</p>  <p> You can set the <code>TimeoutSeconds</code> for a
     * custom step, anywhere from 1 second to 1800 seconds (30 minutes). </p> 
     * </li> <li> <p> <code>THROTTLED</code>: occurs if you exceed the new execution
     * refill rate of one workflow per second.</p> </li> </ul>
     */
    inline ExecutionError& WithType(ExecutionErrorType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Specifies the descriptive message that corresponds to the
     * <code>ErrorType</code>.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Specifies the descriptive message that corresponds to the
     * <code>ErrorType</code>.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Specifies the descriptive message that corresponds to the
     * <code>ErrorType</code>.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Specifies the descriptive message that corresponds to the
     * <code>ErrorType</code>.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Specifies the descriptive message that corresponds to the
     * <code>ErrorType</code>.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Specifies the descriptive message that corresponds to the
     * <code>ErrorType</code>.</p>
     */
    inline ExecutionError& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Specifies the descriptive message that corresponds to the
     * <code>ErrorType</code>.</p>
     */
    inline ExecutionError& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Specifies the descriptive message that corresponds to the
     * <code>ErrorType</code>.</p>
     */
    inline ExecutionError& WithMessage(const char* value) { SetMessage(value); return *this;}

  private:

    ExecutionErrorType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
