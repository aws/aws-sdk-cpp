/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/ScriptModeConfig.h>
#include <aws/braket/model/ContainerImage.h>
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
namespace Braket
{
namespace Model
{

  /**
   * <p>Defines the Amazon Braket hybrid job to be created. Specifies the container
   * image the job uses and the paths to the Python scripts used for entry and
   * training.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/AlgorithmSpecification">AWS
   * API Reference</a></p>
   */
  class AlgorithmSpecification
  {
  public:
    AWS_BRAKET_API AlgorithmSpecification() = default;
    AWS_BRAKET_API AlgorithmSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API AlgorithmSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Configures the paths to the Python scripts used for entry and training.</p>
     */
    inline const ScriptModeConfig& GetScriptModeConfig() const { return m_scriptModeConfig; }
    inline bool ScriptModeConfigHasBeenSet() const { return m_scriptModeConfigHasBeenSet; }
    template<typename ScriptModeConfigT = ScriptModeConfig>
    void SetScriptModeConfig(ScriptModeConfigT&& value) { m_scriptModeConfigHasBeenSet = true; m_scriptModeConfig = std::forward<ScriptModeConfigT>(value); }
    template<typename ScriptModeConfigT = ScriptModeConfig>
    AlgorithmSpecification& WithScriptModeConfig(ScriptModeConfigT&& value) { SetScriptModeConfig(std::forward<ScriptModeConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container image used to create an Amazon Braket hybrid job.</p>
     */
    inline const ContainerImage& GetContainerImage() const { return m_containerImage; }
    inline bool ContainerImageHasBeenSet() const { return m_containerImageHasBeenSet; }
    template<typename ContainerImageT = ContainerImage>
    void SetContainerImage(ContainerImageT&& value) { m_containerImageHasBeenSet = true; m_containerImage = std::forward<ContainerImageT>(value); }
    template<typename ContainerImageT = ContainerImage>
    AlgorithmSpecification& WithContainerImage(ContainerImageT&& value) { SetContainerImage(std::forward<ContainerImageT>(value)); return *this;}
    ///@}
  private:

    ScriptModeConfig m_scriptModeConfig;
    bool m_scriptModeConfigHasBeenSet = false;

    ContainerImage m_containerImage;
    bool m_containerImageHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
