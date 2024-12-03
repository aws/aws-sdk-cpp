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
    AWS_DATAZONE_API DomainSummary();
    AWS_DATAZONE_API DomainSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DomainSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DomainSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DomainSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DomainSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when a Amazon DataZone domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DomainSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DomainSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of an Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline DomainSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DomainSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DomainSummary& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain version.</p>
     */
    inline const DomainVersion& GetDomainVersion() const{ return m_domainVersion; }
    inline bool DomainVersionHasBeenSet() const { return m_domainVersionHasBeenSet; }
    inline void SetDomainVersion(const DomainVersion& value) { m_domainVersionHasBeenSet = true; m_domainVersion = value; }
    inline void SetDomainVersion(DomainVersion&& value) { m_domainVersionHasBeenSet = true; m_domainVersion = std::move(value); }
    inline DomainSummary& WithDomainVersion(const DomainVersion& value) { SetDomainVersion(value); return *this;}
    inline DomainSummary& WithDomainVersion(DomainVersion&& value) { SetDomainVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DomainSummary& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DomainSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DomainSummary& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of when a Amazon DataZone domain was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }
    inline DomainSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}
    inline DomainSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Web Services account that manages the
     * domain.</p>
     */
    inline const Aws::String& GetManagedAccountId() const{ return m_managedAccountId; }
    inline bool ManagedAccountIdHasBeenSet() const { return m_managedAccountIdHasBeenSet; }
    inline void SetManagedAccountId(const Aws::String& value) { m_managedAccountIdHasBeenSet = true; m_managedAccountId = value; }
    inline void SetManagedAccountId(Aws::String&& value) { m_managedAccountIdHasBeenSet = true; m_managedAccountId = std::move(value); }
    inline void SetManagedAccountId(const char* value) { m_managedAccountIdHasBeenSet = true; m_managedAccountId.assign(value); }
    inline DomainSummary& WithManagedAccountId(const Aws::String& value) { SetManagedAccountId(value); return *this;}
    inline DomainSummary& WithManagedAccountId(Aws::String&& value) { SetManagedAccountId(std::move(value)); return *this;}
    inline DomainSummary& WithManagedAccountId(const char* value) { SetManagedAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name of an Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DomainSummary& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DomainSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DomainSummary& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data portal URL for the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetPortalUrl() const{ return m_portalUrl; }
    inline bool PortalUrlHasBeenSet() const { return m_portalUrlHasBeenSet; }
    inline void SetPortalUrl(const Aws::String& value) { m_portalUrlHasBeenSet = true; m_portalUrl = value; }
    inline void SetPortalUrl(Aws::String&& value) { m_portalUrlHasBeenSet = true; m_portalUrl = std::move(value); }
    inline void SetPortalUrl(const char* value) { m_portalUrlHasBeenSet = true; m_portalUrl.assign(value); }
    inline DomainSummary& WithPortalUrl(const Aws::String& value) { SetPortalUrl(value); return *this;}
    inline DomainSummary& WithPortalUrl(Aws::String&& value) { SetPortalUrl(std::move(value)); return *this;}
    inline DomainSummary& WithPortalUrl(const char* value) { SetPortalUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline const DomainStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DomainStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DomainStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DomainSummary& WithStatus(const DomainStatus& value) { SetStatus(value); return *this;}
    inline DomainSummary& WithStatus(DomainStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DomainVersion m_domainVersion;
    bool m_domainVersionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet = false;

    Aws::String m_managedAccountId;
    bool m_managedAccountIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_portalUrl;
    bool m_portalUrlHasBeenSet = false;

    DomainStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
