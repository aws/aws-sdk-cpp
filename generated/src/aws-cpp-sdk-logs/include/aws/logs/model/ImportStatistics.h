/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CloudWatchLogs {
namespace Model {

/**
 * <p>Statistics about the import progress</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/ImportStatistics">AWS
 * API Reference</a></p>
 */
class ImportStatistics {
 public:
  AWS_CLOUDWATCHLOGS_API ImportStatistics() = default;
  AWS_CLOUDWATCHLOGS_API ImportStatistics(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API ImportStatistics& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The total number of bytes that have been imported to the managed log
   * group.</p>
   */
  inline long long GetBytesImported() const { return m_bytesImported; }
  inline bool BytesImportedHasBeenSet() const { return m_bytesImportedHasBeenSet; }
  inline void SetBytesImported(long long value) {
    m_bytesImportedHasBeenSet = true;
    m_bytesImported = value;
  }
  inline ImportStatistics& WithBytesImported(long long value) {
    SetBytesImported(value);
    return *this;
  }
  ///@}
 private:
  long long m_bytesImported{0};
  bool m_bytesImportedHasBeenSet = false;
};

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
