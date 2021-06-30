/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
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
namespace Transfer
{
namespace Model
{

  /**
   * <p> The protocol settings that are configured for your server. </p>  <p>
   * This type is only valid in the <code>UpdateServer</code> API. </p>
   * <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/transfer-2018-11-05/ProtocolDetails">AWS
   * API Reference</a></p>
   */
  class AWS_TRANSFER_API ProtocolDetails
  {
  public:
    ProtocolDetails();
    ProtocolDetails(Aws::Utils::Json::JsonView jsonValue);
    ProtocolDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>
     */
    inline const Aws::String& GetPassiveIp() const{ return m_passiveIp; }

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>
     */
    inline bool PassiveIpHasBeenSet() const { return m_passiveIpHasBeenSet; }

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>
     */
    inline void SetPassiveIp(const Aws::String& value) { m_passiveIpHasBeenSet = true; m_passiveIp = value; }

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>
     */
    inline void SetPassiveIp(Aws::String&& value) { m_passiveIpHasBeenSet = true; m_passiveIp = std::move(value); }

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>
     */
    inline void SetPassiveIp(const char* value) { m_passiveIpHasBeenSet = true; m_passiveIp.assign(value); }

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>
     */
    inline ProtocolDetails& WithPassiveIp(const Aws::String& value) { SetPassiveIp(value); return *this;}

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>
     */
    inline ProtocolDetails& WithPassiveIp(Aws::String&& value) { SetPassiveIp(std::move(value)); return *this;}

    /**
     * <p> Indicates passive mode, for FTP and FTPS protocols. Enter a single
     * dotted-quad IPv4 address, such as the external IP address of a firewall, router,
     * or load balancer. For example: </p> <p> <code> aws transfer update-server
     * --protocol-details PassiveIp=<i>0.0.0.0</i> </code> </p> <p>Replace <code>
     * <i>0.0.0.0</i> </code> in the example above with the actual IP address you want
     * to use.</p>
     */
    inline ProtocolDetails& WithPassiveIp(const char* value) { SetPassiveIp(value); return *this;}

  private:

    Aws::String m_passiveIp;
    bool m_passiveIpHasBeenSet;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
