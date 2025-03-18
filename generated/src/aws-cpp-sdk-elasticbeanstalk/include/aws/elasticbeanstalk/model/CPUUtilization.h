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
   * <p>CPU utilization metrics for an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CPUUtilization">AWS
   * API Reference</a></p>
   */
  class CPUUtilization
  {
  public:
    AWS_ELASTICBEANSTALK_API CPUUtilization() = default;
    AWS_ELASTICBEANSTALK_API CPUUtilization(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICBEANSTALK_API CPUUtilization& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICBEANSTALK_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Percentage of time that the CPU has spent in the <code>User</code> state over
     * the last 10 seconds.</p>
     */
    inline double GetUser() const { return m_user; }
    inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
    inline void SetUser(double value) { m_userHasBeenSet = true; m_user = value; }
    inline CPUUtilization& WithUser(double value) { SetUser(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available on Linux environments only.</p> <p>Percentage of time that the CPU
     * has spent in the <code>Nice</code> state over the last 10 seconds.</p>
     */
    inline double GetNice() const { return m_nice; }
    inline bool NiceHasBeenSet() const { return m_niceHasBeenSet; }
    inline void SetNice(double value) { m_niceHasBeenSet = true; m_nice = value; }
    inline CPUUtilization& WithNice(double value) { SetNice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available on Linux environments only.</p> <p>Percentage of time that the CPU
     * has spent in the <code>System</code> state over the last 10 seconds.</p>
     */
    inline double GetSystem() const { return m_system; }
    inline bool SystemHasBeenSet() const { return m_systemHasBeenSet; }
    inline void SetSystem(double value) { m_systemHasBeenSet = true; m_system = value; }
    inline CPUUtilization& WithSystem(double value) { SetSystem(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Percentage of time that the CPU has spent in the <code>Idle</code> state over
     * the last 10 seconds.</p>
     */
    inline double GetIdle() const { return m_idle; }
    inline bool IdleHasBeenSet() const { return m_idleHasBeenSet; }
    inline void SetIdle(double value) { m_idleHasBeenSet = true; m_idle = value; }
    inline CPUUtilization& WithIdle(double value) { SetIdle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available on Linux environments only.</p> <p>Percentage of time that the CPU
     * has spent in the <code>I/O Wait</code> state over the last 10 seconds.</p>
     */
    inline double GetIOWait() const { return m_iOWait; }
    inline bool IOWaitHasBeenSet() const { return m_iOWaitHasBeenSet; }
    inline void SetIOWait(double value) { m_iOWaitHasBeenSet = true; m_iOWait = value; }
    inline CPUUtilization& WithIOWait(double value) { SetIOWait(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available on Linux environments only.</p> <p>Percentage of time that the CPU
     * has spent in the <code>IRQ</code> state over the last 10 seconds.</p>
     */
    inline double GetIRQ() const { return m_iRQ; }
    inline bool IRQHasBeenSet() const { return m_iRQHasBeenSet; }
    inline void SetIRQ(double value) { m_iRQHasBeenSet = true; m_iRQ = value; }
    inline CPUUtilization& WithIRQ(double value) { SetIRQ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available on Linux environments only.</p> <p>Percentage of time that the CPU
     * has spent in the <code>SoftIRQ</code> state over the last 10 seconds.</p>
     */
    inline double GetSoftIRQ() const { return m_softIRQ; }
    inline bool SoftIRQHasBeenSet() const { return m_softIRQHasBeenSet; }
    inline void SetSoftIRQ(double value) { m_softIRQHasBeenSet = true; m_softIRQ = value; }
    inline CPUUtilization& WithSoftIRQ(double value) { SetSoftIRQ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Available on Windows environments only.</p> <p>Percentage of time that the
     * CPU has spent in the <code>Privileged</code> state over the last 10 seconds.</p>
     */
    inline double GetPrivileged() const { return m_privileged; }
    inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }
    inline void SetPrivileged(double value) { m_privilegedHasBeenSet = true; m_privileged = value; }
    inline CPUUtilization& WithPrivileged(double value) { SetPrivileged(value); return *this;}
    ///@}
  private:

    double m_user{0.0};
    bool m_userHasBeenSet = false;

    double m_nice{0.0};
    bool m_niceHasBeenSet = false;

    double m_system{0.0};
    bool m_systemHasBeenSet = false;

    double m_idle{0.0};
    bool m_idleHasBeenSet = false;

    double m_iOWait{0.0};
    bool m_iOWaitHasBeenSet = false;

    double m_iRQ{0.0};
    bool m_iRQHasBeenSet = false;

    double m_softIRQ{0.0};
    bool m_softIRQHasBeenSet = false;

    double m_privileged{0.0};
    bool m_privilegedHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
