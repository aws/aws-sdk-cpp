/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/SigningRepositoryFilter.h>

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
 * <p>A signing rule that specifies a signing profile and optional repository
 * filters. When an image is pushed to a matching repository, a signing job is
 * created using the specified profile.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/SigningRule">AWS API
 * Reference</a></p>
 */
class SigningRule {
 public:
  AWS_ECR_API SigningRule() = default;
  AWS_ECR_API SigningRule(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API SigningRule& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Amazon Web Services Signer signing profile to use for signing
   * images that match this rule. For more information about signing profiles, see <a
   * href="https://docs.aws.amazon.com/signer/latest/developerguide/signing-profiles.html">Signing
   * profiles</a> in the <i>Amazon Web Services Signer Developer Guide</i>.</p>
   */
  inline const Aws::String& GetSigningProfileArn() const { return m_signingProfileArn; }
  inline bool SigningProfileArnHasBeenSet() const { return m_signingProfileArnHasBeenSet; }
  template <typename SigningProfileArnT = Aws::String>
  void SetSigningProfileArn(SigningProfileArnT&& value) {
    m_signingProfileArnHasBeenSet = true;
    m_signingProfileArn = std::forward<SigningProfileArnT>(value);
  }
  template <typename SigningProfileArnT = Aws::String>
  SigningRule& WithSigningProfileArn(SigningProfileArnT&& value) {
    SetSigningProfileArn(std::forward<SigningProfileArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of repository filters that determine which repositories have their
   * images signed on push. If no filters are specified, all images pushed to the
   * registry are signed using the rule's signing profile. Maximum of 100 filters per
   * rule.</p>
   */
  inline const Aws::Vector<SigningRepositoryFilter>& GetRepositoryFilters() const { return m_repositoryFilters; }
  inline bool RepositoryFiltersHasBeenSet() const { return m_repositoryFiltersHasBeenSet; }
  template <typename RepositoryFiltersT = Aws::Vector<SigningRepositoryFilter>>
  void SetRepositoryFilters(RepositoryFiltersT&& value) {
    m_repositoryFiltersHasBeenSet = true;
    m_repositoryFilters = std::forward<RepositoryFiltersT>(value);
  }
  template <typename RepositoryFiltersT = Aws::Vector<SigningRepositoryFilter>>
  SigningRule& WithRepositoryFilters(RepositoryFiltersT&& value) {
    SetRepositoryFilters(std::forward<RepositoryFiltersT>(value));
    return *this;
  }
  template <typename RepositoryFiltersT = SigningRepositoryFilter>
  SigningRule& AddRepositoryFilters(RepositoryFiltersT&& value) {
    m_repositoryFiltersHasBeenSet = true;
    m_repositoryFilters.emplace_back(std::forward<RepositoryFiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_signingProfileArn;
  bool m_signingProfileArnHasBeenSet = false;

  Aws::Vector<SigningRepositoryFilter> m_repositoryFilters;
  bool m_repositoryFiltersHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
