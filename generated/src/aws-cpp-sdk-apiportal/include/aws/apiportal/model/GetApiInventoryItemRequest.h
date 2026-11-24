/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortalRequest.h>
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/HttpMethod.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace APIPortal {
namespace Model {

/**
 */
class GetApiInventoryItemRequest : public APIPortalRequest {
 public:
  AWS_APIPORTAL_API GetApiInventoryItemRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetApiInventoryItem"; }

  AWS_APIPORTAL_API Aws::String SerializePayload() const override;

  AWS_APIPORTAL_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

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
  inline GetApiInventoryItemRequest& WithMethod(HttpMethod value) {
    SetMethod(value);
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
  GetApiInventoryItemRequest& WithHost(HostT&& value) {
    SetHost(std::forward<HostT>(value));
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
  inline GetApiInventoryItemRequest& WithPort(int value) {
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
  GetApiInventoryItemRequest& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the resource that serves the API, such as an API Gateway stage or
   * a load balancer.</p>
   */
  inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
  inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
  template <typename ResourceArnT = Aws::String>
  void SetResourceArn(ResourceArnT&& value) {
    m_resourceArnHasBeenSet = true;
    m_resourceArn = std::forward<ResourceArnT>(value);
  }
  template <typename ResourceArnT = Aws::String>
  GetApiInventoryItemRequest& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}
 private:
  HttpMethod m_method{HttpMethod::NOT_SET};

  Aws::String m_host;

  int m_port{0};

  Aws::String m_path;

  Aws::String m_resourceArn;
  bool m_methodHasBeenSet = false;
  bool m_hostHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_pathHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
