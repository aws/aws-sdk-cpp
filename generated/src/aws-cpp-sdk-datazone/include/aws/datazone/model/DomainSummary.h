/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/DomainVersion.h>
#include <aws/datazone/model/DomainStatus.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{

  /**
   * <p>A summary of a Amazon DataZone domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DomainSummary">AWS
   * API Reference</a></p>
   */
  class DomainSummary
  {
  public:
    AWS_DATAZONE_API DomainSummary() = default;
    AWS_DATAZONE_API DomainSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DomainSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DomainSummary& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when a Amazon DataZone domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DomainSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of an Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DomainSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain version.</p>
     */
    inline DomainVersion GetDomainVersion() const { return m_domainVersion; }
    inline bool DomainVersionHasBeenSet() const { return m_domainVersionHasBeenSet; }
    inline void SetDomainVersion(DomainVersion value) { m_domainVersionHasBeenSet = true; m_domainVersion = value; }
    inline DomainSummary& WithDomainVersion(DomainVersion value) { SetDomainVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DomainSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when a Amazon DataZone domain was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const { return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    void SetLastUpdatedAt(LastUpdatedAtT&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::forward<LastUpdatedAtT>(value); }
    template<typename LastUpdatedAtT = Aws::Utils::DateTime>
    DomainSummary& WithLastUpdatedAt(LastUpdatedAtT&& value) { SetLastUpdatedAt(std::forward<LastUpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account that manages the
     * domain.</p>
     */
    inline const Aws::String& GetManagedAccountId() const { return m_managedAccountId; }
    inline bool ManagedAccountIdHasBeenSet() const { return m_managedAccountIdHasBeenSet; }
    template<typename ManagedAccountIdT = Aws::String>
    void SetManagedAccountId(ManagedAccountIdT&& value) { m_managedAccountIdHasBeenSet = true; m_managedAccountId = std::forward<ManagedAccountIdT>(value); }
    template<typename ManagedAccountIdT = Aws::String>
    DomainSummary& WithManagedAccountId(ManagedAccountIdT&& value) { SetManagedAccountId(std::forward<ManagedAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name of an Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DomainSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data portal URL for the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetPortalUrl() const { return m_portalUrl; }
    inline bool PortalUrlHasBeenSet() const { return m_portalUrlHasBeenSet; }
    template<typename PortalUrlT = Aws::String>
    void SetPortalUrl(PortalUrlT&& value) { m_portalUrlHasBeenSet = true; m_portalUrl = std::forward<PortalUrlT>(value); }
    template<typename PortalUrlT = Aws::String>
    DomainSummary& WithPortalUrl(PortalUrlT&& value) { SetPortalUrl(std::forward<PortalUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline DomainStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DomainStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DomainSummary& WithStatus(DomainStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DomainVersion m_domainVersion{DomainVersion::NOT_SET};
    bool m_domainVersionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt{};
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_managedAccountId;
    bool m_managedAccountIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_portalUrl;
    bool m_portalUrlHasBeenSet = false;

    DomainStatus m_status{DomainStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
