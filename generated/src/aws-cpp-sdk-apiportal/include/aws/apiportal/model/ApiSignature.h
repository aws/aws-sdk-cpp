/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/HttpMethod.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace APIPortal {
namespace Model {

/**
 * <p>The attributes that identify an API.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ApiSignature">AWS
 * API Reference</a></p>
 */
class ApiSignature {
 public:
  AWS_APIPORTAL_API ApiSignature() = default;
  AWS_APIPORTAL_API ApiSignature(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API ApiSignature& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the resource that serves the API.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  ApiSignature& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP method of the API.</p>
   */
  inline HttpMethod GetMethod() const { return m_method; }
  inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
  inline void SetMethod(HttpMethod value) {
    m_methodHasBeenSet = true;
    m_method = value;
  }
  inline ApiSignature& WithMethod(HttpMethod value) {
    SetMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The host name the API is served on.</p>
   */
  inline const Aws::String& GetHostname() const { return m_hostname; }
  inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
  template <typename HostnameT = Aws::String>
  void SetHostname(HostnameT&& value) {
    m_hostnameHasBeenSet = true;
    m_hostname = std::forward<HostnameT>(value);
  }
  template <typename HostnameT = Aws::String>
  ApiSignature& WithHostname(HostnameT&& value) {
    SetHostname(std::forward<HostnameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The port the API listens on, from 0 to 65535.</p>
   */
  inline int GetPort() const { return m_port; }
  inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
  inline void SetPort(int value) {
    m_portHasBeenSet = true;
    m_port = value;
  }
  inline ApiSignature& WithPort(int value) {
    SetPort(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The request path of the API.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  ApiSignature& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceArn;

  HttpMethod m_method{HttpMethod::NOT_SET};

  Aws::String m_hostname;

  int m_port{0};

  Aws::String m_path;
  bool m_resourceArnHasBeenSet = false;
  bool m_methodHasBeenSet = false;
  bool m_hostnameHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_pathHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
