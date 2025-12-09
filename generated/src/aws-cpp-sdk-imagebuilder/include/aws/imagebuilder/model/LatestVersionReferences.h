/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace imagebuilder {
namespace Model {

/**
 * <p>The resource ARNs with different wildcard variations of semantic
 * versioning.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/LatestVersionReferences">AWS
 * API Reference</a></p>
 */
class LatestVersionReferences {
 public:
  AWS_IMAGEBUILDER_API LatestVersionReferences() = default;
  AWS_IMAGEBUILDER_API LatestVersionReferences(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API LatestVersionReferences& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The latest version Amazon Resource Name (ARN) of the Image Builder
   * resource.</p>
   */
  inline const Aws::String& GetLatestVersionArn() const { return m_latestVersionArn; }
  inline bool LatestVersionArnHasBeenSet() const { return m_latestVersionArnHasBeenSet; }
  template <typename LatestVersionArnT = Aws::String>
  void SetLatestVersionArn(LatestVersionArnT&& value) {
    m_latestVersionArnHasBeenSet = true;
    m_latestVersionArn = std::forward<LatestVersionArnT>(value);
  }
  template <typename LatestVersionArnT = Aws::String>
  LatestVersionReferences& WithLatestVersionArn(LatestVersionArnT&& value) {
    SetLatestVersionArn(std::forward<LatestVersionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest version Amazon Resource Name (ARN) with the same
   * <code>major</code> version of the Image Builder resource.</p>
   */
  inline const Aws::String& GetLatestMajorVersionArn() const { return m_latestMajorVersionArn; }
  inline bool LatestMajorVersionArnHasBeenSet() const { return m_latestMajorVersionArnHasBeenSet; }
  template <typename LatestMajorVersionArnT = Aws::String>
  void SetLatestMajorVersionArn(LatestMajorVersionArnT&& value) {
    m_latestMajorVersionArnHasBeenSet = true;
    m_latestMajorVersionArn = std::forward<LatestMajorVersionArnT>(value);
  }
  template <typename LatestMajorVersionArnT = Aws::String>
  LatestVersionReferences& WithLatestMajorVersionArn(LatestMajorVersionArnT&& value) {
    SetLatestMajorVersionArn(std::forward<LatestMajorVersionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest version Amazon Resource Name (ARN) with the same
   * <code>minor</code> version of the Image Builder resource.</p>
   */
  inline const Aws::String& GetLatestMinorVersionArn() const { return m_latestMinorVersionArn; }
  inline bool LatestMinorVersionArnHasBeenSet() const { return m_latestMinorVersionArnHasBeenSet; }
  template <typename LatestMinorVersionArnT = Aws::String>
  void SetLatestMinorVersionArn(LatestMinorVersionArnT&& value) {
    m_latestMinorVersionArnHasBeenSet = true;
    m_latestMinorVersionArn = std::forward<LatestMinorVersionArnT>(value);
  }
  template <typename LatestMinorVersionArnT = Aws::String>
  LatestVersionReferences& WithLatestMinorVersionArn(LatestMinorVersionArnT&& value) {
    SetLatestMinorVersionArn(std::forward<LatestMinorVersionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The latest version Amazon Resource Name (ARN) with the same
   * <code>patch</code> version of the Image Builder resource.</p>
   */
  inline const Aws::String& GetLatestPatchVersionArn() const { return m_latestPatchVersionArn; }
  inline bool LatestPatchVersionArnHasBeenSet() const { return m_latestPatchVersionArnHasBeenSet; }
  template <typename LatestPatchVersionArnT = Aws::String>
  void SetLatestPatchVersionArn(LatestPatchVersionArnT&& value) {
    m_latestPatchVersionArnHasBeenSet = true;
    m_latestPatchVersionArn = std::forward<LatestPatchVersionArnT>(value);
  }
  template <typename LatestPatchVersionArnT = Aws::String>
  LatestVersionReferences& WithLatestPatchVersionArn(LatestPatchVersionArnT&& value) {
    SetLatestPatchVersionArn(std::forward<LatestPatchVersionArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_latestVersionArn;

  Aws::String m_latestMajorVersionArn;

  Aws::String m_latestMinorVersionArn;

  Aws::String m_latestPatchVersionArn;
  bool m_latestVersionArnHasBeenSet = false;
  bool m_latestMajorVersionArnHasBeenSet = false;
  bool m_latestMinorVersionArnHasBeenSet = false;
  bool m_latestPatchVersionArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
