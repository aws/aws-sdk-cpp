/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/ECRPublicRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr-public/model/RepositoryCatalogDataInput.h>
#include <utility>

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

  /**
   */
  class PutRepositoryCatalogDataRequest : public ECRPublicRequest
  {
  public:
    AWS_ECRPUBLIC_API PutRepositoryCatalogDataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRepositoryCatalogData"; }

    AWS_ECRPUBLIC_API Aws::String SerializePayload() const override;

    AWS_ECRPUBLIC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID that's associated with the public registry
     * the repository is in. If you do not specify a registry, the default public
     * registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    PutRepositoryCatalogDataRequest& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository to create or update the catalog data for.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    PutRepositoryCatalogDataRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing the catalog data for a repository. This data is publicly
     * visible in the Amazon ECR Public Gallery.</p>
     */
    inline const RepositoryCatalogDataInput& GetCatalogData() const { return m_catalogData; }
    inline bool CatalogDataHasBeenSet() const { return m_catalogDataHasBeenSet; }
    template<typename CatalogDataT = RepositoryCatalogDataInput>
    void SetCatalogData(CatalogDataT&& value) { m_catalogDataHasBeenSet = true; m_catalogData = std::forward<CatalogDataT>(value); }
    template<typename CatalogDataT = RepositoryCatalogDataInput>
    PutRepositoryCatalogDataRequest& WithCatalogData(CatalogDataT&& value) { SetCatalogData(std::forward<CatalogDataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    RepositoryCatalogDataInput m_catalogData;
    bool m_catalogDataHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
