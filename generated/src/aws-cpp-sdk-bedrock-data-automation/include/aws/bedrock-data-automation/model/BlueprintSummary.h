/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-data-automation/model/BlueprintStage.h>
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
   * <p>Summary of a Blueprint</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/BlueprintSummary">AWS
   * API Reference</a></p>
   */
  class BlueprintSummary
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API BlueprintSummary() = default;
    AWS_BEDROCKDATAAUTOMATION_API BlueprintSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API BlueprintSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetBlueprintArn() const { return m_blueprintArn; }
    inline bool BlueprintArnHasBeenSet() const { return m_blueprintArnHasBeenSet; }
    template<typename BlueprintArnT = Aws::String>
    void SetBlueprintArn(BlueprintArnT&& value) { m_blueprintArnHasBeenSet = true; m_blueprintArn = std::forward<BlueprintArnT>(value); }
    template<typename BlueprintArnT = Aws::String>
    BlueprintSummary& WithBlueprintArn(BlueprintArnT&& value) { SetBlueprintArn(std::forward<BlueprintArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBlueprintVersion() const { return m_blueprintVersion; }
    inline bool BlueprintVersionHasBeenSet() const { return m_blueprintVersionHasBeenSet; }
    template<typename BlueprintVersionT = Aws::String>
    void SetBlueprintVersion(BlueprintVersionT&& value) { m_blueprintVersionHasBeenSet = true; m_blueprintVersion = std::forward<BlueprintVersionT>(value); }
    template<typename BlueprintVersionT = Aws::String>
    BlueprintSummary& WithBlueprintVersion(BlueprintVersionT&& value) { SetBlueprintVersion(std::forward<BlueprintVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline BlueprintStage GetBlueprintStage() const { return m_blueprintStage; }
    inline bool BlueprintStageHasBeenSet() const { return m_blueprintStageHasBeenSet; }
    inline void SetBlueprintStage(BlueprintStage value) { m_blueprintStageHasBeenSet = true; m_blueprintStage = value; }
    inline BlueprintSummary& WithBlueprintStage(BlueprintStage value) { SetBlueprintStage(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetBlueprintName() const { return m_blueprintName; }
    inline bool BlueprintNameHasBeenSet() const { return m_blueprintNameHasBeenSet; }
    template<typename BlueprintNameT = Aws::String>
    void SetBlueprintName(BlueprintNameT&& value) { m_blueprintNameHasBeenSet = true; m_blueprintName = std::forward<BlueprintNameT>(value); }
    template<typename BlueprintNameT = Aws::String>
    BlueprintSummary& WithBlueprintName(BlueprintNameT&& value) { SetBlueprintName(std::forward<BlueprintNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    BlueprintSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    BlueprintSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_blueprintArn;
    bool m_blueprintArnHasBeenSet = false;

    Aws::String m_blueprintVersion;
    bool m_blueprintVersionHasBeenSet = false;

    BlueprintStage m_blueprintStage{BlueprintStage::NOT_SET};
    bool m_blueprintStageHasBeenSet = false;

    Aws::String m_blueprintName;
    bool m_blueprintNameHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
