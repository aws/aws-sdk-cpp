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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionConfigurationPropertyType.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about an action configuration property.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionConfigurationProperty">AWS
   * API Reference</a></p>
   */
  class AWS_CODEPIPELINE_API ActionConfigurationProperty
  {
  public:
    ActionConfigurationProperty();
    ActionConfigurationProperty(Aws::Utils::Json::JsonView jsonValue);
    ActionConfigurationProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the action configuration property.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the action configuration property.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the action configuration property.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the action configuration property.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the action configuration property.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the action configuration property.</p>
     */
    inline ActionConfigurationProperty& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the action configuration property.</p>
     */
    inline ActionConfigurationProperty& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the action configuration property.</p>
     */
    inline ActionConfigurationProperty& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Whether the configuration property is a required value.</p>
     */
    inline bool GetRequired() const{ return m_required; }

    /**
     * <p>Whether the configuration property is a required value.</p>
     */
    inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }

    /**
     * <p>Whether the configuration property is a required value.</p>
     */
    inline void SetRequired(bool value) { m_requiredHasBeenSet = true; m_required = value; }

    /**
     * <p>Whether the configuration property is a required value.</p>
     */
    inline ActionConfigurationProperty& WithRequired(bool value) { SetRequired(value); return *this;}


    /**
     * <p>Whether the configuration property is a key.</p>
     */
    inline bool GetKey() const{ return m_key; }

    /**
     * <p>Whether the configuration property is a key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>Whether the configuration property is a key.</p>
     */
    inline void SetKey(bool value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>Whether the configuration property is a key.</p>
     */
    inline ActionConfigurationProperty& WithKey(bool value) { SetKey(value); return *this;}


    /**
     * <p>Whether the configuration property is secret. Secrets are hidden from all
     * calls except for <code>GetJobDetails</code>,
     * <code>GetThirdPartyJobDetails</code>, <code>PollForJobs</code>, and
     * <code>PollForThirdPartyJobs</code>.</p> <p>When updating a pipeline, passing * *
     * * * * without changing any other values of the action will preserve the prior
     * value of the secret.</p>
     */
    inline bool GetSecret() const{ return m_secret; }

    /**
     * <p>Whether the configuration property is secret. Secrets are hidden from all
     * calls except for <code>GetJobDetails</code>,
     * <code>GetThirdPartyJobDetails</code>, <code>PollForJobs</code>, and
     * <code>PollForThirdPartyJobs</code>.</p> <p>When updating a pipeline, passing * *
     * * * * without changing any other values of the action will preserve the prior
     * value of the secret.</p>
     */
    inline bool SecretHasBeenSet() const { return m_secretHasBeenSet; }

    /**
     * <p>Whether the configuration property is secret. Secrets are hidden from all
     * calls except for <code>GetJobDetails</code>,
     * <code>GetThirdPartyJobDetails</code>, <code>PollForJobs</code>, and
     * <code>PollForThirdPartyJobs</code>.</p> <p>When updating a pipeline, passing * *
     * * * * without changing any other values of the action will preserve the prior
     * value of the secret.</p>
     */
    inline void SetSecret(bool value) { m_secretHasBeenSet = true; m_secret = value; }

    /**
     * <p>Whether the configuration property is secret. Secrets are hidden from all
     * calls except for <code>GetJobDetails</code>,
     * <code>GetThirdPartyJobDetails</code>, <code>PollForJobs</code>, and
     * <code>PollForThirdPartyJobs</code>.</p> <p>When updating a pipeline, passing * *
     * * * * without changing any other values of the action will preserve the prior
     * value of the secret.</p>
     */
    inline ActionConfigurationProperty& WithSecret(bool value) { SetSecret(value); return *this;}


    /**
     * <p>Indicates that the property will be used in conjunction with
     * <code>PollForJobs</code>. When creating a custom action, an action can have up
     * to one queryable property. If it has one, that property must be both required
     * and not secret.</p> <p>If you create a pipeline with a custom action type, and
     * that custom action contains a queryable property, the value for that
     * configuration property is subject to additional restrictions. The value must be
     * less than or equal to twenty (20) characters. The value can contain only
     * alphanumeric characters, underscores, and hyphens.</p>
     */
    inline bool GetQueryable() const{ return m_queryable; }

    /**
     * <p>Indicates that the property will be used in conjunction with
     * <code>PollForJobs</code>. When creating a custom action, an action can have up
     * to one queryable property. If it has one, that property must be both required
     * and not secret.</p> <p>If you create a pipeline with a custom action type, and
     * that custom action contains a queryable property, the value for that
     * configuration property is subject to additional restrictions. The value must be
     * less than or equal to twenty (20) characters. The value can contain only
     * alphanumeric characters, underscores, and hyphens.</p>
     */
    inline bool QueryableHasBeenSet() const { return m_queryableHasBeenSet; }

    /**
     * <p>Indicates that the property will be used in conjunction with
     * <code>PollForJobs</code>. When creating a custom action, an action can have up
     * to one queryable property. If it has one, that property must be both required
     * and not secret.</p> <p>If you create a pipeline with a custom action type, and
     * that custom action contains a queryable property, the value for that
     * configuration property is subject to additional restrictions. The value must be
     * less than or equal to twenty (20) characters. The value can contain only
     * alphanumeric characters, underscores, and hyphens.</p>
     */
    inline void SetQueryable(bool value) { m_queryableHasBeenSet = true; m_queryable = value; }

    /**
     * <p>Indicates that the property will be used in conjunction with
     * <code>PollForJobs</code>. When creating a custom action, an action can have up
     * to one queryable property. If it has one, that property must be both required
     * and not secret.</p> <p>If you create a pipeline with a custom action type, and
     * that custom action contains a queryable property, the value for that
     * configuration property is subject to additional restrictions. The value must be
     * less than or equal to twenty (20) characters. The value can contain only
     * alphanumeric characters, underscores, and hyphens.</p>
     */
    inline ActionConfigurationProperty& WithQueryable(bool value) { SetQueryable(value); return *this;}


    /**
     * <p>The description of the action configuration property that will be displayed
     * to users.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the action configuration property that will be displayed
     * to users.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the action configuration property that will be displayed
     * to users.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the action configuration property that will be displayed
     * to users.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the action configuration property that will be displayed
     * to users.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the action configuration property that will be displayed
     * to users.</p>
     */
    inline ActionConfigurationProperty& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the action configuration property that will be displayed
     * to users.</p>
     */
    inline ActionConfigurationProperty& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the action configuration property that will be displayed
     * to users.</p>
     */
    inline ActionConfigurationProperty& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of the configuration property.</p>
     */
    inline const ActionConfigurationPropertyType& GetType() const{ return m_type; }

    /**
     * <p>The type of the configuration property.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the configuration property.</p>
     */
    inline void SetType(const ActionConfigurationPropertyType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the configuration property.</p>
     */
    inline void SetType(ActionConfigurationPropertyType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the configuration property.</p>
     */
    inline ActionConfigurationProperty& WithType(const ActionConfigurationPropertyType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the configuration property.</p>
     */
    inline ActionConfigurationProperty& WithType(ActionConfigurationPropertyType&& value) { SetType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    bool m_required;
    bool m_requiredHasBeenSet;

    bool m_key;
    bool m_keyHasBeenSet;

    bool m_secret;
    bool m_secretHasBeenSet;

    bool m_queryable;
    bool m_queryableHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    ActionConfigurationPropertyType m_type;
    bool m_typeHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
