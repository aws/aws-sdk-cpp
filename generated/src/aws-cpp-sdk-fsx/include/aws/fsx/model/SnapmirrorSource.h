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
 * <p>Describes the source endpoint of an Amazon FSx for NetApp ONTAP SnapMirror
 * relationship. The source volume can be on an Amazon FSx for NetApp ONTAP file
 * system or on another ONTAP cluster.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SnapmirrorSource">AWS
 * API Reference</a></p>
 */
class SnapmirrorSource {
 public:
  AWS_FSX_API SnapmirrorSource() = default;
  AWS_FSX_API SnapmirrorSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API SnapmirrorSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The path of the source volume, in the format
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
  SnapmirrorSource& WithPath(PathT&& value) {
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
