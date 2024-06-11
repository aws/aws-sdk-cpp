/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TransitGatewayPolicyRuleMetaData.h>
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
   * <p>Describes a rule associated with a transit gateway policy.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayPolicyRule">AWS
   * API Reference</a></p>
   */
  class TransitGatewayPolicyRule
  {
  public:
    AWS_EC2_API TransitGatewayPolicyRule();
    AWS_EC2_API TransitGatewayPolicyRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayPolicyRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The source CIDR block for the transit gateway policy rule.</p>
     */
    inline const Aws::String& GetSourceCidrBlock() const{ return m_sourceCidrBlock; }
    inline bool SourceCidrBlockHasBeenSet() const { return m_sourceCidrBlockHasBeenSet; }
    inline void SetSourceCidrBlock(const Aws::String& value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock = value; }
    inline void SetSourceCidrBlock(Aws::String&& value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock = std::move(value); }
    inline void SetSourceCidrBlock(const char* value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock.assign(value); }
    inline TransitGatewayPolicyRule& WithSourceCidrBlock(const Aws::String& value) { SetSourceCidrBlock(value); return *this;}
    inline TransitGatewayPolicyRule& WithSourceCidrBlock(Aws::String&& value) { SetSourceCidrBlock(std::move(value)); return *this;}
    inline TransitGatewayPolicyRule& WithSourceCidrBlock(const char* value) { SetSourceCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port range for the transit gateway policy rule. Currently this is set to
     * * (all).</p>
     */
    inline const Aws::String& GetSourcePortRange() const{ return m_sourcePortRange; }
    inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }
    inline void SetSourcePortRange(const Aws::String& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = value; }
    inline void SetSourcePortRange(Aws::String&& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = std::move(value); }
    inline void SetSourcePortRange(const char* value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange.assign(value); }
    inline TransitGatewayPolicyRule& WithSourcePortRange(const Aws::String& value) { SetSourcePortRange(value); return *this;}
    inline TransitGatewayPolicyRule& WithSourcePortRange(Aws::String&& value) { SetSourcePortRange(std::move(value)); return *this;}
    inline TransitGatewayPolicyRule& WithSourcePortRange(const char* value) { SetSourcePortRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination CIDR block for the transit gateway policy rule.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const{ return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    inline void SetDestinationCidrBlock(const Aws::String& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = value; }
    inline void SetDestinationCidrBlock(Aws::String&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::move(value); }
    inline void SetDestinationCidrBlock(const char* value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock.assign(value); }
    inline TransitGatewayPolicyRule& WithDestinationCidrBlock(const Aws::String& value) { SetDestinationCidrBlock(value); return *this;}
    inline TransitGatewayPolicyRule& WithDestinationCidrBlock(Aws::String&& value) { SetDestinationCidrBlock(std::move(value)); return *this;}
    inline TransitGatewayPolicyRule& WithDestinationCidrBlock(const char* value) { SetDestinationCidrBlock(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port range for the transit gateway policy rule. Currently this is set to
     * * (all).</p>
     */
    inline const Aws::String& GetDestinationPortRange() const{ return m_destinationPortRange; }
    inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }
    inline void SetDestinationPortRange(const Aws::String& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = value; }
    inline void SetDestinationPortRange(Aws::String&& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = std::move(value); }
    inline void SetDestinationPortRange(const char* value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange.assign(value); }
    inline TransitGatewayPolicyRule& WithDestinationPortRange(const Aws::String& value) { SetDestinationPortRange(value); return *this;}
    inline TransitGatewayPolicyRule& WithDestinationPortRange(Aws::String&& value) { SetDestinationPortRange(std::move(value)); return *this;}
    inline TransitGatewayPolicyRule& WithDestinationPortRange(const char* value) { SetDestinationPortRange(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used by the transit gateway policy rule.</p>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }
    inline TransitGatewayPolicyRule& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}
    inline TransitGatewayPolicyRule& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}
    inline TransitGatewayPolicyRule& WithProtocol(const char* value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The meta data tags used for the transit gateway policy rule.</p>
     */
    inline const TransitGatewayPolicyRuleMetaData& GetMetaData() const{ return m_metaData; }
    inline bool MetaDataHasBeenSet() const { return m_metaDataHasBeenSet; }
    inline void SetMetaData(const TransitGatewayPolicyRuleMetaData& value) { m_metaDataHasBeenSet = true; m_metaData = value; }
    inline void SetMetaData(TransitGatewayPolicyRuleMetaData&& value) { m_metaDataHasBeenSet = true; m_metaData = std::move(value); }
    inline TransitGatewayPolicyRule& WithMetaData(const TransitGatewayPolicyRuleMetaData& value) { SetMetaData(value); return *this;}
    inline TransitGatewayPolicyRule& WithMetaData(TransitGatewayPolicyRuleMetaData&& value) { SetMetaData(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceCidrBlock;
    bool m_sourceCidrBlockHasBeenSet = false;

    Aws::String m_sourcePortRange;
    bool m_sourcePortRangeHasBeenSet = false;

    Aws::String m_destinationCidrBlock;
    bool m_destinationCidrBlockHasBeenSet = false;

    Aws::String m_destinationPortRange;
    bool m_destinationPortRangeHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    TransitGatewayPolicyRuleMetaData m_metaData;
    bool m_metaDataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
