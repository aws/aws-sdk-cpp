/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/FSx_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {

/**
 * <p>Specifies the source endpoint of the Amazon FSx for NetApp ONTAP SnapMirror
 * relationship that you are creating.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/CreateSnapmirrorSource">AWS
 * API Reference</a></p>
 */
class CreateSnapmirrorSource {
 public:
  AWS_FSX_API CreateSnapmirrorSource() = default;
  AWS_FSX_API CreateSnapmirrorSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API CreateSnapmirrorSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies the path of the source volume, in the format
   * <code>svm_name:volume_name</code>.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  CreateSnapmirrorSource& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_path;
  bool m_pathHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
