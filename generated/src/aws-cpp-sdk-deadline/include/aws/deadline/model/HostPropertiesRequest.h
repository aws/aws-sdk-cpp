/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/deadline/Deadline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/deadline/model/IpAddresses.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/deadline-2023-10-12/HostPropertiesRequest">AWS
   * API Reference</a></p>
   */
  class HostPropertiesRequest
  {
  public:
    AWS_DEADLINE_API HostPropertiesRequest();
    AWS_DEADLINE_API HostPropertiesRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API HostPropertiesRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DEADLINE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The host name.</p>
     */
    inline const Aws::String& GetHostName() const{ return m_hostName; }

    /**
     * <p>The host name.</p>
     */
    inline bool HostNameHasBeenSet() const { return m_hostNameHasBeenSet; }

    /**
     * <p>The host name.</p>
     */
    inline void SetHostName(const Aws::String& value) { m_hostNameHasBeenSet = true; m_hostName = value; }

    /**
     * <p>The host name.</p>
     */
    inline void SetHostName(Aws::String&& value) { m_hostNameHasBeenSet = true; m_hostName = std::move(value); }

    /**
     * <p>The host name.</p>
     */
    inline void SetHostName(const char* value) { m_hostNameHasBeenSet = true; m_hostName.assign(value); }

    /**
     * <p>The host name.</p>
     */
    inline HostPropertiesRequest& WithHostName(const Aws::String& value) { SetHostName(value); return *this;}

    /**
     * <p>The host name.</p>
     */
    inline HostPropertiesRequest& WithHostName(Aws::String&& value) { SetHostName(std::move(value)); return *this;}

    /**
     * <p>The host name.</p>
     */
    inline HostPropertiesRequest& WithHostName(const char* value) { SetHostName(value); return *this;}


    /**
     * <p>The IP address of the host.</p>
     */
    inline const IpAddresses& GetIpAddresses() const{ return m_ipAddresses; }

    /**
     * <p>The IP address of the host.</p>
     */
    inline bool IpAddressesHasBeenSet() const { return m_ipAddressesHasBeenSet; }

    /**
     * <p>The IP address of the host.</p>
     */
    inline void SetIpAddresses(const IpAddresses& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = value; }

    /**
     * <p>The IP address of the host.</p>
     */
    inline void SetIpAddresses(IpAddresses&& value) { m_ipAddressesHasBeenSet = true; m_ipAddresses = std::move(value); }

    /**
     * <p>The IP address of the host.</p>
     */
    inline HostPropertiesRequest& WithIpAddresses(const IpAddresses& value) { SetIpAddresses(value); return *this;}

    /**
     * <p>The IP address of the host.</p>
     */
    inline HostPropertiesRequest& WithIpAddresses(IpAddresses&& value) { SetIpAddresses(std::move(value)); return *this;}

  private:

    Aws::String m_hostName;
    bool m_hostNameHasBeenSet = false;

    IpAddresses m_ipAddresses;
    bool m_ipAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace deadline
} // namespace Aws
