/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation-runtime/BedrockDataAutomationRuntime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation-runtime/model/BlueprintStage.h>
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
   * <p>Structure for single blueprint entity.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-runtime-2024-06-13/Blueprint">AWS
   * API Reference</a></p>
   */
  class Blueprint
  {
  public:
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Blueprint();
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Blueprint(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Blueprint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATIONRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Arn of blueprint.</p>
     */
    inline const Aws::String& GetBlueprintArn() const{ return m_blueprintArn; }
    inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
    inline void SetBlueprintArn(const Aws::String& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = value; }
    inline void SetBlueprintArn(Aws::String&& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = std::move(value); }
    inline void SetBlueprintArn(const char* value) { m_blueprintArnHasBeenSet = true; m_blueprintArn.assign(value); }
    inline Blueprint& WithBlueprintArn(const Aws::String& value) { SetBlueprintArn(value); return *this;}
    inline Blueprint& WithBlueprintArn(Aws::String&& value) { SetBlueprintArn(std::move(value)); return *this;}
    inline Blueprint& WithBlueprintArn(const char* value) { SetBlueprintArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version of blueprint.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }
    inline Blueprint& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}
    inline Blueprint& WithVersion(Aws::String&& value) { SetVersion(std::move(value)); return *this;}
    inline Blueprint& WithVersion(const char* value) { SetVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Stage of blueprint.</p>
     */
    inline const BlueprintStage& GetStage() const{ return m_stage; }
    inline bool StageHasBeenSet() const { return m_stageHasBeenSet; }
    inline void SetStage(const BlueprintStage& value) { m_stageHasBeenSet = true; m_stage = value; }
    inline void SetStage(BlueprintStage&& value) { m_stageHasBeenSet = true; m_stage = std::move(value); }
    inline Blueprint& WithStage(const BlueprintStage& value) { SetStage(value); return *this;}
    inline Blueprint& WithStage(BlueprintStage&& value) { SetStage(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_blueprintArn;
    bool m_blueprintArnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    BlueprintStage m_stage;
    bool m_stageHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomationRuntime
} // namespace Aws
