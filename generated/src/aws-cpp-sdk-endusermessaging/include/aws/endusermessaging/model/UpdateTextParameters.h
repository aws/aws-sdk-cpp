/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/endusermessaging/EndUserMessaging_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EndUserMessaging {
namespace Model {

/**
 * <p>The updated delivery parameters for the text channel. Absent members preserve
 * the current value, and the empty sentinel on a member clears it.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/endusermessaging-2026-09-21/UpdateTextParameters">AWS
 * API Reference</a></p>
 */
class UpdateTextParameters {
 public:
  AWS_ENDUSERMESSAGING_API UpdateTextParameters() = default;
  AWS_ENDUSERMESSAGING_API UpdateTextParameters(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API UpdateTextParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ENDUSERMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The updated freeform SMS or RCS template body. An empty string clears the
   * previously stored value.</p>
   */
  inline const Aws::String& GetInlineTemplateBody() const { return m_inlineTemplateBody; }
  inline bool InlineTemplateBodyHasBeenSet() const { return m_inlineTemplateBodyHasBeenSet; }
  template <typename InlineTemplateBodyT = Aws::String>
  void SetInlineTemplateBody(InlineTemplateBodyT&& value) {
    m_inlineTemplateBodyHasBeenSet = true;
    m_inlineTemplateBody = std::forward<InlineTemplateBodyT>(value);
  }
  template <typename InlineTemplateBodyT = Aws::String>
  UpdateTextParameters& WithInlineTemplateBody(InlineTemplateBodyT&& value) {
    SetInlineTemplateBody(std::forward<InlineTemplateBodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The updated map of country-specific parameters that control one-time passcode
   * delivery. An empty map clears the previously stored value.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetDestinationCountryParameters() const { return m_destinationCountryParameters; }
  inline bool DestinationCountryParametersHasBeenSet() const { return m_destinationCountryParametersHasBeenSet; }
  template <typename DestinationCountryParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetDestinationCountryParameters(DestinationCountryParametersT&& value) {
    m_destinationCountryParametersHasBeenSet = true;
    m_destinationCountryParameters = std::forward<DestinationCountryParametersT>(value);
  }
  template <typename DestinationCountryParametersT = Aws::Map<Aws::String, Aws::String>>
  UpdateTextParameters& WithDestinationCountryParameters(DestinationCountryParametersT&& value) {
    SetDestinationCountryParameters(std::forward<DestinationCountryParametersT>(value));
    return *this;
  }
  template <typename DestinationCountryParametersKeyT = Aws::String, typename DestinationCountryParametersValueT = Aws::String>
  UpdateTextParameters& AddDestinationCountryParameters(DestinationCountryParametersKeyT&& key,
                                                        DestinationCountryParametersValueT&& value) {
    m_destinationCountryParametersHasBeenSet = true;
    m_destinationCountryParameters.emplace(std::forward<DestinationCountryParametersKeyT>(key),
                                           std::forward<DestinationCountryParametersValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_inlineTemplateBody;

  Aws::Map<Aws::String, Aws::String> m_destinationCountryParameters;
  bool m_inlineTemplateBodyHasBeenSet = false;
  bool m_destinationCountryParametersHasBeenSet = false;
};

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
