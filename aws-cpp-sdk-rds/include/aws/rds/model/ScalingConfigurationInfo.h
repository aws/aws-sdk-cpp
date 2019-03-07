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
   * <p>Shows the scaling configuration for an Aurora DB cluster in
   * <code>serverless</code> DB engine mode.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/aurora-serverless.html">Using
   * Amazon Aurora Serverless</a> in the <i>Amazon Aurora User
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ScalingConfigurationInfo">AWS
   * API Reference</a></p>
   */
  class AWS_RDS_API ScalingConfigurationInfo
  {
  public:
    ScalingConfigurationInfo();
    ScalingConfigurationInfo(const Aws::Utils::Xml::XmlNode& xmlNode);
    ScalingConfigurationInfo& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The maximum capacity for the Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline int GetMinCapacity() const{ return m_minCapacity; }

    /**
     * <p>The maximum capacity for the Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline void SetMinCapacity(int value) { m_minCapacityHasBeenSet = true; m_minCapacity = value; }

    /**
     * <p>The maximum capacity for the Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline ScalingConfigurationInfo& WithMinCapacity(int value) { SetMinCapacity(value); return *this;}


    /**
     * <p>The maximum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline int GetMaxCapacity() const{ return m_maxCapacity; }

    /**
     * <p>The maximum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline void SetMaxCapacity(int value) { m_maxCapacityHasBeenSet = true; m_maxCapacity = value; }

    /**
     * <p>The maximum capacity for an Aurora DB cluster in <code>serverless</code> DB
     * engine mode.</p>
     */
    inline ScalingConfigurationInfo& WithMaxCapacity(int value) { SetMaxCapacity(value); return *this;}


    /**
     * <p>A value that indicates whether automatic pause is allowed for the Aurora DB
     * cluster in <code>serverless</code> DB engine mode. </p>
     */
    inline bool GetAutoPause() const{ return m_autoPause; }

    /**
     * <p>A value that indicates whether automatic pause is allowed for the Aurora DB
     * cluster in <code>serverless</code> DB engine mode. </p>
     */
    inline void SetAutoPause(bool value) { m_autoPauseHasBeenSet = true; m_autoPause = value; }

    /**
     * <p>A value that indicates whether automatic pause is allowed for the Aurora DB
     * cluster in <code>serverless</code> DB engine mode. </p>
     */
    inline ScalingConfigurationInfo& WithAutoPause(bool value) { SetAutoPause(value); return *this;}


    /**
     * <p>The remaining amount of time, in seconds, before the Aurora DB cluster in
     * <code>serverless</code> mode is paused. A DB cluster can be paused only when
     * it's idle (it has no connections).</p>
     */
    inline int GetSecondsUntilAutoPause() const{ return m_secondsUntilAutoPause; }

    /**
     * <p>The remaining amount of time, in seconds, before the Aurora DB cluster in
     * <code>serverless</code> mode is paused. A DB cluster can be paused only when
     * it's idle (it has no connections).</p>
     */
    inline void SetSecondsUntilAutoPause(int value) { m_secondsUntilAutoPauseHasBeenSet = true; m_secondsUntilAutoPause = value; }

    /**
     * <p>The remaining amount of time, in seconds, before the Aurora DB cluster in
     * <code>serverless</code> mode is paused. A DB cluster can be paused only when
     * it's idle (it has no connections).</p>
     */
    inline ScalingConfigurationInfo& WithSecondsUntilAutoPause(int value) { SetSecondsUntilAutoPause(value); return *this;}

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
