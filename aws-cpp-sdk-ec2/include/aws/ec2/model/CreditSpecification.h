/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the credit option for CPU usage of a T2, T3, or T3a
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreditSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreditSpecification
  {
  public:
    CreditSpecification();
    CreditSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    CreditSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The credit option for CPU usage of a T2, T3, or T3a instance. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline const Aws::String& GetCpuCredits() const{ return m_cpuCredits; }

    /**
     * <p>The credit option for CPU usage of a T2, T3, or T3a instance. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline bool CpuCreditsHasBeenSet() const { return m_cpuCreditsHasBeenSet; }

    /**
     * <p>The credit option for CPU usage of a T2, T3, or T3a instance. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline void SetCpuCredits(const Aws::String& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = value; }

    /**
     * <p>The credit option for CPU usage of a T2, T3, or T3a instance. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline void SetCpuCredits(Aws::String&& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = std::move(value); }

    /**
     * <p>The credit option for CPU usage of a T2, T3, or T3a instance. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline void SetCpuCredits(const char* value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits.assign(value); }

    /**
     * <p>The credit option for CPU usage of a T2, T3, or T3a instance. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline CreditSpecification& WithCpuCredits(const Aws::String& value) { SetCpuCredits(value); return *this;}

    /**
     * <p>The credit option for CPU usage of a T2, T3, or T3a instance. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline CreditSpecification& WithCpuCredits(Aws::String&& value) { SetCpuCredits(std::move(value)); return *this;}

    /**
     * <p>The credit option for CPU usage of a T2, T3, or T3a instance. Valid values
     * are <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline CreditSpecification& WithCpuCredits(const char* value) { SetCpuCredits(value); return *this;}

  private:

    Aws::String m_cpuCredits;
    bool m_cpuCreditsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
