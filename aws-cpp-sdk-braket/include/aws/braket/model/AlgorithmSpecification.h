/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/braket/Braket_EXPORTS.h>
#include <aws/braket/model/ContainerImage.h>
#include <aws/braket/model/ScriptModeConfig.h>
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
   * <p>Defines the Amazon Braket job to be created. Specifies the container image
   * the job uses and the paths to the Python scripts used for entry and
   * training.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/braket-2019-09-01/AlgorithmSpecification">AWS
   * API Reference</a></p>
   */
  class AlgorithmSpecification
  {
  public:
    AWS_BRAKET_API AlgorithmSpecification();
    AWS_BRAKET_API AlgorithmSpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API AlgorithmSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BRAKET_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The container image used to create an Amazon Braket job.</p>
     */
    inline const ContainerImage& GetContainerImage() const{ return m_containerImage; }

    /**
     * <p>The container image used to create an Amazon Braket job.</p>
     */
    inline bool ContainerImageHasBeenSet() const { return m_containerImageHasBeenSet; }

    /**
     * <p>The container image used to create an Amazon Braket job.</p>
     */
    inline void SetContainerImage(const ContainerImage& value) { m_containerImageHasBeenSet = true; m_containerImage = value; }

    /**
     * <p>The container image used to create an Amazon Braket job.</p>
     */
    inline void SetContainerImage(ContainerImage&& value) { m_containerImageHasBeenSet = true; m_containerImage = std::move(value); }

    /**
     * <p>The container image used to create an Amazon Braket job.</p>
     */
    inline AlgorithmSpecification& WithContainerImage(const ContainerImage& value) { SetContainerImage(value); return *this;}

    /**
     * <p>The container image used to create an Amazon Braket job.</p>
     */
    inline AlgorithmSpecification& WithContainerImage(ContainerImage&& value) { SetContainerImage(std::move(value)); return *this;}


    /**
     * <p>Configures the paths to the Python scripts used for entry and training.</p>
     */
    inline const ScriptModeConfig& GetScriptModeConfig() const{ return m_scriptModeConfig; }

    /**
     * <p>Configures the paths to the Python scripts used for entry and training.</p>
     */
    inline bool ScriptModeConfigHasBeenSet() const { return m_scriptModeConfigHasBeenSet; }

    /**
     * <p>Configures the paths to the Python scripts used for entry and training.</p>
     */
    inline void SetScriptModeConfig(const ScriptModeConfig& value) { m_scriptModeConfigHasBeenSet = true; m_scriptModeConfig = value; }

    /**
     * <p>Configures the paths to the Python scripts used for entry and training.</p>
     */
    inline void SetScriptModeConfig(ScriptModeConfig&& value) { m_scriptModeConfigHasBeenSet = true; m_scriptModeConfig = std::move(value); }

    /**
     * <p>Configures the paths to the Python scripts used for entry and training.</p>
     */
    inline AlgorithmSpecification& WithScriptModeConfig(const ScriptModeConfig& value) { SetScriptModeConfig(value); return *this;}

    /**
     * <p>Configures the paths to the Python scripts used for entry and training.</p>
     */
    inline AlgorithmSpecification& WithScriptModeConfig(ScriptModeConfig&& value) { SetScriptModeConfig(std::move(value)); return *this;}

  private:

    ContainerImage m_containerImage;
    bool m_containerImageHasBeenSet = false;

    ScriptModeConfig m_scriptModeConfig;
    bool m_scriptModeConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace Braket
} // namespace Aws
