/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace deadline
{
namespace Model
{

  /**
   * <p>Your request exceeded a request rate quota.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/ThrottlingException">AWS
   * API Reference</a></p>
   */
  class ThrottlingException
  {
  public:
    AWS_DEADLINE_API ThrottlingException();
    AWS_DEADLINE_API ThrottlingException(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API ThrottlingException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    inline void SetMessage(const Aws::String& value) { m_messageHasBeenSet = true; m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_messageHasBeenSet = true; m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_messageHasBeenSet = true; m_message.assign(value); }
    inline ThrottlingException& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline ThrottlingException& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline ThrottlingException& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the service that is being throttled.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }
    inline ThrottlingException& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}
    inline ThrottlingException& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}
    inline ThrottlingException& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Identifies the quota that is being throttled.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }
    inline ThrottlingException& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}
    inline ThrottlingException& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}
    inline ThrottlingException& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of seconds a client should wait before retrying the request.</p>
     */
    inline int GetRetryAfterSeconds() const{ return m_retryAfterSeconds; }
    inline bool RetryAfterSecondsHasBeenSet() const { return m_retryAfterSecondsHasBeenSet; }
    inline void SetRetryAfterSeconds(int value) { m_retryAfterSecondsHasBeenSet = true; m_retryAfterSeconds = value; }
    inline ThrottlingException& WithRetryAfterSeconds(int value) { SetRetryAfterSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the resources in use when the exception was thrown.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetContext() const{ return m_context; }
    inline bool ContextHasBeenSet() const { return m_contextHasBeenSet; }
    inline void SetContext(const Aws::Map<Aws::String, Aws::String>& value) { m_contextHasBeenSet = true; m_context = value; }
    inline void SetContext(Aws::Map<Aws::String, Aws::String>&& value) { m_contextHasBeenSet = true; m_context = std::move(value); }
    inline ThrottlingException& WithContext(const Aws::Map<Aws::String, Aws::String>& value) { SetContext(value); return *this;}
    inline ThrottlingException& WithContext(Aws::Map<Aws::String, Aws::String>&& value) { SetContext(std::move(value)); return *this;}
    inline ThrottlingException& AddContext(const Aws::String& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }
    inline ThrottlingException& AddContext(Aws::String&& key, const Aws::String& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }
    inline ThrottlingException& AddContext(const Aws::String& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }
    inline ThrottlingException& AddContext(Aws::String&& key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), std::move(value)); return *this; }
    inline ThrottlingException& AddContext(const char* key, Aws::String&& value) { m_contextHasBeenSet = true; m_context.emplace(key, std::move(value)); return *this; }
    inline ThrottlingException& AddContext(Aws::String&& key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(std::move(key), value); return *this; }
    inline ThrottlingException& AddContext(const char* key, const char* value) { m_contextHasBeenSet = true; m_context.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet = false;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet = false;

    int m_retryAfterSeconds;
    bool m_retryAfterSecondsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_context;
    bool m_contextHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
