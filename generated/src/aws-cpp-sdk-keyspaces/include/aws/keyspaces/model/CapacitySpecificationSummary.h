/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/ThroughputMode.h>
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
namespace Keyspaces
{
namespace Model
{

  /**
   * <p>The read/write throughput capacity mode for a table. The options are:</p>
   * <ul> <li> <p> <code>throughputMode:PAY_PER_REQUEST</code> and </p> </li> <li>
   * <p> <code>throughputMode:PROVISIONED</code>.</p> </li> </ul> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
   * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/CapacitySpecificationSummary">AWS
   * API Reference</a></p>
   */
  class CapacitySpecificationSummary
  {
  public:
    AWS_KEYSPACES_API CapacitySpecificationSummary() = default;
    AWS_KEYSPACES_API CapacitySpecificationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API CapacitySpecificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <ul> <li> <p> <code>throughputMode:PAY_PER_REQUEST</code> and </p> </li> <li>
     * <p> <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.
     * </p> </li> </ul> <p>The default is
     * <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more information, see
     * <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline ThroughputMode GetThroughputMode() const { return m_throughputMode; }
    inline bool ThroughputModeHasBeenSet() const { return m_throughputModeHasBeenSet; }
    inline void SetThroughputMode(ThroughputMode value) { m_throughputModeHasBeenSet = true; m_throughputMode = value; }
    inline CapacitySpecificationSummary& WithThroughputMode(ThroughputMode value) { SetThroughputMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput capacity specified for <code>read</code> operations defined in
     * <code>read capacity units</code> <code>(RCUs)</code>.</p>
     */
    inline long long GetReadCapacityUnits() const { return m_readCapacityUnits; }
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }
    inline void SetReadCapacityUnits(long long value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }
    inline CapacitySpecificationSummary& WithReadCapacityUnits(long long value) { SetReadCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The throughput capacity specified for <code>write</code> operations defined
     * in <code>write capacity units</code> <code>(WCUs)</code>.</p>
     */
    inline long long GetWriteCapacityUnits() const { return m_writeCapacityUnits; }
    inline bool WriteCapacityUnitsHasBeenSet() const { return m_writeCapacityUnitsHasBeenSet; }
    inline void SetWriteCapacityUnits(long long value) { m_writeCapacityUnitsHasBeenSet = true; m_writeCapacityUnits = value; }
    inline CapacitySpecificationSummary& WithWriteCapacityUnits(long long value) { SetWriteCapacityUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last operation that changed the provisioned throughput
     * capacity of a table.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateToPayPerRequestTimestamp() const { return m_lastUpdateToPayPerRequestTimestamp; }
    inline bool LastUpdateToPayPerRequestTimestampHasBeenSet() const { return m_lastUpdateToPayPerRequestTimestampHasBeenSet; }
    template<typename LastUpdateToPayPerRequestTimestampT = Aws::Utils::DateTime>
    void SetLastUpdateToPayPerRequestTimestamp(LastUpdateToPayPerRequestTimestampT&& value) { m_lastUpdateToPayPerRequestTimestampHasBeenSet = true; m_lastUpdateToPayPerRequestTimestamp = std::forward<LastUpdateToPayPerRequestTimestampT>(value); }
    template<typename LastUpdateToPayPerRequestTimestampT = Aws::Utils::DateTime>
    CapacitySpecificationSummary& WithLastUpdateToPayPerRequestTimestamp(LastUpdateToPayPerRequestTimestampT&& value) { SetLastUpdateToPayPerRequestTimestamp(std::forward<LastUpdateToPayPerRequestTimestampT>(value)); return *this;}
    ///@}
  private:

    ThroughputMode m_throughputMode{ThroughputMode::NOT_SET};
    bool m_throughputModeHasBeenSet = false;

    long long m_readCapacityUnits{0};
    bool m_readCapacityUnitsHasBeenSet = false;

    long long m_writeCapacityUnits{0};
    bool m_writeCapacityUnitsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateToPayPerRequestTimestamp{};
    bool m_lastUpdateToPayPerRequestTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
