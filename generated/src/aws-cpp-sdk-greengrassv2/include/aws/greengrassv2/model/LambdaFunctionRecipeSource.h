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
    AWS_GREENGRASSV2_API LambdaFunctionRecipeSource();
    AWS_GREENGRASSV2_API LambdaFunctionRecipeSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API LambdaFunctionRecipeSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GREENGRASSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Lambda function. The ARN must include the version of the function to
     * import. You can't use version aliases like <code>$LATEST</code>.</p>
     */
    inline const Aws::String& GetLambdaArn() const{ return m_lambdaArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Lambda function. The ARN must include the version of the function to
     * import. You can't use version aliases like <code>$LATEST</code>.</p>
     */
    inline bool LambdaArnHasBeenSet() const { return m_lambdaArnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Lambda function. The ARN must include the version of the function to
     * import. You can't use version aliases like <code>$LATEST</code>.</p>
     */
    inline void SetLambdaArn(const Aws::String& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Lambda function. The ARN must include the version of the function to
     * import. You can't use version aliases like <code>$LATEST</code>.</p>
     */
    inline void SetLambdaArn(Aws::String&& value) { m_lambdaArnHasBeenSet = true; m_lambdaArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Lambda function. The ARN must include the version of the function to
     * import. You can't use version aliases like <code>$LATEST</code>.</p>
     */
    inline void SetLambdaArn(const char* value) { m_lambdaArnHasBeenSet = true; m_lambdaArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Lambda function. The ARN must include the version of the function to
     * import. You can't use version aliases like <code>$LATEST</code>.</p>
     */
    inline LambdaFunctionRecipeSource& WithLambdaArn(const Aws::String& value) { SetLambdaArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Lambda function. The ARN must include the version of the function to
     * import. You can't use version aliases like <code>$LATEST</code>.</p>
     */
    inline LambdaFunctionRecipeSource& WithLambdaArn(Aws::String&& value) { SetLambdaArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the Lambda function. The ARN must include the version of the function to
     * import. You can't use version aliases like <code>$LATEST</code>.</p>
     */
    inline LambdaFunctionRecipeSource& WithLambdaArn(const char* value) { SetLambdaArn(value); return *this;}


    /**
     * <p>The name of the component.</p> <p>Defaults to the name of the Lambda
     * function.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component.</p> <p>Defaults to the name of the Lambda
     * function.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component.</p> <p>Defaults to the name of the Lambda
     * function.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component.</p> <p>Defaults to the name of the Lambda
     * function.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component.</p> <p>Defaults to the name of the Lambda
     * function.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component.</p> <p>Defaults to the name of the Lambda
     * function.</p>
     */
    inline LambdaFunctionRecipeSource& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component.</p> <p>Defaults to the name of the Lambda
     * function.</p>
     */
    inline LambdaFunctionRecipeSource& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component.</p> <p>Defaults to the name of the Lambda
     * function.</p>
     */
    inline LambdaFunctionRecipeSource& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>The version of the component.</p> <p>Defaults to the version of the Lambda
     * function as a semantic version. For example, if your function version is
     * <code>3</code>, the component version becomes <code>3.0.0</code>.</p>
     */
    inline const Aws::String& GetComponentVersion() const{ return m_componentVersion; }

    /**
     * <p>The version of the component.</p> <p>Defaults to the version of the Lambda
     * function as a semantic version. For example, if your function version is
     * <code>3</code>, the component version becomes <code>3.0.0</code>.</p>
     */
    inline bool ComponentVersionHasBeenSet() const { return m_componentVersionHasBeenSet; }

    /**
     * <p>The version of the component.</p> <p>Defaults to the version of the Lambda
     * function as a semantic version. For example, if your function version is
     * <code>3</code>, the component version becomes <code>3.0.0</code>.</p>
     */
    inline void SetComponentVersion(const Aws::String& value) { m_componentVersionHasBeenSet = true; m_componentVersion = value; }

    /**
     * <p>The version of the component.</p> <p>Defaults to the version of the Lambda
     * function as a semantic version. For example, if your function version is
     * <code>3</code>, the component version becomes <code>3.0.0</code>.</p>
     */
    inline void SetComponentVersion(Aws::String&& value) { m_componentVersionHasBeenSet = true; m_componentVersion = std::move(value); }

    /**
     * <p>The version of the component.</p> <p>Defaults to the version of the Lambda
     * function as a semantic version. For example, if your function version is
     * <code>3</code>, the component version becomes <code>3.0.0</code>.</p>
     */
    inline void SetComponentVersion(const char* value) { m_componentVersionHasBeenSet = true; m_componentVersion.assign(value); }

    /**
     * <p>The version of the component.</p> <p>Defaults to the version of the Lambda
     * function as a semantic version. For example, if your function version is
     * <code>3</code>, the component version becomes <code>3.0.0</code>.</p>
     */
    inline LambdaFunctionRecipeSource& WithComponentVersion(const Aws::String& value) { SetComponentVersion(value); return *this;}

    /**
     * <p>The version of the component.</p> <p>Defaults to the version of the Lambda
     * function as a semantic version. For example, if your function version is
     * <code>3</code>, the component version becomes <code>3.0.0</code>.</p>
     */
    inline LambdaFunctionRecipeSource& WithComponentVersion(Aws::String&& value) { SetComponentVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the component.</p> <p>Defaults to the version of the Lambda
     * function as a semantic version. For example, if your function version is
     * <code>3</code>, the component version becomes <code>3.0.0</code>.</p>
     */
    inline LambdaFunctionRecipeSource& WithComponentVersion(const char* value) { SetComponentVersion(value); return *this;}


    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline const Aws::Vector<ComponentPlatform>& GetComponentPlatforms() const{ return m_componentPlatforms; }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline bool ComponentPlatformsHasBeenSet() const { return m_componentPlatformsHasBeenSet; }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline void SetComponentPlatforms(const Aws::Vector<ComponentPlatform>& value) { m_componentPlatformsHasBeenSet = true; m_componentPlatforms = value; }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline void SetComponentPlatforms(Aws::Vector<ComponentPlatform>&& value) { m_componentPlatformsHasBeenSet = true; m_componentPlatforms = std::move(value); }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline LambdaFunctionRecipeSource& WithComponentPlatforms(const Aws::Vector<ComponentPlatform>& value) { SetComponentPlatforms(value); return *this;}

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline LambdaFunctionRecipeSource& WithComponentPlatforms(Aws::Vector<ComponentPlatform>&& value) { SetComponentPlatforms(std::move(value)); return *this;}

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline LambdaFunctionRecipeSource& AddComponentPlatforms(const ComponentPlatform& value) { m_componentPlatformsHasBeenSet = true; m_componentPlatforms.push_back(value); return *this; }

    /**
     * <p>The platforms that the component version supports.</p>
     */
    inline LambdaFunctionRecipeSource& AddComponentPlatforms(ComponentPlatform&& value) { m_componentPlatformsHasBeenSet = true; m_componentPlatforms.push_back(std::move(value)); return *this; }


    /**
     * <p>The component versions on which this Lambda function component depends.</p>
     */
    inline const Aws::Map<Aws::String, ComponentDependencyRequirement>& GetComponentDependencies() const{ return m_componentDependencies; }

    /**
     * <p>The component versions on which this Lambda function component depends.</p>
     */
    inline bool ComponentDependenciesHasBeenSet() const { return m_componentDependenciesHasBeenSet; }

    /**
     * <p>The component versions on which this Lambda function component depends.</p>
     */
    inline void SetComponentDependencies(const Aws::Map<Aws::String, ComponentDependencyRequirement>& value) { m_componentDependenciesHasBeenSet = true; m_componentDependencies = value; }

    /**
     * <p>The component versions on which this Lambda function component depends.</p>
     */
    inline void SetComponentDependencies(Aws::Map<Aws::String, ComponentDependencyRequirement>&& value) { m_componentDependenciesHasBeenSet = true; m_componentDependencies = std::move(value); }

    /**
     * <p>The component versions on which this Lambda function component depends.</p>
     */
    inline LambdaFunctionRecipeSource& WithComponentDependencies(const Aws::Map<Aws::String, ComponentDependencyRequirement>& value) { SetComponentDependencies(value); return *this;}

    /**
     * <p>The component versions on which this Lambda function component depends.</p>
     */
    inline LambdaFunctionRecipeSource& WithComponentDependencies(Aws::Map<Aws::String, ComponentDependencyRequirement>&& value) { SetComponentDependencies(std::move(value)); return *this;}

    /**
     * <p>The component versions on which this Lambda function component depends.</p>
     */
    inline LambdaFunctionRecipeSource& AddComponentDependencies(const Aws::String& key, const ComponentDependencyRequirement& value) { m_componentDependenciesHasBeenSet = true; m_componentDependencies.emplace(key, value); return *this; }

    /**
     * <p>The component versions on which this Lambda function component depends.</p>
     */
    inline LambdaFunctionRecipeSource& AddComponentDependencies(Aws::String&& key, const ComponentDependencyRequirement& value) { m_componentDependenciesHasBeenSet = true; m_componentDependencies.emplace(std::move(key), value); return *this; }

    /**
     * <p>The component versions on which this Lambda function component depends.</p>
     */
    inline LambdaFunctionRecipeSource& AddComponentDependencies(const Aws::String& key, ComponentDependencyRequirement&& value) { m_componentDependenciesHasBeenSet = true; m_componentDependencies.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The component versions on which this Lambda function component depends.</p>
     */
    inline LambdaFunctionRecipeSource& AddComponentDependencies(Aws::String&& key, ComponentDependencyRequirement&& value) { m_componentDependenciesHasBeenSet = true; m_componentDependencies.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The component versions on which this Lambda function component depends.</p>
     */
    inline LambdaFunctionRecipeSource& AddComponentDependencies(const char* key, ComponentDependencyRequirement&& value) { m_componentDependenciesHasBeenSet = true; m_componentDependencies.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The component versions on which this Lambda function component depends.</p>
     */
    inline LambdaFunctionRecipeSource& AddComponentDependencies(const char* key, const ComponentDependencyRequirement& value) { m_componentDependenciesHasBeenSet = true; m_componentDependencies.emplace(key, value); return *this; }


    /**
     * <p>The system and runtime parameters for the Lambda function as it runs on the
     * Greengrass core device.</p>
     */
    inline const LambdaExecutionParameters& GetComponentLambdaParameters() const{ return m_componentLambdaParameters; }

    /**
     * <p>The system and runtime parameters for the Lambda function as it runs on the
     * Greengrass core device.</p>
     */
    inline bool ComponentLambdaParametersHasBeenSet() const { return m_componentLambdaParametersHasBeenSet; }

    /**
     * <p>The system and runtime parameters for the Lambda function as it runs on the
     * Greengrass core device.</p>
     */
    inline void SetComponentLambdaParameters(const LambdaExecutionParameters& value) { m_componentLambdaParametersHasBeenSet = true; m_componentLambdaParameters = value; }

    /**
     * <p>The system and runtime parameters for the Lambda function as it runs on the
     * Greengrass core device.</p>
     */
    inline void SetComponentLambdaParameters(LambdaExecutionParameters&& value) { m_componentLambdaParametersHasBeenSet = true; m_componentLambdaParameters = std::move(value); }

    /**
     * <p>The system and runtime parameters for the Lambda function as it runs on the
     * Greengrass core device.</p>
     */
    inline LambdaFunctionRecipeSource& WithComponentLambdaParameters(const LambdaExecutionParameters& value) { SetComponentLambdaParameters(value); return *this;}

    /**
     * <p>The system and runtime parameters for the Lambda function as it runs on the
     * Greengrass core device.</p>
     */
    inline LambdaFunctionRecipeSource& WithComponentLambdaParameters(LambdaExecutionParameters&& value) { SetComponentLambdaParameters(std::move(value)); return *this;}

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
