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
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/codepipeline/model/ActionCategory.h>
#include <aws/codepipeline/model/ActionOwner.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about an action type.</p>
   */
  class AWS_CODEPIPELINE_API ActionTypeId
  {
  public:
    ActionTypeId();
    ActionTypeId(const Aws::Utils::Json::JsonValue& jsonValue);
    ActionTypeId& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>A category defines what kind of action can be taken in the stage, and
     * constrains the provider type for the action. Valid categories are limited to one
     * of the values below.</p>
     */
    inline const ActionCategory& GetCategory() const{ return m_category; }

    /**
     * <p>A category defines what kind of action can be taken in the stage, and
     * constrains the provider type for the action. Valid categories are limited to one
     * of the values below.</p>
     */
    inline void SetCategory(const ActionCategory& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>A category defines what kind of action can be taken in the stage, and
     * constrains the provider type for the action. Valid categories are limited to one
     * of the values below.</p>
     */
    inline void SetCategory(ActionCategory&& value) { m_categoryHasBeenSet = true; m_category = value; }

    /**
     * <p>A category defines what kind of action can be taken in the stage, and
     * constrains the provider type for the action. Valid categories are limited to one
     * of the values below.</p>
     */
    inline ActionTypeId& WithCategory(const ActionCategory& value) { SetCategory(value); return *this;}

    /**
     * <p>A category defines what kind of action can be taken in the stage, and
     * constrains the provider type for the action. Valid categories are limited to one
     * of the values below.</p>
     */
    inline ActionTypeId& WithCategory(ActionCategory&& value) { SetCategory(value); return *this;}

    /**
     * <p>The creator of the action being called.</p>
     */
    inline const ActionOwner& GetOwner() const{ return m_owner; }

    /**
     * <p>The creator of the action being called.</p>
     */
    inline void SetOwner(const ActionOwner& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The creator of the action being called.</p>
     */
    inline void SetOwner(ActionOwner&& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The creator of the action being called.</p>
     */
    inline ActionTypeId& WithOwner(const ActionOwner& value) { SetOwner(value); return *this;}

    /**
     * <p>The creator of the action being called.</p>
     */
    inline ActionTypeId& WithOwner(ActionOwner&& value) { SetOwner(value); return *this;}

    /**
     * <p>The provider of the service being called by the action. Valid providers are
     * determined by the action category. For example, an action in the Deploy category
     * type might have a provider of AWS CodeDeploy, which would be specified as
     * CodeDeploy.</p>
     */
    inline const Aws::String& GetProvider() const{ return m_provider; }

    /**
     * <p>The provider of the service being called by the action. Valid providers are
     * determined by the action category. For example, an action in the Deploy category
     * type might have a provider of AWS CodeDeploy, which would be specified as
     * CodeDeploy.</p>
     */
    inline void SetProvider(const Aws::String& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of the service being called by the action. Valid providers are
     * determined by the action category. For example, an action in the Deploy category
     * type might have a provider of AWS CodeDeploy, which would be specified as
     * CodeDeploy.</p>
     */
    inline void SetProvider(Aws::String&& value) { m_providerHasBeenSet = true; m_provider = value; }

    /**
     * <p>The provider of the service being called by the action. Valid providers are
     * determined by the action category. For example, an action in the Deploy category
     * type might have a provider of AWS CodeDeploy, which would be specified as
     * CodeDeploy.</p>
     */
    inline void SetProvider(const char* value) { m_providerHasBeenSet = true; m_provider.assign(value); }

    /**
     * <p>The provider of the service being called by the action. Valid providers are
     * determined by the action category. For example, an action in the Deploy category
     * type might have a provider of AWS CodeDeploy, which would be specified as
     * CodeDeploy.</p>
     */
    inline ActionTypeId& WithProvider(const Aws::String& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the service being called by the action. Valid providers are
     * determined by the action category. For example, an action in the Deploy category
     * type might have a provider of AWS CodeDeploy, which would be specified as
     * CodeDeploy.</p>
     */
    inline ActionTypeId& WithProvider(Aws::String&& value) { SetProvider(value); return *this;}

    /**
     * <p>The provider of the service being called by the action. Valid providers are
     * determined by the action category. For example, an action in the Deploy category
     * type might have a provider of AWS CodeDeploy, which would be specified as
     * CodeDeploy.</p>
     */
    inline ActionTypeId& WithProvider(const char* value) { SetProvider(value); return *this;}

    /**
     * <p>A string that identifies the action type.</p>
     */
    inline const Aws::String& GetVersion() const{ return m_version; }

    /**
     * <p>A string that identifies the action type.</p>
     */
    inline void SetVersion(const Aws::String& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>A string that identifies the action type.</p>
     */
    inline void SetVersion(Aws::String&& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>A string that identifies the action type.</p>
     */
    inline void SetVersion(const char* value) { m_versionHasBeenSet = true; m_version.assign(value); }

    /**
     * <p>A string that identifies the action type.</p>
     */
    inline ActionTypeId& WithVersion(const Aws::String& value) { SetVersion(value); return *this;}

    /**
     * <p>A string that identifies the action type.</p>
     */
    inline ActionTypeId& WithVersion(Aws::String&& value) { SetVersion(value); return *this;}

    /**
     * <p>A string that identifies the action type.</p>
     */
    inline ActionTypeId& WithVersion(const char* value) { SetVersion(value); return *this;}

  private:
    ActionCategory m_category;
    bool m_categoryHasBeenSet;
    ActionOwner m_owner;
    bool m_ownerHasBeenSet;
    Aws::String m_provider;
    bool m_providerHasBeenSet;
    Aws::String m_version;
    bool m_versionHasBeenSet;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
