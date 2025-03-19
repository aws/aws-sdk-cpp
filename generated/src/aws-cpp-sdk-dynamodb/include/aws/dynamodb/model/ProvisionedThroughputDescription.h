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

  /**
   * <p>Represents the provisioned throughput settings for the table, consisting of
   * read and write capacity units, along with data about increases and
   * decreases.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dynamodb-2012-08-10/ProvisionedThroughputDescription">AWS
   * API Reference</a></p>
   */
  class ProvisionedThroughputDescription
  {
  public:
    AWS_DYNAMODB_API ProvisionedThroughputDescription() = default;
    AWS_DYNAMODB_API ProvisionedThroughputDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API ProvisionedThroughputDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DYNAMODB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time of the last provisioned throughput increase for this
     * table.</p>
     */
    inline const Aws::Utils::DateTime& GetLastIncreaseDateTime() const { return m_lastIncreaseDateTime; }
    inline bool LastIncreaseDateTimeHasBeenSet() const { return m_lastIncreaseDateTimeHasBeenSet; }
    template<typename LastIncreaseDateTimeT = Aws::Utils::DateTime>
    void SetLastIncreaseDateTime(LastIncreaseDateTimeT&& value) { m_lastIncreaseDateTimeHasBeenSet = true; m_lastIncreaseDateTime = std::forward<LastIncreaseDateTimeT>(value); }
    template<typename LastIncreaseDateTimeT = Aws::Utils::DateTime>
    ProvisionedThroughputDescription& WithLastIncreaseDateTime(LastIncreaseDateTimeT&& value) { SetLastIncreaseDateTime(std::forward<LastIncreaseDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time of the last provisioned throughput decrease for this
     * table.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDecreaseDateTime() const { return m_lastDecreaseDateTime; }
    inline bool LastDecreaseDateTimeHasBeenSet() const { return m_lastDecreaseDateTimeHasBeenSet; }
    template<typename LastDecreaseDateTimeT = Aws::Utils::DateTime>
    void SetLastDecreaseDateTime(LastDecreaseDateTimeT&& value) { m_lastDecreaseDateTimeHasBeenSet = true; m_lastDecreaseDateTime = std::forward<LastDecreaseDateTimeT>(value); }
    template<typename LastDecreaseDateTimeT = Aws::Utils::DateTime>
    ProvisionedThroughputDescription& WithLastDecreaseDateTime(LastDecreaseDateTimeT&& value) { SetLastDecreaseDateTime(std::forward<LastDecreaseDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of provisioned throughput decreases for this table during this UTC
     * calendar day. For current maximums on provisioned throughput decreases, see <a
     * href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Limits.html">Service,
     * Account, and Table Quotas</a> in the <i>Amazon DynamoDB Developer Guide</i>.</p>
     */
    inline long long GetNumberOfDecreasesToday() const { return m_numberOfDecreasesToday; }
    inline bool NumberOfDecreasesTodayHasBeenSet() const { return m_numberOfDecreasesTodayHasBeenSet; }
    inline void SetNumberOfDecreasesToday(long long value) { m_numberOfDecreasesTodayHasBeenSet = true; m_numberOfDecreasesToday = value; }
    inline ProvisionedThroughputDescription& WithNumberOfDecreasesToday(long long value) { SetNumberOfDecreasesToday(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of strongly consistent reads consumed per second before
     * DynamoDB returns a <code>ThrottlingException</code>. Eventually consistent reads
     * require less effort than strongly consistent reads, so a setting of 50
     * <code>ReadCapacityUnits</code> per second provides 100 eventually consistent
     * <code>ReadCapacityUnits</code> per second.</p>
     */
    inline long long GetReadCapacityUnits() const { return m_readCapacityUnits; }
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }
    inline void SetReadCapacityUnits(long long value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }
    inline ProvisionedThroughputDescription& WithReadCapacityUnits(long long value) { SetReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of writes consumed per second before DynamoDB returns a
     * <code>ThrottlingException</code>.</p>
     */
    inline long long GetWriteCapacityUnits() const { return m_writeCapacityUnits; }
    inline bool WriteCapacityUnitsHasBeenSet() const { return m_writeCapacityUnitsHasBeenSet; }
    inline void SetWriteCapacityUnits(long long value) { m_writeCapacityUnitsHasBeenSet = true; m_writeCapacityUnits = value; }
    inline ProvisionedThroughputDescription& WithWriteCapacityUnits(long long value) { SetWriteCapacityUnits(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_lastIncreaseDateTime{};
    bool m_lastIncreaseDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastDecreaseDateTime{};
    bool m_lastDecreaseDateTimeHasBeenSet = false;

    long long m_numberOfDecreasesToday{0};
    bool m_numberOfDecreasesTodayHasBeenSet = false;

    long long m_readCapacityUnits{0};
    bool m_readCapacityUnitsHasBeenSet = false;

    long long m_writeCapacityUnits{0};
    bool m_writeCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace DynamoDB
} // namespace Aws
