/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/groundstation/GroundStation_EXPORTS.h>
#include <aws/groundstation/model/EphemerisStatus.h>
#include <aws/groundstation/model/EphemerisType.h>
#include <aws/groundstation/model/S3Object.h>

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
 * <p>Ephemeris item.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/groundstation-2019-05-23/EphemerisItem">AWS
 * API Reference</a></p>
 */
class EphemerisItem {
 public:
  AWS_GROUNDSTATION_API EphemerisItem() = default;
  AWS_GROUNDSTATION_API EphemerisItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API EphemerisItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GROUNDSTATION_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The AWS Ground Station ephemeris ID.</p>
   */
  inline const Aws::String& GetEphemerisId() const { return m_ephemerisId; }
  inline bool EphemerisIdHasBeenSet() const { return m_ephemerisIdHasBeenSet; }
  template <typename EphemerisIdT = Aws::String>
  void SetEphemerisId(EphemerisIdT&& value) {
    m_ephemerisIdHasBeenSet = true;
    m_ephemerisId = std::forward<EphemerisIdT>(value);
  }
  template <typename EphemerisIdT = Aws::String>
  EphemerisItem& WithEphemerisId(EphemerisIdT&& value) {
    SetEphemerisId(std::forward<EphemerisIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of ephemeris.</p>
   */
  inline EphemerisType GetEphemerisType() const { return m_ephemerisType; }
  inline bool EphemerisTypeHasBeenSet() const { return m_ephemerisTypeHasBeenSet; }
  inline void SetEphemerisType(EphemerisType value) {
    m_ephemerisTypeHasBeenSet = true;
    m_ephemerisType = value;
  }
  inline EphemerisItem& WithEphemerisType(EphemerisType value) {
    SetEphemerisType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the ephemeris.</p>
   */
  inline EphemerisStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(EphemerisStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline EphemerisItem& WithStatus(EphemerisStatus value) {
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
  inline bool PriorityHasBeenSet() const { return m_priorityHasBeenSet; }
  inline void SetPriority(int value) {
    m_priorityHasBeenSet = true;
    m_priority = value;
  }
  inline EphemerisItem& WithPriority(int value) {
    SetPriority(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether or not the ephemeris is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline EphemerisItem& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the ephemeris was uploaded in UTC.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  EphemerisItem& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A name that you can use to identify the ephemeris.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  EphemerisItem& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Source Amazon S3 object used for the ephemeris.</p>
   */
  inline const S3Object& GetSourceS3Object() const { return m_sourceS3Object; }
  inline bool SourceS3ObjectHasBeenSet() const { return m_sourceS3ObjectHasBeenSet; }
  template <typename SourceS3ObjectT = S3Object>
  void SetSourceS3Object(SourceS3ObjectT&& value) {
    m_sourceS3ObjectHasBeenSet = true;
    m_sourceS3Object = std::forward<SourceS3ObjectT>(value);
  }
  template <typename SourceS3ObjectT = S3Object>
  EphemerisItem& WithSourceS3Object(SourceS3ObjectT&& value) {
    SetSourceS3Object(std::forward<SourceS3ObjectT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ephemerisId;

  EphemerisType m_ephemerisType{EphemerisType::NOT_SET};

  EphemerisStatus m_status{EphemerisStatus::NOT_SET};

  int m_priority{0};

  bool m_enabled{false};

  Aws::Utils::DateTime m_creationTime{};

  Aws::String m_name;

  S3Object m_sourceS3Object;
  bool m_ephemerisIdHasBeenSet = false;
  bool m_ephemerisTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_priorityHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_sourceS3ObjectHasBeenSet = false;
};

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
