/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/ExpressionType.h>
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
namespace IoTWireless
{
namespace Model
{

  /**
   * <p>Describes a destination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotwireless-2020-11-22/Destinations">AWS
   * API Reference</a></p>
   */
  class Destinations
  {
  public:
    AWS_IOTWIRELESS_API Destinations();
    AWS_IOTWIRELESS_API Destinations(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Destinations& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTWIRELESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline Destinations& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline Destinations& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name of the resource.</p>
     */
    inline Destinations& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the resource.</p>
     */
    inline Destinations& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline Destinations& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource.</p>
     */
    inline Destinations& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The type of value in <code>Expression</code>.</p>
     */
    inline const ExpressionType& GetExpressionType() const{ return m_expressionType; }

    /**
     * <p>The type of value in <code>Expression</code>.</p>
     */
    inline bool ExpressionTypeHasBeenSet() const { return m_expressionTypeHasBeenSet; }

    /**
     * <p>The type of value in <code>Expression</code>.</p>
     */
    inline void SetExpressionType(const ExpressionType& value) { m_expressionTypeHasBeenSet = true; m_expressionType = value; }

    /**
     * <p>The type of value in <code>Expression</code>.</p>
     */
    inline void SetExpressionType(ExpressionType&& value) { m_expressionTypeHasBeenSet = true; m_expressionType = std::move(value); }

    /**
     * <p>The type of value in <code>Expression</code>.</p>
     */
    inline Destinations& WithExpressionType(const ExpressionType& value) { SetExpressionType(value); return *this;}

    /**
     * <p>The type of value in <code>Expression</code>.</p>
     */
    inline Destinations& WithExpressionType(ExpressionType&& value) { SetExpressionType(std::move(value)); return *this;}


    /**
     * <p>The rule name or topic rule to send messages to.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The rule name or topic rule to send messages to.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The rule name or topic rule to send messages to.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The rule name or topic rule to send messages to.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The rule name or topic rule to send messages to.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The rule name or topic rule to send messages to.</p>
     */
    inline Destinations& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The rule name or topic rule to send messages to.</p>
     */
    inline Destinations& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The rule name or topic rule to send messages to.</p>
     */
    inline Destinations& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>The description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the resource.</p>
     */
    inline Destinations& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the resource.</p>
     */
    inline Destinations& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the resource.</p>
     */
    inline Destinations& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ARN of the IAM Role that authorizes the destination.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The ARN of the IAM Role that authorizes the destination.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The ARN of the IAM Role that authorizes the destination.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The ARN of the IAM Role that authorizes the destination.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The ARN of the IAM Role that authorizes the destination.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The ARN of the IAM Role that authorizes the destination.</p>
     */
    inline Destinations& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM Role that authorizes the destination.</p>
     */
    inline Destinations& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM Role that authorizes the destination.</p>
     */
    inline Destinations& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ExpressionType m_expressionType;
    bool m_expressionTypeHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
