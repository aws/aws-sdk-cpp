/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/ArtifactStatusFilter.h>

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
 * <p>An object representing a filter on a <a>ListImageReferrers</a>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ListImageReferrersFilter">AWS
 * API Reference</a></p>
 */
class ListImageReferrersFilter {
 public:
  AWS_ECR_API ListImageReferrersFilter() = default;
  AWS_ECR_API ListImageReferrersFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API ListImageReferrersFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The artifact types with which to filter your <a>ListImageReferrers</a>
   * results.</p>
   */
  inline const Aws::Vector<Aws::String>& GetArtifactTypes() const { return m_artifactTypes; }
  inline bool ArtifactTypesHasBeenSet() const { return m_artifactTypesHasBeenSet; }
  template <typename ArtifactTypesT = Aws::Vector<Aws::String>>
  void SetArtifactTypes(ArtifactTypesT&& value) {
    m_artifactTypesHasBeenSet = true;
    m_artifactTypes = std::forward<ArtifactTypesT>(value);
  }
  template <typename ArtifactTypesT = Aws::Vector<Aws::String>>
  ListImageReferrersFilter& WithArtifactTypes(ArtifactTypesT&& value) {
    SetArtifactTypes(std::forward<ArtifactTypesT>(value));
    return *this;
  }
  template <typename ArtifactTypesT = Aws::String>
  ListImageReferrersFilter& AddArtifactTypes(ArtifactTypesT&& value) {
    m_artifactTypesHasBeenSet = true;
    m_artifactTypes.emplace_back(std::forward<ArtifactTypesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The artifact status with which to filter your <a>ListImageReferrers</a>
   * results. Valid values are <code>ACTIVE</code>, <code>ARCHIVED</code>,
   * <code>ACTIVATING</code>, or <code>ANY</code>. If not specified, only artifacts
   * with <code>ACTIVE</code> status are returned.</p>
   */
  inline ArtifactStatusFilter GetArtifactStatus() const { return m_artifactStatus; }
  inline bool ArtifactStatusHasBeenSet() const { return m_artifactStatusHasBeenSet; }
  inline void SetArtifactStatus(ArtifactStatusFilter value) {
    m_artifactStatusHasBeenSet = true;
    m_artifactStatus = value;
  }
  inline ListImageReferrersFilter& WithArtifactStatus(ArtifactStatusFilter value) {
    SetArtifactStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_artifactTypes;
  bool m_artifactTypesHasBeenSet = false;

  ArtifactStatusFilter m_artifactStatus{ArtifactStatusFilter::NOT_SET};
  bool m_artifactStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
