/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/MembershipJobComputePaymentConfig.h>
#include <aws/cleanrooms/model/MembershipMLPaymentConfig.h>
#include <aws/cleanrooms/model/MembershipQueryComputePaymentConfig.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CleanRooms {
namespace Model {

/**
 * <p>An object representing the payment responsibilities to update for the
 * membership.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/UpdateMembershipPaymentConfiguration">AWS
 * API Reference</a></p>
 */
class UpdateMembershipPaymentConfiguration {
 public:
  AWS_CLEANROOMS_API UpdateMembershipPaymentConfiguration() = default;
  AWS_CLEANROOMS_API UpdateMembershipPaymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API UpdateMembershipPaymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const MembershipQueryComputePaymentConfig& GetQueryCompute() const { return m_queryCompute; }
  inline bool QueryComputeHasBeenSet() const { return m_queryComputeHasBeenSet; }
  template <typename QueryComputeT = MembershipQueryComputePaymentConfig>
  void SetQueryCompute(QueryComputeT&& value) {
    m_queryComputeHasBeenSet = true;
    m_queryCompute = std::forward<QueryComputeT>(value);
  }
  template <typename QueryComputeT = MembershipQueryComputePaymentConfig>
  UpdateMembershipPaymentConfiguration& WithQueryCompute(QueryComputeT&& value) {
    SetQueryCompute(std::forward<QueryComputeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MembershipMLPaymentConfig& GetMachineLearning() const { return m_machineLearning; }
  inline bool MachineLearningHasBeenSet() const { return m_machineLearningHasBeenSet; }
  template <typename MachineLearningT = MembershipMLPaymentConfig>
  void SetMachineLearning(MachineLearningT&& value) {
    m_machineLearningHasBeenSet = true;
    m_machineLearning = std::forward<MachineLearningT>(value);
  }
  template <typename MachineLearningT = MembershipMLPaymentConfig>
  UpdateMembershipPaymentConfiguration& WithMachineLearning(MachineLearningT&& value) {
    SetMachineLearning(std::forward<MachineLearningT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MembershipJobComputePaymentConfig& GetJobCompute() const { return m_jobCompute; }
  inline bool JobComputeHasBeenSet() const { return m_jobComputeHasBeenSet; }
  template <typename JobComputeT = MembershipJobComputePaymentConfig>
  void SetJobCompute(JobComputeT&& value) {
    m_jobComputeHasBeenSet = true;
    m_jobCompute = std::forward<JobComputeT>(value);
  }
  template <typename JobComputeT = MembershipJobComputePaymentConfig>
  UpdateMembershipPaymentConfiguration& WithJobCompute(JobComputeT&& value) {
    SetJobCompute(std::forward<JobComputeT>(value));
    return *this;
  }
  ///@}
 private:
  MembershipQueryComputePaymentConfig m_queryCompute;

  MembershipMLPaymentConfig m_machineLearning;

  MembershipJobComputePaymentConfig m_jobCompute;
  bool m_queryComputeHasBeenSet = false;
  bool m_machineLearningHasBeenSet = false;
  bool m_jobComputeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
