/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthRequest.h>
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/InputDataConfig.h>
#include <aws/connecthealth/model/InsightsContext.h>
#include <aws/connecthealth/model/OutputDataConfig.h>
#include <aws/connecthealth/model/PatientInsightsEncounterContext.h>
#include <aws/connecthealth/model/PatientInsightsPatientContext.h>
#include <aws/connecthealth/model/UserContext.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ConnectHealth {
namespace Model {

/**
 */
class StartPatientInsightsJobRequest : public ConnectHealthRequest {
 public:
  AWS_CONNECTHEALTH_API StartPatientInsightsJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartPatientInsightsJob"; }

  AWS_CONNECTHEALTH_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p/>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  StartPatientInsightsJobRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const PatientInsightsPatientContext& GetPatientContext() const { return m_patientContext; }
  inline bool PatientContextHasBeenSet() const { return m_patientContextHasBeenSet; }
  template <typename PatientContextT = PatientInsightsPatientContext>
  void SetPatientContext(PatientContextT&& value) {
    m_patientContextHasBeenSet = true;
    m_patientContext = std::forward<PatientContextT>(value);
  }
  template <typename PatientContextT = PatientInsightsPatientContext>
  StartPatientInsightsJobRequest& WithPatientContext(PatientContextT&& value) {
    SetPatientContext(std::forward<PatientContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const InsightsContext& GetInsightsContext() const { return m_insightsContext; }
  inline bool InsightsContextHasBeenSet() const { return m_insightsContextHasBeenSet; }
  template <typename InsightsContextT = InsightsContext>
  void SetInsightsContext(InsightsContextT&& value) {
    m_insightsContextHasBeenSet = true;
    m_insightsContext = std::forward<InsightsContextT>(value);
  }
  template <typename InsightsContextT = InsightsContext>
  StartPatientInsightsJobRequest& WithInsightsContext(InsightsContextT&& value) {
    SetInsightsContext(std::forward<InsightsContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const PatientInsightsEncounterContext& GetEncounterContext() const { return m_encounterContext; }
  inline bool EncounterContextHasBeenSet() const { return m_encounterContextHasBeenSet; }
  template <typename EncounterContextT = PatientInsightsEncounterContext>
  void SetEncounterContext(EncounterContextT&& value) {
    m_encounterContextHasBeenSet = true;
    m_encounterContext = std::forward<EncounterContextT>(value);
  }
  template <typename EncounterContextT = PatientInsightsEncounterContext>
  StartPatientInsightsJobRequest& WithEncounterContext(EncounterContextT&& value) {
    SetEncounterContext(std::forward<EncounterContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const UserContext& GetUserContext() const { return m_userContext; }
  inline bool UserContextHasBeenSet() const { return m_userContextHasBeenSet; }
  template <typename UserContextT = UserContext>
  void SetUserContext(UserContextT&& value) {
    m_userContextHasBeenSet = true;
    m_userContext = std::forward<UserContextT>(value);
  }
  template <typename UserContextT = UserContext>
  StartPatientInsightsJobRequest& WithUserContext(UserContextT&& value) {
    SetUserContext(std::forward<UserContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const InputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
  inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
  template <typename InputDataConfigT = InputDataConfig>
  void SetInputDataConfig(InputDataConfigT&& value) {
    m_inputDataConfigHasBeenSet = true;
    m_inputDataConfig = std::forward<InputDataConfigT>(value);
  }
  template <typename InputDataConfigT = InputDataConfig>
  StartPatientInsightsJobRequest& WithInputDataConfig(InputDataConfigT&& value) {
    SetInputDataConfig(std::forward<InputDataConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p/>
   */
  inline const OutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
  inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
  template <typename OutputDataConfigT = OutputDataConfig>
  void SetOutputDataConfig(OutputDataConfigT&& value) {
    m_outputDataConfigHasBeenSet = true;
    m_outputDataConfig = std::forward<OutputDataConfigT>(value);
  }
  template <typename OutputDataConfigT = OutputDataConfig>
  StartPatientInsightsJobRequest& WithOutputDataConfig(OutputDataConfigT&& value) {
    SetOutputDataConfig(std::forward<OutputDataConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
   * of the request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartPatientInsightsJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  PatientInsightsPatientContext m_patientContext;

  InsightsContext m_insightsContext;

  PatientInsightsEncounterContext m_encounterContext;

  UserContext m_userContext;

  InputDataConfig m_inputDataConfig;

  OutputDataConfig m_outputDataConfig;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_domainIdHasBeenSet = false;
  bool m_patientContextHasBeenSet = false;
  bool m_insightsContextHasBeenSet = false;
  bool m_encounterContextHasBeenSet = false;
  bool m_userContextHasBeenSet = false;
  bool m_inputDataConfigHasBeenSet = false;
  bool m_outputDataConfigHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
