/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ImageIdentifier.h>
#include <aws/ecr/model/TargetStorageClass.h>

#include <utility>

namespace Aws {
namespace ECR {
namespace Model {

/**
 */
class UpdateImageStorageClassRequest : public ECRRequest {
 public:
  AWS_ECR_API UpdateImageStorageClassRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateImageStorageClass"; }

  AWS_ECR_API Aws::String SerializePayload() const override;

  AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Web Services account ID associated with the registry that contains
   * the image to transition. If you do not specify a registry, the default registry
   * is assumed.</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  UpdateImageStorageClassRequest& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the repository that contains the image to transition.</p>
   */
  inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
  inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
  template <typename RepositoryNameT = Aws::String>
  void SetRepositoryName(RepositoryNameT&& value) {
    m_repositoryNameHasBeenSet = true;
    m_repositoryName = std::forward<RepositoryNameT>(value);
  }
  template <typename RepositoryNameT = Aws::String>
  UpdateImageStorageClassRequest& WithRepositoryName(RepositoryNameT&& value) {
    SetRepositoryName(std::forward<RepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ImageIdentifier& GetImageId() const { return m_imageId; }
  inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
  template <typename ImageIdT = ImageIdentifier>
  void SetImageId(ImageIdT&& value) {
    m_imageIdHasBeenSet = true;
    m_imageId = std::forward<ImageIdT>(value);
  }
  template <typename ImageIdT = ImageIdentifier>
  UpdateImageStorageClassRequest& WithImageId(ImageIdT&& value) {
    SetImageId(std::forward<ImageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target storage class for the image.</p>
   */
  inline TargetStorageClass GetTargetStorageClass() const { return m_targetStorageClass; }
  inline bool TargetStorageClassHasBeenSet() const { return m_targetStorageClassHasBeenSet; }
  inline void SetTargetStorageClass(TargetStorageClass value) {
    m_targetStorageClassHasBeenSet = true;
    m_targetStorageClass = value;
  }
  inline UpdateImageStorageClassRequest& WithTargetStorageClass(TargetStorageClass value) {
    SetTargetStorageClass(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryId;
  bool m_registryIdHasBeenSet = false;

  Aws::String m_repositoryName;
  bool m_repositoryNameHasBeenSet = false;

  ImageIdentifier m_imageId;
  bool m_imageIdHasBeenSet = false;

  TargetStorageClass m_targetStorageClass{TargetStorageClass::NOT_SET};
  bool m_targetStorageClassHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
