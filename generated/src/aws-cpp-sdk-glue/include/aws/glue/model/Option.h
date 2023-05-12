/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Specifies an option value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Option">AWS API
   * Reference</a></p>
   */
  class Option
  {
  public:
    AWS_GLUE_API Option();
    AWS_GLUE_API Option(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Option& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the value of the option.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>Specifies the value of the option.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>Specifies the value of the option.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>Specifies the value of the option.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>Specifies the value of the option.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>Specifies the value of the option.</p>
     */
    inline Option& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>Specifies the value of the option.</p>
     */
    inline Option& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>Specifies the value of the option.</p>
     */
    inline Option& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>Specifies the label of the option.</p>
     */
    inline const Aws::String& GetLabel() const{ return m_label; }

    /**
     * <p>Specifies the label of the option.</p>
     */
    inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }

    /**
     * <p>Specifies the label of the option.</p>
     */
    inline void SetLabel(const Aws::String& value) { m_labelHasBeenSet = true; m_label = value; }

    /**
     * <p>Specifies the label of the option.</p>
     */
    inline void SetLabel(Aws::String&& value) { m_labelHasBeenSet = true; m_label = std::move(value); }

    /**
     * <p>Specifies the label of the option.</p>
     */
    inline void SetLabel(const char* value) { m_labelHasBeenSet = true; m_label.assign(value); }

    /**
     * <p>Specifies the label of the option.</p>
     */
    inline Option& WithLabel(const Aws::String& value) { SetLabel(value); return *this;}

    /**
     * <p>Specifies the label of the option.</p>
     */
    inline Option& WithLabel(Aws::String&& value) { SetLabel(std::move(value)); return *this;}

    /**
     * <p>Specifies the label of the option.</p>
     */
    inline Option& WithLabel(const char* value) { SetLabel(value); return *this;}


    /**
     * <p>Specifies the description of the option.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Specifies the description of the option.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Specifies the description of the option.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Specifies the description of the option.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Specifies the description of the option.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Specifies the description of the option.</p>
     */
    inline Option& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Specifies the description of the option.</p>
     */
    inline Option& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Specifies the description of the option.</p>
     */
    inline Option& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    Aws::String m_label;
    bool m_labelHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
