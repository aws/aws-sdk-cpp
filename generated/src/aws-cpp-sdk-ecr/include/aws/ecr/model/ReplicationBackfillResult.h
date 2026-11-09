/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ImageIdentifier.h>
#include <aws/ecr/model/ReplicationBackfillResultStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECR {
namespace Model {

/**
 * <p>An object representing the result of a single replication during a
 * replication backfill. Each image and tag combination is replicated as a single
 * replication.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ReplicationBackfillResult">AWS
 * API Reference</a></p>
 */
class ReplicationBackfillResult {
 public:
  AWS_ECR_API ReplicationBackfillResult() = default;
  AWS_ECR_API ReplicationBackfillResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API ReplicationBackfillResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the repository that contains the image.</p>
   */
  inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
  inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
  template <typename RepositoryNameT = Aws::String>
  void SetRepositoryName(RepositoryNameT&& value) {
    m_repositoryNameHasBeenSet = true;
    m_repositoryName = std::forward<RepositoryNameT>(value);
  }
  template <typename RepositoryNameT = Aws::String>
  ReplicationBackfillResult& WithRepositoryName(RepositoryNameT&& value) {
    SetRepositoryName(std::forward<RepositoryNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object with identifying information for the image.</p>
   */
  inline const ImageIdentifier& GetImageId() const { return m_imageId; }
  inline bool ImageIdHasBeenSet() const { return m_imageIdHasBeenSet; }
  template <typename ImageIdT = ImageIdentifier>
  void SetImageId(ImageIdT&& value) {
    m_imageIdHasBeenSet = true;
    m_imageId = std::forward<ImageIdT>(value);
  }
  template <typename ImageIdT = ImageIdentifier>
  ReplicationBackfillResult& WithImageId(ImageIdT&& value) {
    SetImageId(std::forward<ImageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The replication status of the image.</p>
   */
  inline ReplicationBackfillResultStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ReplicationBackfillResultStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ReplicationBackfillResult& WithStatus(ReplicationBackfillResultStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The failure code for a replication that has failed.</p>
   */
  inline const Aws::String& GetFailureCode() const { return m_failureCode; }
  inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }
  template <typename FailureCodeT = Aws::String>
  void SetFailureCode(FailureCodeT&& value) {
    m_failureCodeHasBeenSet = true;
    m_failureCode = std::forward<FailureCodeT>(value);
  }
  template <typename FailureCodeT = Aws::String>
  ReplicationBackfillResult& WithFailureCode(FailureCodeT&& value) {
    SetFailureCode(std::forward<FailureCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The distinct failure codes for the images referenced by a manifest list that
   * failed to replicate. Each failure code appears at most once, regardless of how
   * many referenced images failed with that code. This field is present only when
   * the image is a manifest list.</p>
   */
  inline const Aws::Vector<Aws::String>& GetSubImageFailureCodes() const { return m_subImageFailureCodes; }
  inline bool SubImageFailureCodesHasBeenSet() const { return m_subImageFailureCodesHasBeenSet; }
  template <typename SubImageFailureCodesT = Aws::Vector<Aws::String>>
  void SetSubImageFailureCodes(SubImageFailureCodesT&& value) {
    m_subImageFailureCodesHasBeenSet = true;
    m_subImageFailureCodes = std::forward<SubImageFailureCodesT>(value);
  }
  template <typename SubImageFailureCodesT = Aws::Vector<Aws::String>>
  ReplicationBackfillResult& WithSubImageFailureCodes(SubImageFailureCodesT&& value) {
    SetSubImageFailureCodes(std::forward<SubImageFailureCodesT>(value));
    return *this;
  }
  template <typename SubImageFailureCodesT = Aws::String>
  ReplicationBackfillResult& AddSubImageFailureCodes(SubImageFailureCodesT&& value) {
    m_subImageFailureCodesHasBeenSet = true;
    m_subImageFailureCodes.emplace_back(std::forward<SubImageFailureCodesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_repositoryName;

  ImageIdentifier m_imageId;

  ReplicationBackfillResultStatus m_status{ReplicationBackfillResultStatus::NOT_SET};

  Aws::String m_failureCode;

  Aws::Vector<Aws::String> m_subImageFailureCodes;
  bool m_repositoryNameHasBeenSet = false;
  bool m_imageIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureCodeHasBeenSet = false;
  bool m_subImageFailureCodesHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
