/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/Classification.h>
#include <aws/apiportal/model/DiscoverySource.h>
#include <aws/apiportal/model/HttpMethod.h>
#include <aws/apiportal/model/ManagedBy.h>
#include <aws/apiportal/model/Visibility.h>
#include <aws/apiportal/model/WafStatus.h>
#include <aws/apiportal/model/Workload.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>The full details of an API found by discovery.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/ApiInventoryItemDetail">AWS
 * API Reference</a></p>
 */
class ApiInventoryItemDetail {
 public:
  AWS_APIPORTAL_API ApiInventoryItemDetail() = default;
  AWS_APIPORTAL_API ApiInventoryItemDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API ApiInventoryItemDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  inline ApiInventoryItemDetail& WithMethod(HttpMethod value) {
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
  ApiInventoryItemDetail& WithHost(HostT&& value) {
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
  inline ApiInventoryItemDetail& WithPort(int value) {
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
  ApiInventoryItemDetail& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS account ID that owns the API.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  ApiInventoryItemDetail& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
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
  ApiInventoryItemDetail& WithResourceArn(ResourceArnT&& value) {
    SetResourceArn(std::forward<ResourceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Region the API was discovered in.</p>
   */
  inline const Aws::String& GetRegion() const { return m_region; }
  inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
  template <typename RegionT = Aws::String>
  void SetRegion(RegionT&& value) {
    m_regionHasBeenSet = true;
    m_region = std::forward<RegionT>(value);
  }
  template <typename RegionT = Aws::String>
  ApiInventoryItemDetail& WithRegion(RegionT&& value) {
    SetRegion(std::forward<RegionT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline DiscoverySource GetDiscoverySource() const { return m_discoverySource; }
  inline bool DiscoverySourceHasBeenSet() const { return m_discoverySourceHasBeenSet; }
  inline void SetDiscoverySource(DiscoverySource value) {
    m_discoverySourceHasBeenSet = true;
    m_discoverySource = value;
  }
  inline ApiInventoryItemDetail& WithDiscoverySource(DiscoverySource value) {
    SetDiscoverySource(value);
    return *this;
  }
  ///@}

  ///@{

  inline Visibility GetVisibility() const { return m_visibility; }
  inline bool VisibilityHasBeenSet() const { return m_visibilityHasBeenSet; }
  inline void SetVisibility(Visibility value) {
    m_visibilityHasBeenSet = true;
    m_visibility = value;
  }
  inline ApiInventoryItemDetail& WithVisibility(Visibility value) {
    SetVisibility(value);
    return *this;
  }
  ///@}

  ///@{

  inline WafStatus GetWafStatus() const { return m_wafStatus; }
  inline bool WafStatusHasBeenSet() const { return m_wafStatusHasBeenSet; }
  inline void SetWafStatus(WafStatus value) {
    m_wafStatusHasBeenSet = true;
    m_wafStatus = value;
  }
  inline ApiInventoryItemDetail& WithWafStatus(WafStatus value) {
    SetWafStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline Classification GetClassification() const { return m_classification; }
  inline bool ClassificationHasBeenSet() const { return m_classificationHasBeenSet; }
  inline void SetClassification(Classification value) {
    m_classificationHasBeenSet = true;
    m_classification = value;
  }
  inline ApiInventoryItemDetail& WithClassification(Classification value) {
    SetClassification(value);
    return *this;
  }
  ///@}

  ///@{

  inline ManagedBy GetManagedBy() const { return m_managedBy; }
  inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
  inline void SetManagedBy(ManagedBy value) {
    m_managedByHasBeenSet = true;
    m_managedBy = value;
  }
  inline ApiInventoryItemDetail& WithManagedBy(ManagedBy value) {
    SetManagedBy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>AI protocols seen in this API's traffic, each listed at most once. Absent
   * when none has been reported, which includes an account that has not enabled AI
   * discovery.</p>
   */
  inline const Aws::Vector<Workload>& GetWorkloads() const { return m_workloads; }
  inline bool WorkloadsHasBeenSet() const { return m_workloadsHasBeenSet; }
  template <typename WorkloadsT = Aws::Vector<Workload>>
  void SetWorkloads(WorkloadsT&& value) {
    m_workloadsHasBeenSet = true;
    m_workloads = std::forward<WorkloadsT>(value);
  }
  template <typename WorkloadsT = Aws::Vector<Workload>>
  ApiInventoryItemDetail& WithWorkloads(WorkloadsT&& value) {
    SetWorkloads(std::forward<WorkloadsT>(value));
    return *this;
  }
  inline ApiInventoryItemDetail& AddWorkloads(Workload value) {
    m_workloadsHasBeenSet = true;
    m_workloads.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Managed API created from this API. Absent if there is
   * none.</p>
   */
  inline const Aws::String& GetManagedApiId() const { return m_managedApiId; }
  inline bool ManagedApiIdHasBeenSet() const { return m_managedApiIdHasBeenSet; }
  template <typename ManagedApiIdT = Aws::String>
  void SetManagedApiId(ManagedApiIdT&& value) {
    m_managedApiIdHasBeenSet = true;
    m_managedApiId = std::forward<ManagedApiIdT>(value);
  }
  template <typename ManagedApiIdT = Aws::String>
  ApiInventoryItemDetail& WithManagedApiId(ManagedApiIdT&& value) {
    SetManagedApiId(std::forward<ManagedApiIdT>(value));
    return *this;
  }
  ///@}
 private:
  HttpMethod m_method{HttpMethod::NOT_SET};

  Aws::String m_host;

  int m_port{0};

  Aws::String m_path;

  Aws::String m_accountId;

  Aws::String m_resourceArn;

  Aws::String m_region;

  DiscoverySource m_discoverySource{DiscoverySource::NOT_SET};

  Visibility m_visibility{Visibility::NOT_SET};

  WafStatus m_wafStatus{WafStatus::NOT_SET};

  Classification m_classification{Classification::NOT_SET};

  ManagedBy m_managedBy{ManagedBy::NOT_SET};

  Aws::Vector<Workload> m_workloads;

  Aws::String m_managedApiId;
  bool m_methodHasBeenSet = false;
  bool m_hostHasBeenSet = false;
  bool m_portHasBeenSet = false;
  bool m_pathHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_resourceArnHasBeenSet = false;
  bool m_regionHasBeenSet = false;
  bool m_discoverySourceHasBeenSet = false;
  bool m_visibilityHasBeenSet = false;
  bool m_wafStatusHasBeenSet = false;
  bool m_classificationHasBeenSet = false;
  bool m_managedByHasBeenSet = false;
  bool m_workloadsHasBeenSet = false;
  bool m_managedApiIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
