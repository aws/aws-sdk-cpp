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
   * <p>Describes properties of a Dedicated Host.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/HostProperties">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API HostProperties
  {
  public:
    HostProperties();
    HostProperties(const Aws::Utils::Xml::XmlNode& xmlNode);
    HostProperties& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of cores on the Dedicated Host.</p>
     */
    inline int GetCores() const{ return m_cores; }

    /**
     * <p>The number of cores on the Dedicated Host.</p>
     */
    inline void SetCores(int value) { m_coresHasBeenSet = true; m_cores = value; }

    /**
     * <p>The number of cores on the Dedicated Host.</p>
     */
    inline HostProperties& WithCores(int value) { SetCores(value); return *this;}


    /**
     * <p>The instance type size that the Dedicated Host supports (for example,
     * <code>m3.medium</code>).</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type size that the Dedicated Host supports (for example,
     * <code>m3.medium</code>).</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type size that the Dedicated Host supports (for example,
     * <code>m3.medium</code>).</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type size that the Dedicated Host supports (for example,
     * <code>m3.medium</code>).</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type size that the Dedicated Host supports (for example,
     * <code>m3.medium</code>).</p>
     */
    inline HostProperties& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type size that the Dedicated Host supports (for example,
     * <code>m3.medium</code>).</p>
     */
    inline HostProperties& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type size that the Dedicated Host supports (for example,
     * <code>m3.medium</code>).</p>
     */
    inline HostProperties& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The number of sockets on the Dedicated Host.</p>
     */
    inline int GetSockets() const{ return m_sockets; }

    /**
     * <p>The number of sockets on the Dedicated Host.</p>
     */
    inline void SetSockets(int value) { m_socketsHasBeenSet = true; m_sockets = value; }

    /**
     * <p>The number of sockets on the Dedicated Host.</p>
     */
    inline HostProperties& WithSockets(int value) { SetSockets(value); return *this;}


    /**
     * <p>The number of vCPUs on the Dedicated Host.</p>
     */
    inline int GetTotalVCpus() const{ return m_totalVCpus; }

    /**
     * <p>The number of vCPUs on the Dedicated Host.</p>
     */
    inline void SetTotalVCpus(int value) { m_totalVCpusHasBeenSet = true; m_totalVCpus = value; }

    /**
     * <p>The number of vCPUs on the Dedicated Host.</p>
     */
    inline HostProperties& WithTotalVCpus(int value) { SetTotalVCpus(value); return *this;}

  private:

    int m_cores;
    bool m_coresHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_sockets;
    bool m_socketsHasBeenSet;

    int m_totalVCpus;
    bool m_totalVCpusHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
