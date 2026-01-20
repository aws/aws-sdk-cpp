/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Keyspaces {
namespace Model {

/**
 * <p>Specifies the warm throughput settings for a table. Pre-warming a table by
 * specifying warm throughput pre-provisions read and write capacity units to help
 * avoid capacity exceeded exceptions and reduce latency when your table starts
 * receiving traffic.</p> <p>For more information about pre-warming in Amazon
 * Keyspaces, see <a
 * href="https://docs.aws.amazon.com/keyspaces/latest/devguide/warm-throughput.html">Pre-warm
 * a table in Amazon Keyspaces</a> in the <i>Amazon Keyspaces Developer
 * Guide</i>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/WarmThroughputSpecification">AWS
 * API Reference</a></p>
 */
class WarmThroughputSpecification {
 public:
  AWS_KEYSPACES_API WarmThroughputSpecification() = default;
  AWS_KEYSPACES_API WarmThroughputSpecification(Aws::Utils::Json::JsonView jsonValue);
  AWS_KEYSPACES_API WarmThroughputSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of read capacity units per second to pre-warm the table for read
   * capacity throughput. The minimum value is 1.</p>
   */
  inline long long GetReadUnitsPerSecond() const { return m_readUnitsPerSecond; }
  inline bool ReadUnitsPerSecondHasBeenSet() const { return m_readUnitsPerSecondHasBeenSet; }
  inline void SetReadUnitsPerSecond(long long value) {
    m_readUnitsPerSecondHasBeenSet = true;
    m_readUnitsPerSecond = value;
  }
  inline WarmThroughputSpecification& WithReadUnitsPerSecond(long long value) {
    SetReadUnitsPerSecond(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of write capacity units per second to pre-warm the table for write
   * capacity throughput. The minimum value is 1.</p>
   */
  inline long long GetWriteUnitsPerSecond() const { return m_writeUnitsPerSecond; }
  inline bool WriteUnitsPerSecondHasBeenSet() const { return m_writeUnitsPerSecondHasBeenSet; }
  inline void SetWriteUnitsPerSecond(long long value) {
    m_writeUnitsPerSecondHasBeenSet = true;
    m_writeUnitsPerSecond = value;
  }
  inline WarmThroughputSpecification& WithWriteUnitsPerSecond(long long value) {
    SetWriteUnitsPerSecond(value);
    return *this;
  }
  ///@}
 private:
  long long m_readUnitsPerSecond{0};

  long long m_writeUnitsPerSecond{0};
  bool m_readUnitsPerSecondHasBeenSet = false;
  bool m_writeUnitsPerSecondHasBeenSet = false;
};

}  // namespace Model
}  // namespace Keyspaces
}  // namespace Aws
