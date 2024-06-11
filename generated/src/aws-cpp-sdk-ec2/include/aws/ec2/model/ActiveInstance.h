/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceHealthStatus.h>
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
   * <p>Describes a running instance in a Spot Fleet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ActiveInstance">AWS
   * API Reference</a></p>
   */
  class ActiveInstance
  {
  public:
    AWS_EC2_API ActiveInstance();
    AWS_EC2_API ActiveInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ActiveInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline ActiveInstance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline ActiveInstance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline ActiveInstance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }
    inline ActiveInstance& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}
    inline ActiveInstance& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}
    inline ActiveInstance& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline const Aws::String& GetSpotInstanceRequestId() const{ return m_spotInstanceRequestId; }
    inline bool SpotInstanceRequestIdHasBeenSet() const { return m_spotInstanceRequestIdHasBeenSet; }
    inline void SetSpotInstanceRequestId(const Aws::String& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = value; }
    inline void SetSpotInstanceRequestId(Aws::String&& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = std::move(value); }
    inline void SetSpotInstanceRequestId(const char* value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId.assign(value); }
    inline ActiveInstance& WithSpotInstanceRequestId(const Aws::String& value) { SetSpotInstanceRequestId(value); return *this;}
    inline ActiveInstance& WithSpotInstanceRequestId(Aws::String&& value) { SetSpotInstanceRequestId(std::move(value)); return *this;}
    inline ActiveInstance& WithSpotInstanceRequestId(const char* value) { SetSpotInstanceRequestId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health status of the instance. If the status of either the instance
     * status check or the system status check is <code>impaired</code>, the health
     * status of the instance is <code>unhealthy</code>. Otherwise, the health status
     * is <code>healthy</code>.</p>
     */
    inline const InstanceHealthStatus& GetInstanceHealth() const{ return m_instanceHealth; }
    inline bool InstanceHealthHasBeenSet() const { return m_instanceHealthHasBeenSet; }
    inline void SetInstanceHealth(const InstanceHealthStatus& value) { m_instanceHealthHasBeenSet = true; m_instanceHealth = value; }
    inline void SetInstanceHealth(InstanceHealthStatus&& value) { m_instanceHealthHasBeenSet = true; m_instanceHealth = std::move(value); }
    inline ActiveInstance& WithInstanceHealth(const InstanceHealthStatus& value) { SetInstanceHealth(value); return *this;}
    inline ActiveInstance& WithInstanceHealth(InstanceHealthStatus&& value) { SetInstanceHealth(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_spotInstanceRequestId;
    bool m_spotInstanceRequestIdHasBeenSet = false;

    InstanceHealthStatus m_instanceHealth;
    bool m_instanceHealthHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
