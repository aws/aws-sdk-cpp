/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/DomainVersion.h>
#include <aws/datazone/model/SingleSignOn.h>
#include <aws/datazone/model/DomainStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace DataZone
{
namespace Model
{
  class GetDomainResult
  {
  public:
    AWS_DATAZONE_API GetDomainResult() = default;
    AWS_DATAZONE_API GetDomainResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetDomainResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the specified Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetDomainResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Amazon DataZone domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetDomainResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetDomainResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain execution role with which the Amazon DataZone domain is
     * created.</p>
     */
    inline const Aws::String& GetDomainExecutionRole() const { return m_domainExecutionRole; }
    template<typename DomainExecutionRoleT = Aws::String>
    void SetDomainExecutionRole(DomainExecutionRoleT&& value) { m_domainExecutionRoleHasBeenSet = true; m_domainExecutionRole = std::forward<DomainExecutionRoleT>(value); }
    template<typename DomainExecutionRoleT = Aws::String>
    GetDomainResult& WithDomainExecutionRole(DomainExecutionRoleT&& value) { SetDomainExecutionRole(std::forward<DomainExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the domain.</p>
     */
    inline DomainVersion GetDomainVersion() const { return m_domainVersion; }
    inline void SetDomainVersion(DomainVersion value) { m_domainVersionHasBeenSet = true; m_domainVersion = value; }
    inline GetDomainResult& WithDomainVersion(DomainVersion value) { SetDomainVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the specified Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetDomainResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services Key Management Service (KMS) key
     * that is used to encrypt the Amazon DataZone domain, metadata, and reporting
     * data. </p>
     */
    inline const Aws::String& GetKmsKeyIdentifier() const { return m_kmsKeyIdentifier; }
    template<typename KmsKeyIdentifierT = Aws::String>
    void SetKmsKeyIdentifier(KmsKeyIdentifierT&& value) { m_kmsKeyIdentifierHasBeenSet = true; m_kmsKeyIdentifier = std::forward<KmsKeyIdentifierT>(value); }
    template<typename KmsKeyIdentifierT = Aws::String>
    GetDomainResult& WithKmsKeyIdentifier(KmsKeyIdentifierT&& value) { SetKmsKeyIdentifier(std::forward<KmsKeyIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the Amazon DataZone domain was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    GetDomainResult& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetDomainResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL of the data portal for this Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetPortalUrl() const { return m_portalUrl; }
    template<typename PortalUrlT = Aws::String>
    void SetPortalUrl(PortalUrlT&& value) { m_portalUrlHasBeenSet = true; m_portalUrl = std::forward<PortalUrlT>(value); }
    template<typename PortalUrlT = Aws::String>
    GetDomainResult& WithPortalUrl(PortalUrlT&& value) { SetPortalUrl(std::forward<PortalUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the root domain in Amazon Datazone.</p>
     */
    inline const Aws::String& GetRootDomainUnitId() const { return m_rootDomainUnitId; }
    template<typename RootDomainUnitIdT = Aws::String>
    void SetRootDomainUnitId(RootDomainUnitIdT&& value) { m_rootDomainUnitIdHasBeenSet = true; m_rootDomainUnitId = std::forward<RootDomainUnitIdT>(value); }
    template<typename RootDomainUnitIdT = Aws::String>
    GetDomainResult& WithRootDomainUnitId(RootDomainUnitIdT&& value) { SetRootDomainUnitId(std::forward<RootDomainUnitIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service role of the domain.</p>
     */
    inline const Aws::String& GetServiceRole() const { return m_serviceRole; }
    template<typename ServiceRoleT = Aws::String>
    void SetServiceRole(ServiceRoleT&& value) { m_serviceRoleHasBeenSet = true; m_serviceRole = std::forward<ServiceRoleT>(value); }
    template<typename ServiceRoleT = Aws::String>
    GetDomainResult& WithServiceRole(ServiceRoleT&& value) { SetServiceRole(std::forward<ServiceRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The single sing-on option of the specified Amazon DataZone domain.</p>
     */
    inline const SingleSignOn& GetSingleSignOn() const { return m_singleSignOn; }
    template<typename SingleSignOnT = SingleSignOn>
    void SetSingleSignOn(SingleSignOnT&& value) { m_singleSignOnHasBeenSet = true; m_singleSignOn = std::forward<SingleSignOnT>(value); }
    template<typename SingleSignOnT = SingleSignOn>
    GetDomainResult& WithSingleSignOn(SingleSignOnT&& value) { SetSingleSignOn(std::forward<SingleSignOnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the specified Amazon DataZone domain.</p>
     */
    inline DomainStatus GetStatus() const { return m_status; }
    inline void SetStatus(DomainStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetDomainResult& WithStatus(DomainStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags specified for the Amazon DataZone domain.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    GetDomainResult& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    GetDomainResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetDomainResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainExecutionRole;
    bool m_domainExecutionRoleHasBeenSet = false;

    DomainVersion m_domainVersion{DomainVersion::NOT_SET};
    bool m_domainVersionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_kmsKeyIdentifier;
    bool m_kmsKeyIdentifierHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_portalUrl;
    bool m_portalUrlHasBeenSet = false;

    Aws::String m_rootDomainUnitId;
    bool m_rootDomainUnitIdHasBeenSet = false;

    Aws::String m_serviceRole;
    bool m_serviceRoleHasBeenSet = false;

    SingleSignOn m_singleSignOn;
    bool m_singleSignOnHasBeenSet = false;

    DomainStatus m_status{DomainStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
