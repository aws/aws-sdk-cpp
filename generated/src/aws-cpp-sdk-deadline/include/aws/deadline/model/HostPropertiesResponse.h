/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/deadline/model/IpAddresses.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace deadline
{
namespace Model
{

  /**
   * <p>The host property details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/HostPropertiesResponse">AWS
   * API Reference</a></p>
   */
  class HostPropertiesResponse
  {
  public:
    AWS_DEADLINE_API HostPropertiesResponse() = default;
    AWS_DEADLINE_API HostPropertiesResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API HostPropertiesResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IP address of the host.</p>
     */
    inline const IpAddresses& GetIpAddresses() const { return m_ipAddresses; }
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }
    template<typename IpAddressesT = IpAddresses>
    void SetIpAddresses(IpAddressesT&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::forward<IpAddressesT>(value); }
    template<typename IpAddressesT = IpAddresses>
    HostPropertiesResponse& WithIpAddresses(IpAddressesT&& value) { SetIpAddresses(std::forward<IpAddressesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The host name.</p>
     */
    inline const Aws::String& GetHostName() const { return m_hostName; }
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }
    template<typename HostNameT = Aws::String>
    void SetHostName(HostNameT&& value) { m_hostNameHasBeenSet = true; m_hostName = std::forward<HostNameT>(value); }
    template<typename HostNameT = Aws::String>
    HostPropertiesResponse& WithHostName(HostNameT&& value) { SetHostName(std::forward<HostNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the host EC2 instance.</p>
     */
    inline const Aws::String& GetEc2InstanceArn() const { return m_ec2InstanceArn; }
    inline bool Ec2InstanceArnHasBeenSet() const { return m_ec2InstanceArnHasBeenSet; }
    template<typename Ec2InstanceArnT = Aws::String>
    void SetEc2InstanceArn(Ec2InstanceArnT&& value) { m_ec2InstanceArnHasBeenSet = true; m_ec2InstanceArn = std::forward<Ec2InstanceArnT>(value); }
    template<typename Ec2InstanceArnT = Aws::String>
    HostPropertiesResponse& WithEc2InstanceArn(Ec2InstanceArnT&& value) { SetEc2InstanceArn(std::forward<Ec2InstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type of the host EC2 instance.</p>
     */
    inline const Aws::String& GetEc2InstanceType() const { return m_ec2InstanceType; }
    inline bool Ec2InstanceTypeHasBeenSet() const { return m_ec2InstanceTypeHasBeenSet; }
    template<typename Ec2InstanceTypeT = Aws::String>
    void SetEc2InstanceType(Ec2InstanceTypeT&& value) { m_ec2InstanceTypeHasBeenSet = true; m_ec2InstanceType = std::forward<Ec2InstanceTypeT>(value); }
    template<typename Ec2InstanceTypeT = Aws::String>
    HostPropertiesResponse& WithEc2InstanceType(Ec2InstanceTypeT&& value) { SetEc2InstanceType(std::forward<Ec2InstanceTypeT>(value)); return *this;}
    ///@}
  private:

    IpAddresses m_ipAddresses;
    bool m_ipAddressesHasBeenSet = false;

    Aws::String m_hostName;
    bool m_hostNameHasBeenSet = false;

    Aws::String m_ec2InstanceArn;
    bool m_ec2InstanceArnHasBeenSet = false;

    Aws::String m_ec2InstanceType;
    bool m_ec2InstanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
