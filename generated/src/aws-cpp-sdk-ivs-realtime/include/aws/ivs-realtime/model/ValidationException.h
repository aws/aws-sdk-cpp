/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
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
namespace ivsrealtime
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/ValidationException">AWS
   * API Reference</a></p>
   */
  class ValidationException
  {
  public:
    AWS_IVSREALTIME_API ValidationException();
    AWS_IVSREALTIME_API ValidationException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API ValidationException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetAccessControlAllowOrigin() const{ return m_accessControlAllowOrigin; }
    inline bool AccessControlAllowOriginHasBeenSet() const { return m_accessControlAllowOriginHasBeenSet; }
    inline void SetAccessControlAllowOrigin(const Aws::String& value) { m_accessControlAllowOriginHasBeenSet = true; m_accessControlAllowOrigin = value; }
    inline void SetAccessControlAllowOrigin(Aws::String&& value) { m_accessControlAllowOriginHasBeenSet = true; m_accessControlAllowOrigin = std::move(value); }
    inline void SetAccessControlAllowOrigin(const char* value) { m_accessControlAllowOriginHasBeenSet = true; m_accessControlAllowOrigin.assign(value); }
    inline ValidationException& WithAccessControlAllowOrigin(const Aws::String& value) { SetAccessControlAllowOrigin(value); return *this;}
    inline ValidationException& WithAccessControlAllowOrigin(Aws::String&& value) { SetAccessControlAllowOrigin(std::move(value)); return *this;}
    inline ValidationException& WithAccessControlAllowOrigin(const char* value) { SetAccessControlAllowOrigin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetAccessControlExposeHeaders() const{ return m_accessControlExposeHeaders; }
    inline bool AccessControlExposeHeadersHasBeenSet() const { return m_accessControlExposeHeadersHasBeenSet; }
    inline void SetAccessControlExposeHeaders(const Aws::String& value) { m_accessControlExposeHeadersHasBeenSet = true; m_accessControlExposeHeaders = value; }
    inline void SetAccessControlExposeHeaders(Aws::String&& value) { m_accessControlExposeHeadersHasBeenSet = true; m_accessControlExposeHeaders = std::move(value); }
    inline void SetAccessControlExposeHeaders(const char* value) { m_accessControlExposeHeadersHasBeenSet = true; m_accessControlExposeHeaders.assign(value); }
    inline ValidationException& WithAccessControlExposeHeaders(const Aws::String& value) { SetAccessControlExposeHeaders(value); return *this;}
    inline ValidationException& WithAccessControlExposeHeaders(Aws::String&& value) { SetAccessControlExposeHeaders(std::move(value)); return *this;}
    inline ValidationException& WithAccessControlExposeHeaders(const char* value) { SetAccessControlExposeHeaders(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetCacheControl() const{ return m_cacheControl; }
    inline bool CacheControlHasBeenSet() const { return m_cacheControlHasBeenSet; }
    inline void SetCacheControl(const Aws::String& value) { m_cacheControlHasBeenSet = true; m_cacheControl = value; }
    inline void SetCacheControl(Aws::String&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = std::move(value); }
    inline void SetCacheControl(const char* value) { m_cacheControlHasBeenSet = true; m_cacheControl.assign(value); }
    inline ValidationException& WithCacheControl(const Aws::String& value) { SetCacheControl(value); return *this;}
    inline ValidationException& WithCacheControl(Aws::String&& value) { SetCacheControl(std::move(value)); return *this;}
    inline ValidationException& WithCacheControl(const char* value) { SetCacheControl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetContentSecurityPolicy() const{ return m_contentSecurityPolicy; }
    inline bool ContentSecurityPolicyHasBeenSet() const { return m_contentSecurityPolicyHasBeenSet; }
    inline void SetContentSecurityPolicy(const Aws::String& value) { m_contentSecurityPolicyHasBeenSet = true; m_contentSecurityPolicy = value; }
    inline void SetContentSecurityPolicy(Aws::String&& value) { m_contentSecurityPolicyHasBeenSet = true; m_contentSecurityPolicy = std::move(value); }
    inline void SetContentSecurityPolicy(const char* value) { m_contentSecurityPolicyHasBeenSet = true; m_contentSecurityPolicy.assign(value); }
    inline ValidationException& WithContentSecurityPolicy(const Aws::String& value) { SetContentSecurityPolicy(value); return *this;}
    inline ValidationException& WithContentSecurityPolicy(Aws::String&& value) { SetContentSecurityPolicy(std::move(value)); return *this;}
    inline ValidationException& WithContentSecurityPolicy(const char* value) { SetContentSecurityPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetStrictTransportSecurity() const{ return m_strictTransportSecurity; }
    inline bool StrictTransportSecurityHasBeenSet() const { return m_strictTransportSecurityHasBeenSet; }
    inline void SetStrictTransportSecurity(const Aws::String& value) { m_strictTransportSecurityHasBeenSet = true; m_strictTransportSecurity = value; }
    inline void SetStrictTransportSecurity(Aws::String&& value) { m_strictTransportSecurityHasBeenSet = true; m_strictTransportSecurity = std::move(value); }
    inline void SetStrictTransportSecurity(const char* value) { m_strictTransportSecurityHasBeenSet = true; m_strictTransportSecurity.assign(value); }
    inline ValidationException& WithStrictTransportSecurity(const Aws::String& value) { SetStrictTransportSecurity(value); return *this;}
    inline ValidationException& WithStrictTransportSecurity(Aws::String&& value) { SetStrictTransportSecurity(std::move(value)); return *this;}
    inline ValidationException& WithStrictTransportSecurity(const char* value) { SetStrictTransportSecurity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetXContentTypeOptions() const{ return m_xContentTypeOptions; }
    inline bool XContentTypeOptionsHasBeenSet() const { return m_xContentTypeOptionsHasBeenSet; }
    inline void SetXContentTypeOptions(const Aws::String& value) { m_xContentTypeOptionsHasBeenSet = true; m_xContentTypeOptions = value; }
    inline void SetXContentTypeOptions(Aws::String&& value) { m_xContentTypeOptionsHasBeenSet = true; m_xContentTypeOptions = std::move(value); }
    inline void SetXContentTypeOptions(const char* value) { m_xContentTypeOptionsHasBeenSet = true; m_xContentTypeOptions.assign(value); }
    inline ValidationException& WithXContentTypeOptions(const Aws::String& value) { SetXContentTypeOptions(value); return *this;}
    inline ValidationException& WithXContentTypeOptions(Aws::String&& value) { SetXContentTypeOptions(std::move(value)); return *this;}
    inline ValidationException& WithXContentTypeOptions(const char* value) { SetXContentTypeOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetXFrameOptions() const{ return m_xFrameOptions; }
    inline bool XFrameOptionsHasBeenSet() const { return m_xFrameOptionsHasBeenSet; }
    inline void SetXFrameOptions(const Aws::String& value) { m_xFrameOptionsHasBeenSet = true; m_xFrameOptions = value; }
    inline void SetXFrameOptions(Aws::String&& value) { m_xFrameOptionsHasBeenSet = true; m_xFrameOptions = std::move(value); }
    inline void SetXFrameOptions(const char* value) { m_xFrameOptionsHasBeenSet = true; m_xFrameOptions.assign(value); }
    inline ValidationException& WithXFrameOptions(const Aws::String& value) { SetXFrameOptions(value); return *this;}
    inline ValidationException& WithXFrameOptions(Aws::String&& value) { SetXFrameOptions(std::move(value)); return *this;}
    inline ValidationException& WithXFrameOptions(const char* value) { SetXFrameOptions(value); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetXAmznErrorType() const{ return m_xAmznErrorType; }
    inline bool XAmznErrorTypeHasBeenSet() const { return m_xAmznErrorTypeHasBeenSet; }
    inline void SetXAmznErrorType(const Aws::String& value) { m_xAmznErrorTypeHasBeenSet = true; m_xAmznErrorType = value; }
    inline void SetXAmznErrorType(Aws::String&& value) { m_xAmznErrorTypeHasBeenSet = true; m_xAmznErrorType = std::move(value); }
    inline void SetXAmznErrorType(const char* value) { m_xAmznErrorTypeHasBeenSet = true; m_xAmznErrorType.assign(value); }
    inline ValidationException& WithXAmznErrorType(const Aws::String& value) { SetXAmznErrorType(value); return *this;}
    inline ValidationException& WithXAmznErrorType(Aws::String&& value) { SetXAmznErrorType(std::move(value)); return *this;}
    inline ValidationException& WithXAmznErrorType(const char* value) { SetXAmznErrorType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input fails to satisfy the constraints specified by an Amazon Web
     * Services service.</p>
     */
    inline const Aws::String& GetExceptionMessage() const{ return m_exceptionMessage; }
    inline bool ExceptionMessageHasBeenSet() const { return m_exceptionMessageHasBeenSet; }
    inline void SetExceptionMessage(const Aws::String& value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage = value; }
    inline void SetExceptionMessage(Aws::String&& value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage = std::move(value); }
    inline void SetExceptionMessage(const char* value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage.assign(value); }
    inline ValidationException& WithExceptionMessage(const Aws::String& value) { SetExceptionMessage(value); return *this;}
    inline ValidationException& WithExceptionMessage(Aws::String&& value) { SetExceptionMessage(std::move(value)); return *this;}
    inline ValidationException& WithExceptionMessage(const char* value) { SetExceptionMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_accessControlAllowOrigin;
    bool m_accessControlAllowOriginHasBeenSet = false;

    Aws::String m_accessControlExposeHeaders;
    bool m_accessControlExposeHeadersHasBeenSet = false;

    Aws::String m_cacheControl;
    bool m_cacheControlHasBeenSet = false;

    Aws::String m_contentSecurityPolicy;
    bool m_contentSecurityPolicyHasBeenSet = false;

    Aws::String m_strictTransportSecurity;
    bool m_strictTransportSecurityHasBeenSet = false;

    Aws::String m_xContentTypeOptions;
    bool m_xContentTypeOptionsHasBeenSet = false;

    Aws::String m_xFrameOptions;
    bool m_xFrameOptionsHasBeenSet = false;

    Aws::String m_xAmznErrorType;
    bool m_xAmznErrorTypeHasBeenSet = false;

    Aws::String m_exceptionMessage;
    bool m_exceptionMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
