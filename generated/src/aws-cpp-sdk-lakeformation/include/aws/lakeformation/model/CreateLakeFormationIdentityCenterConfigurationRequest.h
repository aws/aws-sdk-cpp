/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/ExternalFilteringConfiguration.h>
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
    AWS_LAKEFORMATION_API CreateLakeFormationIdentityCenterConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLakeFormationIdentityCenterConfiguration"; }

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
    inline CreateLakeFormationIdentityCenterConfigurationRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, view definitions, and other control information to manage
     * your Lake Formation environment.</p>
     */
    inline CreateLakeFormationIdentityCenterConfigurationRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, view definitions, and other control information to manage
     * your Lake Formation environment.</p>
     */
    inline CreateLakeFormationIdentityCenterConfigurationRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The ARN of the IAM Identity Center instance for which the operation will be
     * executed. For more information about ARNs, see Amazon Resource Names (ARNs) and
     * Amazon Web Services Service Namespaces in the Amazon Web Services General
     * Reference.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The ARN of the IAM Identity Center instance for which the operation will be
     * executed. For more information about ARNs, see Amazon Resource Names (ARNs) and
     * Amazon Web Services Service Namespaces in the Amazon Web Services General
     * Reference.</p>
     */
    inline bool InstanceArnHasBeenSet() const { return m_instanceArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM Identity Center instance for which the operation will be
     * executed. For more information about ARNs, see Amazon Resource Names (ARNs) and
     * Amazon Web Services Service Namespaces in the Amazon Web Services General
     * Reference.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArnHasBeenSet = true; m_instanceArn = value; }

    /**
     * <p>The ARN of the IAM Identity Center instance for which the operation will be
     * executed. For more information about ARNs, see Amazon Resource Names (ARNs) and
     * Amazon Web Services Service Namespaces in the Amazon Web Services General
     * Reference.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::move(value); }

    /**
     * <p>The ARN of the IAM Identity Center instance for which the operation will be
     * executed. For more information about ARNs, see Amazon Resource Names (ARNs) and
     * Amazon Web Services Service Namespaces in the Amazon Web Services General
     * Reference.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArnHasBeenSet = true; m_instanceArn.assign(value); }

    /**
     * <p>The ARN of the IAM Identity Center instance for which the operation will be
     * executed. For more information about ARNs, see Amazon Resource Names (ARNs) and
     * Amazon Web Services Service Namespaces in the Amazon Web Services General
     * Reference.</p>
     */
    inline CreateLakeFormationIdentityCenterConfigurationRequest& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The ARN of the IAM Identity Center instance for which the operation will be
     * executed. For more information about ARNs, see Amazon Resource Names (ARNs) and
     * Amazon Web Services Service Namespaces in the Amazon Web Services General
     * Reference.</p>
     */
    inline CreateLakeFormationIdentityCenterConfigurationRequest& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM Identity Center instance for which the operation will be
     * executed. For more information about ARNs, see Amazon Resource Names (ARNs) and
     * Amazon Web Services Service Namespaces in the Amazon Web Services General
     * Reference.</p>
     */
    inline CreateLakeFormationIdentityCenterConfigurationRequest& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


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
    inline CreateLakeFormationIdentityCenterConfigurationRequest& WithExternalFiltering(const ExternalFilteringConfiguration& value) { SetExternalFiltering(value); return *this;}

    /**
     * <p>A list of the account IDs of Amazon Web Services accounts of third-party
     * applications that are allowed to access data managed by Lake Formation.</p>
     */
    inline CreateLakeFormationIdentityCenterConfigurationRequest& WithExternalFiltering(ExternalFilteringConfiguration&& value) { SetExternalFiltering(std::move(value)); return *this;}

  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    ExternalFilteringConfiguration m_externalFiltering;
    bool m_externalFilteringHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
