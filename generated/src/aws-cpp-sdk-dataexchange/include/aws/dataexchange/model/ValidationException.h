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
    AWS_DATAEXCHANGE_API ValidationException() = default;
    AWS_DATAEXCHANGE_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAEXCHANGE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The message that informs you about what was invalid about the request.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    ValidationException& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the resource that couldn't be found.</p>
     */
    inline ExceptionCause GetExceptionCause() const { return m_exceptionCause; }
    inline bool ExceptionCauseHasBeenSet() const { return m_exceptionCauseHasBeenSet; }
    inline void SetExceptionCause(ExceptionCause value) { m_exceptionCauseHasBeenSet = true; m_exceptionCause = value; }
    inline ValidationException& WithExceptionCause(ExceptionCause value) { SetExceptionCause(value); return *this;}
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    ExceptionCause m_exceptionCause{ExceptionCause::NOT_SET};
    bool m_exceptionCauseHasBeenSet = false;
  };

} // namespace Model
} // namespace DataExchange
} // namespace Aws
