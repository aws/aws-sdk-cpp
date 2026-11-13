/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/AnalysisRecord.h>
#include <aws/guardduty/model/FetchRecord.h>
#include <aws/guardduty/model/MetadataRecord.h>
#include <aws/guardduty/model/ObservationRecord.h>

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
 * <p>Contains the structured details for an investigation record. Only the member
 * that matches the record type is set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/SupportingData">AWS
 * API Reference</a></p>
 */
class SupportingData {
 public:
  AWS_GUARDDUTY_API SupportingData() = default;
  AWS_GUARDDUTY_API SupportingData(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API SupportingData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details about data that GuardDuty retrieved. Set for <code>FETCH</code>
   * records.</p>
   */
  inline const FetchRecord& GetFetch() const { return m_fetch; }
  inline bool FetchHasBeenSet() const { return m_fetchHasBeenSet; }
  template <typename FetchT = FetchRecord>
  void SetFetch(FetchT&& value) {
    m_fetchHasBeenSet = true;
    m_fetch = std::forward<FetchT>(value);
  }
  template <typename FetchT = FetchRecord>
  SupportingData& WithFetch(FetchT&& value) {
    SetFetch(std::forward<FetchT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about an assessment that GuardDuty derived from the data. Set for
   * <code>ANALYSIS</code> records.</p>
   */
  inline const AnalysisRecord& GetAnalysis() const { return m_analysis; }
  inline bool AnalysisHasBeenSet() const { return m_analysisHasBeenSet; }
  template <typename AnalysisT = AnalysisRecord>
  void SetAnalysis(AnalysisT&& value) {
    m_analysisHasBeenSet = true;
    m_analysis = std::forward<AnalysisT>(value);
  }
  template <typename AnalysisT = AnalysisRecord>
  SupportingData& WithAnalysis(AnalysisT&& value) {
    SetAnalysis(std::forward<AnalysisT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about a fact that GuardDuty noted about your environment. Set for
   * <code>OBSERVATION</code> records.</p>
   */
  inline const ObservationRecord& GetObservation() const { return m_observation; }
  inline bool ObservationHasBeenSet() const { return m_observationHasBeenSet; }
  template <typename ObservationT = ObservationRecord>
  void SetObservation(ObservationT&& value) {
    m_observationHasBeenSet = true;
    m_observation = std::forward<ObservationT>(value);
  }
  template <typename ObservationT = ObservationRecord>
  SupportingData& WithObservation(ObservationT&& value) {
    SetObservation(std::forward<ObservationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Operational details about the investigation. Set for <code>METADATA</code>
   * records.</p>
   */
  inline const MetadataRecord& GetMetadata() const { return m_metadata; }
  inline bool MetadataHasBeenSet() const { return m_metadataHasBeenSet; }
  template <typename MetadataT = MetadataRecord>
  void SetMetadata(MetadataT&& value) {
    m_metadataHasBeenSet = true;
    m_metadata = std::forward<MetadataT>(value);
  }
  template <typename MetadataT = MetadataRecord>
  SupportingData& WithMetadata(MetadataT&& value) {
    SetMetadata(std::forward<MetadataT>(value));
    return *this;
  }
  ///@}
 private:
  FetchRecord m_fetch;

  AnalysisRecord m_analysis;

  ObservationRecord m_observation;

  MetadataRecord m_metadata;
  bool m_fetchHasBeenSet = false;
  bool m_analysisHasBeenSet = false;
  bool m_observationHasBeenSet = false;
  bool m_metadataHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
