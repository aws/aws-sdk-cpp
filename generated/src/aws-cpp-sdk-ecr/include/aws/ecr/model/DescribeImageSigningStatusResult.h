/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ImageIdentifier.h>
#include <aws/ecr/model/ImageSigningStatus.h>

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
class DescribeImageSigningStatusResult {
 public:
  AWS_ECR_API DescribeImageSigningStatusResult() = default;
  AWS_ECR_API DescribeImageSigningStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_ECR_API DescribeImageSigningStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the repository.</p>
   */
  inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
  template <typename RepositoryNameT = Aws::String>
  void SetRepositoryName(RepositoryNameT&& value) {
    m_repositoryNameHasBeenSet = true;
    m_repositoryName = std::forward<RepositoryNameT>(value);
  }
  template <typename RepositoryNameT = Aws::String>
  DescribeImageSigningStatusResult& WithRepositoryName(RepositoryNameT&& value) {
    SetRepositoryName(std::forward<RepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object with identifying information for the image.</p>
   */
  inline const ImageIdentifier& GetImageId() const { return m_imageId; }
  template <typename ImageIdT = ImageIdentifier>
  void SetImageId(ImageIdT&& value) {
    m_imageIdHasBeenSet = true;
    m_imageId = std::forward<ImageIdT>(value);
  }
  template <typename ImageIdT = ImageIdentifier>
  DescribeImageSigningStatusResult& WithImageId(ImageIdT&& value) {
    SetImageId(std::forward<ImageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Web Services account ID associated with the registry.</p>
   */
  inline const Aws::String& GetRegistryId() const { return m_registryId; }
  template <typename RegistryIdT = Aws::String>
  void SetRegistryId(RegistryIdT&& value) {
    m_registryIdHasBeenSet = true;
    m_registryId = std::forward<RegistryIdT>(value);
  }
  template <typename RegistryIdT = Aws::String>
  DescribeImageSigningStatusResult& WithRegistryId(RegistryIdT&& value) {
    SetRegistryId(std::forward<RegistryIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of signing statuses for the specified image. Each status corresponds
   * to a signing profile.</p>
   */
  inline const Aws::Vector<ImageSigningStatus>& GetSigningStatuses() const { return m_signingStatuses; }
  template <typename SigningStatusesT = Aws::Vector<ImageSigningStatus>>
  void SetSigningStatuses(SigningStatusesT&& value) {
    m_signingStatusesHasBeenSet = true;
    m_signingStatuses = std::forward<SigningStatusesT>(value);
  }
  template <typename SigningStatusesT = Aws::Vector<ImageSigningStatus>>
  DescribeImageSigningStatusResult& WithSigningStatuses(SigningStatusesT&& value) {
    SetSigningStatuses(std::forward<SigningStatusesT>(value));
    return *this;
  }
  template <typename SigningStatusesT = ImageSigningStatus>
  DescribeImageSigningStatusResult& AddSigningStatuses(SigningStatusesT&& value) {
    m_signingStatusesHasBeenSet = true;
    m_signingStatuses.emplace_back(std::forward<SigningStatusesT>(value));
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
  DescribeImageSigningStatusResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_repositoryName;

  ImageIdentifier m_imageId;

  Aws::String m_registryId;

  Aws::Vector<ImageSigningStatus> m_signingStatuses;

  Aws::String m_requestId;
  bool m_repositoryNameHasBeenSet = false;
  bool m_imageIdHasBeenSet = false;
  bool m_registryIdHasBeenSet = false;
  bool m_signingStatusesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
