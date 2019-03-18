/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/servicecatalog/model/ParameterConstraints.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a parameter used to provision a product.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/ProvisioningArtifactParameter">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICECATALOG_API ProvisioningArtifactParameter
  {
  public:
    ProvisioningArtifactParameter();
    ProvisioningArtifactParameter(Aws::Utils::Json::JsonView jsonValue);
    ProvisioningArtifactParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The parameter key.</p>
     */
    inline const Aws::String& GetParameterKey() const{ return m_parameterKey; }

    /**
     * <p>The parameter key.</p>
     */
    inline bool ParameterKeyHasBeenSet() const { return m_parameterKeyHasBeenSet; }

    /**
     * <p>The parameter key.</p>
     */
    inline void SetParameterKey(const Aws::String& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = value; }

    /**
     * <p>The parameter key.</p>
     */
    inline void SetParameterKey(Aws::String&& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = std::move(value); }

    /**
     * <p>The parameter key.</p>
     */
    inline void SetParameterKey(const char* value) { m_parameterKeyHasBeenSet = true; m_parameterKey.assign(value); }

    /**
     * <p>The parameter key.</p>
     */
    inline ProvisioningArtifactParameter& WithParameterKey(const Aws::String& value) { SetParameterKey(value); return *this;}

    /**
     * <p>The parameter key.</p>
     */
    inline ProvisioningArtifactParameter& WithParameterKey(Aws::String&& value) { SetParameterKey(std::move(value)); return *this;}

    /**
     * <p>The parameter key.</p>
     */
    inline ProvisioningArtifactParameter& WithParameterKey(const char* value) { SetParameterKey(value); return *this;}


    /**
     * <p>The default value.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The default value.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value.</p>
     */
    inline ProvisioningArtifactParameter& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value.</p>
     */
    inline ProvisioningArtifactParameter& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value.</p>
     */
    inline ProvisioningArtifactParameter& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>The parameter type.</p>
     */
    inline const Aws::String& GetParameterType() const{ return m_parameterType; }

    /**
     * <p>The parameter type.</p>
     */
    inline bool ParameterTypeHasBeenSet() const { return m_parameterTypeHasBeenSet; }

    /**
     * <p>The parameter type.</p>
     */
    inline void SetParameterType(const Aws::String& value) { m_parameterTypeHasBeenSet = true; m_parameterType = value; }

    /**
     * <p>The parameter type.</p>
     */
    inline void SetParameterType(Aws::String&& value) { m_parameterTypeHasBeenSet = true; m_parameterType = std::move(value); }

    /**
     * <p>The parameter type.</p>
     */
    inline void SetParameterType(const char* value) { m_parameterTypeHasBeenSet = true; m_parameterType.assign(value); }

    /**
     * <p>The parameter type.</p>
     */
    inline ProvisioningArtifactParameter& WithParameterType(const Aws::String& value) { SetParameterType(value); return *this;}

    /**
     * <p>The parameter type.</p>
     */
    inline ProvisioningArtifactParameter& WithParameterType(Aws::String&& value) { SetParameterType(std::move(value)); return *this;}

    /**
     * <p>The parameter type.</p>
     */
    inline ProvisioningArtifactParameter& WithParameterType(const char* value) { SetParameterType(value); return *this;}


    /**
     * <p>If this value is true, the value for this parameter is obfuscated from view
     * when the parameter is retrieved. This parameter is used to hide sensitive
     * information.</p>
     */
    inline bool GetIsNoEcho() const{ return m_isNoEcho; }

    /**
     * <p>If this value is true, the value for this parameter is obfuscated from view
     * when the parameter is retrieved. This parameter is used to hide sensitive
     * information.</p>
     */
    inline bool IsNoEchoHasBeenSet() const { return m_isNoEchoHasBeenSet; }

    /**
     * <p>If this value is true, the value for this parameter is obfuscated from view
     * when the parameter is retrieved. This parameter is used to hide sensitive
     * information.</p>
     */
    inline void SetIsNoEcho(bool value) { m_isNoEchoHasBeenSet = true; m_isNoEcho = value; }

    /**
     * <p>If this value is true, the value for this parameter is obfuscated from view
     * when the parameter is retrieved. This parameter is used to hide sensitive
     * information.</p>
     */
    inline ProvisioningArtifactParameter& WithIsNoEcho(bool value) { SetIsNoEcho(value); return *this;}


    /**
     * <p>The description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the parameter.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the parameter.</p>
     */
    inline ProvisioningArtifactParameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the parameter.</p>
     */
    inline ProvisioningArtifactParameter& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the parameter.</p>
     */
    inline ProvisioningArtifactParameter& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Constraints that the administrator has put on a parameter.</p>
     */
    inline const ParameterConstraints& GetParameterConstraints() const{ return m_parameterConstraints; }

    /**
     * <p>Constraints that the administrator has put on a parameter.</p>
     */
    inline bool ParameterConstraintsHasBeenSet() const { return m_parameterConstraintsHasBeenSet; }

    /**
     * <p>Constraints that the administrator has put on a parameter.</p>
     */
    inline void SetParameterConstraints(const ParameterConstraints& value) { m_parameterConstraintsHasBeenSet = true; m_parameterConstraints = value; }

    /**
     * <p>Constraints that the administrator has put on a parameter.</p>
     */
    inline void SetParameterConstraints(ParameterConstraints&& value) { m_parameterConstraintsHasBeenSet = true; m_parameterConstraints = std::move(value); }

    /**
     * <p>Constraints that the administrator has put on a parameter.</p>
     */
    inline ProvisioningArtifactParameter& WithParameterConstraints(const ParameterConstraints& value) { SetParameterConstraints(value); return *this;}

    /**
     * <p>Constraints that the administrator has put on a parameter.</p>
     */
    inline ProvisioningArtifactParameter& WithParameterConstraints(ParameterConstraints&& value) { SetParameterConstraints(std::move(value)); return *this;}

  private:

    Aws::String m_parameterKey;
    bool m_parameterKeyHasBeenSet;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet;

    Aws::String m_parameterType;
    bool m_parameterTypeHasBeenSet;

    bool m_isNoEcho;
    bool m_isNoEchoHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ParameterConstraints m_parameterConstraints;
    bool m_parameterConstraintsHasBeenSet;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
