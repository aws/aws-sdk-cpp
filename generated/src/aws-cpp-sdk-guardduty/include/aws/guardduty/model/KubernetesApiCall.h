/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains details about a Kubernetes API call.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KubernetesApiCall">AWS
 * API Reference</a></p>
 */
class KubernetesApiCall {
 public:
  AWS_GUARDDUTY_API KubernetesApiCall() = default;
  AWS_GUARDDUTY_API KubernetesApiCall(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API KubernetesApiCall& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the cluster.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  KubernetesApiCall& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Kubernetes user name of the caller.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  KubernetesApiCall& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Kubernetes groups of the caller.</p>
   */
  inline const Aws::String& GetUserGroups() const { return m_userGroups; }
  inline bool UserGroupsHasBeenSet() const { return m_userGroupsHasBeenSet; }
  template <typename UserGroupsT = Aws::String>
  void SetUserGroups(UserGroupsT&& value) {
    m_userGroupsHasBeenSet = true;
    m_userGroups = std::forward<UserGroupsT>(value);
  }
  template <typename UserGroupsT = Aws::String>
  KubernetesApiCall& WithUserGroups(UserGroupsT&& value) {
    SetUserGroups(std::forward<UserGroupsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the caller.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  KubernetesApiCall& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Kubernetes API verb, such as <code>get</code> or <code>create</code>.</p>
   */
  inline const Aws::String& GetVerb() const { return m_verb; }
  inline bool VerbHasBeenSet() const { return m_verbHasBeenSet; }
  template <typename VerbT = Aws::String>
  void SetVerb(VerbT&& value) {
    m_verbHasBeenSet = true;
    m_verb = std::forward<VerbT>(value);
  }
  template <typename VerbT = Aws::String>
  KubernetesApiCall& WithVerb(VerbT&& value) {
    SetVerb(std::forward<VerbT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the Kubernetes resource.</p>
   */
  inline const Aws::String& GetResourceType() const { return m_resourceType; }
  inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
  template <typename ResourceTypeT = Aws::String>
  void SetResourceType(ResourceTypeT&& value) {
    m_resourceTypeHasBeenSet = true;
    m_resourceType = std::forward<ResourceTypeT>(value);
  }
  template <typename ResourceTypeT = Aws::String>
  KubernetesApiCall& WithResourceType(ResourceTypeT&& value) {
    SetResourceType(std::forward<ResourceTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Kubernetes resource.</p>
   */
  inline const Aws::String& GetResourceName() const { return m_resourceName; }
  inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
  template <typename ResourceNameT = Aws::String>
  void SetResourceName(ResourceNameT&& value) {
    m_resourceNameHasBeenSet = true;
    m_resourceName = std::forward<ResourceNameT>(value);
  }
  template <typename ResourceNameT = Aws::String>
  KubernetesApiCall& WithResourceName(ResourceNameT&& value) {
    SetResourceName(std::forward<ResourceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Kubernetes namespace of the resource.</p>
   */
  inline const Aws::String& GetNamespace() const { return m_namespace; }
  inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }
  template <typename NamespaceT = Aws::String>
  void SetNamespace(NamespaceT&& value) {
    m_namespaceHasBeenSet = true;
    m_namespace = std::forward<NamespaceT>(value);
  }
  template <typename NamespaceT = Aws::String>
  KubernetesApiCall& WithNamespace(NamespaceT&& value) {
    SetNamespace(std::forward<NamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URI of the request.</p>
   */
  inline const Aws::String& GetRequestUri() const { return m_requestUri; }
  inline bool RequestUriHasBeenSet() const { return m_requestUriHasBeenSet; }
  template <typename RequestUriT = Aws::String>
  void SetRequestUri(RequestUriT&& value) {
    m_requestUriHasBeenSet = true;
    m_requestUri = std::forward<RequestUriT>(value);
  }
  template <typename RequestUriT = Aws::String>
  KubernetesApiCall& WithRequestUri(RequestUriT&& value) {
    SetRequestUri(std::forward<RequestUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status code of the API call.</p>
   */
  inline int GetStatusCode() const { return m_statusCode; }
  inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
  inline void SetStatusCode(int value) {
    m_statusCodeHasBeenSet = true;
    m_statusCode = value;
  }
  inline KubernetesApiCall& WithStatusCode(int value) {
    SetStatusCode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source IP addresses of the API call.</p>
   */
  inline const Aws::String& GetSourceIps() const { return m_sourceIps; }
  inline bool SourceIpsHasBeenSet() const { return m_sourceIpsHasBeenSet; }
  template <typename SourceIpsT = Aws::String>
  void SetSourceIps(SourceIpsT&& value) {
    m_sourceIpsHasBeenSet = true;
    m_sourceIps = std::forward<SourceIpsT>(value);
  }
  template <typename SourceIpsT = Aws::String>
  KubernetesApiCall& WithSourceIps(SourceIpsT&& value) {
    SetSourceIps(std::forward<SourceIpsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user agent of the caller.</p>
   */
  inline const Aws::String& GetUserAgent() const { return m_userAgent; }
  inline bool UserAgentHasBeenSet() const { return m_userAgentHasBeenSet; }
  template <typename UserAgentT = Aws::String>
  void SetUserAgent(UserAgentT&& value) {
    m_userAgentHasBeenSet = true;
    m_userAgent = std::forward<UserAgentT>(value);
  }
  template <typename UserAgentT = Aws::String>
  KubernetesApiCall& WithUserAgent(UserAgentT&& value) {
    SetUserAgent(std::forward<UserAgentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of matching API calls.</p>
   */
  inline long long GetEventCount() const { return m_eventCount; }
  inline bool EventCountHasBeenSet() const { return m_eventCountHasBeenSet; }
  inline void SetEventCount(long long value) {
    m_eventCountHasBeenSet = true;
    m_eventCount = value;
  }
  inline KubernetesApiCall& WithEventCount(long long value) {
    SetEventCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterName;

  Aws::String m_username;

  Aws::String m_userGroups;

  Aws::String m_userId;

  Aws::String m_verb;

  Aws::String m_resourceType;

  Aws::String m_resourceName;

  Aws::String m_namespace;

  Aws::String m_requestUri;

  int m_statusCode{0};

  Aws::String m_sourceIps;

  Aws::String m_userAgent;

  long long m_eventCount{0};
  bool m_clusterNameHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
  bool m_userGroupsHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_verbHasBeenSet = false;
  bool m_resourceTypeHasBeenSet = false;
  bool m_resourceNameHasBeenSet = false;
  bool m_namespaceHasBeenSet = false;
  bool m_requestUriHasBeenSet = false;
  bool m_statusCodeHasBeenSet = false;
  bool m_sourceIpsHasBeenSet = false;
  bool m_userAgentHasBeenSet = false;
  bool m_eventCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
