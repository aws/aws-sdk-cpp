/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains the key observations of an investigation.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/KeyObservations">AWS
 * API Reference</a></p>
 */
class KeyObservations {
 public:
  AWS_GUARDDUTY_API KeyObservations() = default;
  AWS_GUARDDUTY_API KeyObservations(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API KeyObservations& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A short title for the key observations.</p>
   */
  inline const Aws::String& GetTitle() const { return m_title; }
  inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
  template <typename TitleT = Aws::String>
  void SetTitle(TitleT&& value) {
    m_titleHasBeenSet = true;
    m_title = std::forward<TitleT>(value);
  }
  template <typename TitleT = Aws::String>
  KeyObservations& WithTitle(TitleT&& value) {
    SetTitle(std::forward<TitleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A narrative explanation of the key observations.</p>
   */
  inline const Aws::String& GetNarrative() const { return m_narrative; }
  inline bool NarrativeHasBeenSet() const { return m_narrativeHasBeenSet; }
  template <typename NarrativeT = Aws::String>
  void SetNarrative(NarrativeT&& value) {
    m_narrativeHasBeenSet = true;
    m_narrative = std::forward<NarrativeT>(value);
  }
  template <typename NarrativeT = Aws::String>
  KeyObservations& WithNarrative(NarrativeT&& value) {
    SetNarrative(std::forward<NarrativeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The individual key observations.</p>
   */
  inline const Aws::Vector<Aws::String>& GetObservations() const { return m_observations; }
  inline bool ObservationsHasBeenSet() const { return m_observationsHasBeenSet; }
  template <typename ObservationsT = Aws::Vector<Aws::String>>
  void SetObservations(ObservationsT&& value) {
    m_observationsHasBeenSet = true;
    m_observations = std::forward<ObservationsT>(value);
  }
  template <typename ObservationsT = Aws::Vector<Aws::String>>
  KeyObservations& WithObservations(ObservationsT&& value) {
    SetObservations(std::forward<ObservationsT>(value));
    return *this;
  }
  template <typename ObservationsT = Aws::String>
  KeyObservations& AddObservations(ObservationsT&& value) {
    m_observationsHasBeenSet = true;
    m_observations.emplace_back(std::forward<ObservationsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_title;

  Aws::String m_narrative;

  Aws::Vector<Aws::String> m_observations;
  bool m_titleHasBeenSet = false;
  bool m_narrativeHasBeenSet = false;
  bool m_observationsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
