/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
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

  class ExpectedAttributeValue
  {
  public:
    AWS_DYNAMODB_API ExpectedAttributeValue();
    AWS_DYNAMODB_API ExpectedAttributeValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ExpectedAttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AttributeValue& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const AttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(AttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline ExpectedAttributeValue& WithValue(const AttributeValue& value) { SetValue(value); return *this;}
    inline ExpectedAttributeValue& WithValue(AttributeValue&& value) { SetValue(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline bool GetExists() const{ return m_exists; }
    inline bool ExistsHasBeenSet() const { return m_existsHasBeenSet; }
    inline void SetExists(bool value) { m_existsHasBeenSet = true; m_exists = value; }
    inline ExpectedAttributeValue& WithExists(bool value) { SetExists(value); return *this;}
    ///@}
  private:

    AttributeValue m_value;
    bool m_valueHasBeenSet = false;

    bool m_exists;
    bool m_existsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
