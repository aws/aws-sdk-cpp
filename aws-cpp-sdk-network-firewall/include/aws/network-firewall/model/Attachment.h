/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/AttachmentStatus.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>The configuration and status for a single subnet that you've specified for
   * use by the Network Firewall firewall. This is part of the
   * <a>FirewallStatus</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/Attachment">AWS
   * API Reference</a></p>
   */
  class Attachment
  {
  public:
    AWS_NETWORKFIREWALL_API Attachment();
    AWS_NETWORKFIREWALL_API Attachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Attachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the subnet that you've specified to be used for a
     * firewall endpoint. </p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The unique identifier of the subnet that you've specified to be used for a
     * firewall endpoint. </p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The unique identifier of the subnet that you've specified to be used for a
     * firewall endpoint. </p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The unique identifier of the subnet that you've specified to be used for a
     * firewall endpoint. </p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The unique identifier of the subnet that you've specified to be used for a
     * firewall endpoint. </p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The unique identifier of the subnet that you've specified to be used for a
     * firewall endpoint. </p>
     */
    inline Attachment& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The unique identifier of the subnet that you've specified to be used for a
     * firewall endpoint. </p>
     */
    inline Attachment& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the subnet that you've specified to be used for a
     * firewall endpoint. </p>
     */
    inline Attachment& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The identifier of the firewall endpoint that Network Firewall has
     * instantiated in the subnet. You use this to identify the firewall endpoint in
     * the VPC route tables, when you redirect the VPC traffic through the endpoint.
     * </p>
     */
    inline const Aws::String& GetEndpointId() const{ return m_endpointId; }

    /**
     * <p>The identifier of the firewall endpoint that Network Firewall has
     * instantiated in the subnet. You use this to identify the firewall endpoint in
     * the VPC route tables, when you redirect the VPC traffic through the endpoint.
     * </p>
     */
    inline bool EndpointIdHasBeenSet() const { return m_endpointIdHasBeenSet; }

    /**
     * <p>The identifier of the firewall endpoint that Network Firewall has
     * instantiated in the subnet. You use this to identify the firewall endpoint in
     * the VPC route tables, when you redirect the VPC traffic through the endpoint.
     * </p>
     */
    inline void SetEndpointId(const Aws::String& value) { m_endpointIdHasBeenSet = true; m_endpointId = value; }

    /**
     * <p>The identifier of the firewall endpoint that Network Firewall has
     * instantiated in the subnet. You use this to identify the firewall endpoint in
     * the VPC route tables, when you redirect the VPC traffic through the endpoint.
     * </p>
     */
    inline void SetEndpointId(Aws::String&& value) { m_endpointIdHasBeenSet = true; m_endpointId = std::move(value); }

    /**
     * <p>The identifier of the firewall endpoint that Network Firewall has
     * instantiated in the subnet. You use this to identify the firewall endpoint in
     * the VPC route tables, when you redirect the VPC traffic through the endpoint.
     * </p>
     */
    inline void SetEndpointId(const char* value) { m_endpointIdHasBeenSet = true; m_endpointId.assign(value); }

    /**
     * <p>The identifier of the firewall endpoint that Network Firewall has
     * instantiated in the subnet. You use this to identify the firewall endpoint in
     * the VPC route tables, when you redirect the VPC traffic through the endpoint.
     * </p>
     */
    inline Attachment& WithEndpointId(const Aws::String& value) { SetEndpointId(value); return *this;}

    /**
     * <p>The identifier of the firewall endpoint that Network Firewall has
     * instantiated in the subnet. You use this to identify the firewall endpoint in
     * the VPC route tables, when you redirect the VPC traffic through the endpoint.
     * </p>
     */
    inline Attachment& WithEndpointId(Aws::String&& value) { SetEndpointId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the firewall endpoint that Network Firewall has
     * instantiated in the subnet. You use this to identify the firewall endpoint in
     * the VPC route tables, when you redirect the VPC traffic through the endpoint.
     * </p>
     */
    inline Attachment& WithEndpointId(const char* value) { SetEndpointId(value); return *this;}


    /**
     * <p>The current status of the firewall endpoint in the subnet. This value
     * reflects both the instantiation of the endpoint in the VPC subnet and the sync
     * states that are reported in the <code>Config</code> settings. When this value is
     * <code>READY</code>, the endpoint is available and configured properly to handle
     * network traffic. When the endpoint isn't available for traffic, this value will
     * reflect its state, for example <code>CREATING</code>, <code>DELETING</code>, or
     * <code>FAILED</code>.</p>
     */
    inline const AttachmentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current status of the firewall endpoint in the subnet. This value
     * reflects both the instantiation of the endpoint in the VPC subnet and the sync
     * states that are reported in the <code>Config</code> settings. When this value is
     * <code>READY</code>, the endpoint is available and configured properly to handle
     * network traffic. When the endpoint isn't available for traffic, this value will
     * reflect its state, for example <code>CREATING</code>, <code>DELETING</code>, or
     * <code>FAILED</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The current status of the firewall endpoint in the subnet. This value
     * reflects both the instantiation of the endpoint in the VPC subnet and the sync
     * states that are reported in the <code>Config</code> settings. When this value is
     * <code>READY</code>, the endpoint is available and configured properly to handle
     * network traffic. When the endpoint isn't available for traffic, this value will
     * reflect its state, for example <code>CREATING</code>, <code>DELETING</code>, or
     * <code>FAILED</code>.</p>
     */
    inline void SetStatus(const AttachmentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The current status of the firewall endpoint in the subnet. This value
     * reflects both the instantiation of the endpoint in the VPC subnet and the sync
     * states that are reported in the <code>Config</code> settings. When this value is
     * <code>READY</code>, the endpoint is available and configured properly to handle
     * network traffic. When the endpoint isn't available for traffic, this value will
     * reflect its state, for example <code>CREATING</code>, <code>DELETING</code>, or
     * <code>FAILED</code>.</p>
     */
    inline void SetStatus(AttachmentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The current status of the firewall endpoint in the subnet. This value
     * reflects both the instantiation of the endpoint in the VPC subnet and the sync
     * states that are reported in the <code>Config</code> settings. When this value is
     * <code>READY</code>, the endpoint is available and configured properly to handle
     * network traffic. When the endpoint isn't available for traffic, this value will
     * reflect its state, for example <code>CREATING</code>, <code>DELETING</code>, or
     * <code>FAILED</code>.</p>
     */
    inline Attachment& WithStatus(const AttachmentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current status of the firewall endpoint in the subnet. This value
     * reflects both the instantiation of the endpoint in the VPC subnet and the sync
     * states that are reported in the <code>Config</code> settings. When this value is
     * <code>READY</code>, the endpoint is available and configured properly to handle
     * network traffic. When the endpoint isn't available for traffic, this value will
     * reflect its state, for example <code>CREATING</code>, <code>DELETING</code>, or
     * <code>FAILED</code>.</p>
     */
    inline Attachment& WithStatus(AttachmentStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_endpointId;
    bool m_endpointIdHasBeenSet = false;

    AttachmentStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
