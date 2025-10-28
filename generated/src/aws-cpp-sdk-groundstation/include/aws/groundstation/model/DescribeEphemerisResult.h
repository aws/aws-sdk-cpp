/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/EphemerisErrorReason.h>
#include <aws/groundstation/model/EphemerisInvalidReason.h>
#include <aws/groundstation/model/EphemerisStatus.h>
#include <aws/groundstation/model/EphemerisTypeDescription.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {
class DescribeEphemerisResult {
 public:
  AWS_GROUNDSTATION_API DescribeEphemerisResult() = default;
  AWS_GROUNDSTATION_API DescribeEphemerisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_GROUNDSTATION_API DescribeEphemerisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The AWS Ground Station ephemeris ID.</p>
   */
  inline const Aws::String& GetEphemerisId() const { return m_ephemerisId; }
  template <typename EphemerisIdT = Aws::String>
  void SetEphemerisId(EphemerisIdT&& value) {
    m_ephemerisIdHasBeenSet = true;
    m_ephemerisId = std::forward<EphemerisIdT>(value);
  }
  template <typename EphemerisIdT = Aws::String>
  DescribeEphemerisResult& WithEphemerisId(EphemerisIdT&& value) {
    SetEphemerisId(std::forward<EphemerisIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The AWS Ground Station satellite ID associated with ephemeris.</p>
   */
  inline const Aws::String& GetSatelliteId() const { return m_satelliteId; }
  template <typename SatelliteIdT = Aws::String>
  void SetSatelliteId(SatelliteIdT&& value) {
    m_satelliteIdHasBeenSet = true;
    m_satelliteId = std::forward<SatelliteIdT>(value);
  }
  template <typename SatelliteIdT = Aws::String>
  DescribeEphemerisResult& WithSatelliteId(SatelliteIdT&& value) {
    SetSatelliteId(std::forward<SatelliteIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the ephemeris.</p>
   */
  inline EphemerisStatus GetStatus() const { return m_status; }
  inline void SetStatus(EphemerisStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DescribeEphemerisResult& WithStatus(EphemerisStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A priority score that determines which ephemeris to use when multiple
   * ephemerides overlap.</p> <p>Higher numbers take precedence. The default is 1.
   * Must be 1 or greater.</p>
   */
  inline int GetPriority() const { return m_priority; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline DescribeEphemerisResult& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the ephemeris was uploaded in UTC.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  DescribeEphemerisResult& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether or not the ephemeris is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline DescribeEphemerisResult& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name that you can use to identify the ephemeris.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DescribeEphemerisResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Tags assigned to an ephemeris.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Map<Aws::String, Aws::String>>
  DescribeEphemerisResult& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
  DescribeEphemerisResult& AddTags(TagsKeyT&& key, TagsValueT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Supplied ephemeris data.</p>
   */
  inline const EphemerisTypeDescription& GetSuppliedData() const { return m_suppliedData; }
  template <typename SuppliedDataT = EphemerisTypeDescription>
  void SetSuppliedData(SuppliedDataT&& value) {
    m_suppliedDataHasBeenSet = true;
    m_suppliedData = std::forward<SuppliedDataT>(value);
  }
  template <typename SuppliedDataT = EphemerisTypeDescription>
  DescribeEphemerisResult& WithSuppliedData(SuppliedDataT&& value) {
    SetSuppliedData(std::forward<SuppliedDataT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reason that an ephemeris failed validation. Appears only when the status is
   * <code>INVALID</code>.</p>
   */
  inline EphemerisInvalidReason GetInvalidReason() const { return m_invalidReason; }
  inline void SetInvalidReason(EphemerisInvalidReason value) {
    m_invalidReasonHasBeenSet = true;
    m_invalidReason = value;
  }
  inline DescribeEphemerisResult& WithInvalidReason(EphemerisInvalidReason value) {
    SetInvalidReason(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed error information for ephemerides with <code>INVALID</code>
   * status.</p> <p>Provides specific error codes and messages to help diagnose
   * validation failures.</p>
   */
  inline const Aws::Vector<EphemerisErrorReason>& GetErrorReasons() const { return m_errorReasons; }
  template <typename ErrorReasonsT = Aws::Vector<EphemerisErrorReason>>
  void SetErrorReasons(ErrorReasonsT&& value) {
    m_errorReasonsHasBeenSet = true;
    m_errorReasons = std::forward<ErrorReasonsT>(value);
  }
  template <typename ErrorReasonsT = Aws::Vector<EphemerisErrorReason>>
  DescribeEphemerisResult& WithErrorReasons(ErrorReasonsT&& value) {
    SetErrorReasons(std::forward<ErrorReasonsT>(value));
    return *this;
  }
  template <typename ErrorReasonsT = EphemerisErrorReason>
  DescribeEphemerisResult& AddErrorReasons(ErrorReasonsT&& value) {
    m_errorReasonsHasBeenSet = true;
    m_errorReasons.emplace_back(std::forward<ErrorReasonsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeEphemerisResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ephemerisId;
  bool m_ephemerisIdHasBeenSet = false;

  Aws::String m_satelliteId;
  bool m_satelliteIdHasBeenSet = false;

  EphemerisStatus m_status{EphemerisStatus::NOT_SET};
  bool m_statusHasBeenSet = false;

  int m_priority{0};
  bool m_priorityHasBeenSet = false;

  Aws::Utils::DateTime m_creationTime{};
  bool m_creationTimeHasBeenSet = false;

  bool m_enabled{false};
  bool m_enabledHasBeenSet = false;

  Aws::String m_name;
  bool m_nameHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_tags;
  bool m_tagsHasBeenSet = false;

  EphemerisTypeDescription m_suppliedData;
  bool m_suppliedDataHasBeenSet = false;

  EphemerisInvalidReason m_invalidReason{EphemerisInvalidReason::NOT_SET};
  bool m_invalidReasonHasBeenSet = false;

  Aws::Vector<EphemerisErrorReason> m_errorReasons;
  bool m_errorReasonsHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
