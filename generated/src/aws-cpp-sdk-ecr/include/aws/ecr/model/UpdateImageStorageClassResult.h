/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ImageIdentifier.h>
#include <aws/ecr/model/ImageStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {
class UpdateImageStorageClassResult {
 public:
  AWS_ECR_API UpdateImageStorageClassResult() = default;
  AWS_ECR_API UpdateImageStorageClassResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECR_API UpdateImageStorageClassResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The registry ID associated with the request.</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  UpdateImageStorageClassResult& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The repository name associated with the request.</p>
   */
  inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
  template <typename RepositoryNameT = Aws::String>
  void SetRepositoryName(RepositoryNameT&& value) {
    m_repositoryNameHasBeenSet = true;
    m_repositoryName = std::forward<RepositoryNameT>(value);
  }
  template <typename RepositoryNameT = Aws::String>
  UpdateImageStorageClassResult& WithRepositoryName(RepositoryNameT&& value) {
    SetRepositoryName(std::forward<RepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const ImageIdentifier& GetImageId() const { return m_imageId; }
  template <typename ImageIdT = ImageIdentifier>
  void SetImageId(ImageIdT&& value) {
    m_imageIdHasBeenSet = true;
    m_imageId = std::forward<ImageIdT>(value);
  }
  template <typename ImageIdT = ImageIdentifier>
  UpdateImageStorageClassResult& WithImageId(ImageIdT&& value) {
    SetImageId(std::forward<ImageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the image after the call to UpdateImageStorageClass is
   * complete. Valid values are <code>ACTIVE</code>, <code>ARCHIVED</code>, and
   * <code>ACTIVATING</code>.</p>
   */
  inline ImageStatus GetImageStatus() const { return m_imageStatus; }
  inline void SetImageStatus(ImageStatus value) {
    m_imageStatusHasBeenSet = true;
    m_imageStatus = value;
  }
  inline UpdateImageStorageClassResult& WithImageStatus(ImageStatus value) {
    SetImageStatus(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  UpdateImageStorageClassResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_registryId;

  Aws::String m_repositoryName;

  ImageIdentifier m_imageId;

  ImageStatus m_imageStatus{ImageStatus::NOT_SET};

  Aws::String m_requestId;
  bool m_registryIdHasBeenSet = false;
  bool m_repositoryNameHasBeenSet = false;
  bool m_imageIdHasBeenSet = false;
  bool m_imageStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
