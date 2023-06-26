/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
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
namespace CodePipeline
{
namespace Model
{

  /**
   * <p>Represents information about each property specified in the action
   * configuration, such as the description and key name that display for the
   * customer using the action type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codepipeline-2015-07-09/ActionTypeProperty">AWS
   * API Reference</a></p>
   */
  class ActionTypeProperty
  {
  public:
    AWS_CODEPIPELINE_API ActionTypeProperty();
    AWS_CODEPIPELINE_API ActionTypeProperty(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API ActionTypeProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEPIPELINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The property name that is displayed to users.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The property name that is displayed to users.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The property name that is displayed to users.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The property name that is displayed to users.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The property name that is displayed to users.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The property name that is displayed to users.</p>
     */
    inline ActionTypeProperty& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The property name that is displayed to users.</p>
     */
    inline ActionTypeProperty& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The property name that is displayed to users.</p>
     */
    inline ActionTypeProperty& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Whether the configuration property is an optional value.</p>
     */
    inline bool GetOptional() const{ return m_optional; }

    /**
     * <p>Whether the configuration property is an optional value.</p>
     */
    inline bool OptionalHasBeenSet() const { return m_optionalHasBeenSet; }

    /**
     * <p>Whether the configuration property is an optional value.</p>
     */
    inline void SetOptional(bool value) { m_optionalHasBeenSet = true; m_optional = value; }

    /**
     * <p>Whether the configuration property is an optional value.</p>
     */
    inline ActionTypeProperty& WithOptional(bool value) { SetOptional(value); return *this;}


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
    inline ActionTypeProperty& WithKey(bool value) { SetKey(value); return *this;}


    /**
     * <p>Whether to omit the field value entered by the customer in the log. If
     * <code>true</code>, the value is not saved in CloudTrail logs for the action
     * execution.</p>
     */
    inline bool GetNoEcho() const{ return m_noEcho; }

    /**
     * <p>Whether to omit the field value entered by the customer in the log. If
     * <code>true</code>, the value is not saved in CloudTrail logs for the action
     * execution.</p>
     */
    inline bool NoEchoHasBeenSet() const { return m_noEchoHasBeenSet; }

    /**
     * <p>Whether to omit the field value entered by the customer in the log. If
     * <code>true</code>, the value is not saved in CloudTrail logs for the action
     * execution.</p>
     */
    inline void SetNoEcho(bool value) { m_noEchoHasBeenSet = true; m_noEcho = value; }

    /**
     * <p>Whether to omit the field value entered by the customer in the log. If
     * <code>true</code>, the value is not saved in CloudTrail logs for the action
     * execution.</p>
     */
    inline ActionTypeProperty& WithNoEcho(bool value) { SetNoEcho(value); return *this;}


    /**
     * <p>Indicates that the property is used with polling. An action type can have up
     * to one queryable property. If it has one, that property must be both required
     * and not secret.</p>
     */
    inline bool GetQueryable() const{ return m_queryable; }

    /**
     * <p>Indicates that the property is used with polling. An action type can have up
     * to one queryable property. If it has one, that property must be both required
     * and not secret.</p>
     */
    inline bool QueryableHasBeenSet() const { return m_queryableHasBeenSet; }

    /**
     * <p>Indicates that the property is used with polling. An action type can have up
     * to one queryable property. If it has one, that property must be both required
     * and not secret.</p>
     */
    inline void SetQueryable(bool value) { m_queryableHasBeenSet = true; m_queryable = value; }

    /**
     * <p>Indicates that the property is used with polling. An action type can have up
     * to one queryable property. If it has one, that property must be both required
     * and not secret.</p>
     */
    inline ActionTypeProperty& WithQueryable(bool value) { SetQueryable(value); return *this;}


    /**
     * <p>The description of the property that is displayed to users.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the property that is displayed to users.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the property that is displayed to users.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the property that is displayed to users.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the property that is displayed to users.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the property that is displayed to users.</p>
     */
    inline ActionTypeProperty& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the property that is displayed to users.</p>
     */
    inline ActionTypeProperty& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the property that is displayed to users.</p>
     */
    inline ActionTypeProperty& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_optional;
    bool m_optionalHasBeenSet = false;

    bool m_key;
    bool m_keyHasBeenSet = false;

    bool m_noEcho;
    bool m_noEchoHasBeenSet = false;

    bool m_queryable;
    bool m_queryableHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
