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
   * <p>The CPU options for the instance. Both the core count and threads per core
   * must be specified in the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CpuOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CpuOptionsRequest
  {
  public:
    CpuOptionsRequest();
    CpuOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    CpuOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of CPU cores for the instance.</p>
     */
    inline int GetCoreCount() const{ return m_coreCount; }

    /**
     * <p>The number of CPU cores for the instance.</p>
     */
    inline void SetCoreCount(int value) { m_coreCountHasBeenSet = true; m_coreCount = value; }

    /**
     * <p>The number of CPU cores for the instance.</p>
     */
    inline CpuOptionsRequest& WithCoreCount(int value) { SetCoreCount(value); return *this;}


    /**
     * <p>The number of threads per CPU core. To disable Intel Hyper-Threading
     * Technology for the instance, specify a value of <code>1</code>. Otherwise,
     * specify the default value of <code>2</code>.</p>
     */
    inline int GetThreadsPerCore() const{ return m_threadsPerCore; }

    /**
     * <p>The number of threads per CPU core. To disable Intel Hyper-Threading
     * Technology for the instance, specify a value of <code>1</code>. Otherwise,
     * specify the default value of <code>2</code>.</p>
     */
    inline void SetThreadsPerCore(int value) { m_threadsPerCoreHasBeenSet = true; m_threadsPerCore = value; }

    /**
     * <p>The number of threads per CPU core. To disable Intel Hyper-Threading
     * Technology for the instance, specify a value of <code>1</code>. Otherwise,
     * specify the default value of <code>2</code>.</p>
     */
    inline CpuOptionsRequest& WithThreadsPerCore(int value) { SetThreadsPerCore(value); return *this;}

  private:

    int m_coreCount;
    bool m_coreCountHasBeenSet;

    int m_threadsPerCore;
    bool m_threadsPerCoreHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
