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
  class AWS_TRANSFER_API ExecutionError
  {
  public:
    ExecutionError();
    ExecutionError(Aws::Utils::Json::JsonView jsonValue);
    ExecutionError& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the error type: currently, the only valid value is
     * <code>PERMISSION_DENIED</code>, which occurs if your policy does not contain the
     * correct permissions to complete one or more of the steps in the workflow.</p>
     */
    inline const ExecutionErrorType& GetType() const{ return m_type; }

    /**
     * <p>Specifies the error type: currently, the only valid value is
     * <code>PERMISSION_DENIED</code>, which occurs if your policy does not contain the
     * correct permissions to complete one or more of the steps in the workflow.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies the error type: currently, the only valid value is
     * <code>PERMISSION_DENIED</code>, which occurs if your policy does not contain the
     * correct permissions to complete one or more of the steps in the workflow.</p>
     */
    inline void SetType(const ExecutionErrorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the error type: currently, the only valid value is
     * <code>PERMISSION_DENIED</code>, which occurs if your policy does not contain the
     * correct permissions to complete one or more of the steps in the workflow.</p>
     */
    inline void SetType(ExecutionErrorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies the error type: currently, the only valid value is
     * <code>PERMISSION_DENIED</code>, which occurs if your policy does not contain the
     * correct permissions to complete one or more of the steps in the workflow.</p>
     */
    inline ExecutionError& WithType(const ExecutionErrorType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the error type: currently, the only valid value is
     * <code>PERMISSION_DENIED</code>, which occurs if your policy does not contain the
     * correct permissions to complete one or more of the steps in the workflow.</p>
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
    bool m_typeHasBeenSet;

    Aws::String m_message;
    bool m_messageHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
