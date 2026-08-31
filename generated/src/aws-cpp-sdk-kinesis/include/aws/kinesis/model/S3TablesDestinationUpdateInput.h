/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesis/Kinesis_EXPORTS.h>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kinesis {
namespace Model {

/**
 * <p>The updated configuration for a streaming table destination. Used in
 * <a>UpdateChannel</a>. Only <code>DataFreshnessInSeconds</code> can be
 * updated.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kinesis-2013-12-02/S3TablesDestinationUpdateInput">AWS
 * API Reference</a></p>
 */
class S3TablesDestinationUpdateInput {
 public:
  AWS_KINESIS_API S3TablesDestinationUpdateInput() = default;
  AWS_KINESIS_API S3TablesDestinationUpdateInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API S3TablesDestinationUpdateInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KINESIS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum age, in seconds, of undelivered data. Valid range is 300 to 900
   * seconds (5 to 15 minutes).</p>
   */
  inline int GetDataFreshnessInSeconds() const { return m_dataFreshnessInSeconds; }
  inline bool DataFreshnessInSecondsHasBeenSet() const { return m_dataFreshnessInSecondsHasBeenSet; }
  inline void SetDataFreshnessInSeconds(int value) {
    m_dataFreshnessInSecondsHasBeenSet = true;
    m_dataFreshnessInSeconds = value;
  }
  inline S3TablesDestinationUpdateInput& WithDataFreshnessInSeconds(int value) {
    SetDataFreshnessInSeconds(value);
    return *this;
  }
  ///@}
 private:
  int m_dataFreshnessInSeconds{0};
  bool m_dataFreshnessInSecondsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
