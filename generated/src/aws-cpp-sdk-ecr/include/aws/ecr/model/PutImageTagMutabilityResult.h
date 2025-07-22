/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ImageTagMutability.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/ImageTagMutabilityExclusionFilter.h>
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
namespace ECR
{
namespace Model
{
  class PutImageTagMutabilityResult
  {
  public:
    AWS_ECR_API PutImageTagMutabilityResult() = default;
    AWS_ECR_API PutImageTagMutabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API PutImageTagMutabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    PutImageTagMutabilityResult& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    PutImageTagMutabilityResult& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image tag mutability setting for the repository.</p>
     */
    inline ImageTagMutability GetImageTagMutability() const { return m_imageTagMutability; }
    inline void SetImageTagMutability(ImageTagMutability value) { m_imageTagMutabilityHasBeenSet = true; m_imageTagMutability = value; }
    inline PutImageTagMutabilityResult& WithImageTagMutability(ImageTagMutability value) { SetImageTagMutability(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Returns a list of filters that were defined for a repository. These filters
     * determine which image tags can override the default image tag mutability setting
     * of the repository.</p>
     */
    inline const Aws::Vector<ImageTagMutabilityExclusionFilter>& GetImageTagMutabilityExclusionFilters() const { return m_imageTagMutabilityExclusionFilters; }
    template<typename ImageTagMutabilityExclusionFiltersT = Aws::Vector<ImageTagMutabilityExclusionFilter>>
    void SetImageTagMutabilityExclusionFilters(ImageTagMutabilityExclusionFiltersT&& value) { m_imageTagMutabilityExclusionFiltersHasBeenSet = true; m_imageTagMutabilityExclusionFilters = std::forward<ImageTagMutabilityExclusionFiltersT>(value); }
    template<typename ImageTagMutabilityExclusionFiltersT = Aws::Vector<ImageTagMutabilityExclusionFilter>>
    PutImageTagMutabilityResult& WithImageTagMutabilityExclusionFilters(ImageTagMutabilityExclusionFiltersT&& value) { SetImageTagMutabilityExclusionFilters(std::forward<ImageTagMutabilityExclusionFiltersT>(value)); return *this;}
    template<typename ImageTagMutabilityExclusionFiltersT = ImageTagMutabilityExclusionFilter>
    PutImageTagMutabilityResult& AddImageTagMutabilityExclusionFilters(ImageTagMutabilityExclusionFiltersT&& value) { m_imageTagMutabilityExclusionFiltersHasBeenSet = true; m_imageTagMutabilityExclusionFilters.emplace_back(std::forward<ImageTagMutabilityExclusionFiltersT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutImageTagMutabilityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
