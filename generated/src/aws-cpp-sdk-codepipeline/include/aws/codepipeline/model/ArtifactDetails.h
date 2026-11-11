/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/crt/cbor/Cbor.h>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodePipeline {
namespace Model {

/**
 * <p>Returns information about the details of an artifact.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ArtifactDetails">AWS
 * API Reference</a></p>
 */
class ArtifactDetails {
 public:
  AWS_CODEPIPELINE_API ArtifactDetails() = default;
  AWS_CODEPIPELINE_API ArtifactDetails(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API ArtifactDetails& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEPIPELINE_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The minimum number of artifacts allowed for the action type.</p>
   */
  inline int64_t GetMinimumCount() const { return m_minimumCount; }
  inline bool MinimumCountHasBeenSet() const { return m_minimumCountHasBeenSet; }
  inline void SetMinimumCount(int64_t value) {
    m_minimumCountHasBeenSet = true;
    m_minimumCount = value;
  }
  inline ArtifactDetails& WithMinimumCount(int64_t value) {
    SetMinimumCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of artifacts allowed for the action type.</p>
   */
  inline int64_t GetMaximumCount() const { return m_maximumCount; }
  inline bool MaximumCountHasBeenSet() const { return m_maximumCountHasBeenSet; }
  inline void SetMaximumCount(int64_t value) {
    m_maximumCountHasBeenSet = true;
    m_maximumCount = value;
  }
  inline ArtifactDetails& WithMaximumCount(int64_t value) {
    SetMaximumCount(value);
    return *this;
  }
  ///@}
 private:
  int64_t m_minimumCount{0};

  int64_t m_maximumCount{0};
  bool m_minimumCountHasBeenSet = false;
  bool m_maximumCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodePipeline
}  // namespace Aws
