/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/ExternalFilteringConfiguration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
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
namespace LakeFormation
{
namespace Model
{
  class DescribeLakeFormationIdentityCenterConfigurationResult
  {
  public:
    AWS_LAKEFORMATION_API DescribeLakeFormationIdentityCenterConfigurationResult() = default;
    AWS_LAKEFORMATION_API DescribeLakeFormationIdentityCenterConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API DescribeLakeFormationIdentityCenterConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment.</p>
     */
    inline const Aws::String& GetCatalogId() const { return m_catalogId; }
    template<typename CatalogIdT = Aws::String>
    void SetCatalogId(CatalogIdT&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::forward<CatalogIdT>(value); }
    template<typename CatalogIdT = Aws::String>
    DescribeLakeFormationIdentityCenterConfigurationResult& WithCatalogId(CatalogIdT&& value) { SetCatalogId(std::forward<CatalogIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline const Aws::String& GetInstanceArn() const { return m_instanceArn; }
    template<typename InstanceArnT = Aws::String>
    void SetInstanceArn(InstanceArnT&& value) { m_instanceArnHasBeenSet = true; m_instanceArn = std::forward<InstanceArnT>(value); }
    template<typename InstanceArnT = Aws::String>
    DescribeLakeFormationIdentityCenterConfigurationResult& WithInstanceArn(InstanceArnT&& value) { SetInstanceArn(std::forward<InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lake Formation application integrated
     * with IAM Identity Center.</p>
     */
    inline const Aws::String& GetApplicationArn() const { return m_applicationArn; }
    template<typename ApplicationArnT = Aws::String>
    void SetApplicationArn(ApplicationArnT&& value) { m_applicationArnHasBeenSet = true; m_applicationArn = std::forward<ApplicationArnT>(value); }
    template<typename ApplicationArnT = Aws::String>
    DescribeLakeFormationIdentityCenterConfigurationResult& WithApplicationArn(ApplicationArnT&& value) { SetApplicationArn(std::forward<ApplicationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if external filtering is enabled.</p>
     */
    inline const ExternalFilteringConfiguration& GetExternalFiltering() const { return m_externalFiltering; }
    template<typename ExternalFilteringT = ExternalFilteringConfiguration>
    void SetExternalFiltering(ExternalFilteringT&& value) { m_externalFilteringHasBeenSet = true; m_externalFiltering = std::forward<ExternalFilteringT>(value); }
    template<typename ExternalFilteringT = ExternalFilteringConfiguration>
    DescribeLakeFormationIdentityCenterConfigurationResult& WithExternalFiltering(ExternalFilteringT&& value) { SetExternalFiltering(std::forward<ExternalFilteringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Amazon Web Services account IDs or Amazon Web Services
     * organization/organizational unit ARNs that are allowed to access data managed by
     * Lake Formation. </p> <p>If the <code>ShareRecipients</code> list includes valid
     * values, a resource share is created with the principals you want to have access
     * to the resources as the <code>ShareRecipients</code>.</p> <p>If the
     * <code>ShareRecipients</code> value is null or the list is empty, no resource
     * share is created.</p>
     */
    inline const Aws::Vector<DataLakePrincipal>& GetShareRecipients() const { return m_shareRecipients; }
    template<typename ShareRecipientsT = Aws::Vector<DataLakePrincipal>>
    void SetShareRecipients(ShareRecipientsT&& value) { m_shareRecipientsHasBeenSet = true; m_shareRecipients = std::forward<ShareRecipientsT>(value); }
    template<typename ShareRecipientsT = Aws::Vector<DataLakePrincipal>>
    DescribeLakeFormationIdentityCenterConfigurationResult& WithShareRecipients(ShareRecipientsT&& value) { SetShareRecipients(std::forward<ShareRecipientsT>(value)); return *this;}
    template<typename ShareRecipientsT = DataLakePrincipal>
    DescribeLakeFormationIdentityCenterConfigurationResult& AddShareRecipients(ShareRecipientsT&& value) { m_shareRecipientsHasBeenSet = true; m_shareRecipients.emplace_back(std::forward<ShareRecipientsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the RAM share.</p>
     */
    inline const Aws::String& GetResourceShare() const { return m_resourceShare; }
    template<typename ResourceShareT = Aws::String>
    void SetResourceShare(ResourceShareT&& value) { m_resourceShareHasBeenSet = true; m_resourceShare = std::forward<ResourceShareT>(value); }
    template<typename ResourceShareT = Aws::String>
    DescribeLakeFormationIdentityCenterConfigurationResult& WithResourceShare(ResourceShareT&& value) { SetResourceShare(std::forward<ResourceShareT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeLakeFormationIdentityCenterConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    Aws::String m_instanceArn;
    bool m_instanceArnHasBeenSet = false;

    Aws::String m_applicationArn;
    bool m_applicationArnHasBeenSet = false;

    ExternalFilteringConfiguration m_externalFiltering;
    bool m_externalFilteringHasBeenSet = false;

    Aws::Vector<DataLakePrincipal> m_shareRecipients;
    bool m_shareRecipientsHasBeenSet = false;

    Aws::String m_resourceShare;
    bool m_resourceShareHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
