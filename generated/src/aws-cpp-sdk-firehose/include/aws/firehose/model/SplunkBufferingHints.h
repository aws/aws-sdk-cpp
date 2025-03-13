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
   * <p>The buffering options. If no value is specified, the default values for
   * Splunk are used.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/firehose-2015-08-04/SplunkBufferingHints">AWS
   * API Reference</a></p>
   */
  class SplunkBufferingHints
  {
  public:
    AWS_FIREHOSE_API SplunkBufferingHints() = default;
    AWS_FIREHOSE_API SplunkBufferingHints(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API SplunkBufferingHints& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FIREHOSE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Buffer incoming data for the specified period of time, in seconds, before
     * delivering it to the destination. The default value is 60 (1 minute).</p>
     */
    inline int GetIntervalInSeconds() const { return m_intervalInSeconds; }
    inline bool IntervalInSecondsHasBeenSet() const { return m_intervalInSecondsHasBeenSet; }
    inline void SetIntervalInSeconds(int value) { m_intervalInSecondsHasBeenSet = true; m_intervalInSeconds = value; }
    inline SplunkBufferingHints& WithIntervalInSeconds(int value) { SetIntervalInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Buffer incoming data to the specified size, in MBs, before delivering it to
     * the destination. The default value is 5. </p>
     */
    inline int GetSizeInMBs() const { return m_sizeInMBs; }
    inline bool SizeInMBsHasBeenSet() const { return m_sizeInMBsHasBeenSet; }
    inline void SetSizeInMBs(int value) { m_sizeInMBsHasBeenSet = true; m_sizeInMBs = value; }
    inline SplunkBufferingHints& WithSizeInMBs(int value) { SetSizeInMBs(value); return *this;}
    ///@}
  private:

    int m_intervalInSeconds{0};
    bool m_intervalInSecondsHasBeenSet = false;

    int m_sizeInMBs{0};
    bool m_sizeInMBsHasBeenSet = false;
  };

} // namespace Model
} // namespace Firehose
} // namespace Aws
