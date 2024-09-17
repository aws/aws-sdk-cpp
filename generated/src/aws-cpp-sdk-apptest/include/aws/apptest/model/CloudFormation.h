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
    AWS_APPTEST_API CloudFormation();
    AWS_APPTEST_API CloudFormation(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API CloudFormation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPTEST_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The template location of the CloudFormation template.</p>
     */
    inline const Aws::String& GetTemplateLocation() const{ return m_templateLocation; }
    inline bool TemplateLocationHasBeenSet() const { return m_templateLocationHasBeenSet; }
    inline void SetTemplateLocation(const Aws::String& value) { m_templateLocationHasBeenSet = true; m_templateLocation = value; }
    inline void SetTemplateLocation(Aws::String&& value) { m_templateLocationHasBeenSet = true; m_templateLocation = std::move(value); }
    inline void SetTemplateLocation(const char* value) { m_templateLocationHasBeenSet = true; m_templateLocation.assign(value); }
    inline CloudFormation& WithTemplateLocation(const Aws::String& value) { SetTemplateLocation(value); return *this;}
    inline CloudFormation& WithTemplateLocation(Aws::String&& value) { SetTemplateLocation(std::move(value)); return *this;}
    inline CloudFormation& WithTemplateLocation(const char* value) { SetTemplateLocation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudFormation properties in the CloudFormation template.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const{ return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    inline void SetParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_parametersHasBeenSet = true; m_parameters = value; }
    inline void SetParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }
    inline CloudFormation& WithParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetParameters(value); return *this;}
    inline CloudFormation& WithParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetParameters(std::move(value)); return *this;}
    inline CloudFormation& AddParameters(const Aws::String& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
    inline CloudFormation& AddParameters(Aws::String&& key, const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline CloudFormation& AddParameters(const Aws::String& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline CloudFormation& AddParameters(Aws::String&& key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), std::move(value)); return *this; }
    inline CloudFormation& AddParameters(const char* key, Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, std::move(value)); return *this; }
    inline CloudFormation& AddParameters(Aws::String&& key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(std::move(key), value); return *this; }
    inline CloudFormation& AddParameters(const char* key, const char* value) { m_parametersHasBeenSet = true; m_parameters.emplace(key, value); return *this; }
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
