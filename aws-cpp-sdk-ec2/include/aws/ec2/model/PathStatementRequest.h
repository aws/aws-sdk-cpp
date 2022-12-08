/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/PacketHeaderStatementRequest.h>
#include <aws/ec2/model/ResourceStatementRequest.h>
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
   * <p>Describes a path statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PathStatementRequest">AWS
   * API Reference</a></p>
   */
  class PathStatementRequest
  {
  public:
    AWS_EC2_API PathStatementRequest();
    AWS_EC2_API PathStatementRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PathStatementRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The packet header statement.</p>
     */
    inline const PacketHeaderStatementRequest& GetPacketHeaderStatement() const{ return m_packetHeaderStatement; }

    /**
     * <p>The packet header statement.</p>
     */
    inline bool PacketHeaderStatementHasBeenSet() const { return m_packetHeaderStatementHasBeenSet; }

    /**
     * <p>The packet header statement.</p>
     */
    inline void SetPacketHeaderStatement(const PacketHeaderStatementRequest& value) { m_packetHeaderStatementHasBeenSet = true; m_packetHeaderStatement = value; }

    /**
     * <p>The packet header statement.</p>
     */
    inline void SetPacketHeaderStatement(PacketHeaderStatementRequest&& value) { m_packetHeaderStatementHasBeenSet = true; m_packetHeaderStatement = std::move(value); }

    /**
     * <p>The packet header statement.</p>
     */
    inline PathStatementRequest& WithPacketHeaderStatement(const PacketHeaderStatementRequest& value) { SetPacketHeaderStatement(value); return *this;}

    /**
     * <p>The packet header statement.</p>
     */
    inline PathStatementRequest& WithPacketHeaderStatement(PacketHeaderStatementRequest&& value) { SetPacketHeaderStatement(std::move(value)); return *this;}


    /**
     * <p>The resource statement.</p>
     */
    inline const ResourceStatementRequest& GetResourceStatement() const{ return m_resourceStatement; }

    /**
     * <p>The resource statement.</p>
     */
    inline bool ResourceStatementHasBeenSet() const { return m_resourceStatementHasBeenSet; }

    /**
     * <p>The resource statement.</p>
     */
    inline void SetResourceStatement(const ResourceStatementRequest& value) { m_resourceStatementHasBeenSet = true; m_resourceStatement = value; }

    /**
     * <p>The resource statement.</p>
     */
    inline void SetResourceStatement(ResourceStatementRequest&& value) { m_resourceStatementHasBeenSet = true; m_resourceStatement = std::move(value); }

    /**
     * <p>The resource statement.</p>
     */
    inline PathStatementRequest& WithResourceStatement(const ResourceStatementRequest& value) { SetResourceStatement(value); return *this;}

    /**
     * <p>The resource statement.</p>
     */
    inline PathStatementRequest& WithResourceStatement(ResourceStatementRequest&& value) { SetResourceStatement(std::move(value)); return *this;}

  private:

    PacketHeaderStatementRequest m_packetHeaderStatement;
    bool m_packetHeaderStatementHasBeenSet = false;

    ResourceStatementRequest m_resourceStatement;
    bool m_resourceStatementHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
