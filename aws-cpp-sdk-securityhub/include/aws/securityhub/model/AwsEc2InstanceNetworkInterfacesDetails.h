/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Identifies a network interface for the Amazon EC2 instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2InstanceNetworkInterfacesDetails">AWS
   * API Reference</a></p>
   */
  class AwsEc2InstanceNetworkInterfacesDetails
  {
  public:
    AWS_SECURITYHUB_API AwsEc2InstanceNetworkInterfacesDetails();
    AWS_SECURITYHUB_API AwsEc2InstanceNetworkInterfacesDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2InstanceNetworkInterfacesDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the network interface. The details are in a corresponding
     * <code>AwsEc2NetworkInterfacesDetails</code> object.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The identifier of the network interface. The details are in a corresponding
     * <code>AwsEc2NetworkInterfacesDetails</code> object.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The identifier of the network interface. The details are in a corresponding
     * <code>AwsEc2NetworkInterfacesDetails</code> object.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The identifier of the network interface. The details are in a corresponding
     * <code>AwsEc2NetworkInterfacesDetails</code> object.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The identifier of the network interface. The details are in a corresponding
     * <code>AwsEc2NetworkInterfacesDetails</code> object.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The identifier of the network interface. The details are in a corresponding
     * <code>AwsEc2NetworkInterfacesDetails</code> object.</p>
     */
    inline AwsEc2InstanceNetworkInterfacesDetails& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The identifier of the network interface. The details are in a corresponding
     * <code>AwsEc2NetworkInterfacesDetails</code> object.</p>
     */
    inline AwsEc2InstanceNetworkInterfacesDetails& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the network interface. The details are in a corresponding
     * <code>AwsEc2NetworkInterfacesDetails</code> object.</p>
     */
    inline AwsEc2InstanceNetworkInterfacesDetails& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}

  private:

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
