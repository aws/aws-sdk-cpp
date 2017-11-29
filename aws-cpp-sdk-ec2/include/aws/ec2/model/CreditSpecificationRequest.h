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
   * <p>The credit option for CPU usage of a T2 instance.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreditSpecificationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreditSpecificationRequest
  {
  public:
    CreditSpecificationRequest();
    CreditSpecificationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    CreditSpecificationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The credit option for CPU usage of a T2 instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline const Aws::String& GetCpuCredits() const{ return m_cpuCredits; }

    /**
     * <p>The credit option for CPU usage of a T2 instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline void SetCpuCredits(const Aws::String& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = value; }

    /**
     * <p>The credit option for CPU usage of a T2 instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline void SetCpuCredits(Aws::String&& value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits = std::move(value); }

    /**
     * <p>The credit option for CPU usage of a T2 instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline void SetCpuCredits(const char* value) { m_cpuCreditsHasBeenSet = true; m_cpuCredits.assign(value); }

    /**
     * <p>The credit option for CPU usage of a T2 instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline CreditSpecificationRequest& WithCpuCredits(const Aws::String& value) { SetCpuCredits(value); return *this;}

    /**
     * <p>The credit option for CPU usage of a T2 instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline CreditSpecificationRequest& WithCpuCredits(Aws::String&& value) { SetCpuCredits(std::move(value)); return *this;}

    /**
     * <p>The credit option for CPU usage of a T2 instance. Valid values are
     * <code>standard</code> and <code>unlimited</code>.</p>
     */
    inline CreditSpecificationRequest& WithCpuCredits(const char* value) { SetCpuCredits(value); return *this;}

  private:

    Aws::String m_cpuCredits;
    bool m_cpuCreditsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
