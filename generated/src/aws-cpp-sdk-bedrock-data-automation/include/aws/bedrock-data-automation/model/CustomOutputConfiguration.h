/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-data-automation/BedrockDataAutomation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-data-automation/model/BlueprintItem.h>
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
   * <p>Custom output configuration</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-data-automation-2023-07-26/CustomOutputConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomOutputConfiguration
  {
  public:
    AWS_BEDROCKDATAAUTOMATION_API CustomOutputConfiguration() = default;
    AWS_BEDROCKDATAAUTOMATION_API CustomOutputConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API CustomOutputConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKDATAAUTOMATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<BlueprintItem>& GetBlueprints() const { return m_blueprints; }
    inline bool BlueprintsHasBeenSet() const { return m_blueprintsHasBeenSet; }
    template<typename BlueprintsT = Aws::Vector<BlueprintItem>>
    void SetBlueprints(BlueprintsT&& value) { m_blueprintsHasBeenSet = true; m_blueprints = std::forward<BlueprintsT>(value); }
    template<typename BlueprintsT = Aws::Vector<BlueprintItem>>
    CustomOutputConfiguration& WithBlueprints(BlueprintsT&& value) { SetBlueprints(std::forward<BlueprintsT>(value)); return *this;}
    template<typename BlueprintsT = BlueprintItem>
    CustomOutputConfiguration& AddBlueprints(BlueprintsT&& value) { m_blueprintsHasBeenSet = true; m_blueprints.emplace_back(std::forward<BlueprintsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<BlueprintItem> m_blueprints;
    bool m_blueprintsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockDataAutomation
} // namespace Aws
