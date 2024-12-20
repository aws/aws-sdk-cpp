/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/dynamodb/model/ComparisonOperator.h>
#include <aws/dynamodb/model/AttributeValue.h>
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
namespace DynamoDB
{
namespace Model
{

  class Condition
  {
  public:
    AWS_DYNAMODB_API Condition();
    AWS_DYNAMODB_API Condition(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Condition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Vector<AttributeValue>& GetAttributeValueList() const{ return m_attributeValueList; }
    inline bool AttributeValueListHasBeenSet() const { return m_attributeValueListHasBeenSet; }
    inline void SetAttributeValueList(const Aws::Vector<AttributeValue>& value) { m_attributeValueListHasBeenSet = true; m_attributeValueList = value; }
    inline void SetAttributeValueList(Aws::Vector<AttributeValue>&& value) { m_attributeValueListHasBeenSet = true; m_attributeValueList = std::move(value); }
    inline Condition& WithAttributeValueList(const Aws::Vector<AttributeValue>& value) { SetAttributeValueList(value); return *this;}
    inline Condition& WithAttributeValueList(Aws::Vector<AttributeValue>&& value) { SetAttributeValueList(std::move(value)); return *this;}
    inline Condition& AddAttributeValueList(const AttributeValue& value) { m_attributeValueListHasBeenSet = true; m_attributeValueList.push_back(value); return *this; }
    inline Condition& AddAttributeValueList(AttributeValue&& value) { m_attributeValueListHasBeenSet = true; m_attributeValueList.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const ComparisonOperator& GetComparisonOperator() const{ return m_comparisonOperator; }
    inline bool ComparisonOperatorHasBeenSet() const { return m_comparisonOperatorHasBeenSet; }
    inline void SetComparisonOperator(const ComparisonOperator& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = value; }
    inline void SetComparisonOperator(ComparisonOperator&& value) { m_comparisonOperatorHasBeenSet = true; m_comparisonOperator = std::move(value); }
    inline Condition& WithComparisonOperator(const ComparisonOperator& value) { SetComparisonOperator(value); return *this;}
    inline Condition& WithComparisonOperator(ComparisonOperator&& value) { SetComparisonOperator(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AttributeValue> m_attributeValueList;
    bool m_attributeValueListHasBeenSet = false;

    ComparisonOperator m_comparisonOperator;
    bool m_comparisonOperatorHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
