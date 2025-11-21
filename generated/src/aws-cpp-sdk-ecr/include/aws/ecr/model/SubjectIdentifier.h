/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/ECR_EXPORTS.h>

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
 * <p>An object that identifies an image subject.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/SubjectIdentifier">AWS
 * API Reference</a></p>
 */
class SubjectIdentifier {
 public:
  AWS_ECR_API SubjectIdentifier() = default;
  AWS_ECR_API SubjectIdentifier(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API SubjectIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The digest of the image.</p>
   */
  inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
  inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
  template <typename ImageDigestT = Aws::String>
  void SetImageDigest(ImageDigestT&& value) {
    m_imageDigestHasBeenSet = true;
    m_imageDigest = std::forward<ImageDigestT>(value);
  }
  template <typename ImageDigestT = Aws::String>
  SubjectIdentifier& WithImageDigest(ImageDigestT&& value) {
    SetImageDigest(std::forward<ImageDigestT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_imageDigest;
  bool m_imageDigestHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
