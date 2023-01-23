/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/ExpressionType.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class UpdateDestinationRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API UpdateDestinationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDestination"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The new name of the resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The new name of the resource.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The new name of the resource.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The new name of the resource.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The new name of the resource.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The new name of the resource.</p>
     */
    inline UpdateDestinationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The new name of the resource.</p>
     */
    inline UpdateDestinationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The new name of the resource.</p>
     */
    inline UpdateDestinationRequest& WithName(const char* value) { SetName(value); return *this;}


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
    inline UpdateDestinationRequest& WithExpressionType(const ExpressionType& value) { SetExpressionType(value); return *this;}

    /**
     * <p>The type of value in <code>Expression</code>.</p>
     */
    inline UpdateDestinationRequest& WithExpressionType(ExpressionType&& value) { SetExpressionType(std::move(value)); return *this;}


    /**
     * <p>The new rule name or topic rule to send messages to.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>The new rule name or topic rule to send messages to.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>The new rule name or topic rule to send messages to.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>The new rule name or topic rule to send messages to.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>The new rule name or topic rule to send messages to.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>The new rule name or topic rule to send messages to.</p>
     */
    inline UpdateDestinationRequest& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>The new rule name or topic rule to send messages to.</p>
     */
    inline UpdateDestinationRequest& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>The new rule name or topic rule to send messages to.</p>
     */
    inline UpdateDestinationRequest& WithExpression(const char* value) { SetExpression(value); return *this;}


    /**
     * <p>A new description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A new description of the resource.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A new description of the resource.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A new description of the resource.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A new description of the resource.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A new description of the resource.</p>
     */
    inline UpdateDestinationRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A new description of the resource.</p>
     */
    inline UpdateDestinationRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A new description of the resource.</p>
     */
    inline UpdateDestinationRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline UpdateDestinationRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The ARN of the IAM Role that authorizes the destination.</p>
     */
    inline UpdateDestinationRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the IAM Role that authorizes the destination.</p>
     */
    inline UpdateDestinationRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}

  private:

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
