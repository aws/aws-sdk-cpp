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
    AWS_LAKEFORMATION_API DescribeLakeFormationIdentityCenterConfigurationResult();
    AWS_LAKEFORMATION_API DescribeLakeFormationIdentityCenterConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAKEFORMATION_API DescribeLakeFormationIdentityCenterConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogId.assign(value); }
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArn = value; }
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArn = std::move(value); }
    inline void SetInstanceArn(const char* value) { m_instanceArn.assign(value); }
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Lake Formation application integrated
     * with IAM Identity Center.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if external filtering is enabled.</p>
     */
    inline const ExternalFilteringConfiguration& GetExternalFiltering() const{ return m_externalFiltering; }
    inline void SetExternalFiltering(const ExternalFilteringConfiguration& value) { m_externalFiltering = value; }
    inline void SetExternalFiltering(ExternalFilteringConfiguration&& value) { m_externalFiltering = std::move(value); }
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithExternalFiltering(const ExternalFilteringConfiguration& value) { SetExternalFiltering(value); return *this;}
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithExternalFiltering(ExternalFilteringConfiguration&& value) { SetExternalFiltering(std::move(value)); return *this;}
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
    inline const Aws::Vector<DataLakePrincipal>& GetShareRecipients() const{ return m_shareRecipients; }
    inline void SetShareRecipients(const Aws::Vector<DataLakePrincipal>& value) { m_shareRecipients = value; }
    inline void SetShareRecipients(Aws::Vector<DataLakePrincipal>&& value) { m_shareRecipients = std::move(value); }
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithShareRecipients(const Aws::Vector<DataLakePrincipal>& value) { SetShareRecipients(value); return *this;}
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithShareRecipients(Aws::Vector<DataLakePrincipal>&& value) { SetShareRecipients(std::move(value)); return *this;}
    inline DescribeLakeFormationIdentityCenterConfigurationResult& AddShareRecipients(const DataLakePrincipal& value) { m_shareRecipients.push_back(value); return *this; }
    inline DescribeLakeFormationIdentityCenterConfigurationResult& AddShareRecipients(DataLakePrincipal&& value) { m_shareRecipients.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the RAM share.</p>
     */
    inline const Aws::String& GetResourceShare() const{ return m_resourceShare; }
    inline void SetResourceShare(const Aws::String& value) { m_resourceShare = value; }
    inline void SetResourceShare(Aws::String&& value) { m_resourceShare = std::move(value); }
    inline void SetResourceShare(const char* value) { m_resourceShare.assign(value); }
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithResourceShare(const Aws::String& value) { SetResourceShare(value); return *this;}
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithResourceShare(Aws::String&& value) { SetResourceShare(std::move(value)); return *this;}
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithResourceShare(const char* value) { SetResourceShare(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;

    Aws::String m_instanceArn;

    Aws::String m_applicationArn;

    ExternalFilteringConfiguration m_externalFiltering;

    Aws::Vector<DataLakePrincipal> m_shareRecipients;

    Aws::String m_resourceShare;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
