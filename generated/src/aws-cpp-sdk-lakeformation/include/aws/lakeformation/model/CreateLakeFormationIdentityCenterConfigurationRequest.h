/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/ExternalFilteringConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateLakeFormationIdentityCenterConfigurationRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API CreateLakeFormationIdentityCenterConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLakeFormationIdentityCenterConfiguration"; }

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
    CreateLakeFormationIdentityCenterConfigurationRequest& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the IAM Identity Center instance for which the operation will be
     * executed. For more information about ARNs, see Amazon Resource Names (ARNs) and
     * Amazon Web Services Service Namespaces in the Amazon Web Services General
     * Reference.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    CreateLakeFormationIdentityCenterConfigurationRequest& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
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
    CreateLakeFormationIdentityCenterConfigurationRequest& WithExternalFiltering(ExternalFilteringT&& value) { SetExternalFiltering(std::forward<ExternalFilteringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services account IDs and/or Amazon Web Services
     * organization/organizational unit ARNs that are allowed to access data managed by
     * Lake Formation. </p> <p>If the <code>ShareRecipients</code> list includes valid
     * values, a resource share is created with the principals you want to have access
     * to the resources.</p> <p>If the <code>ShareRecipients</code> value is null or
     * the list is empty, no resource share is created.</p>
     */
    inline const Aws::Vector<DataLakePrincipal>& GetShareRecipients() const { return m_shareRecipients; }
    inline bool ShareRecipientsHasBeenSet() const { return m_shareRecipientsHasBeenSet; }
    template<typename ShareRecipientsT = Aws::Vector<DataLakePrincipal>>
    void SetShareRecipients(ShareRecipientsT&& value) { m_shareRecipientsHasBeenSet = true; m_shareRecipients = std::forward<ShareRecipientsT>(value); }
    template<typename ShareRecipientsT = Aws::Vector<DataLakePrincipal>>
    CreateLakeFormationIdentityCenterConfigurationRequest& WithShareRecipients(ShareRecipientsT&& value) { SetShareRecipients(std::forward<ShareRecipientsT>(value)); return *this;}
    template<typename ShareRecipientsT = DataLakePrincipal>
    CreateLakeFormationIdentityCenterConfigurationRequest& AddShareRecipients(ShareRecipientsT&& value) { m_shareRecipientsHasBeenSet = true; m_shareRecipients.emplace_back(std::forward<ShareRecipientsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    ExternalFilteringConfiguration m_externalFiltering;
    bool m_externalFilteringHasBeenSet = false;

    Aws::Vector<DataLakePrincipal> m_shareRecipients;
    bool m_shareRecipientsHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
