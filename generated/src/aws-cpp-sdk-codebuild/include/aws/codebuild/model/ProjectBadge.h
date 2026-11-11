/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace CodeBuild {
namespace Model {

/**
 * <p>Information about the build badge for the build project.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectBadge">AWS
 * API Reference</a></p>
 */
class ProjectBadge {
 public:
  AWS_CODEBUILD_API ProjectBadge() = default;
  AWS_CODEBUILD_API ProjectBadge(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEBUILD_API ProjectBadge& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_CODEBUILD_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>Set this to true to generate a publicly accessible URL for your project's
   * build badge.</p>
   */
  inline bool GetBadgeEnabled() const { return m_badgeEnabled; }
  inline bool BadgeEnabledHasBeenSet() const { return m_badgeEnabledHasBeenSet; }
  inline void SetBadgeEnabled(bool value) {
    m_badgeEnabledHasBeenSet = true;
    m_badgeEnabled = value;
  }
  inline ProjectBadge& WithBadgeEnabled(bool value) {
    SetBadgeEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The publicly-accessible URL through which you can access the build badge for
   * your project. </p>
   */
  inline const Aws::String& GetBadgeRequestUrl() const { return m_badgeRequestUrl; }
  inline bool BadgeRequestUrlHasBeenSet() const { return m_badgeRequestUrlHasBeenSet; }
  template <typename BadgeRequestUrlT = Aws::String>
  void SetBadgeRequestUrl(BadgeRequestUrlT&& value) {
    m_badgeRequestUrlHasBeenSet = true;
    m_badgeRequestUrl = std::forward<BadgeRequestUrlT>(value);
  }
  template <typename BadgeRequestUrlT = Aws::String>
  ProjectBadge& WithBadgeRequestUrl(BadgeRequestUrlT&& value) {
    SetBadgeRequestUrl(std::forward<BadgeRequestUrlT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_badgeEnabled{false};

  Aws::String m_badgeRequestUrl;
  bool m_badgeEnabledHasBeenSet = false;
  bool m_badgeRequestUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeBuild
}  // namespace Aws
