/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lakeformation/model/DataLakePrincipal.h>
#include <aws/lakeformation/model/DataLakeResourceType.h>
#include <aws/lakeformation/model/Resource.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class ListPermissionsRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API ListPermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPermissions"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier for the Data Catalog. By default, the account ID. The Data
     * Catalog is the persistent metadata store. It contains database definitions,
     * table definitions, and other control information to manage your Lake Formation
     * environment. </p>
     */
    inline const Aws::String& GetCatalogId() const{ return m_catalogId; }
    inline bool CatalogIdHasBeenSet() const { return m_catalogIdHasBeenSet; }
    inline void SetCatalogId(const Aws::String& value) { m_catalogIdHasBeenSet = true; m_catalogId = value; }
    inline void SetCatalogId(Aws::String&& value) { m_catalogIdHasBeenSet = true; m_catalogId = std::move(value); }
    inline void SetCatalogId(const char* value) { m_catalogIdHasBeenSet = true; m_catalogId.assign(value); }
    inline ListPermissionsRequest& WithCatalogId(const Aws::String& value) { SetCatalogId(value); return *this;}
    inline ListPermissionsRequest& WithCatalogId(Aws::String&& value) { SetCatalogId(std::move(value)); return *this;}
    inline ListPermissionsRequest& WithCatalogId(const char* value) { SetCatalogId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a principal to filter the permissions returned.</p>
     */
    inline const DataLakePrincipal& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const DataLakePrincipal& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(DataLakePrincipal&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline ListPermissionsRequest& WithPrincipal(const DataLakePrincipal& value) { SetPrincipal(value); return *this;}
    inline ListPermissionsRequest& WithPrincipal(DataLakePrincipal&& value) { SetPrincipal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a resource type to filter the permissions returned.</p>
     */
    inline const DataLakeResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const DataLakeResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(DataLakeResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline ListPermissionsRequest& WithResourceType(const DataLakeResourceType& value) { SetResourceType(value); return *this;}
    inline ListPermissionsRequest& WithResourceType(DataLakeResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A resource where you will get a list of the principal permissions.</p>
     * <p>This operation does not support getting privileges on a table with columns.
     * Instead, call this operation on the table, and the operation returns the table
     * and the table w columns.</p>
     */
    inline const Resource& GetResource() const{ return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    inline void SetResource(const Resource& value) { m_resourceHasBeenSet = true; m_resource = value; }
    inline void SetResource(Resource&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }
    inline ListPermissionsRequest& WithResource(const Resource& value) { SetResource(value); return *this;}
    inline ListPermissionsRequest& WithResource(Resource&& value) { SetResource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A continuation token, if this is not the first call to retrieve this
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListPermissionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPermissionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPermissionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPermissionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that related permissions should be included in the results.</p>
     */
    inline const Aws::String& GetIncludeRelated() const{ return m_includeRelated; }
    inline bool IncludeRelatedHasBeenSet() const { return m_includeRelatedHasBeenSet; }
    inline void SetIncludeRelated(const Aws::String& value) { m_includeRelatedHasBeenSet = true; m_includeRelated = value; }
    inline void SetIncludeRelated(Aws::String&& value) { m_includeRelatedHasBeenSet = true; m_includeRelated = std::move(value); }
    inline void SetIncludeRelated(const char* value) { m_includeRelatedHasBeenSet = true; m_includeRelated.assign(value); }
    inline ListPermissionsRequest& WithIncludeRelated(const Aws::String& value) { SetIncludeRelated(value); return *this;}
    inline ListPermissionsRequest& WithIncludeRelated(Aws::String&& value) { SetIncludeRelated(std::move(value)); return *this;}
    inline ListPermissionsRequest& WithIncludeRelated(const char* value) { SetIncludeRelated(value); return *this;}
    ///@}
  private:

    Aws::String m_catalogId;
    bool m_catalogIdHasBeenSet = false;

    DataLakePrincipal m_principal;
    bool m_principalHasBeenSet = false;

    DataLakeResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_includeRelated;
    bool m_includeRelatedHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
