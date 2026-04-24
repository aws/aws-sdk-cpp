/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/VersionFailureReasonCode.h>
#include <aws/groundstation/model/VersionStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GroundStation {
namespace Model {

/**
 * <p>Version information for a contact.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/ContactVersion">AWS
 * API Reference</a></p>
 */
class ContactVersion {
 public:
  AWS_GROUNDSTATION_API ContactVersion() = default;
  AWS_GROUNDSTATION_API ContactVersion(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API ContactVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Version ID of a contact.</p>
   */
  inline int GetVersionId() const { return m_versionId; }
  inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
  inline void SetVersionId(int value) {
    m_versionIdHasBeenSet = true;
    m_versionId = value;
  }
  inline ContactVersion& WithVersionId(int value) {
    SetVersionId(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time the contact version was created in UTC.</p>
   */
  inline const Aws::Utils::DateTime& GetCreated() const { return m_created; }
  inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
  template <typename CreatedT = Aws::Utils::DateTime>
  void SetCreated(CreatedT&& value) {
    m_createdHasBeenSet = true;
    m_created = std::forward<CreatedT>(value);
  }
  template <typename CreatedT = Aws::Utils::DateTime>
  ContactVersion& WithCreated(CreatedT&& value) {
    SetCreated(std::forward<CreatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time the contact version was activated in UTC. A version is activated when it
   * becomes the current active version of the contact.</p>
   */
  inline const Aws::Utils::DateTime& GetActivated() const { return m_activated; }
  inline bool ActivatedHasBeenSet() const { return m_activatedHasBeenSet; }
  template <typename ActivatedT = Aws::Utils::DateTime>
  void SetActivated(ActivatedT&& value) {
    m_activatedHasBeenSet = true;
    m_activated = std::forward<ActivatedT>(value);
  }
  template <typename ActivatedT = Aws::Utils::DateTime>
  ContactVersion& WithActivated(ActivatedT&& value) {
    SetActivated(std::forward<ActivatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time the contact version was superseded in UTC. A version is superseded when
   * a newer version becomes active.</p>
   */
  inline const Aws::Utils::DateTime& GetSuperseded() const { return m_superseded; }
  inline bool SupersededHasBeenSet() const { return m_supersededHasBeenSet; }
  template <typename SupersededT = Aws::Utils::DateTime>
  void SetSuperseded(SupersededT&& value) {
    m_supersededHasBeenSet = true;
    m_superseded = std::forward<SupersededT>(value);
  }
  template <typename SupersededT = Aws::Utils::DateTime>
  ContactVersion& WithSuperseded(SupersededT&& value) {
    SetSuperseded(std::forward<SupersededT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time the contact version was last updated in UTC.</p>
   */
  inline const Aws::Utils::DateTime& GetLastUpdated() const { return m_lastUpdated; }
  inline bool LastUpdatedHasBeenSet() const { return m_lastUpdatedHasBeenSet; }
  template <typename LastUpdatedT = Aws::Utils::DateTime>
  void SetLastUpdated(LastUpdatedT&& value) {
    m_lastUpdatedHasBeenSet = true;
    m_lastUpdated = std::forward<LastUpdatedT>(value);
  }
  template <typename LastUpdatedT = Aws::Utils::DateTime>
  ContactVersion& WithLastUpdated(LastUpdatedT&& value) {
    SetLastUpdated(std::forward<LastUpdatedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Status of the contact version.</p>
   */
  inline VersionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(VersionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ContactVersion& WithStatus(VersionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>List of failure codes for the contact version.</p>
   */
  inline const Aws::Vector<VersionFailureReasonCode>& GetFailureCodes() const { return m_failureCodes; }
  inline bool FailureCodesHasBeenSet() const { return m_failureCodesHasBeenSet; }
  template <typename FailureCodesT = Aws::Vector<VersionFailureReasonCode>>
  void SetFailureCodes(FailureCodesT&& value) {
    m_failureCodesHasBeenSet = true;
    m_failureCodes = std::forward<FailureCodesT>(value);
  }
  template <typename FailureCodesT = Aws::Vector<VersionFailureReasonCode>>
  ContactVersion& WithFailureCodes(FailureCodesT&& value) {
    SetFailureCodes(std::forward<FailureCodesT>(value));
    return *this;
  }
  inline ContactVersion& AddFailureCodes(VersionFailureReasonCode value) {
    m_failureCodesHasBeenSet = true;
    m_failureCodes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Failure message for the contact version.</p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  ContactVersion& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}
 private:
  int m_versionId{0};

  Aws::Utils::DateTime m_created{};

  Aws::Utils::DateTime m_activated{};

  Aws::Utils::DateTime m_superseded{};

  Aws::Utils::DateTime m_lastUpdated{};

  VersionStatus m_status{VersionStatus::NOT_SET};

  Aws::Vector<VersionFailureReasonCode> m_failureCodes;

  Aws::String m_failureMessage;
  bool m_versionIdHasBeenSet = false;
  bool m_createdHasBeenSet = false;
  bool m_activatedHasBeenSet = false;
  bool m_supersededHasBeenSet = false;
  bool m_lastUpdatedHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_failureCodesHasBeenSet = false;
  bool m_failureMessageHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
