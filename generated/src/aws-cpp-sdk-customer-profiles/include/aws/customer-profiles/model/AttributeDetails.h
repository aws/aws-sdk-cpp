/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/AttributeItem.h>
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
namespace CustomerProfiles
{
namespace Model
{

  /**
   * <p>Mathematical expression and a list of attribute items specified in that
   * expression.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/customer-profiles-2020-08-15/AttributeDetails">AWS
   * API Reference</a></p>
   */
  class AttributeDetails
  {
  public:
    AWS_CUSTOMERPROFILES_API AttributeDetails();
    AWS_CUSTOMERPROFILES_API AttributeDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API AttributeDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CUSTOMERPROFILES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A list of attribute items specified in the mathematical expression.</p>
     */
    inline const Aws::Vector<AttributeItem>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A list of attribute items specified in the mathematical expression.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A list of attribute items specified in the mathematical expression.</p>
     */
    inline void SetAttributes(const Aws::Vector<AttributeItem>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A list of attribute items specified in the mathematical expression.</p>
     */
    inline void SetAttributes(Aws::Vector<AttributeItem>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A list of attribute items specified in the mathematical expression.</p>
     */
    inline AttributeDetails& WithAttributes(const Aws::Vector<AttributeItem>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A list of attribute items specified in the mathematical expression.</p>
     */
    inline AttributeDetails& WithAttributes(Aws::Vector<AttributeItem>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A list of attribute items specified in the mathematical expression.</p>
     */
    inline AttributeDetails& AddAttributes(const AttributeItem& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>A list of attribute items specified in the mathematical expression.</p>
     */
    inline AttributeDetails& AddAttributes(AttributeItem&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>Mathematical expression that is performed on attribute items provided in the
     * attribute list. Each element in the expression should follow the structure of
     * \"{ObjectTypeName.AttributeName}\".</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>Mathematical expression that is performed on attribute items provided in the
     * attribute list. Each element in the expression should follow the structure of
     * \"{ObjectTypeName.AttributeName}\".</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>Mathematical expression that is performed on attribute items provided in the
     * attribute list. Each element in the expression should follow the structure of
     * \"{ObjectTypeName.AttributeName}\".</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>Mathematical expression that is performed on attribute items provided in the
     * attribute list. Each element in the expression should follow the structure of
     * \"{ObjectTypeName.AttributeName}\".</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>Mathematical expression that is performed on attribute items provided in the
     * attribute list. Each element in the expression should follow the structure of
     * \"{ObjectTypeName.AttributeName}\".</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>Mathematical expression that is performed on attribute items provided in the
     * attribute list. Each element in the expression should follow the structure of
     * \"{ObjectTypeName.AttributeName}\".</p>
     */
    inline AttributeDetails& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>Mathematical expression that is performed on attribute items provided in the
     * attribute list. Each element in the expression should follow the structure of
     * \"{ObjectTypeName.AttributeName}\".</p>
     */
    inline AttributeDetails& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>Mathematical expression that is performed on attribute items provided in the
     * attribute list. Each element in the expression should follow the structure of
     * \"{ObjectTypeName.AttributeName}\".</p>
     */
    inline AttributeDetails& WithExpression(const char* value) { SetExpression(value); return *this;}

  private:

    Aws::Vector<AttributeItem> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
