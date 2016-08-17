/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/kinesisanalytics/model/InputStartingPosition.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace KinesisAnalytics
{
namespace Model
{

  /**
   * <p>Describes the point at which the application reads from the streaming
   * source.</p>
   */
  class AWS_KINESISANALYTICS_API InputStartingPositionConfiguration
  {
  public:
    InputStartingPositionConfiguration();
    InputStartingPositionConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    InputStartingPositionConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The starting position on the stream.</p> <ul> <li> <p> <code>LATEST</code> -
     * Start reading just after the most recent record in the stream.</p> </li> <li>
     * <p> <code>TRIM_HORIZON</code> - Start reading at the last untrimmed record in
     * the stream, which is the oldest record available in the stream. This option is
     * not available for an Amazon Kinesis Firehose delivery stream.</p> </li> <li> <p>
     * <code>LAST_STOPPED_POINT</code> - Resume reading from where the application last
     * stopped reading.</p> </li> </ul>
     */
    inline const InputStartingPosition& GetInputStartingPosition() const{ return m_inputStartingPosition; }

    /**
     * <p>The starting position on the stream.</p> <ul> <li> <p> <code>LATEST</code> -
     * Start reading just after the most recent record in the stream.</p> </li> <li>
     * <p> <code>TRIM_HORIZON</code> - Start reading at the last untrimmed record in
     * the stream, which is the oldest record available in the stream. This option is
     * not available for an Amazon Kinesis Firehose delivery stream.</p> </li> <li> <p>
     * <code>LAST_STOPPED_POINT</code> - Resume reading from where the application last
     * stopped reading.</p> </li> </ul>
     */
    inline void SetInputStartingPosition(const InputStartingPosition& value) { m_inputStartingPositionHasBeenSet = true; m_inputStartingPosition = value; }

    /**
     * <p>The starting position on the stream.</p> <ul> <li> <p> <code>LATEST</code> -
     * Start reading just after the most recent record in the stream.</p> </li> <li>
     * <p> <code>TRIM_HORIZON</code> - Start reading at the last untrimmed record in
     * the stream, which is the oldest record available in the stream. This option is
     * not available for an Amazon Kinesis Firehose delivery stream.</p> </li> <li> <p>
     * <code>LAST_STOPPED_POINT</code> - Resume reading from where the application last
     * stopped reading.</p> </li> </ul>
     */
    inline void SetInputStartingPosition(InputStartingPosition&& value) { m_inputStartingPositionHasBeenSet = true; m_inputStartingPosition = value; }

    /**
     * <p>The starting position on the stream.</p> <ul> <li> <p> <code>LATEST</code> -
     * Start reading just after the most recent record in the stream.</p> </li> <li>
     * <p> <code>TRIM_HORIZON</code> - Start reading at the last untrimmed record in
     * the stream, which is the oldest record available in the stream. This option is
     * not available for an Amazon Kinesis Firehose delivery stream.</p> </li> <li> <p>
     * <code>LAST_STOPPED_POINT</code> - Resume reading from where the application last
     * stopped reading.</p> </li> </ul>
     */
    inline InputStartingPositionConfiguration& WithInputStartingPosition(const InputStartingPosition& value) { SetInputStartingPosition(value); return *this;}

    /**
     * <p>The starting position on the stream.</p> <ul> <li> <p> <code>LATEST</code> -
     * Start reading just after the most recent record in the stream.</p> </li> <li>
     * <p> <code>TRIM_HORIZON</code> - Start reading at the last untrimmed record in
     * the stream, which is the oldest record available in the stream. This option is
     * not available for an Amazon Kinesis Firehose delivery stream.</p> </li> <li> <p>
     * <code>LAST_STOPPED_POINT</code> - Resume reading from where the application last
     * stopped reading.</p> </li> </ul>
     */
    inline InputStartingPositionConfiguration& WithInputStartingPosition(InputStartingPosition&& value) { SetInputStartingPosition(value); return *this;}

  private:
    InputStartingPosition m_inputStartingPosition;
    bool m_inputStartingPositionHasBeenSet;
  };

} // namespace Model
} // namespace KinesisAnalytics
} // namespace Aws
