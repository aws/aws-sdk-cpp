/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/PacketHeaderStatement.h>
#include <aws/ec2/model/ResourceStatement.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PathStatement">AWS
   * API Reference</a></p>
   */
  class PathStatement
  {
  public:
    AWS_EC2_API PathStatement();
    AWS_EC2_API PathStatement(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PathStatement& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The packet header statement.</p>
     */
    inline const PacketHeaderStatement& GetPacketHeaderStatement() const{ return m_packetHeaderStatement; }

    /**
     * <p>The packet header statement.</p>
     */
    inline bool PacketHeaderStatementHasBeenSet() const { return m_packetHeaderStatementHasBeenSet; }

    /**
     * <p>The packet header statement.</p>
     */
    inline void SetPacketHeaderStatement(const PacketHeaderStatement& value) { m_packetHeaderStatementHasBeenSet = true; m_packetHeaderStatement = value; }

    /**
     * <p>The packet header statement.</p>
     */
    inline void SetPacketHeaderStatement(PacketHeaderStatement&& value) { m_packetHeaderStatementHasBeenSet = true; m_packetHeaderStatement = std::move(value); }

    /**
     * <p>The packet header statement.</p>
     */
    inline PathStatement& WithPacketHeaderStatement(const PacketHeaderStatement& value) { SetPacketHeaderStatement(value); return *this;}

    /**
     * <p>The packet header statement.</p>
     */
    inline PathStatement& WithPacketHeaderStatement(PacketHeaderStatement&& value) { SetPacketHeaderStatement(std::move(value)); return *this;}


    /**
     * <p>The resource statement.</p>
     */
    inline const ResourceStatement& GetResourceStatement() const{ return m_resourceStatement; }

    /**
     * <p>The resource statement.</p>
     */
    inline bool ResourceStatementHasBeenSet() const { return m_resourceStatementHasBeenSet; }

    /**
     * <p>The resource statement.</p>
     */
    inline void SetResourceStatement(const ResourceStatement& value) { m_resourceStatementHasBeenSet = true; m_resourceStatement = value; }

    /**
     * <p>The resource statement.</p>
     */
    inline void SetResourceStatement(ResourceStatement&& value) { m_resourceStatementHasBeenSet = true; m_resourceStatement = std::move(value); }

    /**
     * <p>The resource statement.</p>
     */
    inline PathStatement& WithResourceStatement(const ResourceStatement& value) { SetResourceStatement(value); return *this;}

    /**
     * <p>The resource statement.</p>
     */
    inline PathStatement& WithResourceStatement(ResourceStatement&& value) { SetResourceStatement(std::move(value)); return *this;}

  private:

    PacketHeaderStatement m_packetHeaderStatement;
    bool m_packetHeaderStatementHasBeenSet = false;

    ResourceStatement m_resourceStatement;
    bool m_resourceStatementHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
