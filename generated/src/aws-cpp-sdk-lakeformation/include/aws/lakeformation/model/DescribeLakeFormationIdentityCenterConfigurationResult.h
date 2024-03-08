/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/ExternalFilteringConfiguration.h>
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


    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment.</p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment.</p>
     */
    inline void SetCatalogId(const Aws::String& value) { m_catalogId = value; }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment.</p>
     */
    inline void SetCatalogId(Aws::String&& value) { m_catalogId = std::move(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment.</p>
     */
    inline void SetCatalogId(const char* value) { m_catalogId.assign(value); }

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment.</p>
     */
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment.</p>
     */
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment.</p>
     */
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline const Aws::String& GetInstanceArn() const{ return m_instanceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline void SetInstanceArn(const Aws::String& value) { m_instanceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline void SetInstanceArn(Aws::String&& value) { m_instanceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline void SetInstanceArn(const char* value) { m_instanceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithInstanceArn(const Aws::String& value) { SetInstanceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithInstanceArn(Aws::String&& value) { SetInstanceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the connection.</p>
     */
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithInstanceArn(const char* value) { SetInstanceArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the integrated application.</p>
     */
    inline const Aws::String& GetApplicationArn() const{ return m_applicationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the integrated application.</p>
     */
    inline void SetApplicationArn(const Aws::String& value) { m_applicationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the integrated application.</p>
     */
    inline void SetApplicationArn(Aws::String&& value) { m_applicationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the integrated application.</p>
     */
    inline void SetApplicationArn(const char* value) { m_applicationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the integrated application.</p>
     */
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithApplicationArn(const Aws::String& value) { SetApplicationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the integrated application.</p>
     */
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithApplicationArn(Aws::String&& value) { SetApplicationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the integrated application.</p>
     */
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithApplicationArn(const char* value) { SetApplicationArn(value); return *this;}


    /**
     * <p>Indicates if external filtering is enabled.</p>
     */
    inline const ExternalFilteringConfiguration& GetExternalFiltering() const{ return m_externalFiltering; }

    /**
     * <p>Indicates if external filtering is enabled.</p>
     */
    inline void SetExternalFiltering(const ExternalFilteringConfiguration& value) { m_externalFiltering = value; }

    /**
     * <p>Indicates if external filtering is enabled.</p>
     */
    inline void SetExternalFiltering(ExternalFilteringConfiguration&& value) { m_externalFiltering = std::move(value); }

    /**
     * <p>Indicates if external filtering is enabled.</p>
     */
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithExternalFiltering(const ExternalFilteringConfiguration& value) { SetExternalFiltering(value); return *this;}

    /**
     * <p>Indicates if external filtering is enabled.</p>
     */
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithExternalFiltering(ExternalFilteringConfiguration&& value) { SetExternalFiltering(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeLakeFormationIdentityCenterConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_catalogId;

    Aws::String m_instanceArn;

    Aws::String m_applicationArn;

    ExternalFilteringConfiguration m_externalFiltering;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
