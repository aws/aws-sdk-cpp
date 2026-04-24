/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/ConversionProperties.h>
#include <aws/drs/model/EventResourceData.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace drs {
namespace Model {

/**
 * <p>Metadata associated with a Job log.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/JobLogEventData">AWS
 * API Reference</a></p>
 */
class JobLogEventData {
 public:
  AWS_DRS_API JobLogEventData() = default;
  AWS_DRS_API JobLogEventData(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API JobLogEventData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of a Source Server.</p>
   */
  inline const Aws::String& GetSourceServerID() const { return m_sourceServerID; }
  inline bool SourceServerIDHasBeenSet() const { return m_sourceServerIDHasBeenSet; }
  template <typename SourceServerIDT = Aws::String>
  void SetSourceServerID(SourceServerIDT&& value) {
    m_sourceServerIDHasBeenSet = true;
    m_sourceServerID = std::forward<SourceServerIDT>(value);
  }
  template <typename SourceServerIDT = Aws::String>
  JobLogEventData& WithSourceServerID(SourceServerIDT&& value) {
    SetSourceServerID(std::forward<SourceServerIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of a conversion server.</p>
   */
  inline const Aws::String& GetConversionServerID() const { return m_conversionServerID; }
  inline bool ConversionServerIDHasBeenSet() const { return m_conversionServerIDHasBeenSet; }
  template <typename ConversionServerIDT = Aws::String>
  void SetConversionServerID(ConversionServerIDT&& value) {
    m_conversionServerIDHasBeenSet = true;
    m_conversionServerID = std::forward<ConversionServerIDT>(value);
  }
  template <typename ConversionServerIDT = Aws::String>
  JobLogEventData& WithConversionServerID(ConversionServerIDT&& value) {
    SetConversionServerID(std::forward<ConversionServerIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of a Recovery Instance.</p>
   */
  inline const Aws::String& GetTargetInstanceID() const { return m_targetInstanceID; }
  inline bool TargetInstanceIDHasBeenSet() const { return m_targetInstanceIDHasBeenSet; }
  template <typename TargetInstanceIDT = Aws::String>
  void SetTargetInstanceID(TargetInstanceIDT&& value) {
    m_targetInstanceIDHasBeenSet = true;
    m_targetInstanceID = std::forward<TargetInstanceIDT>(value);
  }
  template <typename TargetInstanceIDT = Aws::String>
  JobLogEventData& WithTargetInstanceID(TargetInstanceIDT&& value) {
    SetTargetInstanceID(std::forward<TargetInstanceIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string representing a job error.</p>
   */
  inline const Aws::String& GetRawError() const { return m_rawError; }
  inline bool RawErrorHasBeenSet() const { return m_rawErrorHasBeenSet; }
  template <typename RawErrorT = Aws::String>
  void SetRawError(RawErrorT&& value) {
    m_rawErrorHasBeenSet = true;
    m_rawError = std::forward<RawErrorT>(value);
  }
  template <typename RawErrorT = Aws::String>
  JobLogEventData& WithRawError(RawErrorT&& value) {
    SetRawError(std::forward<RawErrorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Properties of a conversion job</p>
   */
  inline const ConversionProperties& GetConversionProperties() const { return m_conversionProperties; }
  inline bool ConversionPropertiesHasBeenSet() const { return m_conversionPropertiesHasBeenSet; }
  template <typename ConversionPropertiesT = ConversionProperties>
  void SetConversionProperties(ConversionPropertiesT&& value) {
    m_conversionPropertiesHasBeenSet = true;
    m_conversionProperties = std::forward<ConversionPropertiesT>(value);
  }
  template <typename ConversionPropertiesT = ConversionProperties>
  JobLogEventData& WithConversionProperties(ConversionPropertiesT&& value) {
    SetConversionProperties(std::forward<ConversionPropertiesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Properties of resource related to a job event.</p>
   */
  inline const EventResourceData& GetEventResourceData() const { return m_eventResourceData; }
  inline bool EventResourceDataHasBeenSet() const { return m_eventResourceDataHasBeenSet; }
  template <typename EventResourceDataT = EventResourceData>
  void SetEventResourceData(EventResourceDataT&& value) {
    m_eventResourceDataHasBeenSet = true;
    m_eventResourceData = std::forward<EventResourceDataT>(value);
  }
  template <typename EventResourceDataT = EventResourceData>
  JobLogEventData& WithEventResourceData(EventResourceDataT&& value) {
    SetEventResourceData(std::forward<EventResourceDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Retries for this operation.</p>
   */
  inline long long GetAttemptCount() const { return m_attemptCount; }
  inline bool AttemptCountHasBeenSet() const { return m_attemptCountHasBeenSet; }
  inline void SetAttemptCount(long long value) {
    m_attemptCountHasBeenSet = true;
    m_attemptCount = value;
  }
  inline JobLogEventData& WithAttemptCount(long long value) {
    SetAttemptCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of retries that will be attempted if this operation
   * failed.</p>
   */
  inline long long GetMaxAttemptsCount() const { return m_maxAttemptsCount; }
  inline bool MaxAttemptsCountHasBeenSet() const { return m_maxAttemptsCountHasBeenSet; }
  inline void SetMaxAttemptsCount(long long value) {
    m_maxAttemptsCountHasBeenSet = true;
    m_maxAttemptsCount = value;
  }
  inline JobLogEventData& WithMaxAttemptsCount(long long value) {
    SetMaxAttemptsCount(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceServerID;

  Aws::String m_conversionServerID;

  Aws::String m_targetInstanceID;

  Aws::String m_rawError;

  ConversionProperties m_conversionProperties;

  EventResourceData m_eventResourceData;

  long long m_attemptCount{0};

  long long m_maxAttemptsCount{0};
  bool m_sourceServerIDHasBeenSet = false;
  bool m_conversionServerIDHasBeenSet = false;
  bool m_targetInstanceIDHasBeenSet = false;
  bool m_rawErrorHasBeenSet = false;
  bool m_conversionPropertiesHasBeenSet = false;
  bool m_eventResourceDataHasBeenSet = false;
  bool m_attemptCountHasBeenSet = false;
  bool m_maxAttemptsCountHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
