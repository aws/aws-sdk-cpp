/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dataexchange/DataExchange_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dataexchange/model/ExceptionCause.h>
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
namespace DataExchange
{
namespace Model
{

  /**
   * <p>The request was invalid.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dataexchange-2017-07-25/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_DATAEXCHANGE_API ValidationException();
    AWS_DATAEXCHANGE_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The message that informs you about what was invalid about the request.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>The message that informs you about what was invalid about the request.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>The message that informs you about what was invalid about the request.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>The message that informs you about what was invalid about the request.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>The message that informs you about what was invalid about the request.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>The message that informs you about what was invalid about the request.</p>
     */
    inline ValidationException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>The message that informs you about what was invalid about the request.</p>
     */
    inline ValidationException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>The message that informs you about what was invalid about the request.</p>
     */
    inline ValidationException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The unique identifier for the resource that couldn't be found.</p>
     */
    inline const ExceptionCause& GetExceptionCause() const{ return m_exceptionCause; }

    /**
     * <p>The unique identifier for the resource that couldn't be found.</p>
     */
    inline bool ExceptionCauseHasBeenSet() const { return m_exceptionCauseHasBeenSet; }

    /**
     * <p>The unique identifier for the resource that couldn't be found.</p>
     */
    inline void SetExceptionCause(const ExceptionCause& value) { m_exceptionCauseHasBeenSet = true; m_exceptionCause = value; }

    /**
     * <p>The unique identifier for the resource that couldn't be found.</p>
     */
    inline void SetExceptionCause(ExceptionCause&& value) { m_exceptionCauseHasBeenSet = true; m_exceptionCause = std::move(value); }

    /**
     * <p>The unique identifier for the resource that couldn't be found.</p>
     */
    inline ValidationException& WithExceptionCause(const ExceptionCause& value) { SetExceptionCause(value); return *this;}

    /**
     * <p>The unique identifier for the resource that couldn't be found.</p>
     */
    inline ValidationException& WithExceptionCause(ExceptionCause&& value) { SetExceptionCause(std::move(value)); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ExceptionCause m_exceptionCause;
    bool m_exceptionCauseHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
