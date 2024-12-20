/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>

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

  class ProvisionedThroughput
  {
  public:
    AWS_DYNAMODB_API ProvisionedThroughput();
    AWS_DYNAMODB_API ProvisionedThroughput(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ProvisionedThroughput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline long long GetReadCapacityUnits() const{ return m_readCapacityUnits; }
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }
    inline void SetReadCapacityUnits(long long value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }
    inline ProvisionedThroughput& WithReadCapacityUnits(long long value) { SetReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetWriteCapacityUnits() const{ return m_writeCapacityUnits; }
    inline bool WriteCapacityUnitsHasBeenSet() const { return m_writeCapacityUnitsHasBeenSet; }
    inline void SetWriteCapacityUnits(long long value) { m_writeCapacityUnitsHasBeenSet = true; m_writeCapacityUnits = value; }
    inline ProvisionedThroughput& WithWriteCapacityUnits(long long value) { SetWriteCapacityUnits(value); return *this;}
    ///@}
  private:

    long long m_readCapacityUnits;
    bool m_readCapacityUnitsHasBeenSet = false;

    long long m_writeCapacityUnits;
    bool m_writeCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
