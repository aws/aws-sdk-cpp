/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/datazone/model/DomainStatus.h>
#include <aws/datazone/model/DomainVersion.h>
#include <aws/datazone/model/SingleSignOn.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {
class CreateDomainResult {
 public:
  AWS_DATAZONE_API CreateDomainResult() = default;
  AWS_DATAZONE_API CreateDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DATAZONE_API CreateDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the Amazon DataZone domain.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateDomainResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the root domain unit.</p>
   */
  inline const Aws::String& GetRootDomainUnitId() const { return m_rootDomainUnitId; }
  template <typename RootDomainUnitIdT = Aws::String>
  void SetRootDomainUnitId(RootDomainUnitIdT&& value) {
    m_rootDomainUnitIdHasBeenSet = true;
    m_rootDomainUnitId = std::forward<RootDomainUnitIdT>(value);
  }
  template <typename RootDomainUnitIdT = Aws::String>
  CreateDomainResult& WithRootDomainUnitId(RootDomainUnitIdT&& value) {
    SetRootDomainUnitId(std::forward<RootDomainUnitIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the Amazon DataZone domain.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateDomainResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the Amazon DataZone domain.</p>
   */
  inline const Aws::String& GetDescription() const { return m_description; }
  template <typename DescriptionT = Aws::String>
  void SetDescription(DescriptionT&& value) {
    m_descriptionHasBeenSet = true;
    m_description = std::forward<DescriptionT>(value);
  }
  template <typename DescriptionT = Aws::String>
  CreateDomainResult& WithDescription(DescriptionT&& value) {
    SetDescription(std::forward<DescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The single-sign on configuration of the Amazon DataZone domain.</p>
   */
  inline const SingleSignOn& GetSingleSignOn() const { return m_singleSignOn; }
  template <typename SingleSignOnT = SingleSignOn>
  void SetSingleSignOn(SingleSignOnT&& value) {
    m_singleSignOnHasBeenSet = true;
    m_singleSignOn = std::forward<SingleSignOnT>(value);
  }
  template <typename SingleSignOnT = SingleSignOn>
  CreateDomainResult& WithSingleSignOn(SingleSignOnT&& value) {
    SetSingleSignOn(std::forward<SingleSignOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The domain execution role that is created when an Amazon DataZone domain is
   * created. The domain execution role is created in the Amazon Web Services account
   * that houses the Amazon DataZone domain.</p>
   */
  inline const Aws::String& GetDomainExecutionRole() const { return m_domainExecutionRole; }
  template <typename DomainExecutionRoleT = Aws::String>
  void SetDomainExecutionRole(DomainExecutionRoleT&& value) {
    m_domainExecutionRoleHasBeenSet = true;
    m_domainExecutionRole = std::forward<DomainExecutionRoleT>(value);
  }
  template <typename DomainExecutionRoleT = Aws::String>
  CreateDomainResult& WithDomainExecutionRole(DomainExecutionRoleT&& value) {
    SetDomainExecutionRole(std::forward<DomainExecutionRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the Amazon DataZone domain.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  CreateDomainResult& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
   * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
   * data. </p>
   */
  inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
  template <typename KmsKeyIdentifierT = Aws::String>
  void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) {
    m_kmsKeyIdentifierHasBeenSet = true;
    m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value);
  }
  template <typename KmsKeyIdentifierT = Aws::String>
  CreateDomainResult& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) {
    SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the Amazon DataZone domain.</p>
   */
  inline DomainStatus GetStatus() const { return m_status; }
  inline void SetStatus(DomainStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CreateDomainResult& WithStatus(DomainStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The URL of the data portal for this Amazon DataZone domain.</p>
   */
  inline const Aws::String& GetPortalUrl() const { return m_portalUrl; }
  template <typename PortalUrlT = Aws::String>
  void SetPortalUrl(PortalUrlT&& value) {
    m_portalUrlHasBeenSet = true;
    m_portalUrl = std::forward<PortalUrlT>(value);
  }
  template <typename PortalUrlT = Aws::String>
  CreateDomainResult& WithPortalUrl(PortalUrlT&& value) {
    SetPortalUrl(std::forward<PortalUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags specified for the Amazon DataZone domain.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  CreateDomainResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  CreateDomainResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the domain that is created.</p>
   */
  inline DomainVersion GetDomainVersion() const { return m_domainVersion; }
  inline void SetDomainVersion(DomainVersion value) {
    m_domainVersionHasBeenSet = true;
    m_domainVersion = value;
  }
  inline CreateDomainResult& WithDomainVersion(DomainVersion value) {
    SetDomainVersion(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Te service role of the domain that is created.</p>
   */
  inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
  template <typename ServiceRoleT = Aws::String>
  void SetServiceRole(ServiceRoleT&& value) {
    m_serviceRoleHasBeenSet = true;
    m_serviceRole = std::forward<ServiceRoleT>(value);
  }
  template <typename ServiceRoleT = Aws::String>
  CreateDomainResult& WithServiceRole(ServiceRoleT&& value) {
    SetServiceRole(std::forward<ServiceRoleT>(value));
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
  CreateDomainResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_rootDomainUnitId;

  Aws::String m_name;

  Aws::String m_description;

  SingleSignOn m_singleSignOn;

  Aws::String m_domainExecutionRole;

  Aws::String m_arn;

  Aws::String m_kmsKeyIdentifier;

  DomainStatus m_status{DomainStatus::NOT_SET};

  Aws::String m_portalUrl;

  Aws::Map<Aws::String, Aws::String> m_tags;

  DomainVersion m_domainVersion{DomainVersion::NOT_SET};

  Aws::String m_serviceRole;

  Aws::String m_requestId;
  bool m_idHasBeenSet = false;
  bool m_rootDomainUnitIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_descriptionHasBeenSet = false;
  bool m_singleSignOnHasBeenSet = false;
  bool m_domainExecutionRoleHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_kmsKeyIdentifierHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_portalUrlHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_domainVersionHasBeenSet = false;
  bool m_serviceRoleHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
