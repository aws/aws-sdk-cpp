/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/frauddetector/FraudDetector_EXPORTS.h>
#include <aws/frauddetector/FraudDetectorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace FraudDetector
{
namespace Model
{

  /**
   */
  class UpdateVariableRequest : public FraudDetectorRequest
  {
  public:
    AWS_FRAUDDETECTOR_API UpdateVariableRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVariable"; }

    AWS_FRAUDDETECTOR_API Aws::String SerializePayload() const override;

    AWS_FRAUDDETECTOR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the variable.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the variable.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the variable.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the variable.</p>
     */
    inline UpdateVariableRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the variable.</p>
     */
    inline UpdateVariableRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the variable.</p>
     */
    inline UpdateVariableRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The new default value of the variable.</p>
     */
    inline const Aws::String& GetDefaultValue() const{ return m_defaultValue; }

    /**
     * <p>The new default value of the variable.</p>
     */
    inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }

    /**
     * <p>The new default value of the variable.</p>
     */
    inline void SetDefaultValue(const Aws::String& value) { m_defaultValueHasBeenSet = true; m_defaultValue = value; }

    /**
     * <p>The new default value of the variable.</p>
     */
    inline void SetDefaultValue(Aws::String&& value) { m_defaultValueHasBeenSet = true; m_defaultValue = std::move(value); }

    /**
     * <p>The new default value of the variable.</p>
     */
    inline void SetDefaultValue(const char* value) { m_defaultValueHasBeenSet = true; m_defaultValue.assign(value); }

    /**
     * <p>The new default value of the variable.</p>
     */
    inline UpdateVariableRequest& WithDefaultValue(const Aws::String& value) { SetDefaultValue(value); return *this;}

    /**
     * <p>The new default value of the variable.</p>
     */
    inline UpdateVariableRequest& WithDefaultValue(Aws::String&& value) { SetDefaultValue(std::move(value)); return *this;}

    /**
     * <p>The new default value of the variable.</p>
     */
    inline UpdateVariableRequest& WithDefaultValue(const char* value) { SetDefaultValue(value); return *this;}


    /**
     * <p>The new description.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The new description.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The new description.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The new description.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The new description.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The new description.</p>
     */
    inline UpdateVariableRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The new description.</p>
     */
    inline UpdateVariableRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The new description.</p>
     */
    inline UpdateVariableRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>.</p>
     */
    inline const Aws::String& GetVariableType() const{ return m_variableType; }

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>.</p>
     */
    inline bool VariableTypeHasBeenSet() const { return m_variableTypeHasBeenSet; }

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>.</p>
     */
    inline void SetVariableType(const Aws::String& value) { m_variableTypeHasBeenSet = true; m_variableType = value; }

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>.</p>
     */
    inline void SetVariableType(Aws::String&& value) { m_variableTypeHasBeenSet = true; m_variableType = std::move(value); }

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>.</p>
     */
    inline void SetVariableType(const char* value) { m_variableTypeHasBeenSet = true; m_variableType.assign(value); }

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>.</p>
     */
    inline UpdateVariableRequest& WithVariableType(const Aws::String& value) { SetVariableType(value); return *this;}

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>.</p>
     */
    inline UpdateVariableRequest& WithVariableType(Aws::String&& value) { SetVariableType(std::move(value)); return *this;}

    /**
     * <p>The variable type. For more information see <a
     * href="https://docs.aws.amazon.com/frauddetector/latest/ug/create-a-variable.html#variable-types">Variable
     * types</a>.</p>
     */
    inline UpdateVariableRequest& WithVariableType(const char* value) { SetVariableType(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_defaultValue;
    bool m_defaultValueHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_variableType;
    bool m_variableTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace FraudDetector
} // namespace Aws
