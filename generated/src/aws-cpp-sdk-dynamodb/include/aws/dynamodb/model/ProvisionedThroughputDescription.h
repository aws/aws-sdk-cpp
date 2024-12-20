/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dynamodb/DynamoDB_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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

  class ProvisionedThroughputDescription
  {
  public:
    AWS_DYNAMODB_API ProvisionedThroughputDescription();
    AWS_DYNAMODB_API ProvisionedThroughputDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ProvisionedThroughputDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::Utils::DateTime& GetLastIncreaseDateTime() const{ return m_lastIncreaseDateTime; }
    inline bool LastIncreaseDateTimeHasBeenSet() const { return m_lastIncreaseDateTimeHasBeenSet; }
    inline void SetLastIncreaseDateTime(const Aws::Utils::DateTime& value) { m_lastIncreaseDateTimeHasBeenSet = true; m_lastIncreaseDateTime = value; }
    inline void SetLastIncreaseDateTime(Aws::Utils::DateTime&& value) { m_lastIncreaseDateTimeHasBeenSet = true; m_lastIncreaseDateTime = std::move(value); }
    inline ProvisionedThroughputDescription& WithLastIncreaseDateTime(const Aws::Utils::DateTime& value) { SetLastIncreaseDateTime(value); return *this;}
    inline ProvisionedThroughputDescription& WithLastIncreaseDateTime(Aws::Utils::DateTime&& value) { SetLastIncreaseDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetLastDecreaseDateTime() const{ return m_lastDecreaseDateTime; }
    inline bool LastDecreaseDateTimeHasBeenSet() const { return m_lastDecreaseDateTimeHasBeenSet; }
    inline void SetLastDecreaseDateTime(const Aws::Utils::DateTime& value) { m_lastDecreaseDateTimeHasBeenSet = true; m_lastDecreaseDateTime = value; }
    inline void SetLastDecreaseDateTime(Aws::Utils::DateTime&& value) { m_lastDecreaseDateTimeHasBeenSet = true; m_lastDecreaseDateTime = std::move(value); }
    inline ProvisionedThroughputDescription& WithLastDecreaseDateTime(const Aws::Utils::DateTime& value) { SetLastDecreaseDateTime(value); return *this;}
    inline ProvisionedThroughputDescription& WithLastDecreaseDateTime(Aws::Utils::DateTime&& value) { SetLastDecreaseDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline long long GetNumberOfDecreasesToday() const{ return m_numberOfDecreasesToday; }
    inline bool NumberOfDecreasesTodayHasBeenSet() const { return m_numberOfDecreasesTodayHasBeenSet; }
    inline void SetNumberOfDecreasesToday(long long value) { m_numberOfDecreasesTodayHasBeenSet = true; m_numberOfDecreasesToday = value; }
    inline ProvisionedThroughputDescription& WithNumberOfDecreasesToday(long long value) { SetNumberOfDecreasesToday(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetReadCapacityUnits() const{ return m_readCapacityUnits; }
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }
    inline void SetReadCapacityUnits(long long value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }
    inline ProvisionedThroughputDescription& WithReadCapacityUnits(long long value) { SetReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    
    inline long long GetWriteCapacityUnits() const{ return m_writeCapacityUnits; }
    inline bool WriteCapacityUnitsHasBeenSet() const { return m_writeCapacityUnitsHasBeenSet; }
    inline void SetWriteCapacityUnits(long long value) { m_writeCapacityUnitsHasBeenSet = true; m_writeCapacityUnits = value; }
    inline ProvisionedThroughputDescription& WithWriteCapacityUnits(long long value) { SetWriteCapacityUnits(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastIncreaseDateTime;
    bool m_lastIncreaseDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastDecreaseDateTime;
    bool m_lastDecreaseDateTimeHasBeenSet = false;

    long long m_numberOfDecreasesToday;
    bool m_numberOfDecreasesTodayHasBeenSet = false;

    long long m_readCapacityUnits;
    bool m_readCapacityUnitsHasBeenSet = false;

    long long m_writeCapacityUnits;
    bool m_writeCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
