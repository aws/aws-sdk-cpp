/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/protocol-mock/ProtocolMock_EXPORTS.h>
#include <aws/protocol-mock/model/HttpHeader.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ProtocolMock {
namespace Model {

class Request {
 public:
  AWS_PROTOCOLMOCK_API Request() = default;
  AWS_PROTOCOLMOCK_API Request(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROTOCOLMOCK_API Request& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_PROTOCOLMOCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  Request& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetMethod() const { return m_method; }
  inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
  template <typename MethodT = Aws::String>
  void SetMethod(MethodT&& value) {
    m_methodHasBeenSet = true;
    m_method = std::forward<MethodT>(value);
  }
  template <typename MethodT = Aws::String>
  Request& WithMethod(MethodT&& value) {
    SetMethod(std::forward<MethodT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetBody() const { return m_body; }
  inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
  template <typename BodyT = Aws::String>
  void SetBody(BodyT&& value) {
    m_bodyHasBeenSet = true;
    m_body = std::forward<BodyT>(value);
  }
  template <typename BodyT = Aws::String>
  Request& WithBody(BodyT&& value) {
    SetBody(std::forward<BodyT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetUri() const { return m_uri; }
  inline bool UriHasBeenSet() const { return m_uriHasBeenSet; }
  template <typename UriT = Aws::String>
  void SetUri(UriT&& value) {
    m_uriHasBeenSet = true;
    m_uri = std::forward<UriT>(value);
  }
  template <typename UriT = Aws::String>
  Request& WithUri(UriT&& value) {
    SetUri(std::forward<UriT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetHost() const { return m_host; }
  inline bool HostHasBeenSet() const { return m_hostHasBeenSet; }
  template <typename HostT = Aws::String>
  void SetHost(HostT&& value) {
    m_hostHasBeenSet = true;
    m_host = std::forward<HostT>(value);
  }
  template <typename HostT = Aws::String>
  Request& WithHost(HostT&& value) {
    SetHost(std::forward<HostT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<HttpHeader>& GetHeaders() const { return m_headers; }
  inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
  template <typename HeadersT = Aws::Vector<HttpHeader>>
  void SetHeaders(HeadersT&& value) {
    m_headersHasBeenSet = true;
    m_headers = std::forward<HeadersT>(value);
  }
  template <typename HeadersT = Aws::Vector<HttpHeader>>
  Request& WithHeaders(HeadersT&& value) {
    SetHeaders(std::forward<HeadersT>(value));
    return *this;
  }
  template <typename HeadersT = HttpHeader>
  Request& AddHeaders(HeadersT&& value) {
    m_headersHasBeenSet = true;
    m_headers.emplace_back(std::forward<HeadersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_timestamp{};
  bool m_timestampHasBeenSet = false;

  Aws::String m_method;
  bool m_methodHasBeenSet = false;

  Aws::String m_body;
  bool m_bodyHasBeenSet = false;

  Aws::String m_uri;
  bool m_uriHasBeenSet = false;

  Aws::String m_host;
  bool m_hostHasBeenSet = false;

  Aws::Vector<HttpHeader> m_headers;
  bool m_headersHasBeenSet = false;
};

}  // namespace Model
}  // namespace ProtocolMock
}  // namespace Aws
