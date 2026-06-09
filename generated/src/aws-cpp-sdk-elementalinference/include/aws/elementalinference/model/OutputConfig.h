/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ClippingConfig.h>
#include <aws/elementalinference/model/CroppingConfig.h>
#include <aws/elementalinference/model/SubtitlingConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>Contains one typed output. It is used in the CreateOutput, GetOutput, and
 * Update Output structures.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/OutputConfig">AWS
 * API Reference</a></p>
 */
class OutputConfig {
 public:
  AWS_ELEMENTALINFERENCE_API OutputConfig() = default;
  AWS_ELEMENTALINFERENCE_API OutputConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API OutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The output config type that applies to the cropping feature.</p>
   */
  inline const CroppingConfig& GetCropping() const { return m_cropping; }
  inline bool CroppingHasBeenSet() const { return m_croppingHasBeenSet; }
  template <typename CroppingT = CroppingConfig>
  void SetCropping(CroppingT&& value) {
    m_croppingHasBeenSet = true;
    m_cropping = std::forward<CroppingT>(value);
  }
  template <typename CroppingT = CroppingConfig>
  OutputConfig& WithCropping(CroppingT&& value) {
    SetCropping(std::forward<CroppingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output config type that applies to the clipping feature.</p>
   */
  inline const ClippingConfig& GetClipping() const { return m_clipping; }
  inline bool ClippingHasBeenSet() const { return m_clippingHasBeenSet; }
  template <typename ClippingT = ClippingConfig>
  void SetClipping(ClippingT&& value) {
    m_clippingHasBeenSet = true;
    m_clipping = std::forward<ClippingT>(value);
  }
  template <typename ClippingT = ClippingConfig>
  OutputConfig& WithClipping(ClippingT&& value) {
    SetClipping(std::forward<ClippingT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output config type that applies to the smart subtitling feature.</p>
   */
  inline const SubtitlingConfig& GetSubtitling() const { return m_subtitling; }
  inline bool SubtitlingHasBeenSet() const { return m_subtitlingHasBeenSet; }
  template <typename SubtitlingT = SubtitlingConfig>
  void SetSubtitling(SubtitlingT&& value) {
    m_subtitlingHasBeenSet = true;
    m_subtitling = std::forward<SubtitlingT>(value);
  }
  template <typename SubtitlingT = SubtitlingConfig>
  OutputConfig& WithSubtitling(SubtitlingT&& value) {
    SetSubtitling(std::forward<SubtitlingT>(value));
    return *this;
  }
  ///@}
 private:
  CroppingConfig m_cropping;

  ClippingConfig m_clipping;

  SubtitlingConfig m_subtitling;
  bool m_croppingHasBeenSet = false;
  bool m_clippingHasBeenSet = false;
  bool m_subtitlingHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
