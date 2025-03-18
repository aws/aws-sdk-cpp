/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectStage.h>
#include <aws/bedrock-data-automation/model/StandardOutputConfiguration.h>
#include <aws/bedrock-data-automation/model/CustomOutputConfiguration.h>
#include <aws/bedrock-data-automation/model/OverrideConfiguration.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectStatus.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockDataAutomation
{
namespace Model
{

  /**
   * <p>Contains the information of a DataAutomationProject.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DataAutomationProject">AWS
   * API Reference</a></p>
   */
  class DataAutomationProject
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API DataAutomationProject() = default;
    AWS_BEDROCKDATAAUTOMATION_API DataAutomationProject(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API DataAutomationProject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetProjectArn() const { return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    template<typename ProjectArnT = Aws::String>
    void SetProjectArn(ProjectArnT&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::forward<ProjectArnT>(value); }
    template<typename ProjectArnT = Aws::String>
    DataAutomationProject& WithProjectArn(ProjectArnT&& value) { SetProjectArn(std::forward<ProjectArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DataAutomationProject& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DataAutomationProject& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetProjectName() const { return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    template<typename ProjectNameT = Aws::String>
    void SetProjectName(ProjectNameT&& value) { m_projectNameHasBeenSet = true; m_projectName = std::forward<ProjectNameT>(value); }
    template<typename ProjectNameT = Aws::String>
    DataAutomationProject& WithProjectName(ProjectNameT&& value) { SetProjectName(std::forward<ProjectNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline DataAutomationProjectStage GetProjectStage() const { return m_projectStage; }
    inline bool ProjectStageHasBeenSet() const { return m_projectStageHasBeenSet; }
    inline void SetProjectStage(DataAutomationProjectStage value) { m_projectStageHasBeenSet = true; m_projectStage = value; }
    inline DataAutomationProject& WithProjectStage(DataAutomationProjectStage value) { SetProjectStage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetProjectDescription() const { return m_projectDescription; }
    inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }
    template<typename ProjectDescriptionT = Aws::String>
    void SetProjectDescription(ProjectDescriptionT&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::forward<ProjectDescriptionT>(value); }
    template<typename ProjectDescriptionT = Aws::String>
    DataAutomationProject& WithProjectDescription(ProjectDescriptionT&& value) { SetProjectDescription(std::forward<ProjectDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const StandardOutputConfiguration& GetStandardOutputConfiguration() const { return m_standardOutputConfiguration; }
    inline bool StandardOutputConfigurationHasBeenSet() const { return m_standardOutputConfigurationHasBeenSet; }
    template<typename StandardOutputConfigurationT = StandardOutputConfiguration>
    void SetStandardOutputConfiguration(StandardOutputConfigurationT&& value) { m_standardOutputConfigurationHasBeenSet = true; m_standardOutputConfiguration = std::forward<StandardOutputConfigurationT>(value); }
    template<typename StandardOutputConfigurationT = StandardOutputConfiguration>
    DataAutomationProject& WithStandardOutputConfiguration(StandardOutputConfigurationT&& value) { SetStandardOutputConfiguration(std::forward<StandardOutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomOutputConfiguration& GetCustomOutputConfiguration() const { return m_customOutputConfiguration; }
    inline bool CustomOutputConfigurationHasBeenSet() const { return m_customOutputConfigurationHasBeenSet; }
    template<typename CustomOutputConfigurationT = CustomOutputConfiguration>
    void SetCustomOutputConfiguration(CustomOutputConfigurationT&& value) { m_customOutputConfigurationHasBeenSet = true; m_customOutputConfiguration = std::forward<CustomOutputConfigurationT>(value); }
    template<typename CustomOutputConfigurationT = CustomOutputConfiguration>
    DataAutomationProject& WithCustomOutputConfiguration(CustomOutputConfigurationT&& value) { SetCustomOutputConfiguration(std::forward<CustomOutputConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const OverrideConfiguration& GetOverrideConfiguration() const { return m_overrideConfiguration; }
    inline bool OverrideConfigurationHasBeenSet() const { return m_overrideConfigurationHasBeenSet; }
    template<typename OverrideConfigurationT = OverrideConfiguration>
    void SetOverrideConfiguration(OverrideConfigurationT&& value) { m_overrideConfigurationHasBeenSet = true; m_overrideConfiguration = std::forward<OverrideConfigurationT>(value); }
    template<typename OverrideConfigurationT = OverrideConfiguration>
    DataAutomationProject& WithOverrideConfiguration(OverrideConfigurationT&& value) { SetOverrideConfiguration(std::forward<OverrideConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline DataAutomationProjectStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataAutomationProjectStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataAutomationProject& WithStatus(DataAutomationProjectStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    DataAutomationProject& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetKmsEncryptionContext() const { return m_kmsEncryptionContext; }
    inline bool KmsEncryptionContextHasBeenSet() const { return m_kmsEncryptionContextHasBeenSet; }
    template<typename KmsEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    void SetKmsEncryptionContext(KmsEncryptionContextT&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext = std::forward<KmsEncryptionContextT>(value); }
    template<typename KmsEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    DataAutomationProject& WithKmsEncryptionContext(KmsEncryptionContextT&& value) { SetKmsEncryptionContext(std::forward<KmsEncryptionContextT>(value)); return *this;}
    template<typename KmsEncryptionContextKeyT = Aws::String, typename KmsEncryptionContextValueT = Aws::String>
    DataAutomationProject& AddKmsEncryptionContext(KmsEncryptionContextKeyT&& key, KmsEncryptionContextValueT&& value) {
      m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(std::forward<KmsEncryptionContextKeyT>(key), std::forward<KmsEncryptionContextValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    DataAutomationProjectStage m_projectStage{DataAutomationProjectStage::NOT_SET};
    bool m_projectStageHasBeenSet = false;

    Aws::String m_projectDescription;
    bool m_projectDescriptionHasBeenSet = false;

    StandardOutputConfiguration m_standardOutputConfiguration;
    bool m_standardOutputConfigurationHasBeenSet = false;

    CustomOutputConfiguration m_customOutputConfiguration;
    bool m_customOutputConfigurationHasBeenSet = false;

    OverrideConfiguration m_overrideConfiguration;
    bool m_overrideConfigurationHasBeenSet = false;

    DataAutomationProjectStatus m_status{DataAutomationProjectStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_kmsEncryptionContext;
    bool m_kmsEncryptionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
