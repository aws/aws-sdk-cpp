/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/model/RecoveryPlanServerImpactLevel.h>

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
 * <p>A server within a recovery plan execution step, enriched with execution
 * state.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryPlanExecutionServer">AWS
 * API Reference</a></p>
 */
class RecoveryPlanExecutionServer {
 public:
  AWS_DRS_API RecoveryPlanExecutionServer() = default;
  AWS_DRS_API RecoveryPlanExecutionServer(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API RecoveryPlanExecutionServer& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the source server.</p>
   */
  inline const Aws::String& GetServerArn() const { return m_serverArn; }
  inline bool ServerArnHasBeenSet() const { return m_serverArnHasBeenSet; }
  template <typename ServerArnT = Aws::String>
  void SetServerArn(ServerArnT&& value) {
    m_serverArnHasBeenSet = true;
    m_serverArn = std::forward<ServerArnT>(value);
  }
  template <typename ServerArnT = Aws::String>
  RecoveryPlanExecutionServer& WithServerArn(ServerArnT&& value) {
    SetServerArn(std::forward<ServerArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defaults to CRITICAL if not specified.</p>
   */
  inline RecoveryPlanServerImpactLevel GetImpactLevel() const { return m_impactLevel; }
  inline bool ImpactLevelHasBeenSet() const { return m_impactLevelHasBeenSet; }
  inline void SetImpactLevel(RecoveryPlanServerImpactLevel value) {
    m_impactLevelHasBeenSet = true;
    m_impactLevel = value;
  }
  inline RecoveryPlanExecutionServer& WithImpactLevel(RecoveryPlanServerImpactLevel value) {
    SetImpactLevel(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The DRS recovery job ID. Populated when recovery is initiated for this
   * server.</p>
   */
  inline const Aws::String& GetJobID() const { return m_jobID; }
  inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
  template <typename JobIDT = Aws::String>
  void SetJobID(JobIDT&& value) {
    m_jobIDHasBeenSet = true;
    m_jobID = std::forward<JobIDT>(value);
  }
  template <typename JobIDT = Aws::String>
  RecoveryPlanExecutionServer& WithJobID(JobIDT&& value) {
    SetJobID(std::forward<JobIDT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serverArn;

  RecoveryPlanServerImpactLevel m_impactLevel{RecoveryPlanServerImpactLevel::NOT_SET};

  Aws::String m_jobID;
  bool m_serverArnHasBeenSet = false;
  bool m_impactLevelHasBeenSet = false;
  bool m_jobIDHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
