/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Your request exceeded a request rate quota. For example, you might have
   * exceeded the amount of times that you can retrieve device or deployment status
   * per second.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/ThrottlingException">AWS
   * API Reference</a></p>
   */
  class ThrottlingException
  {
  public:
    AWS_GREENGRASSV2_API ThrottlingException();
    AWS_GREENGRASSV2_API ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetMessage() const{ return m_message; }

    
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    
    inline ThrottlingException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    
    inline ThrottlingException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    
    inline ThrottlingException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The code for the quota in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>The code for the quota in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>The code for the quota in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>The code for the quota in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>The code for the quota in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>The code for the quota in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline ThrottlingException& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>The code for the quota in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline ThrottlingException& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>The code for the quota in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline ThrottlingException& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    /**
     * <p>The code for the service in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The code for the service in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The code for the service in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The code for the service in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The code for the service in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The code for the service in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline ThrottlingException& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The code for the service in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline ThrottlingException& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The code for the service in <a
     * href="https://docs.aws.amazon.com/servicequotas/latest/userguide/intro.html">Service
     * Quotas</a>.</p>
     */
    inline ThrottlingException& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>The amount of time to wait before you retry the request.</p>
     */
    inline int GetRetryAfterSeconds() const{ return m_retryAfterSeconds; }

    /**
     * <p>The amount of time to wait before you retry the request.</p>
     */
    inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }

    /**
     * <p>The amount of time to wait before you retry the request.</p>
     */
    inline void SetRetryAfterSeconds(int value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds = value; }

    /**
     * <p>The amount of time to wait before you retry the request.</p>
     */
    inline ThrottlingException& WithRetryAfterSeconds(int value) { SetRetryAfterSeconds(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    int m_retryAfterSeconds;
    bool m_retryAfterSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
