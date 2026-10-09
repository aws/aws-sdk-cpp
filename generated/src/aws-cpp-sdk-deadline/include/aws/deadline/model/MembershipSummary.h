/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/FarmMember.h>
#include <aws/deadline/model/FleetMember.h>
#include <aws/deadline/model/JobMember.h>
#include <aws/deadline/model/QueueMember.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace deadline {
namespace Model {

/**
 * <p>A membership record for a principal on a single Deadline Cloud resource. The
 * summary identifies the resource that the principal is a member of and the
 * principal's membership level for that resource.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/MembershipSummary">AWS
 * API Reference</a></p>
 */
class MembershipSummary {
 public:
  AWS_DEADLINE_API MembershipSummary() = default;
  AWS_DEADLINE_API MembershipSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API MembershipSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A membership on a farm.</p>
   */
  inline const FarmMember& GetFarm() const { return m_farm; }
  inline bool FarmHasBeenSet() const { return m_farmHasBeenSet; }
  template <typename FarmT = FarmMember>
  void SetFarm(FarmT&& value) {
    m_farmHasBeenSet = true;
    m_farm = std::forward<FarmT>(value);
  }
  template <typename FarmT = FarmMember>
  MembershipSummary& WithFarm(FarmT&& value) {
    SetFarm(std::forward<FarmT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A membership on a queue.</p>
   */
  inline const QueueMember& GetQueue() const { return m_queue; }
  inline bool QueueHasBeenSet() const { return m_queueHasBeenSet; }
  template <typename QueueT = QueueMember>
  void SetQueue(QueueT&& value) {
    m_queueHasBeenSet = true;
    m_queue = std::forward<QueueT>(value);
  }
  template <typename QueueT = QueueMember>
  MembershipSummary& WithQueue(QueueT&& value) {
    SetQueue(std::forward<QueueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A membership on a fleet.</p>
   */
  inline const FleetMember& GetFleet() const { return m_fleet; }
  inline bool FleetHasBeenSet() const { return m_fleetHasBeenSet; }
  template <typename FleetT = FleetMember>
  void SetFleet(FleetT&& value) {
    m_fleetHasBeenSet = true;
    m_fleet = std::forward<FleetT>(value);
  }
  template <typename FleetT = FleetMember>
  MembershipSummary& WithFleet(FleetT&& value) {
    SetFleet(std::forward<FleetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A membership on a job.</p>
   */
  inline const JobMember& GetJob() const { return m_job; }
  inline bool JobHasBeenSet() const { return m_jobHasBeenSet; }
  template <typename JobT = JobMember>
  void SetJob(JobT&& value) {
    m_jobHasBeenSet = true;
    m_job = std::forward<JobT>(value);
  }
  template <typename JobT = JobMember>
  MembershipSummary& WithJob(JobT&& value) {
    SetJob(std::forward<JobT>(value));
    return *this;
  }
  ///@}
 private:
  FarmMember m_farm;

  QueueMember m_queue;

  FleetMember m_fleet;

  JobMember m_job;
  bool m_farmHasBeenSet = false;
  bool m_queueHasBeenSet = false;
  bool m_fleetHasBeenSet = false;
  bool m_jobHasBeenSet = false;
};

}  // namespace Model
}  // namespace deadline
}  // namespace Aws
