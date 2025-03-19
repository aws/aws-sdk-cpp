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
   * <p>Describes the credit option for CPU usage of a burstable performance
   * instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceCreditSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class InstanceCreditSpecificationRequest
  {
  public:
    AWS_EC2_API InstanceCreditSpecificationRequest() = default;
    AWS_EC2_API InstanceCreditSpecificationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceCreditSpecificationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstanceCreditSpecificationRequest& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credit option for CPU usage of the instance.</p> <p>Valid values:
     * <code>standard</code> | <code>unlimited</code> </p> <p>T3 instances with
     * <code>host</code> tenancy do not support the <code>unlimited</code> CPU credit
     * option.</p>
     */
    inline const Aws::String& GetCpuCredits() const { return m_cpuCredits; }
    inline bool CpuCreditsHasBeenSet() const { return m_cpuCreditsHasBeenSet; }
    template<typename CpuCreditsT = Aws::String>
    void SetCpuCredits(CpuCreditsT&& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = std::forward<CpuCreditsT>(value); }
    template<typename CpuCreditsT = Aws::String>
    InstanceCreditSpecificationRequest& WithCpuCredits(CpuCreditsT&& value) { SetCpuCredits(std::forward<CpuCreditsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_cpuCredits;
    bool m_cpuCreditsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
