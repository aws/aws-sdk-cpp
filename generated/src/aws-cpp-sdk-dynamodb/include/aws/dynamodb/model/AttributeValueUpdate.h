/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/AttributeValue.h>
#include <aws/dynamodb/model/AttributeAction.h>
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

  class AttributeValueUpdate
  {
  public:
    AWS_DYNAMODB_API AttributeValueUpdate();
    AWS_DYNAMODB_API AttributeValueUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API AttributeValueUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AttributeValue& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const AttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(AttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline AttributeValueUpdate& WithValue(const AttributeValue& value) { SetValue(value); return *this;}
    inline AttributeValueUpdate& WithValue(AttributeValue&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const AttributeAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const AttributeAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(AttributeAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline AttributeValueUpdate& WithAction(const AttributeAction& value) { SetAction(value); return *this;}
    inline AttributeValueUpdate& WithAction(AttributeAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}
  private:

    AttributeValue m_value;
    bool m_valueHasBeenSet = false;

    AttributeAction m_action;
    bool m_actionHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
