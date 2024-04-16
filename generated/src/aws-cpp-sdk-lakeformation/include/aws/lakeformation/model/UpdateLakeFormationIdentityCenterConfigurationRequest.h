/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/ApplicationStatus.h>
#include <aws/lakeformation/model/ExternalFilteringConfiguration.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class UpdateLakeFormationIdentityCenterConfigurationRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API UpdateLakeFormationIdentityCenterConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLakeFormationIdentityCenterConfiguration"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, view definitions, and other control information to manage
     * your Lake Formation environment.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, view definitions, and other control information to manage
     * your Lake Formation environment.</p>
     */
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, view definitions, and other control information to manage
     * your Lake Formation environment.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, view definitions, and other control information to manage
     * your Lake Formation environment.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, view definitions, and other control information to manage
     * your Lake Formation environment.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, view definitions, and other control information to manage
     * your Lake Formation environment.</p>
     */
    inline UpdateLakeFormationIdentityCenterConfigurationRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, view definitions, and other control information to manage
     * your Lake Formation environment.</p>
     */
    inline UpdateLakeFormationIdentityCenterConfigurationRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, view definitions, and other control information to manage
     * your Lake Formation environment.</p>
     */
    inline UpdateLakeFormationIdentityCenterConfigurationRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>A list of Amazon Web Services account IDs or Amazon Web Services
     * organization/organizational unit ARNs that are allowed to access to access data
     * managed by Lake Formation. </p> <p>If the <code>ShareRecipients</code> list
     * includes valid values, then the resource share is updated with the principals
     * you want to have access to the resources.</p> <p>If the
     * <code>ShareRecipients</code> value is null, both the list of share recipients
     * and the resource share remain unchanged.</p> <p>If the
     * <code>ShareRecipients</code> value is an empty list, then the existing share
     * recipients list will be cleared, and the resource share will be deleted.</p>
     */
    inline const Aws::Vector<DataLakePrincipal>& GetShareRecipients() const{ return m_shareRecipients; }

    /**
     * <p>A list of Amazon Web Services account IDs or Amazon Web Services
     * organization/organizational unit ARNs that are allowed to access to access data
     * managed by Lake Formation. </p> <p>If the <code>ShareRecipients</code> list
     * includes valid values, then the resource share is updated with the principals
     * you want to have access to the resources.</p> <p>If the
     * <code>ShareRecipients</code> value is null, both the list of share recipients
     * and the resource share remain unchanged.</p> <p>If the
     * <code>ShareRecipients</code> value is an empty list, then the existing share
     * recipients list will be cleared, and the resource share will be deleted.</p>
     */
    inline bool ShareRecipientsHasBeenSet() const { return m_shareRecipientsHasBeenSet; }

    /**
     * <p>A list of Amazon Web Services account IDs or Amazon Web Services
     * organization/organizational unit ARNs that are allowed to access to access data
     * managed by Lake Formation. </p> <p>If the <code>ShareRecipients</code> list
     * includes valid values, then the resource share is updated with the principals
     * you want to have access to the resources.</p> <p>If the
     * <code>ShareRecipients</code> value is null, both the list of share recipients
     * and the resource share remain unchanged.</p> <p>If the
     * <code>ShareRecipients</code> value is an empty list, then the existing share
     * recipients list will be cleared, and the resource share will be deleted.</p>
     */
    inline void SetShareRecipients(const Aws::Vector<DataLakePrincipal>& value) { m_shareRecipientsHasBeenSet = true; m_shareRecipients = value; }

    /**
     * <p>A list of Amazon Web Services account IDs or Amazon Web Services
     * organization/organizational unit ARNs that are allowed to access to access data
     * managed by Lake Formation. </p> <p>If the <code>ShareRecipients</code> list
     * includes valid values, then the resource share is updated with the principals
     * you want to have access to the resources.</p> <p>If the
     * <code>ShareRecipients</code> value is null, both the list of share recipients
     * and the resource share remain unchanged.</p> <p>If the
     * <code>ShareRecipients</code> value is an empty list, then the existing share
     * recipients list will be cleared, and the resource share will be deleted.</p>
     */
    inline void SetShareRecipients(Aws::Vector<DataLakePrincipal>&& value) { m_shareRecipientsHasBeenSet = true; m_shareRecipients = std::move(value); }

    /**
     * <p>A list of Amazon Web Services account IDs or Amazon Web Services
     * organization/organizational unit ARNs that are allowed to access to access data
     * managed by Lake Formation. </p> <p>If the <code>ShareRecipients</code> list
     * includes valid values, then the resource share is updated with the principals
     * you want to have access to the resources.</p> <p>If the
     * <code>ShareRecipients</code> value is null, both the list of share recipients
     * and the resource share remain unchanged.</p> <p>If the
     * <code>ShareRecipients</code> value is an empty list, then the existing share
     * recipients list will be cleared, and the resource share will be deleted.</p>
     */
    inline UpdateLakeFormationIdentityCenterConfigurationRequest& WithShareRecipients(const Aws::Vector<DataLakePrincipal>& value) { SetShareRecipients(value); return *this;}

    /**
     * <p>A list of Amazon Web Services account IDs or Amazon Web Services
     * organization/organizational unit ARNs that are allowed to access to access data
     * managed by Lake Formation. </p> <p>If the <code>ShareRecipients</code> list
     * includes valid values, then the resource share is updated with the principals
     * you want to have access to the resources.</p> <p>If the
     * <code>ShareRecipients</code> value is null, both the list of share recipients
     * and the resource share remain unchanged.</p> <p>If the
     * <code>ShareRecipients</code> value is an empty list, then the existing share
     * recipients list will be cleared, and the resource share will be deleted.</p>
     */
    inline UpdateLakeFormationIdentityCenterConfigurationRequest& WithShareRecipients(Aws::Vector<DataLakePrincipal>&& value) { SetShareRecipients(std::move(value)); return *this;}

    /**
     * <p>A list of Amazon Web Services account IDs or Amazon Web Services
     * organization/organizational unit ARNs that are allowed to access to access data
     * managed by Lake Formation. </p> <p>If the <code>ShareRecipients</code> list
     * includes valid values, then the resource share is updated with the principals
     * you want to have access to the resources.</p> <p>If the
     * <code>ShareRecipients</code> value is null, both the list of share recipients
     * and the resource share remain unchanged.</p> <p>If the
     * <code>ShareRecipients</code> value is an empty list, then the existing share
     * recipients list will be cleared, and the resource share will be deleted.</p>
     */
    inline UpdateLakeFormationIdentityCenterConfigurationRequest& AddShareRecipients(const DataLakePrincipal& value) { m_shareRecipientsHasBeenSet = true; m_shareRecipients.push_back(value); return *this; }

    /**
     * <p>A list of Amazon Web Services account IDs or Amazon Web Services
     * organization/organizational unit ARNs that are allowed to access to access data
     * managed by Lake Formation. </p> <p>If the <code>ShareRecipients</code> list
     * includes valid values, then the resource share is updated with the principals
     * you want to have access to the resources.</p> <p>If the
     * <code>ShareRecipients</code> value is null, both the list of share recipients
     * and the resource share remain unchanged.</p> <p>If the
     * <code>ShareRecipients</code> value is an empty list, then the existing share
     * recipients list will be cleared, and the resource share will be deleted.</p>
     */
    inline UpdateLakeFormationIdentityCenterConfigurationRequest& AddShareRecipients(DataLakePrincipal&& value) { m_shareRecipientsHasBeenSet = true; m_shareRecipients.push_back(std::move(value)); return *this; }


    /**
     * <p>Allows to enable or disable the IAM Identity Center connection.</p>
     */
    inline const ApplicationStatus& GetApplicationStatus() const{ return m_applicationStatus; }

    /**
     * <p>Allows to enable or disable the IAM Identity Center connection.</p>
     */
    inline bool ApplicationStatusHasBeenSet() const { return m_applicationStatusHasBeenSet; }

    /**
     * <p>Allows to enable or disable the IAM Identity Center connection.</p>
     */
    inline void SetApplicationStatus(const ApplicationStatus& value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = value; }

    /**
     * <p>Allows to enable or disable the IAM Identity Center connection.</p>
     */
    inline void SetApplicationStatus(ApplicationStatus&& value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = std::move(value); }

    /**
     * <p>Allows to enable or disable the IAM Identity Center connection.</p>
     */
    inline UpdateLakeFormationIdentityCenterConfigurationRequest& WithApplicationStatus(const ApplicationStatus& value) { SetApplicationStatus(value); return *this;}

    /**
     * <p>Allows to enable or disable the IAM Identity Center connection.</p>
     */
    inline UpdateLakeFormationIdentityCenterConfigurationRequest& WithApplicationStatus(ApplicationStatus&& value) { SetApplicationStatus(std::move(value)); return *this;}


    /**
     * <p>A list of the account IDs of Amazon Web Services accounts of third-party
     * applications that are allowed to access data managed by Lake Formation.</p>
     */
    inline const ExternalFilteringConfiguration& GetExternalFiltering() const{ return m_externalFiltering; }

    /**
     * <p>A list of the account IDs of Amazon Web Services accounts of third-party
     * applications that are allowed to access data managed by Lake Formation.</p>
     */
    inline bool ExternalFilteringHasBeenSet() const { return m_externalFilteringHasBeenSet; }

    /**
     * <p>A list of the account IDs of Amazon Web Services accounts of third-party
     * applications that are allowed to access data managed by Lake Formation.</p>
     */
    inline void SetExternalFiltering(const ExternalFilteringConfiguration& value) { m_externalFilteringHasBeenSet = true; m_externalFiltering = value; }

    /**
     * <p>A list of the account IDs of Amazon Web Services accounts of third-party
     * applications that are allowed to access data managed by Lake Formation.</p>
     */
    inline void SetExternalFiltering(ExternalFilteringConfiguration&& value) { m_externalFilteringHasBeenSet = true; m_externalFiltering = std::move(value); }

    /**
     * <p>A list of the account IDs of Amazon Web Services accounts of third-party
     * applications that are allowed to access data managed by Lake Formation.</p>
     */
    inline UpdateLakeFormationIdentityCenterConfigurationRequest& WithExternalFiltering(const ExternalFilteringConfiguration& value) { SetExternalFiltering(value); return *this;}

    /**
     * <p>A list of the account IDs of Amazon Web Services accounts of third-party
     * applications that are allowed to access data managed by Lake Formation.</p>
     */
    inline UpdateLakeFormationIdentityCenterConfigurationRequest& WithExternalFiltering(ExternalFilteringConfiguration&& value) { SetExternalFiltering(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::Vector<DataLakePrincipal> m_shareRecipients;
    bool m_shareRecipientsHasBeenSet = false;

    ApplicationStatus m_applicationStatus;
    bool m_applicationStatusHasBeenSet = false;

    ExternalFilteringConfiguration m_externalFiltering;
    bool m_externalFilteringHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
