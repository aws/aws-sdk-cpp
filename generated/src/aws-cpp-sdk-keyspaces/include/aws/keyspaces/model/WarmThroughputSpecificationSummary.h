/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/keyspaces/Keyspaces_EXPORTS.h>
#include <aws/keyspaces/model/WarmThroughputStatus.h>

#include <utility>

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
 * <p>Contains the current warm throughput settings for a table, including the
 * configured capacity units and the current status of the warm throughput
 * configuration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/keyspaces-2022-02-10/WarmThroughputSpecificationSummary">AWS
 * API Reference</a></p>
 */
class WarmThroughputSpecificationSummary {
 public:
  AWS_KEYSPACES_API WarmThroughputSpecificationSummary() = default;
  AWS_KEYSPACES_API WarmThroughputSpecificationSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_KEYSPACES_API WarmThroughputSpecificationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KEYSPACES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of read capacity units per second currently configured for warm
   * throughput.</p>
   */
  inline long long GetReadUnitsPerSecond() const { return m_readUnitsPerSecond; }
  inline bool ReadUnitsPerSecondHasBeenSet() const { return m_readUnitsPerSecondHasBeenSet; }
  inline void SetReadUnitsPerSecond(long long value) {
    m_readUnitsPerSecondHasBeenSet = true;
    m_readUnitsPerSecond = value;
  }
  inline WarmThroughputSpecificationSummary& WithReadUnitsPerSecond(long long value) {
    SetReadUnitsPerSecond(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of write capacity units per second currently configured for warm
   * throughput.</p>
   */
  inline long long GetWriteUnitsPerSecond() const { return m_writeUnitsPerSecond; }
  inline bool WriteUnitsPerSecondHasBeenSet() const { return m_writeUnitsPerSecondHasBeenSet; }
  inline void SetWriteUnitsPerSecond(long long value) {
    m_writeUnitsPerSecondHasBeenSet = true;
    m_writeUnitsPerSecond = value;
  }
  inline WarmThroughputSpecificationSummary& WithWriteUnitsPerSecond(long long value) {
    SetWriteUnitsPerSecond(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the warm throughput configuration. Valid values are
   * <code>AVAILABLE</code> when the configuration is active, and
   * <code>UPDATING</code> when changes are being applied.</p>
   */
  inline WarmThroughputStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(WarmThroughputStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline WarmThroughputSpecificationSummary& WithStatus(WarmThroughputStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  long long m_readUnitsPerSecond{0};

  long long m_writeUnitsPerSecond{0};

  WarmThroughputStatus m_status{WarmThroughputStatus::NOT_SET};
  bool m_readUnitsPerSecondHasBeenSet = false;
  bool m_writeUnitsPerSecondHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace Keyspaces
}  // namespace Aws
