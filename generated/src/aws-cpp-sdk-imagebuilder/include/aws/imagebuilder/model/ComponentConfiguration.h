/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/ComponentParameter.h>
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
namespace imagebuilder
{
namespace Model
{

  /**
   * <p>Configuration details of the component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ComponentConfiguration">AWS
   * API Reference</a></p>
   */
  class ComponentConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API ComponentConfiguration() = default;
    AWS_IMAGEBUILDER_API ComponentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ComponentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline const Aws::String& GetComponentArn() const { return m_componentArn; }
    inline bool ComponentArnHasBeenSet() const { return m_componentArnHasBeenSet; }
    template<typename ComponentArnT = Aws::String>
    void SetComponentArn(ComponentArnT&& value) { m_componentArnHasBeenSet = true; m_componentArn = std::forward<ComponentArnT>(value); }
    template<typename ComponentArnT = Aws::String>
    ComponentConfiguration& WithComponentArn(ComponentArnT&& value) { SetComponentArn(std::forward<ComponentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A group of parameter settings that Image Builder uses to configure the
     * component for a specific recipe.</p>
     */
    inline const Aws::Vector<ComponentParameter>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Vector<ComponentParameter>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Vector<ComponentParameter>>
    ComponentConfiguration& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersT = ComponentParameter>
    ComponentConfiguration& AddParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters.emplace_back(std::forward<ParametersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_componentArn;
    bool m_componentArnHasBeenSet = false;

    Aws::Vector<ComponentParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
