/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudfront/CloudFront_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudfront/model/Customizations.h>
#include <aws/core/utils/DateTime.h>
#include <aws/cloudfront/model/DomainResult.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudFront
{
namespace Model
{

  /**
   * <p>A summary of the information about a distribution tenant.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudfront-2020-05-31/DistributionTenantSummary">AWS
   * API Reference</a></p>
   */
  class DistributionTenantSummary
  {
  public:
    AWS_CLOUDFRONT_API DistributionTenantSummary() = default;
    AWS_CLOUDFRONT_API DistributionTenantSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFRONT_API DistributionTenantSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFRONT_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;


    ///@{
    /**
     * <p>The ID of the distribution tenant.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DistributionTenantSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the multi-tenant distribution. For example:
     * <code>EDFDVBD632BHDS5</code>.</p>
     */
    inline const Aws::String& GetDistributionId() const { return m_distributionId; }
    inline bool DistributionIdHasBeenSet() const { return m_distributionIdHasBeenSet; }
    template<typename DistributionIdT = Aws::String>
    void SetDistributionId(DistributionIdT&& value) { m_distributionIdHasBeenSet = true; m_distributionId = std::forward<DistributionIdT>(value); }
    template<typename DistributionIdT = Aws::String>
    DistributionTenantSummary& WithDistributionId(DistributionIdT&& value) { SetDistributionId(std::forward<DistributionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the distribution tenant.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DistributionTenantSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the distribution tenant.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DistributionTenantSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domains associated with the distribution tenant.</p>
     */
    inline const Aws::Vector<DomainResult>& GetDomains() const { return m_domains; }
    inline bool DomainsHasBeenSet() const { return m_domainsHasBeenSet; }
    template<typename DomainsT = Aws::Vector<DomainResult>>
    void SetDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains = std::forward<DomainsT>(value); }
    template<typename DomainsT = Aws::Vector<DomainResult>>
    DistributionTenantSummary& WithDomains(DomainsT&& value) { SetDomains(std::forward<DomainsT>(value)); return *this;}
    template<typename DomainsT = DomainResult>
    DistributionTenantSummary& AddDomains(DomainsT&& value) { m_domainsHasBeenSet = true; m_domains.emplace_back(std::forward<DomainsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the connection group ID for the distribution tenant. If you don't
     * specify a connection group, CloudFront uses the default connection group.</p>
     */
    inline const Aws::String& GetConnectionGroupId() const { return m_connectionGroupId; }
    inline bool ConnectionGroupIdHasBeenSet() const { return m_connectionGroupIdHasBeenSet; }
    template<typename ConnectionGroupIdT = Aws::String>
    void SetConnectionGroupId(ConnectionGroupIdT&& value) { m_connectionGroupIdHasBeenSet = true; m_connectionGroupId = std::forward<ConnectionGroupIdT>(value); }
    template<typename ConnectionGroupIdT = Aws::String>
    DistributionTenantSummary& WithConnectionGroupId(ConnectionGroupIdT&& value) { SetConnectionGroupId(std::forward<ConnectionGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Customizations for the distribution tenant. For each distribution tenant, you
     * can specify the geographic restrictions, and the Amazon Resource Names (ARNs)
     * for the ACM certificate and WAF web ACL. These are specific values that you can
     * override or disable from the multi-tenant distribution that was used to create
     * the distribution tenant.</p>
     */
    inline const Customizations& GetCustomizations() const { return m_customizations; }
    inline bool CustomizationsHasBeenSet() const { return m_customizationsHasBeenSet; }
    template<typename CustomizationsT = Customizations>
    void SetCustomizations(CustomizationsT&& value) { m_customizationsHasBeenSet = true; m_customizations = std::forward<CustomizationsT>(value); }
    template<typename CustomizationsT = Customizations>
    DistributionTenantSummary& WithCustomizations(CustomizationsT&& value) { SetCustomizations(std::forward<CustomizationsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the distribution tenant was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DistributionTenantSummary& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the distribution tenant was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DistributionTenantSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current version of the distribution tenant.</p>
     */
    inline const Aws::String& GetETag() const { return m_eTag; }
    inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
    template<typename ETagT = Aws::String>
    void SetETag(ETagT&& value) { m_eTagHasBeenSet = true; m_eTag = std::forward<ETagT>(value); }
    template<typename ETagT = Aws::String>
    DistributionTenantSummary& WithETag(ETagT&& value) { SetETag(std::forward<ETagT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the distribution tenants are in an enabled state. If
     * disabled, the distribution tenant won't service traffic.</p>
     */
    inline bool GetEnabled() const { return m_enabled; }
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }
    inline DistributionTenantSummary& WithEnabled(bool value) { SetEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the distribution tenant.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DistributionTenantSummary& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_distributionId;
    bool m_distributionIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<DomainResult> m_domains;
    bool m_domainsHasBeenSet = false;

    Aws::String m_connectionGroupId;
    bool m_connectionGroupIdHasBeenSet = false;

    Customizations m_customizations;
    bool m_customizationsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_eTag;
    bool m_eTagHasBeenSet = false;

    bool m_enabled{false};
    bool m_enabledHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFront
} // namespace Aws
