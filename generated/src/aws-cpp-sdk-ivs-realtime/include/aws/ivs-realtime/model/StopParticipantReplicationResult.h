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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ivsrealtime
{
namespace Model
{
  class StopParticipantReplicationResult
  {
  public:
    AWS_IVSREALTIME_API StopParticipantReplicationResult() = default;
    AWS_IVSREALTIME_API StopParticipantReplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API StopParticipantReplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetAccessControlAllowOrigin() const { return m_accessControlAllowOrigin; }
    template<typename AccessControlAllowOriginT = Aws::String>
    void SetAccessControlAllowOrigin(AccessControlAllowOriginT&& value) { m_accessControlAllowOriginHasBeenSet = true; m_accessControlAllowOrigin = std::forward<AccessControlAllowOriginT>(value); }
    template<typename AccessControlAllowOriginT = Aws::String>
    StopParticipantReplicationResult& WithAccessControlAllowOrigin(AccessControlAllowOriginT&& value) { SetAccessControlAllowOrigin(std::forward<AccessControlAllowOriginT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetAccessControlExposeHeaders() const { return m_accessControlExposeHeaders; }
    template<typename AccessControlExposeHeadersT = Aws::String>
    void SetAccessControlExposeHeaders(AccessControlExposeHeadersT&& value) { m_accessControlExposeHeadersHasBeenSet = true; m_accessControlExposeHeaders = std::forward<AccessControlExposeHeadersT>(value); }
    template<typename AccessControlExposeHeadersT = Aws::String>
    StopParticipantReplicationResult& WithAccessControlExposeHeaders(AccessControlExposeHeadersT&& value) { SetAccessControlExposeHeaders(std::forward<AccessControlExposeHeadersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetCacheControl() const { return m_cacheControl; }
    template<typename CacheControlT = Aws::String>
    void SetCacheControl(CacheControlT&& value) { m_cacheControlHasBeenSet = true; m_cacheControl = std::forward<CacheControlT>(value); }
    template<typename CacheControlT = Aws::String>
    StopParticipantReplicationResult& WithCacheControl(CacheControlT&& value) { SetCacheControl(std::forward<CacheControlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetContentSecurityPolicy() const { return m_contentSecurityPolicy; }
    template<typename ContentSecurityPolicyT = Aws::String>
    void SetContentSecurityPolicy(ContentSecurityPolicyT&& value) { m_contentSecurityPolicyHasBeenSet = true; m_contentSecurityPolicy = std::forward<ContentSecurityPolicyT>(value); }
    template<typename ContentSecurityPolicyT = Aws::String>
    StopParticipantReplicationResult& WithContentSecurityPolicy(ContentSecurityPolicyT&& value) { SetContentSecurityPolicy(std::forward<ContentSecurityPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetStrictTransportSecurity() const { return m_strictTransportSecurity; }
    template<typename StrictTransportSecurityT = Aws::String>
    void SetStrictTransportSecurity(StrictTransportSecurityT&& value) { m_strictTransportSecurityHasBeenSet = true; m_strictTransportSecurity = std::forward<StrictTransportSecurityT>(value); }
    template<typename StrictTransportSecurityT = Aws::String>
    StopParticipantReplicationResult& WithStrictTransportSecurity(StrictTransportSecurityT&& value) { SetStrictTransportSecurity(std::forward<StrictTransportSecurityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetXContentTypeOptions() const { return m_xContentTypeOptions; }
    template<typename XContentTypeOptionsT = Aws::String>
    void SetXContentTypeOptions(XContentTypeOptionsT&& value) { m_xContentTypeOptionsHasBeenSet = true; m_xContentTypeOptions = std::forward<XContentTypeOptionsT>(value); }
    template<typename XContentTypeOptionsT = Aws::String>
    StopParticipantReplicationResult& WithXContentTypeOptions(XContentTypeOptionsT&& value) { SetXContentTypeOptions(std::forward<XContentTypeOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const Aws::String& GetXFrameOptions() const { return m_xFrameOptions; }
    template<typename XFrameOptionsT = Aws::String>
    void SetXFrameOptions(XFrameOptionsT&& value) { m_xFrameOptionsHasBeenSet = true; m_xFrameOptions = std::forward<XFrameOptionsT>(value); }
    template<typename XFrameOptionsT = Aws::String>
    StopParticipantReplicationResult& WithXFrameOptions(XFrameOptionsT&& value) { SetXFrameOptions(std::forward<XFrameOptionsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    StopParticipantReplicationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
