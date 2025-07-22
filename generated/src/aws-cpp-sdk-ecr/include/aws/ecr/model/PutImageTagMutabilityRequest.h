/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ImageTagMutability.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/ImageTagMutabilityExclusionFilter.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class PutImageTagMutabilityRequest : public ECRRequest
  {
  public:
    AWS_ECR_API PutImageTagMutabilityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutImageTagMutability"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository in which to update the image tag mutability settings. If you do
     * not specify a registry, the default registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    PutImageTagMutabilityRequest& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository in which to update the image tag mutability
     * settings.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    PutImageTagMutabilityRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag mutability setting for the repository. If <code>MUTABLE</code> is
     * specified, image tags can be overwritten. If <code>IMMUTABLE</code> is
     * specified, all image tags within the repository will be immutable which will
     * prevent them from being overwritten.</p>
     */
    inline ImageTagMutability GetImageTagMutability() const { return m_imageTagMutability; }
    inline bool ImageTagMutabilityHasBeenSet() const { return m_imageTagMutabilityHasBeenSet; }
    inline void SetImageTagMutability(ImageTagMutability value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = value; }
    inline PutImageTagMutabilityRequest& WithImageTagMutability(ImageTagMutability value) { SetImageTagMutability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Creates or updates a repository with filters that define which image tags can
     * override the default image tag mutability setting.</p>
     */
    inline const Aws::Vector<ImageTagMutabilityExclusionFilter>& GetImageTagMutabilityExclusionFilters() const { return m_imageTagMutabilityExclusionFilters; }
    inline bool ImageTagMutabilityExclusionFiltersHasBeenSet() const { return m_imageTagMutabilityExclusionFiltersHasBeenSet; }
    template<typename ImageTagMutabilityExclusionFiltersT = Aws::Vector<ImageTagMutabilityExclusionFilter>>
    void SetImageTagMutabilityExclusionFilters(ImageTagMutabilityExclusionFiltersT&& value) { m_imageTagMutabilityExclusionFiltersHasBeenSet = true; m_imageTagMutabilityExclusionFilters = std::forward<ImageTagMutabilityExclusionFiltersT>(value); }
    template<typename ImageTagMutabilityExclusionFiltersT = Aws::Vector<ImageTagMutabilityExclusionFilter>>
    PutImageTagMutabilityRequest& WithImageTagMutabilityExclusionFilters(ImageTagMutabilityExclusionFiltersT&& value) { SetImageTagMutabilityExclusionFilters(std::forward<ImageTagMutabilityExclusionFiltersT>(value)); return *this;}
    template<typename ImageTagMutabilityExclusionFiltersT = ImageTagMutabilityExclusionFilter>
    PutImageTagMutabilityRequest& AddImageTagMutabilityExclusionFilters(ImageTagMutabilityExclusionFiltersT&& value) { m_imageTagMutabilityExclusionFiltersHasBeenSet = true; m_imageTagMutabilityExclusionFilters.emplace_back(std::forward<ImageTagMutabilityExclusionFiltersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    ImageTagMutability m_imageTagMutability{ImageTagMutability::NOT_SET};
    bool m_imageTagMutabilityHasBeenSet = false;

    Aws::Vector<ImageTagMutabilityExclusionFilter> m_imageTagMutabilityExclusionFilters;
    bool m_imageTagMutabilityExclusionFiltersHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
