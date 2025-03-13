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
    AWS_EC2_API ActiveInstance() = default;
    AWS_EC2_API ActiveInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ActiveInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    ActiveInstance& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type.</p>
     */
    inline const Aws::String& GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    template<typename InstanceTypeT = Aws::String>
    void SetInstanceType(InstanceTypeT&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::forward<InstanceTypeT>(value); }
    template<typename InstanceTypeT = Aws::String>
    ActiveInstance& WithInstanceType(InstanceTypeT&& value) { SetInstanceType(std::forward<InstanceTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Spot Instance request.</p>
     */
    inline const Aws::String& GetSpotInstanceRequestId() const { return m_spotInstanceRequestId; }
    inline bool SpotInstanceRequestIdHasBeenSet() const { return m_spotInstanceRequestIdHasBeenSet; }
    template<typename SpotInstanceRequestIdT = Aws::String>
    void SetSpotInstanceRequestId(SpotInstanceRequestIdT&& value) { m_spotInstanceRequestIdHasBeenSet = true; m_spotInstanceRequestId = std::forward<SpotInstanceRequestIdT>(value); }
    template<typename SpotInstanceRequestIdT = Aws::String>
    ActiveInstance& WithSpotInstanceRequestId(SpotInstanceRequestIdT&& value) { SetSpotInstanceRequestId(std::forward<SpotInstanceRequestIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The health status of the instance. If the status of either the instance
     * status check or the system status check is <code>impaired</code>, the health
     * status of the instance is <code>unhealthy</code>. Otherwise, the health status
     * is <code>healthy</code>.</p>
     */
    inline InstanceHealthStatus GetInstanceHealth() const { return m_instanceHealth; }
    inline bool InstanceHealthHasBeenSet() const { return m_instanceHealthHasBeenSet; }
    inline void SetInstanceHealth(InstanceHealthStatus value) { m_instanceHealthHasBeenSet = true; m_instanceHealth = value; }
    inline ActiveInstance& WithInstanceHealth(InstanceHealthStatus value) { SetInstanceHealth(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    Aws::String m_spotInstanceRequestId;
    bool m_spotInstanceRequestIdHasBeenSet = false;

    InstanceHealthStatus m_instanceHealth{InstanceHealthStatus::NOT_SET};
    bool m_instanceHealthHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
