/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/healthlake/HealthLakeRequest.h>
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/healthlake/model/TransformationInputDataConfig.h>
#include <aws/healthlake/model/TransformationOutputDataConfig.h>

#include <utility>

namespace Aws {
namespace HealthLake {
namespace Model {

/**
 * <p>The request parameters for the <code>StartDataTransformationJob</code>
 * operation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartDataTransformationJobRequest">AWS
 * API Reference</a></p>
 */
class StartDataTransformationJobRequest : public HealthLakeRequest {
 public:
  AWS_HEALTHLAKE_API StartDataTransformationJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartDataTransformationJob"; }

  AWS_HEALTHLAKE_API Aws::String SerializePayload() const override;

  AWS_HEALTHLAKE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon S3 location and format of the source files to transform.</p>
   */
  inline const TransformationInputDataConfig& GetInputDataConfig() const { return m_inputDataConfig; }
  inline bool InputDataConfigHasBeenSet() const { return m_inputDataConfigHasBeenSet; }
  template <typename InputDataConfigT = TransformationInputDataConfig>
  void SetInputDataConfig(InputDataConfigT&& value) {
    m_inputDataConfigHasBeenSet = true;
    m_inputDataConfig = std::forward<InputDataConfigT>(value);
  }
  template <typename InputDataConfigT = TransformationInputDataConfig>
  StartDataTransformationJobRequest& WithInputDataConfig(InputDataConfigT&& value) {
    SetInputDataConfig(std::forward<InputDataConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 output location and AWS Key Management Service (AWS KMS)
   * encryption configuration.</p>
   */
  inline const TransformationOutputDataConfig& GetOutputDataConfig() const { return m_outputDataConfig; }
  inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
  template <typename OutputDataConfigT = TransformationOutputDataConfig>
  void SetOutputDataConfig(OutputDataConfigT&& value) {
    m_outputDataConfigHasBeenSet = true;
    m_outputDataConfig = std::forward<OutputDataConfigT>(value);
  }
  template <typename OutputDataConfigT = TransformationOutputDataConfig>
  StartDataTransformationJobRequest& WithOutputDataConfig(OutputDataConfigT&& value) {
    SetOutputDataConfig(std::forward<OutputDataConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the AWS Identity and Access Management
   * (IAM) role that AWS HealthLake assumes to read from and write to the specified
   * Amazon S3 locations.</p>
   */
  inline const Aws::String& GetDataAccessRoleArn() const { return m_dataAccessRoleArn; }
  inline bool DataAccessRoleArnHasBeenSet() const { return m_dataAccessRoleArnHasBeenSet; }
  template <typename DataAccessRoleArnT = Aws::String>
  void SetDataAccessRoleArn(DataAccessRoleArnT&& value) {
    m_dataAccessRoleArnHasBeenSet = true;
    m_dataAccessRoleArn = std::forward<DataAccessRoleArnT>(value);
  }
  template <typename DataAccessRoleArnT = Aws::String>
  StartDataTransformationJobRequest& WithDataAccessRoleArn(DataAccessRoleArnT&& value) {
    SetDataAccessRoleArn(std::forward<DataAccessRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the operation completes no
   * more than one time. If this token matches a previous request, the service
   * ignores the request but does not return an error.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartDataTransformationJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A descriptive name for the data transformation job.</p>
   */
  inline const Aws::String& GetJobName() const { return m_jobName; }
  inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
  template <typename JobNameT = Aws::String>
  void SetJobName(JobNameT&& value) {
    m_jobNameHasBeenSet = true;
    m_jobName = std::forward<JobNameT>(value);
  }
  template <typename JobNameT = Aws::String>
  StartDataTransformationJobRequest& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the data transformation profile to use for
   * conversion.</p>
   */
  inline const Aws::String& GetProfileId() const { return m_profileId; }
  inline bool ProfileIdHasBeenSet() const { return m_profileIdHasBeenSet; }
  template <typename ProfileIdT = Aws::String>
  void SetProfileId(ProfileIdT&& value) {
    m_profileIdHasBeenSet = true;
    m_profileId = std::forward<ProfileIdT>(value);
  }
  template <typename ProfileIdT = Aws::String>
  StartDataTransformationJobRequest& WithProfileId(ProfileIdT&& value) {
    SetProfileId(std::forward<ProfileIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether drift detection is enabled for this job. When enabled, AWS
   * HealthLake writes a drift report to the output Amazon S3 location alongside the
   * converted files.</p>
   */
  inline bool GetDriftDetectionEnabled() const { return m_driftDetectionEnabled; }
  inline bool DriftDetectionEnabledHasBeenSet() const { return m_driftDetectionEnabledHasBeenSet; }
  inline void SetDriftDetectionEnabled(bool value) {
    m_driftDetectionEnabledHasBeenSet = true;
    m_driftDetectionEnabled = value;
  }
  inline StartDataTransformationJobRequest& WithDriftDetectionEnabled(bool value) {
    SetDriftDetectionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether FHIR R4 Provenance resource generation is enabled for this
   * transformation job. When provenance is enabled, the service also generates
   * related DocumentReference and Device resources. If you don't specify a value,
   * the default is <code>true</code>. To disable provenance output, set this
   * parameter to <code>false</code>.</p>
   */
  inline bool GetProvenanceEnabled() const { return m_provenanceEnabled; }
  inline bool ProvenanceEnabledHasBeenSet() const { return m_provenanceEnabledHasBeenSet; }
  inline void SetProvenanceEnabled(bool value) {
    m_provenanceEnabledHasBeenSet = true;
    m_provenanceEnabled = value;
  }
  inline StartDataTransformationJobRequest& WithProvenanceEnabled(bool value) {
    SetProvenanceEnabled(value);
    return *this;
  }
  ///@}
 private:
  TransformationInputDataConfig m_inputDataConfig;

  TransformationOutputDataConfig m_outputDataConfig;

  Aws::String m_dataAccessRoleArn;

  Aws::String m_clientToken;

  Aws::String m_jobName;

  Aws::String m_profileId;

  bool m_driftDetectionEnabled{false};

  bool m_provenanceEnabled{false};
  bool m_inputDataConfigHasBeenSet = false;
  bool m_outputDataConfigHasBeenSet = false;
  bool m_dataAccessRoleArnHasBeenSet = false;
  bool m_clientTokenHasBeenSet = false;
  bool m_jobNameHasBeenSet = false;
  bool m_profileIdHasBeenSet = false;
  bool m_driftDetectionEnabledHasBeenSet = false;
  bool m_provenanceEnabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
