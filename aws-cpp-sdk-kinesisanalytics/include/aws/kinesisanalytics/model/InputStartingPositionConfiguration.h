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
  class AWS_KINESISANALYTICS_API InputStartingPositionConfiguration
  {
  public:
    InputStartingPositionConfiguration();
    InputStartingPositionConfiguration(Aws::Utils::Json::JsonView jsonValue);
    InputStartingPositionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline bool InputStartingPositionHasBeenSet() const { return m_inputStartingPositionHasBeenSet; }

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
    inline void SetInputStartingPosition(const InputStartingPosition& value) { m_inputStartingPositionHasBeenSet = true; m_inputStartingPosition = value; }

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
    inline void SetInputStartingPosition(InputStartingPosition&& value) { m_inputStartingPositionHasBeenSet = true; m_inputStartingPosition = std::move(value); }

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
    inline InputStartingPositionConfiguration& WithInputStartingPosition(const InputStartingPosition& value) { SetInputStartingPosition(value); return *this;}

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
    inline InputStartingPositionConfiguration& WithInputStartingPosition(InputStartingPosition&& value) { SetInputStartingPosition(std::move(value)); return *this;}

  private:

    InputStartingPosition m_inputStartingPosition;
    bool m_inputStartingPositionHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
