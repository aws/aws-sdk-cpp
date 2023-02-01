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
   * <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
   * <code>throughputMode:PROVISIONED</code>.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
   * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/CapacitySpecificationSummary">AWS
   * API Reference</a></p>
   */
  class CapacitySpecificationSummary
  {
  public:
    AWS_KEYSPACES_API CapacitySpecificationSummary();
    AWS_KEYSPACES_API CapacitySpecificationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API CapacitySpecificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.
     * </p> <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const ThroughputMode& GetThroughputMode() const{ return m_throughputMode; }

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.
     * </p> <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline bool ThroughputModeHasBeenSet() const { return m_throughputModeHasBeenSet; }

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.
     * </p> <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetThroughputMode(const ThroughputMode& value) { m_throughputModeHasBeenSet = true; m_throughputMode = value; }

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.
     * </p> <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetThroughputMode(ThroughputMode&& value) { m_throughputModeHasBeenSet = true; m_throughputMode = std::move(value); }

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.
     * </p> <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline CapacitySpecificationSummary& WithThroughputMode(const ThroughputMode& value) { SetThroughputMode(value); return *this;}

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.
     * </p> <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline CapacitySpecificationSummary& WithThroughputMode(ThroughputMode&& value) { SetThroughputMode(std::move(value)); return *this;}


    /**
     * <p>The throughput capacity specified for <code>read</code> operations defined in
     * <code>read capacity units</code> <code>(RCUs)</code>.</p>
     */
    inline long long GetReadCapacityUnits() const{ return m_readCapacityUnits; }

    /**
     * <p>The throughput capacity specified for <code>read</code> operations defined in
     * <code>read capacity units</code> <code>(RCUs)</code>.</p>
     */
    inline bool ReadCapacityUnitsHasBeenSet() const { return m_readCapacityUnitsHasBeenSet; }

    /**
     * <p>The throughput capacity specified for <code>read</code> operations defined in
     * <code>read capacity units</code> <code>(RCUs)</code>.</p>
     */
    inline void SetReadCapacityUnits(long long value) { m_readCapacityUnitsHasBeenSet = true; m_readCapacityUnits = value; }

    /**
     * <p>The throughput capacity specified for <code>read</code> operations defined in
     * <code>read capacity units</code> <code>(RCUs)</code>.</p>
     */
    inline CapacitySpecificationSummary& WithReadCapacityUnits(long long value) { SetReadCapacityUnits(value); return *this;}


    /**
     * <p>The throughput capacity specified for <code>write</code> operations defined
     * in <code>write capacity units</code> <code>(WCUs)</code>.</p>
     */
    inline long long GetWriteCapacityUnits() const{ return m_writeCapacityUnits; }

    /**
     * <p>The throughput capacity specified for <code>write</code> operations defined
     * in <code>write capacity units</code> <code>(WCUs)</code>.</p>
     */
    inline bool WriteCapacityUnitsHasBeenSet() const { return m_writeCapacityUnitsHasBeenSet; }

    /**
     * <p>The throughput capacity specified for <code>write</code> operations defined
     * in <code>write capacity units</code> <code>(WCUs)</code>.</p>
     */
    inline void SetWriteCapacityUnits(long long value) { m_writeCapacityUnitsHasBeenSet = true; m_writeCapacityUnits = value; }

    /**
     * <p>The throughput capacity specified for <code>write</code> operations defined
     * in <code>write capacity units</code> <code>(WCUs)</code>.</p>
     */
    inline CapacitySpecificationSummary& WithWriteCapacityUnits(long long value) { SetWriteCapacityUnits(value); return *this;}


    /**
     * <p>The timestamp of the last operation that changed the provisioned throughput
     * capacity of a table.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateToPayPerRequestTimestamp() const{ return m_lastUpdateToPayPerRequestTimestamp; }

    /**
     * <p>The timestamp of the last operation that changed the provisioned throughput
     * capacity of a table.</p>
     */
    inline bool LastUpdateToPayPerRequestTimestampHasBeenSet() const { return m_lastUpdateToPayPerRequestTimestampHasBeenSet; }

    /**
     * <p>The timestamp of the last operation that changed the provisioned throughput
     * capacity of a table.</p>
     */
    inline void SetLastUpdateToPayPerRequestTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdateToPayPerRequestTimestampHasBeenSet = true; m_lastUpdateToPayPerRequestTimestamp = value; }

    /**
     * <p>The timestamp of the last operation that changed the provisioned throughput
     * capacity of a table.</p>
     */
    inline void SetLastUpdateToPayPerRequestTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdateToPayPerRequestTimestampHasBeenSet = true; m_lastUpdateToPayPerRequestTimestamp = std::move(value); }

    /**
     * <p>The timestamp of the last operation that changed the provisioned throughput
     * capacity of a table.</p>
     */
    inline CapacitySpecificationSummary& WithLastUpdateToPayPerRequestTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdateToPayPerRequestTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the last operation that changed the provisioned throughput
     * capacity of a table.</p>
     */
    inline CapacitySpecificationSummary& WithLastUpdateToPayPerRequestTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdateToPayPerRequestTimestamp(std::move(value)); return *this;}

  private:

    ThroughputMode m_throughputMode;
    bool m_throughputModeHasBeenSet = false;

    long long m_readCapacityUnits;
    bool m_readCapacityUnitsHasBeenSet = false;

    long long m_writeCapacityUnits;
    bool m_writeCapacityUnitsHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateToPayPerRequestTimestamp;
    bool m_lastUpdateToPayPerRequestTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
