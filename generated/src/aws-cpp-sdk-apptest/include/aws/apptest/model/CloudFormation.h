/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace AppTest
{
namespace Model
{

  /**
   * <p>Specifies the CloudFormation template and its parameters.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apptest-2022-12-06/CloudFormation">AWS
   * API Reference</a></p>
   */
  class CloudFormation
  {
  public:
    AWS_APPTEST_API CloudFormation() = default;
    AWS_APPTEST_API CloudFormation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CloudFormation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The template location of the CloudFormation template.</p>
     */
    inline const Aws::String& GetTemplateLocation() const { return m_templateLocation; }
    inline bool TemplateLocationHasBeenSet() const { return m_templateLocationHasBeenSet; }
    template<typename TemplateLocationT = Aws::String>
    void SetTemplateLocation(TemplateLocationT&& value) { m_templateLocationHasBeenSet = true; m_templateLocation = std::forward<TemplateLocationT>(value); }
    template<typename TemplateLocationT = Aws::String>
    CloudFormation& WithTemplateLocation(TemplateLocationT&& value) { SetTemplateLocation(std::forward<TemplateLocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudFormation properties in the CloudFormation template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::Map<Aws::String, Aws::String>>
    CloudFormation& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    template<typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
    CloudFormation& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
      m_parametersHasBeenSet = true; m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_templateLocation;
    bool m_templateLocationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_parameters;
    bool m_parametersHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
