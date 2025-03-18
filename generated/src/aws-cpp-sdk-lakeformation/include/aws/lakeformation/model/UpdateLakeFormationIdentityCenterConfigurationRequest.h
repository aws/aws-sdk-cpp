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
    AWS_LAKEFORMATION_API UpdateLakeFormationIdentityCenterConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLakeFormationIdentityCenterConfiguration"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, view definitions, and other control information to manage
     * your Lake Formation environment.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    UpdateLakeFormationIdentityCenterConfigurationRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
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
    inline const Aws::Vector<DataLakePrincipal>& GetShareRecipients() const { return m_shareRecipients; }
    inline bool ShareRecipientsHasBeenSet() const { return m_shareRecipientsHasBeenSet; }
    template<typename ShareRecipientsT = Aws::Vector<DataLakePrincipal>>
    void SetShareRecipients(ShareRecipientsT&& value) { m_shareRecipientsHasBeenSet = true; m_shareRecipients = std::forward<ShareRecipientsT>(value); }
    template<typename ShareRecipientsT = Aws::Vector<DataLakePrincipal>>
    UpdateLakeFormationIdentityCenterConfigurationRequest& WithShareRecipients(ShareRecipientsT&& value) { SetShareRecipients(std::forward<ShareRecipientsT>(value)); return *this;}
    template<typename ShareRecipientsT = DataLakePrincipal>
    UpdateLakeFormationIdentityCenterConfigurationRequest& AddShareRecipients(ShareRecipientsT&& value) { m_shareRecipientsHasBeenSet = true; m_shareRecipients.emplace_back(std::forward<ShareRecipientsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Allows to enable or disable the IAM Identity Center connection.</p>
     */
    inline ApplicationStatus GetApplicationStatus() const { return m_applicationStatus; }
    inline bool ApplicationStatusHasBeenSet() const { return m_applicationStatusHasBeenSet; }
    inline void SetApplicationStatus(ApplicationStatus value) { m_applicationStatusHasBeenSet = true; m_applicationStatus = value; }
    inline UpdateLakeFormationIdentityCenterConfigurationRequest& WithApplicationStatus(ApplicationStatus value) { SetApplicationStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of the account IDs of Amazon Web Services accounts of third-party
     * applications that are allowed to access data managed by Lake Formation.</p>
     */
    inline const ExternalFilteringConfiguration& GetExternalFiltering() const { return m_externalFiltering; }
    inline bool ExternalFilteringHasBeenSet() const { return m_externalFilteringHasBeenSet; }
    template<typename ExternalFilteringT = ExternalFilteringConfiguration>
    void SetExternalFiltering(ExternalFilteringT&& value) { m_externalFilteringHasBeenSet = true; m_externalFiltering = std::forward<ExternalFilteringT>(value); }
    template<typename ExternalFilteringT = ExternalFilteringConfiguration>
    UpdateLakeFormationIdentityCenterConfigurationRequest& WithExternalFiltering(ExternalFilteringT&& value) { SetExternalFiltering(std::forward<ExternalFilteringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::Vector<DataLakePrincipal> m_shareRecipients;
    bool m_shareRecipientsHasBeenSet = false;

    ApplicationStatus m_applicationStatus{ApplicationStatus::NOT_SET};
    bool m_applicationStatusHasBeenSet = false;

    ExternalFilteringConfiguration m_externalFiltering;
    bool m_externalFilteringHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
