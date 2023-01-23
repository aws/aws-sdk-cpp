/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/ThroughputMode.h>
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
   * <p>Amazon Keyspaces has two read/write capacity modes for processing reads and
   * writes on your tables: </p> <p>• On-demand (default)</p> <p>• Provisioned</p>
   * <p> The read/write capacity mode that you choose controls how you are charged
   * for read and write throughput and how table throughput capacity is managed.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
   * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/CapacitySpecification">AWS
   * API Reference</a></p>
   */
  class CapacitySpecification
  {
  public:
    AWS_KEYSPACES_API CapacitySpecification();
    AWS_KEYSPACES_API CapacitySpecification(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API CapacitySpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline const ThroughputMode& GetThroughputMode() const{ return m_throughputMode; }

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline bool ThroughputModeHasBeenSet() const { return m_throughputModeHasBeenSet; }

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetThroughputMode(const ThroughputMode& value) { m_throughputModeHasBeenSet = true; m_throughputMode = value; }

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline void SetThroughputMode(ThroughputMode&& value) { m_throughputModeHasBeenSet = true; m_throughputMode = std::move(value); }

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline CapacitySpecification& WithThroughputMode(const ThroughputMode& value) { SetThroughputMode(value); return *this;}

    /**
     * <p>The read/write throughput capacity mode for a table. The options are:</p>
     * <p>• <code>throughputMode:PAY_PER_REQUEST</code> and </p> <p>•
     * <code>throughputMode:PROVISIONED</code> - Provisioned capacity mode requires
     * <code>readCapacityUnits</code> and <code>writeCapacityUnits</code> as input.</p>
     * <p>The default is <code>throughput_mode:PAY_PER_REQUEST</code>.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/ReadWriteCapacityMode.html">Read/write
     * capacity modes</a> in the <i>Amazon Keyspaces Developer Guide</i>.</p>
     */
    inline CapacitySpecification& WithThroughputMode(ThroughputMode&& value) { SetThroughputMode(std::move(value)); return *this;}


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
    inline CapacitySpecification& WithReadCapacityUnits(long long value) { SetReadCapacityUnits(value); return *this;}


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
    inline CapacitySpecification& WithWriteCapacityUnits(long long value) { SetWriteCapacityUnits(value); return *this;}

  private:

    ThroughputMode m_throughputMode;
    bool m_throughputModeHasBeenSet = false;

    long long m_readCapacityUnits;
    bool m_readCapacityUnitsHasBeenSet = false;

    long long m_writeCapacityUnits;
    bool m_writeCapacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace Keyspaces
} // namespace Aws
