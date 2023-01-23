/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudhsm/CloudHSM_EXPORTS.h>
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
namespace CloudHSM
{
namespace Model
{

  /**
   * <p>Indicates that an exception occurred in the AWS CloudHSM
   * service.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudhsm-2014-05-30/CloudHsmServiceException">AWS
   * API Reference</a></p>
   */
  class CloudHsmServiceException
  {
  public:
    AWS_CLOUDHSM_API CloudHsmServiceException();
    AWS_CLOUDHSM_API CloudHsmServiceException(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSM_API CloudHsmServiceException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDHSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Additional information about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Additional information about the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Additional information about the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Additional information about the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Additional information about the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Additional information about the error.</p>
     */
    inline CloudHsmServiceException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Additional information about the error.</p>
     */
    inline CloudHsmServiceException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Additional information about the error.</p>
     */
    inline CloudHsmServiceException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Indicates if the action can be retried.</p>
     */
    inline bool GetRetryable() const{ return m_retryable; }

    /**
     * <p>Indicates if the action can be retried.</p>
     */
    inline bool RetryableHasBeenSet() const { return m_retryableHasBeenSet; }

    /**
     * <p>Indicates if the action can be retried.</p>
     */
    inline void SetRetryable(bool value) { m_retryableHasBeenSet = true; m_retryable = value; }

    /**
     * <p>Indicates if the action can be retried.</p>
     */
    inline CloudHsmServiceException& WithRetryable(bool value) { SetRetryable(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    bool m_retryable;
    bool m_retryableHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudHSM
} // namespace Aws
