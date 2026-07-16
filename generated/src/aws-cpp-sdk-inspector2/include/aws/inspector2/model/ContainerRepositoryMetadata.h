/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>Contains metadata about a container repository associated with a covered
 * resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ContainerRepositoryMetadata">AWS
 * API Reference</a></p>
 */
class ContainerRepositoryMetadata {
 public:
  AWS_INSPECTOR2_API ContainerRepositoryMetadata() = default;
  AWS_INSPECTOR2_API ContainerRepositoryMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API ContainerRepositoryMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the container repository.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ContainerRepositoryMetadata& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scan frequency for the container repository.</p>
   */
  inline const Aws::String& GetScanFrequency() const { return m_scanFrequency; }
  inline bool ScanFrequencyHasBeenSet() const { return m_scanFrequencyHasBeenSet; }
  template <typename ScanFrequencyT = Aws::String>
  void SetScanFrequency(ScanFrequencyT&& value) {
    m_scanFrequencyHasBeenSet = true;
    m_scanFrequency = std::forward<ScanFrequencyT>(value);
  }
  template <typename ScanFrequencyT = Aws::String>
  ContainerRepositoryMetadata& WithScanFrequency(ScanFrequencyT&& value) {
    SetScanFrequency(std::forward<ScanFrequencyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_scanFrequency;
  bool m_nameHasBeenSet = false;
  bool m_scanFrequencyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
