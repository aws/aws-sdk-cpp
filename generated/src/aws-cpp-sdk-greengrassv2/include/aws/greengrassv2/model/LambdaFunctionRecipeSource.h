/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/greengrassv2/model/LambdaExecutionParameters.h>
#include <aws/greengrassv2/model/ComponentPlatform.h>
#include <aws/greengrassv2/model/ComponentDependencyRequirement.h>
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
namespace GreengrassV2
{
namespace Model
{

  /**
   * <p>Contains information about an Lambda function to import to create a
   * component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/greengrassv2-2020-11-30/LambdaFunctionRecipeSource">AWS
   * API Reference</a></p>
   */
  class LambdaFunctionRecipeSource
  {
  public:
    AWS_GREENGRASSV2_API LambdaFunctionRecipeSource() = default;
    AWS_GREENGRASSV2_API LambdaFunctionRecipeSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API LambdaFunctionRecipeSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Lambda function. The ARN must include the version of the function to
     * import. You can't use version aliases like <code>$LATEST</code>.</p>
     */
    inline const Aws::String& GetLambdaArn() const { return m_lambdaArn; }
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }
    template<typename LambdaArnT = Aws::String>
    void SetLambdaArn(LambdaArnT&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::forward<LambdaArnT>(value); }
    template<typename LambdaArnT = Aws::String>
    LambdaFunctionRecipeSource& WithLambdaArn(LambdaArnT&& value) { SetLambdaArn(std::forward<LambdaArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component.</p> <p>Defaults to the name of the Lambda
     * function.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    LambdaFunctionRecipeSource& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the component.</p> <p>Defaults to the version of the Lambda
     * function as a semantic version. For example, if your function version is
     * <code>3</code>, the component version becomes <code>3.0.0</code>.</p>
     */
    inline const Aws::String& GetComponentVersion() const { return m_componentVersion; }
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }
    template<typename ComponentVersionT = Aws::String>
    void SetComponentVersion(ComponentVersionT&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::forward<ComponentVersionT>(value); }
    template<typename ComponentVersionT = Aws::String>
    LambdaFunctionRecipeSource& WithComponentVersion(ComponentVersionT&& value) { SetComponentVersion(std::forward<ComponentVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline const Aws::Vector<ComponentPlatform>& GetComponentPlatforms() const { return m_componentPlatforms; }
    inline bool ComponentPlatformsHasBeenSet() const { return m_componentPlatformsHasBeenSet; }
    template<typename ComponentPlatformsT = Aws::Vector<ComponentPlatform>>
    void SetComponentPlatforms(ComponentPlatformsT&& value) { m_componentPlatformsHasBeenSet = true; m_componentPlatforms = std::forward<ComponentPlatformsT>(value); }
    template<typename ComponentPlatformsT = Aws::Vector<ComponentPlatform>>
    LambdaFunctionRecipeSource& WithComponentPlatforms(ComponentPlatformsT&& value) { SetComponentPlatforms(std::forward<ComponentPlatformsT>(value)); return *this;}
    template<typename ComponentPlatformsT = ComponentPlatform>
    LambdaFunctionRecipeSource& AddComponentPlatforms(ComponentPlatformsT&& value) { m_componentPlatformsHasBeenSet = true; m_componentPlatforms.emplace_back(std::forward<ComponentPlatformsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The component versions on which this Lambda function component depends.</p>
     */
    inline const Aws::Map<Aws::String, ComponentDependencyRequirement>& GetComponentDependencies() const { return m_componentDependencies; }
    inline bool ComponentDependenciesHasBeenSet() const { return m_componentDependenciesHasBeenSet; }
    template<typename ComponentDependenciesT = Aws::Map<Aws::String, ComponentDependencyRequirement>>
    void SetComponentDependencies(ComponentDependenciesT&& value) { m_componentDependenciesHasBeenSet = true; m_componentDependencies = std::forward<ComponentDependenciesT>(value); }
    template<typename ComponentDependenciesT = Aws::Map<Aws::String, ComponentDependencyRequirement>>
    LambdaFunctionRecipeSource& WithComponentDependencies(ComponentDependenciesT&& value) { SetComponentDependencies(std::forward<ComponentDependenciesT>(value)); return *this;}
    template<typename ComponentDependenciesKeyT = Aws::String, typename ComponentDependenciesValueT = ComponentDependencyRequirement>
    LambdaFunctionRecipeSource& AddComponentDependencies(ComponentDependenciesKeyT&& key, ComponentDependenciesValueT&& value) {
      m_componentDependenciesHasBeenSet = true; m_componentDependencies.emplace(std::forward<ComponentDependenciesKeyT>(key), std::forward<ComponentDependenciesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The system and runtime parameters for the Lambda function as it runs on the
     * Greengrass core device.</p>
     */
    inline const LambdaExecutionParameters& GetComponentLambdaParameters() const { return m_componentLambdaParameters; }
    inline bool ComponentLambdaParametersHasBeenSet() const { return m_componentLambdaParametersHasBeenSet; }
    template<typename ComponentLambdaParametersT = LambdaExecutionParameters>
    void SetComponentLambdaParameters(ComponentLambdaParametersT&& value) { m_componentLambdaParametersHasBeenSet = true; m_componentLambdaParameters = std::forward<ComponentLambdaParametersT>(value); }
    template<typename ComponentLambdaParametersT = LambdaExecutionParameters>
    LambdaFunctionRecipeSource& WithComponentLambdaParameters(ComponentLambdaParametersT&& value) { SetComponentLambdaParameters(std::forward<ComponentLambdaParametersT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lambdaArn;
    bool m_lambdaArnHasBeenSet = false;

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentVersion;
    bool m_componentVersionHasBeenSet = false;

    Aws::Vector<ComponentPlatform> m_componentPlatforms;
    bool m_componentPlatformsHasBeenSet = false;

    Aws::Map<Aws::String, ComponentDependencyRequirement> m_componentDependencies;
    bool m_componentDependenciesHasBeenSet = false;

    LambdaExecutionParameters m_componentLambdaParameters;
    bool m_componentLambdaParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
