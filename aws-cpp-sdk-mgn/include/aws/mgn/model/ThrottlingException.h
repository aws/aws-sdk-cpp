/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>Reached throttling quota exception.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ThrottlingException">AWS
   * API Reference</a></p>
   */
  class ThrottlingException
  {
  public:
    AWS_MGN_API ThrottlingException();
    AWS_MGN_API ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ThrottlingException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ThrottlingException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ThrottlingException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Reached throttling quota exception.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>Reached throttling quota exception.</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>Reached throttling quota exception.</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>Reached throttling quota exception.</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>Reached throttling quota exception.</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>Reached throttling quota exception.</p>
     */
    inline ThrottlingException& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>Reached throttling quota exception.</p>
     */
    inline ThrottlingException& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>Reached throttling quota exception.</p>
     */
    inline ThrottlingException& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    /**
     * <p>Reached throttling quota exception will retry after x seconds.</p>
     */
    inline const Aws::String& GetRetryAfterSeconds() const{ return m_retryAfterSeconds; }

    /**
     * <p>Reached throttling quota exception will retry after x seconds.</p>
     */
    inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }

    /**
     * <p>Reached throttling quota exception will retry after x seconds.</p>
     */
    inline void SetRetryAfterSeconds(const Aws::String& value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds = value; }

    /**
     * <p>Reached throttling quota exception will retry after x seconds.</p>
     */
    inline void SetRetryAfterSeconds(Aws::String&& value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds = std::move(value); }

    /**
     * <p>Reached throttling quota exception will retry after x seconds.</p>
     */
    inline void SetRetryAfterSeconds(const char* value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds.assign(value); }

    /**
     * <p>Reached throttling quota exception will retry after x seconds.</p>
     */
    inline ThrottlingException& WithRetryAfterSeconds(const Aws::String& value) { SetRetryAfterSeconds(value); return *this;}

    /**
     * <p>Reached throttling quota exception will retry after x seconds.</p>
     */
    inline ThrottlingException& WithRetryAfterSeconds(Aws::String&& value) { SetRetryAfterSeconds(std::move(value)); return *this;}

    /**
     * <p>Reached throttling quota exception will retry after x seconds.</p>
     */
    inline ThrottlingException& WithRetryAfterSeconds(const char* value) { SetRetryAfterSeconds(value); return *this;}


    /**
     * <p>Reached throttling quota exception service code.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>Reached throttling quota exception service code.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>Reached throttling quota exception service code.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>Reached throttling quota exception service code.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>Reached throttling quota exception service code.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>Reached throttling quota exception service code.</p>
     */
    inline ThrottlingException& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>Reached throttling quota exception service code.</p>
     */
    inline ThrottlingException& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>Reached throttling quota exception service code.</p>
     */
    inline ThrottlingException& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    Aws::String m_retryAfterSeconds;
    bool m_retryAfterSecondsHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
