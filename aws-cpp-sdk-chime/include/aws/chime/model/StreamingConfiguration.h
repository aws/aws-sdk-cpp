/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/chime/Chime_EXPORTS.h>

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
namespace Chime
{
namespace Model
{

  /**
   * <p>The streaming configuration associated with an Amazon Chime Voice Connector.
   * Specifies whether media streaming is enabled for sending to Amazon Kinesis, and
   * shows the retention period for the Amazon Kinesis data, in hours.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/StreamingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_CHIME_API StreamingConfiguration
  {
  public:
    StreamingConfiguration();
    StreamingConfiguration(Aws::Utils::Json::JsonView jsonValue);
    StreamingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The retention period, in hours, for the Amazon Kinesis data.</p>
     */
    inline int GetDataRetentionInHours() const{ return m_dataRetentionInHours; }

    /**
     * <p>The retention period, in hours, for the Amazon Kinesis data.</p>
     */
    inline bool DataRetentionInHoursHasBeenSet() const { return m_dataRetentionInHoursHasBeenSet; }

    /**
     * <p>The retention period, in hours, for the Amazon Kinesis data.</p>
     */
    inline void SetDataRetentionInHours(int value) { m_dataRetentionInHoursHasBeenSet = true; m_dataRetentionInHours = value; }

    /**
     * <p>The retention period, in hours, for the Amazon Kinesis data.</p>
     */
    inline StreamingConfiguration& WithDataRetentionInHours(int value) { SetDataRetentionInHours(value); return *this;}


    /**
     * <p>When true, media streaming to Amazon Kinesis is turned off.</p>
     */
    inline bool GetDisabled() const{ return m_disabled; }

    /**
     * <p>When true, media streaming to Amazon Kinesis is turned off.</p>
     */
    inline bool DisabledHasBeenSet() const { return m_disabledHasBeenSet; }

    /**
     * <p>When true, media streaming to Amazon Kinesis is turned off.</p>
     */
    inline void SetDisabled(bool value) { m_disabledHasBeenSet = true; m_disabled = value; }

    /**
     * <p>When true, media streaming to Amazon Kinesis is turned off.</p>
     */
    inline StreamingConfiguration& WithDisabled(bool value) { SetDisabled(value); return *this;}

  private:

    int m_dataRetentionInHours;
    bool m_dataRetentionInHoursHasBeenSet;

    bool m_disabled;
    bool m_disabledHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
