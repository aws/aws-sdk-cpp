﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/InputStartingPosition.h>
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
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Describes the point at which the application reads from the streaming
   * source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/InputStartingPositionConfiguration">AWS
   * API Reference</a></p>
   */
  class InputStartingPositionConfiguration
  {
  public:
    AWS_KINESISANALYTICS_API InputStartingPositionConfiguration();
    AWS_KINESISANALYTICS_API InputStartingPositionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API InputStartingPositionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The starting position on the stream.</p> <ul> <li> <p> <code>NOW</code> -
     * Start reading just after the most recent record in the stream, start at the
     * request time stamp that the customer issued.</p> </li> <li> <p>
     * <code>TRIM_HORIZON</code> - Start reading at the last untrimmed record in the
     * stream, which is the oldest record available in the stream. This option is not
     * available for an Amazon Kinesis Firehose delivery stream.</p> </li> <li> <p>
     * <code>LAST_STOPPED_POINT</code> - Resume reading from where the application last
     * stopped reading.</p> </li> </ul>
     */
    inline const InputStartingPosition& GetInputStartingPosition() const{ return m_inputStartingPosition; }
    inline bool InputStartingPositionHasBeenSet() const { return m_inputStartingPositionHasBeenSet; }
    inline void SetInputStartingPosition(const InputStartingPosition& value) { m_inputStartingPositionHasBeenSet = true; m_inputStartingPosition = value; }
    inline void SetInputStartingPosition(InputStartingPosition&& value) { m_inputStartingPositionHasBeenSet = true; m_inputStartingPosition = std::move(value); }
    inline InputStartingPositionConfiguration& WithInputStartingPosition(const InputStartingPosition& value) { SetInputStartingPosition(value); return *this;}
    inline InputStartingPositionConfiguration& WithInputStartingPosition(InputStartingPosition&& value) { SetInputStartingPosition(std::move(value)); return *this;}
    ///@}
  private:

    InputStartingPosition m_inputStartingPosition;
    bool m_inputStartingPositionHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
