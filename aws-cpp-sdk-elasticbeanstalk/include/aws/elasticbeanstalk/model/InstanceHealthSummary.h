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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
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
namespace ElasticBeanstalk
{
namespace Model
{

  /**
   * <p>Represents summary information about the health of an instance. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/elasticbeanstalk/latest/dg/health-enhanced-status.html">Health
   * Colors and Statuses</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/InstanceHealthSummary">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICBEANSTALK_API InstanceHealthSummary
  {
  public:
    InstanceHealthSummary();
    InstanceHealthSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceHealthSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p> <b>Grey.</b> AWS Elastic Beanstalk and the health agent are reporting no
     * data on an instance.</p>
     */
    inline int GetNoData() const{ return m_noData; }

    /**
     * <p> <b>Grey.</b> AWS Elastic Beanstalk and the health agent are reporting no
     * data on an instance.</p>
     */
    inline bool NoDataHasBeenSet() const { return m_noDataHasBeenSet; }

    /**
     * <p> <b>Grey.</b> AWS Elastic Beanstalk and the health agent are reporting no
     * data on an instance.</p>
     */
    inline void SetNoData(int value) { m_noDataHasBeenSet = true; m_noData = value; }

    /**
     * <p> <b>Grey.</b> AWS Elastic Beanstalk and the health agent are reporting no
     * data on an instance.</p>
     */
    inline InstanceHealthSummary& WithNoData(int value) { SetNoData(value); return *this;}


    /**
     * <p> <b>Grey.</b> AWS Elastic Beanstalk and the health agent are reporting an
     * insufficient amount of data on an instance.</p>
     */
    inline int GetUnknown() const{ return m_unknown; }

    /**
     * <p> <b>Grey.</b> AWS Elastic Beanstalk and the health agent are reporting an
     * insufficient amount of data on an instance.</p>
     */
    inline bool UnknownHasBeenSet() const { return m_unknownHasBeenSet; }

    /**
     * <p> <b>Grey.</b> AWS Elastic Beanstalk and the health agent are reporting an
     * insufficient amount of data on an instance.</p>
     */
    inline void SetUnknown(int value) { m_unknownHasBeenSet = true; m_unknown = value; }

    /**
     * <p> <b>Grey.</b> AWS Elastic Beanstalk and the health agent are reporting an
     * insufficient amount of data on an instance.</p>
     */
    inline InstanceHealthSummary& WithUnknown(int value) { SetUnknown(value); return *this;}


    /**
     * <p> <b>Grey.</b> An operation is in progress on an instance within the command
     * timeout.</p>
     */
    inline int GetPending() const{ return m_pending; }

    /**
     * <p> <b>Grey.</b> An operation is in progress on an instance within the command
     * timeout.</p>
     */
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }

    /**
     * <p> <b>Grey.</b> An operation is in progress on an instance within the command
     * timeout.</p>
     */
    inline void SetPending(int value) { m_pendingHasBeenSet = true; m_pending = value; }

    /**
     * <p> <b>Grey.</b> An operation is in progress on an instance within the command
     * timeout.</p>
     */
    inline InstanceHealthSummary& WithPending(int value) { SetPending(value); return *this;}


    /**
     * <p> <b>Green.</b> An instance is passing health checks and the health agent is
     * not reporting any problems.</p>
     */
    inline int GetOk() const{ return m_ok; }

    /**
     * <p> <b>Green.</b> An instance is passing health checks and the health agent is
     * not reporting any problems.</p>
     */
    inline bool OkHasBeenSet() const { return m_okHasBeenSet; }

    /**
     * <p> <b>Green.</b> An instance is passing health checks and the health agent is
     * not reporting any problems.</p>
     */
    inline void SetOk(int value) { m_okHasBeenSet = true; m_ok = value; }

    /**
     * <p> <b>Green.</b> An instance is passing health checks and the health agent is
     * not reporting any problems.</p>
     */
    inline InstanceHealthSummary& WithOk(int value) { SetOk(value); return *this;}


