/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/firehose/Firehose_EXPORTS.h>

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
namespace Firehose
{
namespace Model
{

  /**
   * <p>The structure that configures parameters such as
   * <code>ThroughputHintInMBs</code> for a stream configured with Direct PUT as a
   * source. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/DirectPutSourceDescription">AWS
   * API Reference</a></p>
   */
  class DirectPutSourceDescription
  {
  public:
    AWS_FIREHOSE_API DirectPutSourceDescription() = default;
    AWS_FIREHOSE_API DirectPutSourceDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API DirectPutSourceDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> The value that you configure for this parameter is for information purpose
     * only and does not affect Firehose delivery throughput limit. You can use the <a
     * href="https://support.console.aws.amazon.com/support/home#/case/create%3FissueType=service-limit-increase%26limitType=kinesis-firehose-limits">Firehose
     * Limits form</a> to request a throughput limit increase. </p>
     */
    inline int GetThroughputHintInMBs() const { return m_throughputHintInMBs; }
    inline bool ThroughputHintInMBsHasBeenSet() const { return m_throughputHintInMBsHasBeenSet; }
    inline void SetThroughputHintInMBs(int value) { m_throughputHintInMBsHasBeenSet = true; m_throughputHintInMBs = value; }
    inline DirectPutSourceDescription& WithThroughputHintInMBs(int value) { SetThroughputHintInMBs(value); return *this;}
    ///@}
  private:

    int m_throughputHintInMBs{0};
    bool m_throughputHintInMBsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
