/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation-runtime/model/DataAutomationStage.h>
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
namespace BedrockDataAutomationRuntime
{
namespace Model
{

  /**
   * <p>Data automation configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/DataAutomationConfiguration">AWS
   * API Reference</a></p>
   */
  class DataAutomationConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API DataAutomationConfiguration();
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API DataAutomationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API DataAutomationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Data automation arn.</p>
     */
    inline const Aws::String& GetDataAutomationArn() const{ return m_dataAutomationArn; }
    inline bool DataAutomationArnHasBeenSet() const { return m_dataAutomationArnHasBeenSet; }
    inline void SetDataAutomationArn(const Aws::String& value) { m_dataAutomationArnHasBeenSet = true; m_dataAutomationArn = value; }
    inline void SetDataAutomationArn(Aws::String&& value) { m_dataAutomationArnHasBeenSet = true; m_dataAutomationArn = std::move(value); }
    inline void SetDataAutomationArn(const char* value) { m_dataAutomationArnHasBeenSet = true; m_dataAutomationArn.assign(value); }
    inline DataAutomationConfiguration& WithDataAutomationArn(const Aws::String& value) { SetDataAutomationArn(value); return *this;}
    inline DataAutomationConfiguration& WithDataAutomationArn(Aws::String&& value) { SetDataAutomationArn(std::move(value)); return *this;}
    inline DataAutomationConfiguration& WithDataAutomationArn(const char* value) { SetDataAutomationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Data automation stage.</p>
     */
    inline const DataAutomationStage& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const DataAutomationStage& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(DataAutomationStage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline DataAutomationConfiguration& WithStage(const DataAutomationStage& value) { SetStage(value); return *this;}
    inline DataAutomationConfiguration& WithStage(DataAutomationStage&& value) { SetStage(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataAutomationArn;
    bool m_dataAutomationArnHasBeenSet = false;

    DataAutomationStage m_stage;
    bool m_stageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
