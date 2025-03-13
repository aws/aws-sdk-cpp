/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InstanceHealthSummary
  {
  public:
    AWS_ELASTICBEANSTALK_API InstanceHealthSummary() = default;
    AWS_ELASTICBEANSTALK_API InstanceHealthSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API InstanceHealthSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> <b>Grey.</b> AWS Elastic Beanstalk and the health agent are reporting no
     * data on an instance.</p>
     */
    inline int GetNoData() const { return m_noData; }
    inline bool NoDataHasBeenSet() const { return m_noDataHasBeenSet; }
    inline void SetNoData(int value) { m_noDataHasBeenSet = true; m_noData = value; }
    inline InstanceHealthSummary& WithNoData(int value) { SetNoData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Grey.</b> AWS Elastic Beanstalk and the health agent are reporting an
     * insufficient amount of data on an instance.</p>
     */
    inline int GetUnknown() const { return m_unknown; }
    inline bool UnknownHasBeenSet() const { return m_unknownHasBeenSet; }
    inline void SetUnknown(int value) { m_unknownHasBeenSet = true; m_unknown = value; }
    inline InstanceHealthSummary& WithUnknown(int value) { SetUnknown(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Grey.</b> An operation is in progress on an instance within the command
     * timeout.</p>
     */
    inline int GetPending() const { return m_pending; }
    inline bool PendingHasBeenSet() const { return m_pendingHasBeenSet; }
    inline void SetPending(int value) { m_pendingHasBeenSet = true; m_pending = value; }
    inline InstanceHealthSummary& WithPending(int value) { SetPending(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Green.</b> An instance is passing health checks and the health agent is
     * not reporting any problems.</p>
     */
    inline int GetOk() const { return m_ok; }
    inline bool OkHasBeenSet() const { return m_okHasBeenSet; }
    inline void SetOk(int value) { m_okHasBeenSet = true; m_ok = value; }
    inline InstanceHealthSummary& WithOk(int value) { SetOk(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Green.</b> An operation is in progress on an instance.</p>
     */
    inline int GetInfo() const { return m_info; }
    inline bool InfoHasBeenSet() const { return m_infoHasBeenSet; }
    inline void SetInfo(int value) { m_infoHasBeenSet = true; m_info = value; }
    inline InstanceHealthSummary& WithInfo(int value) { SetInfo(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Yellow.</b> The health agent is reporting a moderate number of request
     * failures or other issues for an instance or environment.</p>
     */
    inline int GetWarning() const { return m_warning; }
    inline bool WarningHasBeenSet() const { return m_warningHasBeenSet; }
    inline void SetWarning(int value) { m_warningHasBeenSet = true; m_warning = value; }
    inline InstanceHealthSummary& WithWarning(int value) { SetWarning(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Red.</b> The health agent is reporting a high number of request failures
     * or other issues for an instance or environment.</p>
     */
    inline int GetDegraded() const { return m_degraded; }
    inline bool DegradedHasBeenSet() const { return m_degradedHasBeenSet; }
    inline void SetDegraded(int value) { m_degradedHasBeenSet = true; m_degraded = value; }
    inline InstanceHealthSummary& WithDegraded(int value) { SetDegraded(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> <b>Red.</b> The health agent is reporting a very high number of request
     * failures or other issues for an instance or environment.</p>
     */
    inline int GetSevere() const { return m_severe; }
    inline bool SevereHasBeenSet() const { return m_severeHasBeenSet; }
    inline void SetSevere(int value) { m_severeHasBeenSet = true; m_severe = value; }
    inline InstanceHealthSummary& WithSevere(int value) { SetSevere(value); return *this;}
    ///@}
  private:

    int m_noData{0};
    bool m_noDataHasBeenSet = false;

    int m_unknown{0};
    bool m_unknownHasBeenSet = false;

    int m_pending{0};
    bool m_pendingHasBeenSet = false;

    int m_ok{0};
    bool m_okHasBeenSet = false;

    int m_info{0};
    bool m_infoHasBeenSet = false;

    int m_warning{0};
    bool m_warningHasBeenSet = false;

    int m_degraded{0};
    bool m_degradedHasBeenSet = false;

    int m_severe{0};
    bool m_severeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
