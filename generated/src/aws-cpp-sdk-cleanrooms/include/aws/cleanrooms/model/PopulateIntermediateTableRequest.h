/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IntermediateTableComputeConfiguration.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace CleanRooms {
namespace Model {

/**
 */
class PopulateIntermediateTableRequest : public CleanRoomsRequest {
 public:
  AWS_CLEANROOMS_API PopulateIntermediateTableRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "PopulateIntermediateTable"; }

  AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the intermediate table to populate.</p>
   */
  inline const Aws::String& GetIntermediateTableIdentifier() const { return m_intermediateTableIdentifier; }
  inline bool IntermediateTableIdentifierHasBeenSet() const { return m_intermediateTableIdentifierHasBeenSet; }
  template <typename IntermediateTableIdentifierT = Aws::String>
  void SetIntermediateTableIdentifier(IntermediateTableIdentifierT&& value) {
    m_intermediateTableIdentifierHasBeenSet = true;
    m_intermediateTableIdentifier = std::forward<IntermediateTableIdentifierT>(value);
  }
  template <typename IntermediateTableIdentifierT = Aws::String>
  PopulateIntermediateTableRequest& WithIntermediateTableIdentifier(IntermediateTableIdentifierT&& value) {
    SetIntermediateTableIdentifier(std::forward<IntermediateTableIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the membership that contains the intermediate
   * table.</p>
   */
  inline const Aws::String& GetMembershipIdentifier() const { return m_membershipIdentifier; }
  inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }
  template <typename MembershipIdentifierT = Aws::String>
  void SetMembershipIdentifier(MembershipIdentifierT&& value) {
    m_membershipIdentifierHasBeenSet = true;
    m_membershipIdentifier = std::forward<MembershipIdentifierT>(value);
  }
  template <typename MembershipIdentifierT = Aws::String>
  PopulateIntermediateTableRequest& WithMembershipIdentifier(MembershipIdentifierT&& value) {
    SetMembershipIdentifier(std::forward<MembershipIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime parameter values that override the defaults in the stored
   * query.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::String>>
  PopulateIntermediateTableRequest& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
  PopulateIntermediateTableRequest& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compute configuration for the population query execution.</p>
   */
  inline const IntermediateTableComputeConfiguration& GetComputeConfiguration() const { return m_computeConfiguration; }
  inline bool ComputeConfigurationHasBeenSet() const { return m_computeConfigurationHasBeenSet; }
  template <typename ComputeConfigurationT = IntermediateTableComputeConfiguration>
  void SetComputeConfiguration(ComputeConfigurationT&& value) {
    m_computeConfigurationHasBeenSet = true;
    m_computeConfiguration = std::forward<ComputeConfigurationT>(value);
  }
  template <typename ComputeConfigurationT = IntermediateTableComputeConfiguration>
  PopulateIntermediateTableRequest& WithComputeConfiguration(ComputeConfigurationT&& value) {
    SetComputeConfiguration(std::forward<ComputeConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID of the member that pays for the analysis compute costs.</p>
   */
  inline const Aws::String& GetAnalysisPayerAccountId() const { return m_analysisPayerAccountId; }
  inline bool AnalysisPayerAccountIdHasBeenSet() const { return m_analysisPayerAccountIdHasBeenSet; }
  template <typename AnalysisPayerAccountIdT = Aws::String>
  void SetAnalysisPayerAccountId(AnalysisPayerAccountIdT&& value) {
    m_analysisPayerAccountIdHasBeenSet = true;
    m_analysisPayerAccountId = std::forward<AnalysisPayerAccountIdT>(value);
  }
  template <typename AnalysisPayerAccountIdT = Aws::String>
  PopulateIntermediateTableRequest& WithAnalysisPayerAccountId(AnalysisPayerAccountIdT&& value) {
    SetAnalysisPayerAccountId(std::forward<AnalysisPayerAccountIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_intermediateTableIdentifier;

  Aws::String m_membershipIdentifier;

  Aws::Map<Aws::String, Aws::String> m_parameters;

  IntermediateTableComputeConfiguration m_computeConfiguration;

  Aws::String m_analysisPayerAccountId;
  bool m_intermediateTableIdentifierHasBeenSet = false;
  bool m_membershipIdentifierHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_computeConfigurationHasBeenSet = false;
  bool m_analysisPayerAccountIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
