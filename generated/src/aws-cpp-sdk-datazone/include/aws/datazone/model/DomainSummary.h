/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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


    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>A timestamp of when a Amazon DataZone domain was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>A timestamp of when a Amazon DataZone domain was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>A timestamp of when a Amazon DataZone domain was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>A timestamp of when a Amazon DataZone domain was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>A timestamp of when a Amazon DataZone domain was created.</p>
     */
    inline DomainSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>A timestamp of when a Amazon DataZone domain was created.</p>
     */
    inline DomainSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>A description of an Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of an Amazon DataZone domain.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of an Amazon DataZone domain.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of an Amazon DataZone domain.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of an Amazon DataZone domain.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of an Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of an Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of an Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>A timestamp of when a Amazon DataZone domain was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>A timestamp of when a Amazon DataZone domain was last updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>A timestamp of when a Amazon DataZone domain was last updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>A timestamp of when a Amazon DataZone domain was last updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>A timestamp of when a Amazon DataZone domain was last updated.</p>
     */
    inline DomainSummary& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>A timestamp of when a Amazon DataZone domain was last updated.</p>
     */
    inline DomainSummary& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Amazon Web Services account that manages the
     * domain.</p>
     */
    inline const Aws::String& GetManagedAccountId() const{ return m_managedAccountId; }

    /**
     * <p>The identifier of the Amazon Web Services account that manages the
     * domain.</p>
     */
    inline bool ManagedAccountIdHasBeenSet() const { return m_managedAccountIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Web Services account that manages the
     * domain.</p>
     */
    inline void SetManagedAccountId(const Aws::String& value) { m_managedAccountIdHasBeenSet = true; m_managedAccountId = value; }

    /**
     * <p>The identifier of the Amazon Web Services account that manages the
     * domain.</p>
     */
    inline void SetManagedAccountId(Aws::String&& value) { m_managedAccountIdHasBeenSet = true; m_managedAccountId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that manages the
     * domain.</p>
     */
    inline void SetManagedAccountId(const char* value) { m_managedAccountIdHasBeenSet = true; m_managedAccountId.assign(value); }

    /**
     * <p>The identifier of the Amazon Web Services account that manages the
     * domain.</p>
     */
    inline DomainSummary& WithManagedAccountId(const Aws::String& value) { SetManagedAccountId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that manages the
     * domain.</p>
     */
    inline DomainSummary& WithManagedAccountId(Aws::String&& value) { SetManagedAccountId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Web Services account that manages the
     * domain.</p>
     */
    inline DomainSummary& WithManagedAccountId(const char* value) { SetManagedAccountId(value); return *this;}


    /**
     * <p>A name of an Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name of an Amazon DataZone domain.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name of an Amazon DataZone domain.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name of an Amazon DataZone domain.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name of an Amazon DataZone domain.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name of an Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name of an Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name of an Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The data portal URL for the Amazon DataZone domain.</p>
     */
    inline const Aws::String& GetPortalUrl() const{ return m_portalUrl; }

    /**
     * <p>The data portal URL for the Amazon DataZone domain.</p>
     */
    inline bool PortalUrlHasBeenSet() const { return m_portalUrlHasBeenSet; }

    /**
     * <p>The data portal URL for the Amazon DataZone domain.</p>
     */
    inline void SetPortalUrl(const Aws::String& value) { m_portalUrlHasBeenSet = true; m_portalUrl = value; }

    /**
     * <p>The data portal URL for the Amazon DataZone domain.</p>
     */
    inline void SetPortalUrl(Aws::String&& value) { m_portalUrlHasBeenSet = true; m_portalUrl = std::move(value); }

    /**
     * <p>The data portal URL for the Amazon DataZone domain.</p>
     */
    inline void SetPortalUrl(const char* value) { m_portalUrlHasBeenSet = true; m_portalUrl.assign(value); }

    /**
     * <p>The data portal URL for the Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithPortalUrl(const Aws::String& value) { SetPortalUrl(value); return *this;}

    /**
     * <p>The data portal URL for the Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithPortalUrl(Aws::String&& value) { SetPortalUrl(std::move(value)); return *this;}

    /**
     * <p>The data portal URL for the Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithPortalUrl(const char* value) { SetPortalUrl(value); return *this;}


    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline const DomainStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline void SetStatus(const DomainStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline void SetStatus(DomainStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithStatus(const DomainStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the Amazon DataZone domain.</p>
     */
    inline DomainSummary& WithStatus(DomainStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

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
