﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
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
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Request was denied due to request throttling.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/ThrottlingException">AWS
   * API Reference</a></p>
   */
  class AWS_PROMETHEUSSERVICE_API ThrottlingException
  {
  public:
    ThrottlingException();
    ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
    ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Description of the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>Description of the error.</p>
     */
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }

    /**
     * <p>Description of the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }

    /**
     * <p>Description of the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }

    /**
     * <p>Description of the error.</p>
     */
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }

    /**
     * <p>Description of the error.</p>
     */
    inline ThrottlingException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>Description of the error.</p>
     */
    inline ThrottlingException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>Description of the error.</p>
     */
    inline ThrottlingException& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>Service Quotas requirement to identify originating quota.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>Service Quotas requirement to identify originating quota.</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>Service Quotas requirement to identify originating quota.</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>Service Quotas requirement to identify originating quota.</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>Service Quotas requirement to identify originating quota.</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>Service Quotas requirement to identify originating quota.</p>
     */
    inline ThrottlingException& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>Service Quotas requirement to identify originating quota.</p>
     */
    inline ThrottlingException& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>Service Quotas requirement to identify originating quota.</p>
     */
    inline ThrottlingException& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    /**
     * <p>Advice to clients on when the call can be safely retried.</p>
     */
    inline int GetRetryAfterSeconds() const{ return m_retryAfterSeconds; }

    /**
     * <p>Advice to clients on when the call can be safely retried.</p>
     */
    inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }

    /**
     * <p>Advice to clients on when the call can be safely retried.</p>
     */
    inline void SetRetryAfterSeconds(int value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds = value; }

    /**
     * <p>Advice to clients on when the call can be safely retried.</p>
     */
    inline ThrottlingException& WithRetryAfterSeconds(int value) { SetRetryAfterSeconds(value); return *this;}


    /**
     * <p>Service Quotas requirement to identify originating service.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>Service Quotas requirement to identify originating service.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>Service Quotas requirement to identify originating service.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>Service Quotas requirement to identify originating service.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>Service Quotas requirement to identify originating service.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>Service Quotas requirement to identify originating service.</p>
     */
    inline ThrottlingException& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>Service Quotas requirement to identify originating service.</p>
     */
    inline ThrottlingException& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>Service Quotas requirement to identify originating service.</p>
     */
    inline ThrottlingException& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}

  private:

    Aws::String m_message;
    bool m_messageHasBeenSet;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet;

    int m_retryAfterSeconds;
    bool m_retryAfterSecondsHasBeenSet;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
