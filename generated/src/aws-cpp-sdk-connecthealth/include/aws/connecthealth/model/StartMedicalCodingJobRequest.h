/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealthRequest.h>
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/MedicalCodesEncounterContext.h>
#include <aws/connecthealth/model/MedicalCodesPatientContext.h>
#include <aws/connecthealth/model/MedicalCodingOutputDataConfig.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace ConnectHealth {
namespace Model {

/**
 */
class StartMedicalCodingJobRequest : public ConnectHealthRequest {
 public:
  AWS_CONNECTHEALTH_API StartMedicalCodingJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartMedicalCodingJob"; }

  AWS_CONNECTHEALTH_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the parent Domain.</p>
   */
  inline const Aws::String& GetDomainId() const { return m_domainId; }
  inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
  template <typename DomainIdT = Aws::String>
  void SetDomainId(DomainIdT&& value) {
    m_domainIdHasBeenSet = true;
    m_domainId = std::forward<DomainIdT>(value);
  }
  template <typename DomainIdT = Aws::String>
  StartMedicalCodingJobRequest& WithDomainId(DomainIdT&& value) {
    SetDomainId(std::forward<DomainIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The clinical text to generate medical codes for, such as a clinical note.</p>
   */
  inline const Aws::String& GetText() const { return m_text; }
  inline bool TextHasBeenSet() const { return m_textHasBeenSet; }
  template <typename TextT = Aws::String>
  void SetText(TextT&& value) {
    m_textHasBeenSet = true;
    m_text = std::forward<TextT>(value);
  }
  template <typename TextT = Aws::String>
  StartMedicalCodingJobRequest& WithText(TextT&& value) {
    SetText(std::forward<TextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Patient context for the job. Providing this information can improve the
   * accuracy of the medical codes.</p>
   */
  inline const MedicalCodesPatientContext& GetPatientContext() const { return m_patientContext; }
  inline bool PatientContextHasBeenSet() const { return m_patientContextHasBeenSet; }
  template <typename PatientContextT = MedicalCodesPatientContext>
  void SetPatientContext(PatientContextT&& value) {
    m_patientContextHasBeenSet = true;
    m_patientContext = std::forward<PatientContextT>(value);
  }
  template <typename PatientContextT = MedicalCodesPatientContext>
  StartMedicalCodingJobRequest& WithPatientContext(PatientContextT&& value) {
    SetPatientContext(std::forward<PatientContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Encounter context for the job. Providing this information can improve the
   * accuracy of the medical codes.</p>
   */
  inline const MedicalCodesEncounterContext& GetEncounterContext() const { return m_encounterContext; }
  inline bool EncounterContextHasBeenSet() const { return m_encounterContextHasBeenSet; }
  template <typename EncounterContextT = MedicalCodesEncounterContext>
  void SetEncounterContext(EncounterContextT&& value) {
    m_encounterContextHasBeenSet = true;
    m_encounterContext = std::forward<EncounterContextT>(value);
  }
  template <typename EncounterContextT = MedicalCodesEncounterContext>
  StartMedicalCodingJobRequest& WithEncounterContext(EncounterContextT&& value) {
    SetEncounterContext(std::forward<EncounterContextT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration for the job.</p>
   */
  inline const MedicalCodingOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
  inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
  template <typename OutputDataConfigT = MedicalCodingOutputDataConfig>
  void SetOutputDataConfig(OutputDataConfigT&& value) {
    m_outputDataConfigHasBeenSet = true;
    m_outputDataConfig = std::forward<OutputDataConfigT>(value);
  }
  template <typename OutputDataConfigT = MedicalCodingOutputDataConfig>
  StartMedicalCodingJobRequest& WithOutputDataConfig(OutputDataConfigT&& value) {
    SetOutputDataConfig(std::forward<OutputDataConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of an ACTIVE medical coding dataset in the Domain to
   * code against. If you don't specify a dataset, the job uses the general medical
   * coding knowledge base.</p>
   */
  inline const Aws::String& GetDatasetId() const { return m_datasetId; }
  inline bool DatasetIdHasBeenSet() const { return m_datasetIdHasBeenSet; }
  template <typename DatasetIdT = Aws::String>
  void SetDatasetId(DatasetIdT&& value) {
    m_datasetIdHasBeenSet = true;
    m_datasetId = std::forward<DatasetIdT>(value);
  }
  template <typename DatasetIdT = Aws::String>
  StartMedicalCodingJobRequest& WithDatasetId(DatasetIdT&& value) {
    SetDatasetId(std::forward<DatasetIdT>(value));
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
  StartMedicalCodingJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_domainId;

  Aws::String m_text;

  MedicalCodesPatientContext m_patientContext;

  MedicalCodesEncounterContext m_encounterContext;

  MedicalCodingOutputDataConfig m_outputDataConfig;

  Aws::String m_datasetId;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_domainIdHasBeenSet = false;
  bool m_textHasBeenSet = false;
  bool m_patientContextHasBeenSet = false;
  bool m_encounterContextHasBeenSet = false;
  bool m_outputDataConfigHasBeenSet = false;
  bool m_datasetIdHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
