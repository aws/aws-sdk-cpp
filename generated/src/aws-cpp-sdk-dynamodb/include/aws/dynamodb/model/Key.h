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

  class Key
  {
  public:
    AWS_DYNAMODB_API Key();
    AWS_DYNAMODB_API Key(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Key& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const AttributeValue& GetHashKeyElement() const{ return m_hashKeyElement; }
    inline bool HashKeyElementHasBeenSet() const { return m_hashKeyElementHasBeenSet; }
    inline void SetHashKeyElement(const AttributeValue& value) { m_hashKeyElementHasBeenSet = true; m_hashKeyElement = value; }
    inline void SetHashKeyElement(AttributeValue&& value) { m_hashKeyElementHasBeenSet = true; m_hashKeyElement = std::move(value); }
    inline Key& WithHashKeyElement(const AttributeValue& value) { SetHashKeyElement(value); return *this;}
    inline Key& WithHashKeyElement(AttributeValue&& value) { SetHashKeyElement(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const AttributeValue& GetRangeKeyElement() const{ return m_rangeKeyElement; }
    inline bool RangeKeyElementHasBeenSet() const { return m_rangeKeyElementHasBeenSet; }
    inline void SetRangeKeyElement(const AttributeValue& value) { m_rangeKeyElementHasBeenSet = true; m_rangeKeyElement = value; }
    inline void SetRangeKeyElement(AttributeValue&& value) { m_rangeKeyElementHasBeenSet = true; m_rangeKeyElement = std::move(value); }
    inline Key& WithRangeKeyElement(const AttributeValue& value) { SetRangeKeyElement(value); return *this;}
    inline Key& WithRangeKeyElement(AttributeValue&& value) { SetRangeKeyElement(std::move(value)); return *this;}
    ///@}
  private:

    AttributeValue m_hashKeyElement;
    bool m_hashKeyElementHasBeenSet = false;

    AttributeValue m_rangeKeyElement;
    bool m_rangeKeyElementHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
