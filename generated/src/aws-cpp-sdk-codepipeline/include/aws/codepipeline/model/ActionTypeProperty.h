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


    ///@{
    /**
     * <p>The property name that is displayed to users.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ActionTypeProperty& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ActionTypeProperty& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ActionTypeProperty& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the configuration property is an optional value.</p>
     */
    inline bool GetOptional() const{ return m_optional; }
    inline bool OptionalHasBeenSet() const { return m_optionalHasBeenSet; }
    inline void SetOptional(bool value) { m_optionalHasBeenSet = true; m_optional = value; }
    inline ActionTypeProperty& WithOptional(bool value) { SetOptional(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the configuration property is a key.</p>
     */
    inline bool GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(bool value) { m_keyHasBeenSet = true; m_key = value; }
    inline ActionTypeProperty& WithKey(bool value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether to omit the field value entered by the customer in the log. If
     * <code>true</code>, the value is not saved in CloudTrail logs for the action
     * execution.</p>
     */
    inline bool GetNoEcho() const{ return m_noEcho; }
    inline bool NoEchoHasBeenSet() const { return m_noEchoHasBeenSet; }
    inline void SetNoEcho(bool value) { m_noEchoHasBeenSet = true; m_noEcho = value; }
    inline ActionTypeProperty& WithNoEcho(bool value) { SetNoEcho(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates that the property is used with polling. An action type can have up
     * to one queryable property. If it has one, that property must be both required
     * and not secret.</p>
     */
    inline bool GetQueryable() const{ return m_queryable; }
    inline bool QueryableHasBeenSet() const { return m_queryableHasBeenSet; }
    inline void SetQueryable(bool value) { m_queryableHasBeenSet = true; m_queryable = value; }
    inline ActionTypeProperty& WithQueryable(bool value) { SetQueryable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the property that is displayed to users.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ActionTypeProperty& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ActionTypeProperty& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ActionTypeProperty& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
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
