/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectStage.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Summary of a DataAutomationProject</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DataAutomationProjectSummary">AWS
   * API Reference</a></p>
   */
  class DataAutomationProjectSummary
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API DataAutomationProjectSummary();
    AWS_BEDROCKDATAAUTOMATION_API DataAutomationProjectSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API DataAutomationProjectSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline DataAutomationProjectSummary& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline DataAutomationProjectSummary& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline DataAutomationProjectSummary& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    
    inline const DataAutomationProjectStage& GetProjectStage() const{ return m_projectStage; }
    inline bool ProjectStageHasBeenSet() const { return m_projectStageHasBeenSet; }
    inline void SetProjectStage(const DataAutomationProjectStage& value) { m_projectStageHasBeenSet = true; m_projectStage = value; }
    inline void SetProjectStage(DataAutomationProjectStage&& value) { m_projectStageHasBeenSet = true; m_projectStage = std::move(value); }
    inline DataAutomationProjectSummary& WithProjectStage(const DataAutomationProjectStage& value) { SetProjectStage(value); return *this;}
    inline DataAutomationProjectSummary& WithProjectStage(DataAutomationProjectStage&& value) { SetProjectStage(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetProjectName() const{ return m_projectName; }
    inline bool ProjectNameHasBeenSet() const { return m_projectNameHasBeenSet; }
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }
    inline DataAutomationProjectSummary& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}
    inline DataAutomationProjectSummary& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}
    inline DataAutomationProjectSummary& WithProjectName(const char* value) { SetProjectName(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline DataAutomationProjectSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DataAutomationProjectSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    DataAutomationProjectStage m_projectStage;
    bool m_projectStageHasBeenSet = false;

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
