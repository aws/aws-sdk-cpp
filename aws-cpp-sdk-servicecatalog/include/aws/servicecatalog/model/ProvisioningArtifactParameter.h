/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>A parameter used to successfully provision the product. This value includes a
   * list of allowable values and additional metadata. </p>
   */
  class AWS_SERVICECATALOG_API ProvisioningArtifactParameter
  {
  public:
    ProvisioningArtifactParameter();
    ProvisioningArtifactParameter(const Aws::Utils::Json::JsonValue& jsonValue);
    ProvisioningArtifactParameter& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The parameter key. </p>
     */
    inline const Aws::String& GetParameterKey() const{ return m_parameterKey; }

    /**
     * <p>The parameter key. </p>
     */
    inline void SetParameterKey(const Aws::String& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = value; }

    /**
     * <p>The parameter key. </p>
     */
    inline void SetParameterKey(Aws::String&& value) { m_parameterKeyHasBeenSet = true; m_parameterKey = value; }

    /**
     * <p>The parameter key. </p>
     */
    inline void SetParameterKey(const char* value) { m_parameterKeyHasBeenSet = true; m_parameterKey.assign(value); }

    /**
     * <p>The parameter key. </p>
     */
    inline ProvisioningArtifactParameter& WithParameterKey(const Aws::String& value) { SetParameterKey(value); return *this;}

    /**
     * <p>The parameter key. </p>
     */
    inline ProvisioningArtifactParameter& WithParameterKey(Aws::String&& value) { SetParameterKey(value); return *this;}

    /**
     * <p>The parameter key. </p>
     */
    inline ProvisioningArtifactParameter& WithParameterKey(const char* value) { SetParameterKey(value); return *this;}

    /**
     * <p>The default value for this parameter.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value for this parameter.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value for this parameter.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value for this parameter.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value for this parameter.</p>
     */
    inline ProvisioningArtifactParameter& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value for this parameter.</p>
     */
    inline ProvisioningArtifactParameter& WithDefaultValue(Aws::String&& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value for this parameter.</p>
     */
    inline ProvisioningArtifactParameter& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The parameter type.</p>
     */
    inline const Aws::String& GetParameterType() const{ return m_parameterType; }

    /**
     * <p>The parameter type.</p>
     */
    inline void SetParameterType(const Aws::String& value) { m_parameterTypeHasBeenSet = true; m_parameterType = value; }

    /**
     * <p>The parameter type.</p>
     */
    inline void SetParameterType(Aws::String&& value) { m_parameterTypeHasBeenSet = true; m_parameterType = value; }

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
    inline ProvisioningArtifactParameter& WithParameterType(Aws::String&& value) { SetParameterType(value); return *this;}

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
    inline void SetIsNoEcho(bool value) { m_isNoEchoHasBeenSet = true; m_isNoEcho = value; }

    /**
     * <p>If this value is true, the value for this parameter is obfuscated from view
     * when the parameter is retrieved. This parameter is used to hide sensitive
     * information.</p>
     */
    inline ProvisioningArtifactParameter& WithIsNoEcho(bool value) { SetIsNoEcho(value); return *this;}

    /**
     * <p>The text description of the parameter.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The text description of the parameter.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description of the parameter.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The text description of the parameter.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The text description of the parameter.</p>
     */
    inline ProvisioningArtifactParameter& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description of the parameter.</p>
     */
    inline ProvisioningArtifactParameter& WithDescription(Aws::String&& value) { SetDescription(value); return *this;}

    /**
     * <p>The text description of the parameter.</p>
     */
    inline ProvisioningArtifactParameter& WithDescription(const char* value) { SetDescription(value); return *this;}

    /**
     * <p>The list of constraints that the administrator has put on the parameter.</p>
     */
    inline const ParameterConstraints& GetParameterConstraints() const{ return m_parameterConstraints; }

    /**
     * <p>The list of constraints that the administrator has put on the parameter.</p>
     */
    inline void SetParameterConstraints(const ParameterConstraints& value) { m_parameterConstraintsHasBeenSet = true; m_parameterConstraints = value; }

    /**
     * <p>The list of constraints that the administrator has put on the parameter.</p>
     */
    inline void SetParameterConstraints(ParameterConstraints&& value) { m_parameterConstraintsHasBeenSet = true; m_parameterConstraints = value; }

    /**
     * <p>The list of constraints that the administrator has put on the parameter.</p>
     */
    inline ProvisioningArtifactParameter& WithParameterConstraints(const ParameterConstraints& value) { SetParameterConstraints(value); return *this;}

    /**
     * <p>The list of constraints that the administrator has put on the parameter.</p>
     */
    inline ProvisioningArtifactParameter& WithParameterConstraints(ParameterConstraints&& value) { SetParameterConstraints(value); return *this;}

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
