﻿/**
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
   * <p>Describes the credit option for CPU usage of a burstable performance
   * instance. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceCreditSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InstanceCreditSpecification
  {
  public:
    InstanceCreditSpecification();
    InstanceCreditSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceCreditSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline InstanceCreditSpecification& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline InstanceCreditSpecification& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline InstanceCreditSpecification& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The credit option for CPU usage of the instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline const Aws::String& GetCpuCredits() const{ return m_cpuCredits; }

    /**
     * <p>The credit option for CPU usage of the instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline bool CpuCreditsHasBeenSet() const { return m_cpuCreditsHasBeenSet; }

    /**
     * <p>The credit option for CPU usage of the instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline void SetCpuCredits(const Aws::String& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = value; }

    /**
     * <p>The credit option for CPU usage of the instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline void SetCpuCredits(Aws::String&& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = std::move(value); }

    /**
     * <p>The credit option for CPU usage of the instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline void SetCpuCredits(const char* value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits.assign(value); }

    /**
     * <p>The credit option for CPU usage of the instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline InstanceCreditSpecification& WithCpuCredits(const Aws::String& value) { SetCpuCredits(value); return *this;}

    /**
     * <p>The credit option for CPU usage of the instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline InstanceCreditSpecification& WithCpuCredits(Aws::String&& value) { SetCpuCredits(std::move(value)); return *this;}

    /**
     * <p>The credit option for CPU usage of the instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline InstanceCreditSpecification& WithCpuCredits(const char* value) { SetCpuCredits(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_cpuCredits;
    bool m_cpuCreditsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
