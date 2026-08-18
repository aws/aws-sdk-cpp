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
 * <p>A server associated with a Recovery Plan Step.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/drs-2020-02-26/RecoveryPlanServer">AWS
 * API Reference</a></p>
 */
class RecoveryPlanServer {
 public:
  AWS_DRS_API RecoveryPlanServer() = default;
  AWS_DRS_API RecoveryPlanServer(Aws::Utils::Json::JsonView jsonValue);
  AWS_DRS_API RecoveryPlanServer& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  RecoveryPlanServer& WithServerArn(ServerArnT&& value) {
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
  inline RecoveryPlanServer& WithImpactLevel(RecoveryPlanServerImpactLevel value) {
    SetImpactLevel(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_serverArn;

  RecoveryPlanServerImpactLevel m_impactLevel{RecoveryPlanServerImpactLevel::NOT_SET};
  bool m_serverArnHasBeenSet = false;
  bool m_impactLevelHasBeenSet = false;
};

}  // namespace Model
}  // namespace drs
}  // namespace Aws
