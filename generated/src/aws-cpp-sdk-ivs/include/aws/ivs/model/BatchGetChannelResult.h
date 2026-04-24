/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ivs/IVS_EXPORTS.h>
#include <aws/ivs/model/BatchError.h>
#include <aws/ivs/model/Channel.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IVS {
namespace Model {
class BatchGetChannelResult {
 public:
  AWS_IVS_API BatchGetChannelResult() = default;
  AWS_IVS_API BatchGetChannelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IVS_API BatchGetChannelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>See <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Reference/Headers/Access-Control-Allow-Origin">Access-Control-Allow-Origin</a>
   * in the MDN Web Docs.</p>
   */
  inline const Aws::String& GetAccessControlAllowOrigin() const { return m_accessControlAllowOrigin; }
  template <typename AccessControlAllowOriginT = Aws::String>
  void SetAccessControlAllowOrigin(AccessControlAllowOriginT&& value) {
    m_accessControlAllowOriginHasBeenSet = true;
    m_accessControlAllowOrigin = std::forward<AccessControlAllowOriginT>(value);
  }
  template <typename AccessControlAllowOriginT = Aws::String>
  BatchGetChannelResult& WithAccessControlAllowOrigin(AccessControlAllowOriginT&& value) {
    SetAccessControlAllowOrigin(std::forward<AccessControlAllowOriginT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>See <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Reference/Headers/Access-Control-Expose-Headers">Access-Control-Expose-Headers</a>
   * in the MDN Web Docs.</p>
   */
  inline const Aws::String& GetAccessControlExposeHeaders() const { return m_accessControlExposeHeaders; }
  template <typename AccessControlExposeHeadersT = Aws::String>
  void SetAccessControlExposeHeaders(AccessControlExposeHeadersT&& value) {
    m_accessControlExposeHeadersHasBeenSet = true;
    m_accessControlExposeHeaders = std::forward<AccessControlExposeHeadersT>(value);
  }
  template <typename AccessControlExposeHeadersT = Aws::String>
  BatchGetChannelResult& WithAccessControlExposeHeaders(AccessControlExposeHeadersT&& value) {
    SetAccessControlExposeHeaders(std::forward<AccessControlExposeHeadersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>See <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Reference/Headers/Cache-Control">Cache-Control</a>
   * in the MDN Web Docs.</p>
   */
  inline const Aws::String& GetCacheControl() const { return m_cacheControl; }
  template <typename CacheControlT = Aws::String>
  void SetCacheControl(CacheControlT&& value) {
    m_cacheControlHasBeenSet = true;
    m_cacheControl = std::forward<CacheControlT>(value);
  }
  template <typename CacheControlT = Aws::String>
  BatchGetChannelResult& WithCacheControl(CacheControlT&& value) {
    SetCacheControl(std::forward<CacheControlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>See <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Reference/Headers/Content-Security-Policy">Content-Security-Policy</a>
   * in the MDN Web Docs.</p>
   */
  inline const Aws::String& GetContentSecurityPolicy() const { return m_contentSecurityPolicy; }
  template <typename ContentSecurityPolicyT = Aws::String>
  void SetContentSecurityPolicy(ContentSecurityPolicyT&& value) {
    m_contentSecurityPolicyHasBeenSet = true;
    m_contentSecurityPolicy = std::forward<ContentSecurityPolicyT>(value);
  }
  template <typename ContentSecurityPolicyT = Aws::String>
  BatchGetChannelResult& WithContentSecurityPolicy(ContentSecurityPolicyT&& value) {
    SetContentSecurityPolicy(std::forward<ContentSecurityPolicyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>See <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Reference/Headers/Strict-Transport-Security">Strict-Transport-Security</a>
   * in the MDN Web Docs.</p>
   */
  inline const Aws::String& GetStrictTransportSecurity() const { return m_strictTransportSecurity; }
  template <typename StrictTransportSecurityT = Aws::String>
  void SetStrictTransportSecurity(StrictTransportSecurityT&& value) {
    m_strictTransportSecurityHasBeenSet = true;
    m_strictTransportSecurity = std::forward<StrictTransportSecurityT>(value);
  }
  template <typename StrictTransportSecurityT = Aws::String>
  BatchGetChannelResult& WithStrictTransportSecurity(StrictTransportSecurityT&& value) {
    SetStrictTransportSecurity(std::forward<StrictTransportSecurityT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>See <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Reference/Headers/X-Content-Type-Options">X-Content-Type-Options</a>
   * in the MDN Web Docs.</p>
   */
  inline const Aws::String& GetXContentTypeOptions() const { return m_xContentTypeOptions; }
  template <typename XContentTypeOptionsT = Aws::String>
  void SetXContentTypeOptions(XContentTypeOptionsT&& value) {
    m_xContentTypeOptionsHasBeenSet = true;
    m_xContentTypeOptions = std::forward<XContentTypeOptionsT>(value);
  }
  template <typename XContentTypeOptionsT = Aws::String>
  BatchGetChannelResult& WithXContentTypeOptions(XContentTypeOptionsT&& value) {
    SetXContentTypeOptions(std::forward<XContentTypeOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>See <a
   * href="https://developer.mozilla.org/en-US/docs/Web/HTTP/Reference/Headers/X-Frame-Options">X-Frame-Options</a>
   * in the MDN Web Docs.</p>
   */
  inline const Aws::String& GetXFrameOptions() const { return m_xFrameOptions; }
  template <typename XFrameOptionsT = Aws::String>
  void SetXFrameOptions(XFrameOptionsT&& value) {
    m_xFrameOptionsHasBeenSet = true;
    m_xFrameOptions = std::forward<XFrameOptionsT>(value);
  }
  template <typename XFrameOptionsT = Aws::String>
  BatchGetChannelResult& WithXFrameOptions(XFrameOptionsT&& value) {
    SetXFrameOptions(std::forward<XFrameOptionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const Aws::Vector<Channel>& GetChannels() const { return m_channels; }
  template <typename ChannelsT = Aws::Vector<Channel>>
  void SetChannels(ChannelsT&& value) {
    m_channelsHasBeenSet = true;
    m_channels = std::forward<ChannelsT>(value);
  }
  template <typename ChannelsT = Aws::Vector<Channel>>
  BatchGetChannelResult& WithChannels(ChannelsT&& value) {
    SetChannels(std::forward<ChannelsT>(value));
    return *this;
  }
  template <typename ChannelsT = Channel>
  BatchGetChannelResult& AddChannels(ChannelsT&& value) {
    m_channelsHasBeenSet = true;
    m_channels.emplace_back(std::forward<ChannelsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Each error object is related to a specific ARN in the request.</p>
   */
  inline const Aws::Vector<BatchError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchError>>
  BatchGetChannelResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchError>
  BatchGetChannelResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  BatchGetChannelResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_accessControlAllowOrigin;

  Aws::String m_accessControlExposeHeaders;

  Aws::String m_cacheControl;

  Aws::String m_contentSecurityPolicy;

  Aws::String m_strictTransportSecurity;

  Aws::String m_xContentTypeOptions;

  Aws::String m_xFrameOptions;

  Aws::Vector<Channel> m_channels;

  Aws::Vector<BatchError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_accessControlAllowOriginHasBeenSet = false;
  bool m_accessControlExposeHeadersHasBeenSet = false;
  bool m_cacheControlHasBeenSet = false;
  bool m_contentSecurityPolicyHasBeenSet = false;
  bool m_strictTransportSecurityHasBeenSet = false;
  bool m_xContentTypeOptionsHasBeenSet = false;
  bool m_xFrameOptionsHasBeenSet = false;
  bool m_channelsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IVS
}  // namespace Aws
