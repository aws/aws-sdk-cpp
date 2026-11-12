/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/FindingReference.h>

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
 * <p>Contains information about a process in a process lineage.
 * <code>ParentUuid</code> links each process to its parent process.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Process">AWS
 * API Reference</a></p>
 */
class Process {
 public:
  AWS_GUARDDUTY_API Process() = default;
  AWS_GUARDDUTY_API Process(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Process& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the process.</p>
   */
  inline const Aws::String& GetUuid() const { return m_uuid; }
  inline bool UuidHasBeenSet() const { return m_uuidHasBeenSet; }
  template <typename UuidT = Aws::String>
  void SetUuid(UuidT&& value) {
    m_uuidHasBeenSet = true;
    m_uuid = std::forward<UuidT>(value);
  }
  template <typename UuidT = Aws::String>
  Process& WithUuid(UuidT&& value) {
    SetUuid(std::forward<UuidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the process.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  Process& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the process executable.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  Process& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the parent process. Not set for the root
   * process.</p>
   */
  inline const Aws::String& GetParentUuid() const { return m_parentUuid; }
  inline bool ParentUuidHasBeenSet() const { return m_parentUuidHasBeenSet; }
  template <typename ParentUuidT = Aws::String>
  void SetParentUuid(ParentUuidT&& value) {
    m_parentUuidHasBeenSet = true;
    m_parentUuid = std::forward<ParentUuidT>(value);
  }
  template <typename ParentUuidT = Aws::String>
  Process& WithParentUuid(ParentUuidT&& value) {
    SetParentUuid(std::forward<ParentUuidT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The findings associated with this process.</p>
   */
  inline const Aws::Vector<FindingReference>& GetFindings() const { return m_findings; }
  inline bool FindingsHasBeenSet() const { return m_findingsHasBeenSet; }
  template <typename FindingsT = Aws::Vector<FindingReference>>
  void SetFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings = std::forward<FindingsT>(value);
  }
  template <typename FindingsT = Aws::Vector<FindingReference>>
  Process& WithFindings(FindingsT&& value) {
    SetFindings(std::forward<FindingsT>(value));
    return *this;
  }
  template <typename FindingsT = FindingReference>
  Process& AddFindings(FindingsT&& value) {
    m_findingsHasBeenSet = true;
    m_findings.emplace_back(std::forward<FindingsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_uuid;

  Aws::String m_name;

  Aws::String m_path;

  Aws::String m_parentUuid;

  Aws::Vector<FindingReference> m_findings;
  bool m_uuidHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_pathHasBeenSet = false;
  bool m_parentUuidHasBeenSet = false;
  bool m_findingsHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
