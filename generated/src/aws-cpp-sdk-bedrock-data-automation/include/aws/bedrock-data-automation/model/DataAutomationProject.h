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
    AWS_BEDROCKDATAAUTOMATION_API DataAutomationProject();
    AWS_BEDROCKDATAAUTOMATION_API DataAutomationProject(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API DataAutomationProject& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline DataAutomationProject& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline DataAutomationProject& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline DataAutomationProject& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline DataAutomationProject& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DataAutomationProject& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline DataAutomationProject& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DataAutomationProject& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline DataAutomationProject& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline DataAutomationProject& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline DataAutomationProject& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    
    inline const DataAutomationProjectStage& GetProjectStage() const{ return m_projectStage; }
    inline bool ProjectStageHasBeenSet() const { return m_projectStageHasBeenSet; }
    inline void SetProjectStage(const DataAutomationProjectStage& value) { m_projectStageHasBeenSet = true; m_projectStage = value; }
    inline void SetProjectStage(DataAutomationProjectStage&& value) { m_projectStageHasBeenSet = true; m_projectStage = std::move(value); }
    inline DataAutomationProject& WithProjectStage(const DataAutomationProjectStage& value) { SetProjectStage(value); return *this;}
    inline DataAutomationProject& WithProjectStage(DataAutomationProjectStage&& value) { SetProjectStage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetProjectDescription() const{ return m_projectDescription; }
    inline bool ProjectDescriptionHasBeenSet() const { return m_projectDescriptionHasBeenSet; }
    inline void SetProjectDescription(const Aws::String& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = value; }
    inline void SetProjectDescription(Aws::String&& value) { m_projectDescriptionHasBeenSet = true; m_projectDescription = std::move(value); }
    inline void SetProjectDescription(const char* value) { m_projectDescriptionHasBeenSet = true; m_projectDescription.assign(value); }
    inline DataAutomationProject& WithProjectDescription(const Aws::String& value) { SetProjectDescription(value); return *this;}
    inline DataAutomationProject& WithProjectDescription(Aws::String&& value) { SetProjectDescription(std::move(value)); return *this;}
    inline DataAutomationProject& WithProjectDescription(const char* value) { SetProjectDescription(value); return *this;}
    ///@}

    ///@{
    
    inline const StandardOutputConfiguration& GetStandardOutputConfiguration() const{ return m_standardOutputConfiguration; }
    inline bool StandardOutputConfigurationHasBeenSet() const { return m_standardOutputConfigurationHasBeenSet; }
    inline void SetStandardOutputConfiguration(const StandardOutputConfiguration& value) { m_standardOutputConfigurationHasBeenSet = true; m_standardOutputConfiguration = value; }
    inline void SetStandardOutputConfiguration(StandardOutputConfiguration&& value) { m_standardOutputConfigurationHasBeenSet = true; m_standardOutputConfiguration = std::move(value); }
    inline DataAutomationProject& WithStandardOutputConfiguration(const StandardOutputConfiguration& value) { SetStandardOutputConfiguration(value); return *this;}
    inline DataAutomationProject& WithStandardOutputConfiguration(StandardOutputConfiguration&& value) { SetStandardOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const CustomOutputConfiguration& GetCustomOutputConfiguration() const{ return m_customOutputConfiguration; }
    inline bool CustomOutputConfigurationHasBeenSet() const { return m_customOutputConfigurationHasBeenSet; }
    inline void SetCustomOutputConfiguration(const CustomOutputConfiguration& value) { m_customOutputConfigurationHasBeenSet = true; m_customOutputConfiguration = value; }
    inline void SetCustomOutputConfiguration(CustomOutputConfiguration&& value) { m_customOutputConfigurationHasBeenSet = true; m_customOutputConfiguration = std::move(value); }
    inline DataAutomationProject& WithCustomOutputConfiguration(const CustomOutputConfiguration& value) { SetCustomOutputConfiguration(value); return *this;}
    inline DataAutomationProject& WithCustomOutputConfiguration(CustomOutputConfiguration&& value) { SetCustomOutputConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const OverrideConfiguration& GetOverrideConfiguration() const{ return m_overrideConfiguration; }
    inline bool OverrideConfigurationHasBeenSet() const { return m_overrideConfigurationHasBeenSet; }
    inline void SetOverrideConfiguration(const OverrideConfiguration& value) { m_overrideConfigurationHasBeenSet = true; m_overrideConfiguration = value; }
    inline void SetOverrideConfiguration(OverrideConfiguration&& value) { m_overrideConfigurationHasBeenSet = true; m_overrideConfiguration = std::move(value); }
    inline DataAutomationProject& WithOverrideConfiguration(const OverrideConfiguration& value) { SetOverrideConfiguration(value); return *this;}
    inline DataAutomationProject& WithOverrideConfiguration(OverrideConfiguration&& value) { SetOverrideConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataAutomationProjectStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DataAutomationProjectStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DataAutomationProjectStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DataAutomationProject& WithStatus(const DataAutomationProjectStatus& value) { SetStatus(value); return *this;}
    inline DataAutomationProject& WithStatus(DataAutomationProjectStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetKmsKeyId() const{ return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    inline void SetKmsKeyId(const Aws::String& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = value; }
    inline void SetKmsKeyId(Aws::String&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::move(value); }
    inline void SetKmsKeyId(const char* value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId.assign(value); }
    inline DataAutomationProject& WithKmsKeyId(const Aws::String& value) { SetKmsKeyId(value); return *this;}
    inline DataAutomationProject& WithKmsKeyId(Aws::String&& value) { SetKmsKeyId(std::move(value)); return *this;}
    inline DataAutomationProject& WithKmsKeyId(const char* value) { SetKmsKeyId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetKmsEncryptionContext() const{ return m_kmsEncryptionContext; }
    inline bool KmsEncryptionContextHasBeenSet() const { return m_kmsEncryptionContextHasBeenSet; }
    inline void SetKmsEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext = value; }
    inline void SetKmsEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext = std::move(value); }
    inline DataAutomationProject& WithKmsEncryptionContext(const Aws::Map<Aws::String, Aws::String>& value) { SetKmsEncryptionContext(value); return *this;}
    inline DataAutomationProject& WithKmsEncryptionContext(Aws::Map<Aws::String, Aws::String>&& value) { SetKmsEncryptionContext(std::move(value)); return *this;}
    inline DataAutomationProject& AddKmsEncryptionContext(const Aws::String& key, const Aws::String& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(key, value); return *this; }
    inline DataAutomationProject& AddKmsEncryptionContext(Aws::String&& key, const Aws::String& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(std::move(key), value); return *this; }
    inline DataAutomationProject& AddKmsEncryptionContext(const Aws::String& key, Aws::String&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline DataAutomationProject& AddKmsEncryptionContext(Aws::String&& key, Aws::String&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(std::move(key), std::move(value)); return *this; }
    inline DataAutomationProject& AddKmsEncryptionContext(const char* key, Aws::String&& value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(key, std::move(value)); return *this; }
    inline DataAutomationProject& AddKmsEncryptionContext(Aws::String&& key, const char* value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(std::move(key), value); return *this; }
    inline DataAutomationProject& AddKmsEncryptionContext(const char* key, const char* value) { m_kmsEncryptionContextHasBeenSet = true; m_kmsEncryptionContext.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    DataAutomationProjectStage m_projectStage;
    bool m_projectStageHasBeenSet = false;

    Aws::String m_projectDescription;
    bool m_projectDescriptionHasBeenSet = false;

    StandardOutputConfiguration m_standardOutputConfiguration;
    bool m_standardOutputConfigurationHasBeenSet = false;

    CustomOutputConfiguration m_customOutputConfiguration;
    bool m_customOutputConfigurationHasBeenSet = false;

    OverrideConfiguration m_overrideConfiguration;
    bool m_overrideConfigurationHasBeenSet = false;

    DataAutomationProjectStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_kmsEncryptionContext;
    bool m_kmsEncryptionContextHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
