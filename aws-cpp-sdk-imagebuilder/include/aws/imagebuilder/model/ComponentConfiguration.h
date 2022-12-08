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
   * <p> Configuration details of the component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/imagebuilder-2019-12-02/ComponentConfiguration">AWS
   * API Reference</a></p>
   */
  class ComponentConfiguration
  {
  public:
    AWS_IMAGEBUILDER_API ComponentConfiguration();
    AWS_IMAGEBUILDER_API ComponentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API ComponentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IMAGEBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline const Aws::String& GetComponentArn() const{ return m_componentArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline bool ComponentArnHasBeenSet() const { return m_componentArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline void SetComponentArn(const Aws::String& value) { m_componentArnHasBeenSet = true; m_componentArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline void SetComponentArn(Aws::String&& value) { m_componentArnHasBeenSet = true; m_componentArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline void SetComponentArn(const char* value) { m_componentArnHasBeenSet = true; m_componentArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline ComponentConfiguration& WithComponentArn(const Aws::String& value) { SetComponentArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline ComponentConfiguration& WithComponentArn(Aws::String&& value) { SetComponentArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the component.</p>
     */
    inline ComponentConfiguration& WithComponentArn(const char* value) { SetComponentArn(value); return *this;}


    /**
     * <p>A group of parameter settings that are used to configure the component for a
     * specific recipe.</p>
     */
    inline const Aws::Vector<ComponentParameter>& GetParameters() const{ return m_parameters; }

    /**
     * <p>A group of parameter settings that are used to configure the component for a
     * specific recipe.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>A group of parameter settings that are used to configure the component for a
     * specific recipe.</p>
     */
    inline void SetParameters(const Aws::Vector<ComponentParameter>& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>A group of parameter settings that are used to configure the component for a
     * specific recipe.</p>
     */
    inline void SetParameters(Aws::Vector<ComponentParameter>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>A group of parameter settings that are used to configure the component for a
     * specific recipe.</p>
     */
    inline ComponentConfiguration& WithParameters(const Aws::Vector<ComponentParameter>& value) { SetParameters(value); return *this;}

    /**
     * <p>A group of parameter settings that are used to configure the component for a
     * specific recipe.</p>
     */
    inline ComponentConfiguration& WithParameters(Aws::Vector<ComponentParameter>&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>A group of parameter settings that are used to configure the component for a
     * specific recipe.</p>
     */
    inline ComponentConfiguration& AddParameters(const ComponentParameter& value) { m_parametersHasBeenSet = true; m_parameters.push_back(value); return *this; }

    /**
     * <p>A group of parameter settings that are used to configure the component for a
     * specific recipe.</p>
     */
    inline ComponentConfiguration& AddParameters(ComponentParameter&& value) { m_parametersHasBeenSet = true; m_parameters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_componentArn;
    bool m_componentArnHasBeenSet = false;

    Aws::Vector<ComponentParameter> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
