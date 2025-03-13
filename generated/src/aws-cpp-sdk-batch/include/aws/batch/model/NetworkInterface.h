/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>An object that represents the elastic network interface for a multi-node
   * parallel job node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/NetworkInterface">AWS
   * API Reference</a></p>
   */
  class NetworkInterface
  {
  public:
    AWS_BATCH_API NetworkInterface() = default;
    AWS_BATCH_API NetworkInterface(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API NetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The attachment ID for the network interface.</p>
     */
    inline const Aws::String& GetAttachmentId() const { return m_attachmentId; }
    inline bool AttachmentIdHasBeenSet() const { return m_attachmentIdHasBeenSet; }
    template<typename AttachmentIdT = Aws::String>
    void SetAttachmentId(AttachmentIdT&& value) { m_attachmentIdHasBeenSet = true; m_attachmentId = std::forward<AttachmentIdT>(value); }
    template<typename AttachmentIdT = Aws::String>
    NetworkInterface& WithAttachmentId(AttachmentIdT&& value) { SetAttachmentId(std::forward<AttachmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IPv6 address for the network interface.</p>
     */
    inline const Aws::String& GetIpv6Address() const { return m_ipv6Address; }
    inline bool Ipv6AddressHasBeenSet() const { return m_ipv6AddressHasBeenSet; }
    template<typename Ipv6AddressT = Aws::String>
    void SetIpv6Address(Ipv6AddressT&& value) { m_ipv6AddressHasBeenSet = true; m_ipv6Address = std::forward<Ipv6AddressT>(value); }
    template<typename Ipv6AddressT = Aws::String>
    NetworkInterface& WithIpv6Address(Ipv6AddressT&& value) { SetIpv6Address(std::forward<Ipv6AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The private IPv4 address for the network interface.</p>
     */
    inline const Aws::String& GetPrivateIpv4Address() const { return m_privateIpv4Address; }
    inline bool PrivateIpv4AddressHasBeenSet() const { return m_privateIpv4AddressHasBeenSet; }
    template<typename PrivateIpv4AddressT = Aws::String>
    void SetPrivateIpv4Address(PrivateIpv4AddressT&& value) { m_privateIpv4AddressHasBeenSet = true; m_privateIpv4Address = std::forward<PrivateIpv4AddressT>(value); }
    template<typename PrivateIpv4AddressT = Aws::String>
    NetworkInterface& WithPrivateIpv4Address(PrivateIpv4AddressT&& value) { SetPrivateIpv4Address(std::forward<PrivateIpv4AddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_attachmentId;
    bool m_attachmentIdHasBeenSet = false;

    Aws::String m_ipv6Address;
    bool m_ipv6AddressHasBeenSet = false;

    Aws::String m_privateIpv4Address;
    bool m_privateIpv4AddressHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
