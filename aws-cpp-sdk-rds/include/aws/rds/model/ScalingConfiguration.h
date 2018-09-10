﻿/*
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
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace RDS
{
namespace Model
{

  /**
   * <p>Contains the scaling configuration of an Aurora Serverless DB cluster.</p>
   * <p>For more information, see <a
   * href="http://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
   * Amazon Aurora Serverless</a> in the <i>Amazon Aurora User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ScalingConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API ScalingConfiguration
  {
  public:
    ScalingConfiguration();
    ScalingConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScalingConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The minimum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p> <p>Valid capacity values are <code>2</code>, <code>4</code>,
     * <code>8</code>, <code>16</code>, <code>32</code>, <code>64</code>,
     * <code>128</code>, and <code>256</code>.</p> <p>The minimum capacity must be less
     * than or equal to the maximum capacity.</p>
     */
    inline int GetMinCapacity() const{ return m_minCapacity; }

    /**
     * <p>The minimum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p> <p>Valid capacity values are <code>2</code>, <code>4</code>,
     * <code>8</code>, <code>16</code>, <code>32</code>, <code>64</code>,
     * <code>128</code>, and <code>256</code>.</p> <p>The minimum capacity must be less
     * than or equal to the maximum capacity.</p>
     */
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }

    /**
     * <p>The minimum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p> <p>Valid capacity values are <code>2</code>, <code>4</code>,
     * <code>8</code>, <code>16</code>, <code>32</code>, <code>64</code>,
     * <code>128</code>, and <code>256</code>.</p> <p>The minimum capacity must be less
     * than or equal to the maximum capacity.</p>
     */
    inline ScalingConfiguration& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}


    /**
     * <p>The maximum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p> <p>Valid capacity values are <code>2</code>, <code>4</code>,
     * <code>8</code>, <code>16</code>, <code>32</code>, <code>64</code>,
     * <code>128</code>, and <code>256</code>.</p> <p>The maximum capacity must be
     * greater than or equal to the minimum capacity.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p> <p>Valid capacity values are <code>2</code>, <code>4</code>,
     * <code>8</code>, <code>16</code>, <code>32</code>, <code>64</code>,
     * <code>128</code>, and <code>256</code>.</p> <p>The maximum capacity must be
     * greater than or equal to the minimum capacity.</p>
     */
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p> <p>Valid capacity values are <code>2</code>, <code>4</code>,
     * <code>8</code>, <code>16</code>, <code>32</code>, <code>64</code>,
     * <code>128</code>, and <code>256</code>.</p> <p>The maximum capacity must be
     * greater than or equal to the minimum capacity.</p>
     */
    inline ScalingConfiguration& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>A value that specifies whether to allow or disallow automatic pause for an
     * Aurora DB cluster in <code>serverless</code> DB engine mode. A DB cluster can be
     * paused only when it's idle (it has no connections).</p> <note> <p>If a DB
     * cluster is paused for more than seven days, the DB cluster might be backed up
     * with a snapshot. In this case, the DB cluster is restored when there is a
     * request to connect to it. </p> </note>
     */
    inline bool GetAutoPause() const{ return m_autoPause; }

    /**
     * <p>A value that specifies whether to allow or disallow automatic pause for an
     * Aurora DB cluster in <code>serverless</code> DB engine mode. A DB cluster can be
     * paused only when it's idle (it has no connections).</p> <note> <p>If a DB
     * cluster is paused for more than seven days, the DB cluster might be backed up
     * with a snapshot. In this case, the DB cluster is restored when there is a
     * request to connect to it. </p> </note>
     */
    inline void SetAutoPause(bool value) { m_autoPauseHasBeenSet = true; m_autoPause = value; }

    /**
     * <p>A value that specifies whether to allow or disallow automatic pause for an
     * Aurora DB cluster in <code>serverless</code> DB engine mode. A DB cluster can be
     * paused only when it's idle (it has no connections).</p> <note> <p>If a DB
     * cluster is paused for more than seven days, the DB cluster might be backed up
     * with a snapshot. In this case, the DB cluster is restored when there is a
     * request to connect to it. </p> </note>
     */
    inline ScalingConfiguration& WithAutoPause(bool value) { SetAutoPause(value); return *this;}


    /**
     * <p>The time, in seconds, before an Aurora DB cluster in <code>serverless</code>
     * mode is paused.</p>
     */
    inline int GetSecondsUntilAutoPause() const{ return m_secondsUntilAutoPause; }

    /**
     * <p>The time, in seconds, before an Aurora DB cluster in <code>serverless</code>
     * mode is paused.</p>
     */
    inline void SetSecondsUntilAutoPause(int value) { m_secondsUntilAutoPauseHasBeenSet = true; m_secondsUntilAutoPause = value; }

    /**
     * <p>The time, in seconds, before an Aurora DB cluster in <code>serverless</code>
     * mode is paused.</p>
     */
    inline ScalingConfiguration& WithSecondsUntilAutoPause(int value) { SetSecondsUntilAutoPause(value); return *this;}

  private:

    int m_minCapacity;
    bool m_minCapacityHasBeenSet;

    int m_maxCapacity;
    bool m_maxCapacityHasBeenSet;

    bool m_autoPause;
    bool m_autoPauseHasBeenSet;

    int m_secondsUntilAutoPause;
    bool m_secondsUntilAutoPauseHasBeenSet;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
