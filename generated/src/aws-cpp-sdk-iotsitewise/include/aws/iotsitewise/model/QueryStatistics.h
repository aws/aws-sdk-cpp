/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Contains statistics about a completed query execution.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/QueryStatistics">AWS
 * API Reference</a></p>
 */
class QueryStatistics {
 public:
  AWS_IOTSITEWISE_API QueryStatistics() = default;
  AWS_IOTSITEWISE_API QueryStatistics(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API QueryStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of rows returned by the query.</p>
   */
  inline long long GetRowCount() const { return m_rowCount; }
  inline bool RowCountHasBeenSet() const { return m_rowCountHasBeenSet; }
  inline void SetRowCount(long long value) {
    m_rowCountHasBeenSet = true;
    m_rowCount = value;
  }
  inline QueryStatistics& WithRowCount(long long value) {
    SetRowCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of bytes scanned during query execution.</p>
   */
  inline long long GetBytesScanned() const { return m_bytesScanned; }
  inline bool BytesScannedHasBeenSet() const { return m_bytesScannedHasBeenSet; }
  inline void SetBytesScanned(long long value) {
    m_bytesScannedHasBeenSet = true;
    m_bytesScanned = value;
  }
  inline QueryStatistics& WithBytesScanned(long long value) {
    SetBytesScanned(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total query execution time, in milliseconds.</p>
   */
  inline long long GetExecutionTimeInMillis() const { return m_executionTimeInMillis; }
  inline bool ExecutionTimeInMillisHasBeenSet() const { return m_executionTimeInMillisHasBeenSet; }
  inline void SetExecutionTimeInMillis(long long value) {
    m_executionTimeInMillisHasBeenSet = true;
    m_executionTimeInMillis = value;
  }
  inline QueryStatistics& WithExecutionTimeInMillis(long long value) {
    SetExecutionTimeInMillis(value);
    return *this;
  }
  ///@}
 private:
  long long m_rowCount{0};

  long long m_bytesScanned{0};

  long long m_executionTimeInMillis{0};
  bool m_rowCountHasBeenSet = false;
  bool m_bytesScannedHasBeenSet = false;
  bool m_executionTimeInMillisHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
