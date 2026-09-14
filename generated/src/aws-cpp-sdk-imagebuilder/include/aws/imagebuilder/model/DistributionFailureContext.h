/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/RegionFailure.h>

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
 * <p>Contains details about a failure that occurred while Image Builder
 * distributed the image or applied configuration to the distributed
 * image.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/DistributionFailureContext">AWS
 * API Reference</a></p>
 */
class DistributionFailureContext {
 public:
  AWS_IMAGEBUILDER_API DistributionFailureContext() = default;
  AWS_IMAGEBUILDER_API DistributionFailureContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API DistributionFailureContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The error message for the distribution failure.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  DistributionFailureContext& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details about the failure for each Region where the image didn't finish
   * distribution or configuration.</p>
   */
  inline const Aws::Vector<RegionFailure>& GetRegionFailures() const { return m_regionFailures; }
  inline bool RegionFailuresHasBeenSet() const { return m_regionFailuresHasBeenSet; }
  template <typename RegionFailuresT = Aws::Vector<RegionFailure>>
  void SetRegionFailures(RegionFailuresT&& value) {
    m_regionFailuresHasBeenSet = true;
    m_regionFailures = std::forward<RegionFailuresT>(value);
  }
  template <typename RegionFailuresT = Aws::Vector<RegionFailure>>
  DistributionFailureContext& WithRegionFailures(RegionFailuresT&& value) {
    SetRegionFailures(std::forward<RegionFailuresT>(value));
    return *this;
  }
  template <typename RegionFailuresT = RegionFailure>
  DistributionFailureContext& AddRegionFailures(RegionFailuresT&& value) {
    m_regionFailuresHasBeenSet = true;
    m_regionFailures.emplace_back(std::forward<RegionFailuresT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_errorMessage;

  Aws::Vector<RegionFailure> m_regionFailures;
  bool m_errorMessageHasBeenSet = false;
  bool m_regionFailuresHasBeenSet = false;
};

}  // namespace Model
}  // namespace imagebuilder
}  // namespace Aws
