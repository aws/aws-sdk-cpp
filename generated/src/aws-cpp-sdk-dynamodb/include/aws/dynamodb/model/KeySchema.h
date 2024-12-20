/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/dynamodb/model/KeySchemaElement.h>
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

  class KeySchema
  {
  public:
    AWS_DYNAMODB_API KeySchema();
    AWS_DYNAMODB_API KeySchema(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API KeySchema& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const KeySchemaElement& GetHashKeyElement() const{ return m_hashKeyElement; }
    inline bool HashKeyElementHasBeenSet() const { return m_hashKeyElementHasBeenSet; }
    inline void SetHashKeyElement(const KeySchemaElement& value) { m_hashKeyElementHasBeenSet = true; m_hashKeyElement = value; }
    inline void SetHashKeyElement(KeySchemaElement&& value) { m_hashKeyElementHasBeenSet = true; m_hashKeyElement = std::move(value); }
    inline KeySchema& WithHashKeyElement(const KeySchemaElement& value) { SetHashKeyElement(value); return *this;}
    inline KeySchema& WithHashKeyElement(KeySchemaElement&& value) { SetHashKeyElement(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const KeySchemaElement& GetRangeKeyElement() const{ return m_rangeKeyElement; }
    inline bool RangeKeyElementHasBeenSet() const { return m_rangeKeyElementHasBeenSet; }
    inline void SetRangeKeyElement(const KeySchemaElement& value) { m_rangeKeyElementHasBeenSet = true; m_rangeKeyElement = value; }
    inline void SetRangeKeyElement(KeySchemaElement&& value) { m_rangeKeyElementHasBeenSet = true; m_rangeKeyElement = std::move(value); }
    inline KeySchema& WithRangeKeyElement(const KeySchemaElement& value) { SetRangeKeyElement(value); return *this;}
    inline KeySchema& WithRangeKeyElement(KeySchemaElement&& value) { SetRangeKeyElement(std::move(value)); return *this;}
    ///@}
  private:

    KeySchemaElement m_hashKeyElement;
    bool m_hashKeyElementHasBeenSet = false;

    KeySchemaElement m_rangeKeyElement;
    bool m_rangeKeyElementHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
