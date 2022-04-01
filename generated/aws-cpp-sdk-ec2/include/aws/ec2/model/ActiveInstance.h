﻿/**
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
  class AWS_EC2_API ActiveInstance
  {
  public:
    ActiveInstance();
    ActiveInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    ActiveInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline ActiveInstance& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ActiveInstance& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline ActiveInstance& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type.</p>
     */
    inline ActiveInstance& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline ActiveInstance& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type.</p>
     */
    inline ActiveInstance& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}


    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline const Aws::String& GetSpotInstanceRequestId() const{ return m_spotInstanceRequestId; }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline bool SpotInstanceRequestIdHasBeenSet() const { return m_spotInstanceRequestIdHasBeenSet; }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline void SetSpotInstanceRequestId(const Aws::String& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = value; }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline void SetSpotInstanceRequestId(Aws::String&& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = std::move(value); }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline void SetSpotInstanceRequestId(const char* value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId.assign(value); }

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline ActiveInstance& WithSpotInstanceRequestId(const Aws::String& value) { SetSpotInstanceRequestId(value); return *this;}

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline ActiveInstance& WithSpotInstanceRequestId(Aws::String&& value) { SetSpotInstanceRequestId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline ActiveInstance& WithSpotInstanceRequestId(const char* value) { SetSpotInstanceRequestId(value); return *this;}


    /**
     * <p>The health status of the instance. If the status of either the instance
     * status check or the system status check is <code>impaired</code>, the health
     * status of the instance is <code>unhealthy</code>. Otherwise, the health status
     * is <code>healthy</code>.</p>
     */
    inline const InstanceHealthStatus& GetInstanceHealth() const{ return m_instanceHealth; }

    /**
     * <p>The health status of the instance. If the status of either the instance
     * status check or the system status check is <code>impaired</code>, the health
     * status of the instance is <code>unhealthy</code>. Otherwise, the health status
     * is <code>healthy</code>.</p>
     */
    inline bool InstanceHealthHasBeenSet() const { return m_instanceHealthHasBeenSet; }

    /**
     * <p>The health status of the instance. If the status of either the instance
     * status check or the system status check is <code>impaired</code>, the health
     * status of the instance is <code>unhealthy</code>. Otherwise, the health status
     * is <code>healthy</code>.</p>
     */
    inline void SetInstanceHealth(const InstanceHealthStatus& value) { m_instanceHealthHasBeenSet = true; m_instanceHealth = value; }

    /**
     * <p>The health status of the instance. If the status of either the instance
     * status check or the system status check is <code>impaired</code>, the health
     * status of the instance is <code>unhealthy</code>. Otherwise, the health status
     * is <code>healthy</code>.</p>
     */
    inline void SetInstanceHealth(InstanceHealthStatus&& value) { m_instanceHealthHasBeenSet = true; m_instanceHealth = std::move(value); }

    /**
     * <p>The health status of the instance. If the status of either the instance
     * status check or the system status check is <code>impaired</code>, the health
     * status of the instance is <code>unhealthy</code>. Otherwise, the health status
     * is <code>healthy</code>.</p>
     */
    inline ActiveInstance& WithInstanceHealth(const InstanceHealthStatus& value) { SetInstanceHealth(value); return *this;}

    /**
     * <p>The health status of the instance. If the status of either the instance
     * status check or the system status check is <code>impaired</code>, the health
     * status of the instance is <code>unhealthy</code>. Otherwise, the health status
     * is <code>healthy</code>.</p>
     */
    inline ActiveInstance& WithInstanceHealth(InstanceHealthStatus&& value) { SetInstanceHealth(std::move(value)); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet;

    Aws::String m_spotInstanceRequestId;
    bool m_spotInstanceRequestIdHasBeenSet;

    InstanceHealthStatus m_instanceHealth;
    bool m_instanceHealthHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
