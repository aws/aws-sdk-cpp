/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/DataAutomationProjectStage.h>
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
   * <p>Data Automation Project Filter</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/DataAutomationProjectFilter">AWS
   * API Reference</a></p>
   */
  class DataAutomationProjectFilter
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API DataAutomationProjectFilter();
    AWS_BEDROCKDATAAUTOMATION_API DataAutomationProjectFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API DataAutomationProjectFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetProjectArn() const{ return m_projectArn; }
    inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
    inline void SetProjectArn(const Aws::String& value) { m_projectArnHasBeenSet = true; m_projectArn = value; }
    inline void SetProjectArn(Aws::String&& value) { m_projectArnHasBeenSet = true; m_projectArn = std::move(value); }
    inline void SetProjectArn(const char* value) { m_projectArnHasBeenSet = true; m_projectArn.assign(value); }
    inline DataAutomationProjectFilter& WithProjectArn(const Aws::String& value) { SetProjectArn(value); return *this;}
    inline DataAutomationProjectFilter& WithProjectArn(Aws::String&& value) { SetProjectArn(std::move(value)); return *this;}
    inline DataAutomationProjectFilter& WithProjectArn(const char* value) { SetProjectArn(value); return *this;}
    ///@}

    ///@{
    
    inline const DataAutomationProjectStage& GetProjectStage() const{ return m_projectStage; }
    inline bool ProjectStageHasBeenSet() const { return m_projectStageHasBeenSet; }
    inline void SetProjectStage(const DataAutomationProjectStage& value) { m_projectStageHasBeenSet = true; m_projectStage = value; }
    inline void SetProjectStage(DataAutomationProjectStage&& value) { m_projectStageHasBeenSet = true; m_projectStage = std::move(value); }
    inline DataAutomationProjectFilter& WithProjectStage(const DataAutomationProjectStage& value) { SetProjectStage(value); return *this;}
    inline DataAutomationProjectFilter& WithProjectStage(DataAutomationProjectStage&& value) { SetProjectStage(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_projectArn;
    bool m_projectArnHasBeenSet = false;

    DataAutomationProjectStage m_projectStage;
    bool m_projectStageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
