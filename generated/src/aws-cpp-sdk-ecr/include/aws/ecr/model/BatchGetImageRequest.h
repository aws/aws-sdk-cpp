/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/ImageIdentifier.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class BatchGetImageRequest : public ECRRequest
  {
  public:
    AWS_ECR_API BatchGetImageRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetImage"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the images to describe. If you do not specify a registry, the default registry
     * is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    BatchGetImageRequest& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The repository that contains the images to describe.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    BatchGetImageRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of image ID references that correspond to images to describe. The
     * format of the <code>imageIds</code> reference is <code>imageTag=tag</code> or
     * <code>imageDigest=digest</code>.</p>
     */
    inline const Aws::Vector<ImageIdentifier>& GetImageIds() const { return m_imageIds; }
    inline bool ImageIdsHasBeenSet() const { return m_imageIdsHasBeenSet; }
    template<typename ImageIdsT = Aws::Vector<ImageIdentifier>>
    void SetImageIds(ImageIdsT&& value) { m_imageIdsHasBeenSet = true; m_imageIds = std::forward<ImageIdsT>(value); }
    template<typename ImageIdsT = Aws::Vector<ImageIdentifier>>
    BatchGetImageRequest& WithImageIds(ImageIdsT&& value) { SetImageIds(std::forward<ImageIdsT>(value)); return *this;}
    template<typename ImageIdsT = ImageIdentifier>
    BatchGetImageRequest& AddImageIds(ImageIdsT&& value) { m_imageIdsHasBeenSet = true; m_imageIds.emplace_back(std::forward<ImageIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The accepted media types for the request.</p> <p>Valid values:
     * <code>application/vnd.docker.distribution.manifest.v1+json</code> |
     * <code>application/vnd.docker.distribution.manifest.v2+json</code> |
     * <code>application/vnd.oci.image.manifest.v1+json</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetAcceptedMediaTypes() const { return m_acceptedMediaTypes; }
    inline bool AcceptedMediaTypesHasBeenSet() const { return m_acceptedMediaTypesHasBeenSet; }
    template<typename AcceptedMediaTypesT = Aws::Vector<Aws::String>>
    void SetAcceptedMediaTypes(AcceptedMediaTypesT&& value) { m_acceptedMediaTypesHasBeenSet = true; m_acceptedMediaTypes = std::forward<AcceptedMediaTypesT>(value); }
    template<typename AcceptedMediaTypesT = Aws::Vector<Aws::String>>
    BatchGetImageRequest& WithAcceptedMediaTypes(AcceptedMediaTypesT&& value) { SetAcceptedMediaTypes(std::forward<AcceptedMediaTypesT>(value)); return *this;}
    template<typename AcceptedMediaTypesT = Aws::String>
    BatchGetImageRequest& AddAcceptedMediaTypes(AcceptedMediaTypesT&& value) { m_acceptedMediaTypesHasBeenSet = true; m_acceptedMediaTypes.emplace_back(std::forward<AcceptedMediaTypesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::Vector<ImageIdentifier> m_imageIds;
    bool m_imageIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_acceptedMediaTypes;
    bool m_acceptedMediaTypesHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
