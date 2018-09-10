﻿/*
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
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace APIGateway
{
namespace Model
{

  /**
   * <p>A configuration property of an SDK type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/SdkConfigurationProperty">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API SdkConfigurationProperty
  {
  public:
    SdkConfigurationProperty();
    SdkConfigurationProperty(Aws::Utils::Json::JsonView jsonValue);
    SdkConfigurationProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of a an <a>SdkType</a> configuration property.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a an <a>SdkType</a> configuration property.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a an <a>SdkType</a> configuration property.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a an <a>SdkType</a> configuration property.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a an <a>SdkType</a> configuration property.</p>
     */
    inline SdkConfigurationProperty& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a an <a>SdkType</a> configuration property.</p>
     */
    inline SdkConfigurationProperty& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a an <a>SdkType</a> configuration property.</p>
     */
    inline SdkConfigurationProperty& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The user-friendly name of an <a>SdkType</a> configuration property.</p>
     */
    inline const Aws::String& GetFriendlyName() const{ return m_friendlyName; }

    /**
     * <p>The user-friendly name of an <a>SdkType</a> configuration property.</p>
     */
    inline void SetFriendlyName(const Aws::String& value) { m_friendlyNameHasBeenSet = true; m_friendlyName = value; }

    /**
     * <p>The user-friendly name of an <a>SdkType</a> configuration property.</p>
     */
    inline void SetFriendlyName(Aws::String&& value) { m_friendlyNameHasBeenSet = true; m_friendlyName = std::move(value); }

    /**
     * <p>The user-friendly name of an <a>SdkType</a> configuration property.</p>
     */
    inline void SetFriendlyName(const char* value) { m_friendlyNameHasBeenSet = true; m_friendlyName.assign(value); }

    /**
     * <p>The user-friendly name of an <a>SdkType</a> configuration property.</p>
     */
    inline SdkConfigurationProperty& WithFriendlyName(const Aws::String& value) { SetFriendlyName(value); return *this;}

    /**
     * <p>The user-friendly name of an <a>SdkType</a> configuration property.</p>
     */
    inline SdkConfigurationProperty& WithFriendlyName(Aws::String&& value) { SetFriendlyName(std::move(value)); return *this;}

    /**
     * <p>The user-friendly name of an <a>SdkType</a> configuration property.</p>
     */
    inline SdkConfigurationProperty& WithFriendlyName(const char* value) { SetFriendlyName(value); return *this;}


    /**
     * <p>The description of an <a>SdkType</a> configuration property.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of an <a>SdkType</a> configuration property.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of an <a>SdkType</a> configuration property.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of an <a>SdkType</a> configuration property.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of an <a>SdkType</a> configuration property.</p>
     */
    inline SdkConfigurationProperty& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of an <a>SdkType</a> configuration property.</p>
     */
    inline SdkConfigurationProperty& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of an <a>SdkType</a> configuration property.</p>
     */
    inline SdkConfigurationProperty& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A boolean flag of an <a>SdkType</a> configuration property to indicate if the
     * associated SDK configuration property is required (<code>true</code>) or not
     * (<code>false</code>).</p>
     */
    inline bool GetRequired() const{ return m_required; }

    /**
     * <p>A boolean flag of an <a>SdkType</a> configuration property to indicate if the
     * associated SDK configuration property is required (<code>true</code>) or not
     * (<code>false</code>).</p>
     */
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }

    /**
     * <p>A boolean flag of an <a>SdkType</a> configuration property to indicate if the
     * associated SDK configuration property is required (<code>true</code>) or not
     * (<code>false</code>).</p>
     */
    inline SdkConfigurationProperty& WithRequired(bool value) { SetRequired(value); return *this;}


    /**
     * <p>The default value of an <a>SdkType</a> configuration property.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The default value of an <a>SdkType</a> configuration property.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The default value of an <a>SdkType</a> configuration property.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The default value of an <a>SdkType</a> configuration property.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The default value of an <a>SdkType</a> configuration property.</p>
     */
    inline SdkConfigurationProperty& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The default value of an <a>SdkType</a> configuration property.</p>
     */
    inline SdkConfigurationProperty& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The default value of an <a>SdkType</a> configuration property.</p>
     */
    inline SdkConfigurationProperty& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_friendlyName;
    bool m_friendlyNameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    bool m_required;
    bool m_requiredHasBeenSet;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
