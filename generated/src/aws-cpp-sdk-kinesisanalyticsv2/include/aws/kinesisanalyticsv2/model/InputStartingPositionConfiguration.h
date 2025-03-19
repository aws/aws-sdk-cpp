/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/model/InputStartingPosition.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes the point at which the application reads from the streaming
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/InputStartingPositionConfiguration">AWS
   * API Reference</a></p>
   */
  class InputStartingPositionConfiguration
  {
  public:
    AWS_KINESISANALYTICSV2_API InputStartingPositionConfiguration() = default;
    AWS_KINESISANALYTICSV2_API InputStartingPositionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API InputStartingPositionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The starting position on the stream.</p> <ul> <li> <p> <code>NOW</code> -
     * Start reading just after the most recent record in the stream, and start at the
     * request timestamp that the customer issued.</p> </li> <li> <p>
     * <code>TRIM_HORIZON</code> - Start reading at the last untrimmed record in the
     * stream, which is the oldest record available in the stream. This option is not
     * available for an Amazon Kinesis Data Firehose delivery stream.</p> </li> <li>
     * <p> <code>LAST_STOPPED_POINT</code> - Resume reading from where the application
     * last stopped reading.</p> </li> </ul>
     */
    inline InputStartingPosition GetInputStartingPosition() const { return m_inputStartingPosition; }
    inline bool InputStartingPositionHasBeenSet() const { return m_inputStartingPositionHasBeenSet; }
    inline void SetInputStartingPosition(InputStartingPosition value) { m_inputStartingPositionHasBeenSet = true; m_inputStartingPosition = value; }
    inline InputStartingPositionConfiguration& WithInputStartingPosition(InputStartingPosition value) { SetInputStartingPosition(value); return *this;}
    ///@}
  private:

    InputStartingPosition m_inputStartingPosition{InputStartingPosition::NOT_SET};
    bool m_inputStartingPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