    /**
     * <p> <b>Green.</b> An operation is in progress on an instance.</p>
     */
    inline int GetInfo() const{ return m_info; }

    /**
     * <p> <b>Green.</b> An operation is in progress on an instance.</p>
     */
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }

    /**
     * <p> <b>Green.</b> An operation is in progress on an instance.</p>
     */
    inline void SetInfo(int value) { m_infoHasBeenSet = true; m_info = value; }

    /**
     * <p> <b>Green.</b> An operation is in progress on an instance.</p>
     */
    inline InstanceHealthSummary& WithInfo(int value) { SetInfo(value); return *this;}


    /**
     * <p> <b>Yellow.</b> The health agent is reporting a moderate number of request
     * failures or other issues for an instance or environment.</p>
     */
    inline int GetWarning() const{ return m_warning; }

    /**
     * <p> <b>Yellow.</b> The health agent is reporting a moderate number of request
     * failures or other issues for an instance or environment.</p>
     */
    inline bool WarningHasBeenSet() const { return m_warningHasBeenSet; }

    /**
     * <p> <b>Yellow.</b> The health agent is reporting a moderate number of request
     * failures or other issues for an instance or environment.</p>
     */
    inline void SetWarning(int value) { m_warningHasBeenSet = true; m_warning = value; }

    /**
     * <p> <b>Yellow.</b> The health agent is reporting a moderate number of request
     * failures or other issues for an instance or environment.</p>
     */
    inline InstanceHealthSummary& WithWarning(int value) { SetWarning(value); return *this;}


    /**
     * <p> <b>Red.</b> The health agent is reporting a high number of request failures
     * or other issues for an instance or environment.</p>
     */
    inline int GetDegraded() const{ return m_degraded; }

    /**
     * <p> <b>Red.</b> The health agent is reporting a high number of request failures
     * or other issues for an instance or environment.</p>
     */
    inline bool DegradedHasBeenSet() const { return m_degradedHasBeenSet; }

    /**
     * <p> <b>Red.</b> The health agent is reporting a high number of request failures
     * or other issues for an instance or environment.</p>
     */
    inline void SetDegraded(int value) { m_degradedHasBeenSet = true; m_degraded = value; }

    /**
     * <p> <b>Red.</b> The health agent is reporting a high number of request failures
     * or other issues for an instance or environment.</p>
     */
    inline InstanceHealthSummary& WithDegraded(int value) { SetDegraded(value); return *this;}


    /**
     * <p> <b>Red.</b> The health agent is reporting a very high number of request
     * failures or other issues for an instance or environment.</p>
     */
    inline int GetSevere() const{ return m_severe; }

    /**
     * <p> <b>Red.</b> The health agent is reporting a very high number of request
     * failures or other issues for an instance or environment.</p>
     */
    inline bool SevereHasBeenSet() const { return m_severeHasBeenSet; }

    /**
     * <p> <b>Red.</b> The health agent is reporting a very high number of request
     * failures or other issues for an instance or environment.</p>
     */
    inline void SetSevere(int value) { m_severeHasBeenSet = true; m_severe = value; }

    /**
     * <p> <b>Red.</b> The health agent is reporting a very high number of request
     * failures or other issues for an instance or environment.</p>
     */
    inline InstanceHealthSummary& WithSevere(int value) { SetSevere(value); return *this;}

  private:

    int m_noData;
    bool m_noDataHasBeenSet;

    int m_unknown;
    bool m_unknownHasBeenSet;

    int m_pending;
    bool m_pendingHasBeenSet;

    int m_ok;
    bool m_okHasBeenSet;

    int m_info;
    bool m_infoHasBeenSet;

    int m_warning;
    bool m_warningHasBeenSet;

    int m_degraded;
    bool m_degradedHasBeenSet;

    int m_severe;
    bool m_severeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
