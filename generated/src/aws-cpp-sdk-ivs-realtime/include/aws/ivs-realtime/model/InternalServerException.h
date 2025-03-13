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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ivs-realtime-2020-07-14/InternalServerException">AWS
   * API Reference</a></p>
   */
  class InternalServerException
  {
  public:
    AWS_IVSREALTIME_API InternalServerException() = default;
    AWS_IVSREALTIME_API InternalServerException(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API InternalServerException& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IVSREALTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetAccessControlAllowOrigin() const { return m_accessControlAllowOrigin; }
    inline bool AccessControlAllowOriginHasBeenSet() const { return m_accessControlAllowOriginHasBeenSet; }
    template<typename AccessControlAllowOriginT = Aws::String>
    void SetAccessControlAllowOrigin(AccessControlAllowOriginT&& value) { m_accessControlAllowOriginHasBeenSet = true; m_accessControlAllowOrigin = std::forward<AccessControlAllowOriginT>(value); }
    template<typename AccessControlAllowOriginT = Aws::String>
    InternalServerException& WithAccessControlAllowOrigin(AccessControlAllowOriginT&& value) { SetAccessControlAllowOrigin(std::forward<AccessControlAllowOriginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetAccessControlExposeHeaders() const { return m_accessControlExposeHeaders; }
    inline bool AccessControlExposeHeadersHasBeenSet() const { return m_accessControlExposeHeadersHasBeenSet; }
    template<typename AccessControlExposeHeadersT = Aws::String>
    void SetAccessControlExposeHeaders(AccessControlExposeHeadersT&& value) { m_accessControlExposeHeadersHasBeenSet = true; m_accessControlExposeHeaders = std::forward<AccessControlExposeHeadersT>(value); }
    template<typename AccessControlExposeHeadersT = Aws::String>
    InternalServerException& WithAccessControlExposeHeaders(AccessControlExposeHeadersT&& value) { SetAccessControlExposeHeaders(std::forward<AccessControlExposeHeadersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetCacheControl() const { return m_cacheControl; }
    inline bool CacheControlHasBeenSet() const { return m_cacheControlHasBeenSet; }
    template<typename CacheControlT = Aws::String>
    void SetCacheControl(CacheControlT&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = std::forward<CacheControlT>(value); }
    template<typename CacheControlT = Aws::String>
    InternalServerException& WithCacheControl(CacheControlT&& value) { SetCacheControl(std::forward<CacheControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetContentSecurityPolicy() const { return m_contentSecurityPolicy; }
    inline bool ContentSecurityPolicyHasBeenSet() const { return m_contentSecurityPolicyHasBeenSet; }
    template<typename ContentSecurityPolicyT = Aws::String>
    void SetContentSecurityPolicy(ContentSecurityPolicyT&& value) { m_contentSecurityPolicyHasBeenSet = true; m_contentSecurityPolicy = std::forward<ContentSecurityPolicyT>(value); }
    template<typename ContentSecurityPolicyT = Aws::String>
    InternalServerException& WithContentSecurityPolicy(ContentSecurityPolicyT&& value) { SetContentSecurityPolicy(std::forward<ContentSecurityPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetStrictTransportSecurity() const { return m_strictTransportSecurity; }
    inline bool StrictTransportSecurityHasBeenSet() const { return m_strictTransportSecurityHasBeenSet; }
    template<typename StrictTransportSecurityT = Aws::String>
    void SetStrictTransportSecurity(StrictTransportSecurityT&& value) { m_strictTransportSecurityHasBeenSet = true; m_strictTransportSecurity = std::forward<StrictTransportSecurityT>(value); }
    template<typename StrictTransportSecurityT = Aws::String>
    InternalServerException& WithStrictTransportSecurity(StrictTransportSecurityT&& value) { SetStrictTransportSecurity(std::forward<StrictTransportSecurityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetXContentTypeOptions() const { return m_xContentTypeOptions; }
    inline bool XContentTypeOptionsHasBeenSet() const { return m_xContentTypeOptionsHasBeenSet; }
    template<typename XContentTypeOptionsT = Aws::String>
    void SetXContentTypeOptions(XContentTypeOptionsT&& value) { m_xContentTypeOptionsHasBeenSet = true; m_xContentTypeOptions = std::forward<XContentTypeOptionsT>(value); }
    template<typename XContentTypeOptionsT = Aws::String>
    InternalServerException& WithXContentTypeOptions(XContentTypeOptionsT&& value) { SetXContentTypeOptions(std::forward<XContentTypeOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetXFrameOptions() const { return m_xFrameOptions; }
    inline bool XFrameOptionsHasBeenSet() const { return m_xFrameOptionsHasBeenSet; }
    template<typename XFrameOptionsT = Aws::String>
    void SetXFrameOptions(XFrameOptionsT&& value) { m_xFrameOptionsHasBeenSet = true; m_xFrameOptions = std::forward<XFrameOptionsT>(value); }
    template<typename XFrameOptionsT = Aws::String>
    InternalServerException& WithXFrameOptions(XFrameOptionsT&& value) { SetXFrameOptions(std::forward<XFrameOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetXAmznErrorType() const { return m_xAmznErrorType; }
    inline bool XAmznErrorTypeHasBeenSet() const { return m_xAmznErrorTypeHasBeenSet; }
    template<typename XAmznErrorTypeT = Aws::String>
    void SetXAmznErrorType(XAmznErrorTypeT&& value) { m_xAmznErrorTypeHasBeenSet = true; m_xAmznErrorType = std::forward<XAmznErrorTypeT>(value); }
    template<typename XAmznErrorTypeT = Aws::String>
    InternalServerException& WithXAmznErrorType(XAmznErrorTypeT&& value) { SetXAmznErrorType(std::forward<XAmznErrorTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unexpected error during processing of request.</p>
     */
    inline const Aws::String& GetExceptionMessage() const { return m_exceptionMessage; }
    inline bool ExceptionMessageHasBeenSet() const { return m_exceptionMessageHasBeenSet; }
    template<typename ExceptionMessageT = Aws::String>
    void SetExceptionMessage(ExceptionMessageT&& value) { m_exceptionMessageHasBeenSet = true; m_exceptionMessage = std::forward<ExceptionMessageT>(value); }
    template<typename ExceptionMessageT = Aws::String>
    InternalServerException& WithExceptionMessage(ExceptionMessageT&& value) { SetExceptionMessage(std::forward<ExceptionMessageT>(value)); return *this;}
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
