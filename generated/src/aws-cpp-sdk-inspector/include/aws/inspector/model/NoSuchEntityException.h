/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/NoSuchEntityErrorCode.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>The request was rejected because it referenced an entity that does not exist.
   * The error code describes the entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/NoSuchEntityException">AWS
   * API Reference</a></p>
   */
  class NoSuchEntityException
  {
  public:
    AWS_INSPECTOR_API NoSuchEntityException();
    AWS_INSPECTOR_API NoSuchEntityException(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API NoSuchEntityException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Details of the exception error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Details of the exception error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Details of the exception error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Details of the exception error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Details of the exception error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Details of the exception error.</p>
     */
    inline NoSuchEntityException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Details of the exception error.</p>
     */
    inline NoSuchEntityException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Details of the exception error.</p>
     */
    inline NoSuchEntityException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Code that indicates the type of error that is generated.</p>
     */
    inline const NoSuchEntityErrorCode& GetErrorCode() const{ return m_errorCode; }

    /**
     * <p>Code that indicates the type of error that is generated.</p>
     */
    inline bool ErrorCodeHasBeenSet() const { return m_errorCodeHasBeenSet; }

    /**
     * <p>Code that indicates the type of error that is generated.</p>
     */
    inline void SetErrorCode(const NoSuchEntityErrorCode& value) { m_errorCodeHasBeenSet = true; m_errorCode = value; }

    /**
     * <p>Code that indicates the type of error that is generated.</p>
     */
    inline void SetErrorCode(NoSuchEntityErrorCode&& value) { m_errorCodeHasBeenSet = true; m_errorCode = std::move(value); }

    /**
     * <p>Code that indicates the type of error that is generated.</p>
     */
    inline NoSuchEntityException& WithErrorCode(const NoSuchEntityErrorCode& value) { SetErrorCode(value); return *this;}

    /**
     * <p>Code that indicates the type of error that is generated.</p>
     */
    inline NoSuchEntityException& WithErrorCode(NoSuchEntityErrorCode&& value) { SetErrorCode(std::move(value)); return *this;}


    /**
     * <p>You can immediately retry your request.</p>
     */
    inline bool GetCanRetry() const{ return m_canRetry; }

    /**
     * <p>You can immediately retry your request.</p>
     */
    inline bool CanRetryHasBeenSet() const { return m_canRetryHasBeenSet; }

    /**
     * <p>You can immediately retry your request.</p>
     */
    inline void SetCanRetry(bool value) { m_canRetryHasBeenSet = true; m_canRetry = value; }

    /**
     * <p>You can immediately retry your request.</p>
     */
    inline NoSuchEntityException& WithCanRetry(bool value) { SetCanRetry(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    NoSuchEntityErrorCode m_errorCode;
    bool m_errorCodeHasBeenSet = false;

    bool m_canRetry;
    bool m_canRetryHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
