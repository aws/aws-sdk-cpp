/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ApplicationStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {
class DescribeApplicationResult {
 public:
  AWS_IOTSITEWISE_API DescribeApplicationResult() = default;
  AWS_IOTSITEWISE_API DescribeApplicationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API DescribeApplicationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>ARN of the application</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  DescribeApplicationResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the application was created</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DescribeApplicationResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>DNS subdomain for the application</p>
   */
  inline const Aws::String& GetDnsSubdomain() const { return m_dnsSubdomain; }
  template <typename DnsSubdomainT = Aws::String>
  void SetDnsSubdomain(DnsSubdomainT&& value) {
    m_dnsSubdomainHasBeenSet = true;
    m_dnsSubdomain = std::forward<DnsSubdomainT>(value);
  }
  template <typename DnsSubdomainT = Aws::String>
  DescribeApplicationResult& WithDnsSubdomain(DnsSubdomainT&& value) {
    SetDnsSubdomain(std::forward<DnsSubdomainT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Description of the application</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  DescribeApplicationResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique identifier of the application</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  DescribeApplicationResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Identity Center Application ARN associated with this application</p>
   */
  inline const Aws::String& GetIdcApplicationArn() const { return m_idcApplicationArn; }
  template <typename IdcApplicationArnT = Aws::String>
  void SetIdcApplicationArn(IdcApplicationArnT&& value) {
    m_idcApplicationArnHasBeenSet = true;
    m_idcApplicationArn = std::forward<IdcApplicationArnT>(value);
  }
  template <typename IdcApplicationArnT = Aws::String>
  DescribeApplicationResult& WithIdcApplicationArn(IdcApplicationArnT&& value) {
    SetIdcApplicationArn(std::forward<IdcApplicationArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the application</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DescribeApplicationResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current status of the application</p>
   */
  inline ApplicationStatus GetStatus() const { return m_status; }
  inline void SetStatus(ApplicationStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeApplicationResult& WithStatus(ApplicationStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Timestamp when the application was last updated</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DescribeApplicationResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Name of the workspace this application belongs to</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  DescribeApplicationResult& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
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
  DescribeApplicationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_arn;

  Aws::Utils::DateTime m_createdAt{};

  Aws::String m_dnsSubdomain;

  Aws::String m_description;

  Aws::String m_id;

  Aws::String m_idcApplicationArn;

  Aws::String m_name;

  ApplicationStatus m_status{ApplicationStatus::NOT_SET};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_workspaceName;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_arnHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_dnsSubdomainHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_idHasBeenSet = false;
  bool m_idcApplicationArnHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
