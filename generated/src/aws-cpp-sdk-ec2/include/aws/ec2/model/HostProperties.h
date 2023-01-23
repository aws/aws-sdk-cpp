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
   * <p>Describes the properties of a Dedicated Host.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/HostProperties">AWS
   * API Reference</a></p>
   */
  class HostProperties
  {
  public:
    AWS_EC2_API HostProperties();
    AWS_EC2_API HostProperties(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API HostProperties& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of cores on the Dedicated Host.</p>
     */
    inline int GetCores() const{ return m_cores; }

    /**
     * <p>The number of cores on the Dedicated Host.</p>
     */
    inline bool CoresHasBeenSet() const { return m_coresHasBeenSet; }

    /**
     * <p>The number of cores on the Dedicated Host.</p>
     */
    inline void SetCores(int value) { m_coresHasBeenSet = true; m_cores = value; }

    /**
     * <p>The number of cores on the Dedicated Host.</p>
     */
    inline HostProperties& WithCores(int value) { SetCores(value); return *this;}


    /**
     * <p>The instance type supported by the Dedicated Host. For example,
     * <code>m5.large</code>. If the host supports multiple instance types, no
     * <b>instanceType</b> is returned.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type supported by the Dedicated Host. For example,
     * <code>m5.large</code>. If the host supports multiple instance types, no
     * <b>instanceType</b> is returned.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type supported by the Dedicated Host. For example,
     * <code>m5.large</code>. If the host supports multiple instance types, no
     * <b>instanceType</b> is returned.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type supported by the Dedicated Host. For example,
     * <code>m5.large</code>. If the host supports multiple instance types, no
     * <b>instanceType</b> is returned.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type supported by the Dedicated Host. For example,
     * <code>m5.large</code>. If the host supports multiple instance types, no
     * <b>instanceType</b> is returned.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type supported by the Dedicated Host. For example,
     * <code>m5.large</code>. If the host supports multiple instance types, no
     * <b>instanceType</b> is returned.</p>
     */
    inline HostProperties& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type supported by the Dedicated Host. For example,
     * <code>m5.large</code>. If the host supports multiple instance types, no
     * <b>instanceType</b> is returned.</p>
     */
    inline HostProperties& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type supported by the Dedicated Host. For example,
     * <code>m5.large</code>. If the host supports multiple instance types, no
     * <b>instanceType</b> is returned.</p>
     */
    inline HostProperties& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The instance family supported by the Dedicated Host. For example,
     * <code>m5</code>.</p>
     */
    inline const Aws::String& GetInstanceFamily() const{ return m_instanceFamily; }

    /**
     * <p>The instance family supported by the Dedicated Host. For example,
     * <code>m5</code>.</p>
     */
    inline bool InstanceFamilyHasBeenSet() const { return m_instanceFamilyHasBeenSet; }

    /**
     * <p>The instance family supported by the Dedicated Host. For example,
     * <code>m5</code>.</p>
     */
    inline void SetInstanceFamily(const Aws::String& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = value; }

    /**
     * <p>The instance family supported by the Dedicated Host. For example,
     * <code>m5</code>.</p>
     */
    inline void SetInstanceFamily(Aws::String&& value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily = std::move(value); }

    /**
     * <p>The instance family supported by the Dedicated Host. For example,
     * <code>m5</code>.</p>
     */
    inline void SetInstanceFamily(const char* value) { m_instanceFamilyHasBeenSet = true; m_instanceFamily.assign(value); }

    /**
     * <p>The instance family supported by the Dedicated Host. For example,
     * <code>m5</code>.</p>
     */
    inline HostProperties& WithInstanceFamily(const Aws::String& value) { SetInstanceFamily(value); return *this;}

    /**
     * <p>The instance family supported by the Dedicated Host. For example,
     * <code>m5</code>.</p>
     */
    inline HostProperties& WithInstanceFamily(Aws::String&& value) { SetInstanceFamily(std::move(value)); return *this;}

    /**
     * <p>The instance family supported by the Dedicated Host. For example,
     * <code>m5</code>.</p>
     */
    inline HostProperties& WithInstanceFamily(const char* value) { SetInstanceFamily(value); return *this;}


    /**
     * <p>The number of sockets on the Dedicated Host.</p>
     */
    inline int GetSockets() const{ return m_sockets; }

    /**
     * <p>The number of sockets on the Dedicated Host.</p>
     */
    inline bool SocketsHasBeenSet() const { return m_socketsHasBeenSet; }

    /**
     * <p>The number of sockets on the Dedicated Host.</p>
     */
    inline void SetSockets(int value) { m_socketsHasBeenSet = true; m_sockets = value; }

    /**
     * <p>The number of sockets on the Dedicated Host.</p>
     */
    inline HostProperties& WithSockets(int value) { SetSockets(value); return *this;}


    /**
     * <p>The total number of vCPUs on the Dedicated Host.</p>
     */
    inline int GetTotalVCpus() const{ return m_totalVCpus; }

    /**
     * <p>The total number of vCPUs on the Dedicated Host.</p>
     */
    inline bool TotalVCpusHasBeenSet() const { return m_totalVCpusHasBeenSet; }

    /**
     * <p>The total number of vCPUs on the Dedicated Host.</p>
     */
    inline void SetTotalVCpus(int value) { m_totalVCpusHasBeenSet = true; m_totalVCpus = value; }

    /**
     * <p>The total number of vCPUs on the Dedicated Host.</p>
     */
    inline HostProperties& WithTotalVCpus(int value) { SetTotalVCpus(value); return *this;}

  private:

    int m_cores;
    bool m_coresHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_instanceFamily;
    bool m_instanceFamilyHasBeenSet = false;

    int m_sockets;
    bool m_socketsHasBeenSet = false;

    int m_totalVCpus;
    bool m_totalVCpusHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
