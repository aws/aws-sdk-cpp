/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ApplicationSignals {
namespace Model {

/**
 * <p>A structure that contains identifying information for a service level
 * objective entity.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/ServiceLevelObjectiveEntity">AWS
 * API Reference</a></p>
 */
class ServiceLevelObjectiveEntity {
 public:
  AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveEntity() = default;
  AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveEntity(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API ServiceLevelObjectiveEntity& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the service level objective.</p>
   */
  inline const Aws::String& GetSloName() const { return m_sloName; }
  inline bool SloNameHasBeenSet() const { return m_sloNameHasBeenSet; }
  template <typename SloNameT = Aws::String>
  void SetSloName(SloNameT&& value) {
    m_sloNameHasBeenSet = true;
    m_sloName = std::forward<SloNameT>(value);
  }
  template <typename SloNameT = Aws::String>
  ServiceLevelObjectiveEntity& WithSloName(SloNameT&& value) {
    SetSloName(std::forward<SloNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the service level objective. The SLO must be provided with ARN for
   * cross-account access.</p>
   */
  inline const Aws::String& GetSloArn() const { return m_sloArn; }
  inline bool SloArnHasBeenSet() const { return m_sloArnHasBeenSet; }
  template <typename SloArnT = Aws::String>
  void SetSloArn(SloArnT&& value) {
    m_sloArnHasBeenSet = true;
    m_sloArn = std::forward<SloArnT>(value);
  }
  template <typename SloArnT = Aws::String>
  ServiceLevelObjectiveEntity& WithSloArn(SloArnT&& value) {
    SetSloArn(std::forward<SloArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sloName;

  Aws::String m_sloArn;
  bool m_sloNameHasBeenSet = false;
  bool m_sloArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace ApplicationSignals
}  // namespace Aws
