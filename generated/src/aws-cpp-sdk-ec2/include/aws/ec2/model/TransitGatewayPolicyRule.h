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
    AWS_EC2_API TransitGatewayPolicyRule() = default;
    AWS_EC2_API TransitGatewayPolicyRule(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayPolicyRule& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The source CIDR block for the transit gateway policy rule.</p>
     */
    inline const Aws::String& GetSourceCidrBlock() const { return m_sourceCidrBlock; }
    inline bool SourceCidrBlockHasBeenSet() const { return m_sourceCidrBlockHasBeenSet; }
    template<typename SourceCidrBlockT = Aws::String>
    void SetSourceCidrBlock(SourceCidrBlockT&& value) { m_sourceCidrBlockHasBeenSet = true; m_sourceCidrBlock = std::forward<SourceCidrBlockT>(value); }
    template<typename SourceCidrBlockT = Aws::String>
    TransitGatewayPolicyRule& WithSourceCidrBlock(SourceCidrBlockT&& value) { SetSourceCidrBlock(std::forward<SourceCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port range for the transit gateway policy rule. Currently this is set to
     * * (all).</p>
     */
    inline const Aws::String& GetSourcePortRange() const { return m_sourcePortRange; }
    inline bool SourcePortRangeHasBeenSet() const { return m_sourcePortRangeHasBeenSet; }
    template<typename SourcePortRangeT = Aws::String>
    void SetSourcePortRange(SourcePortRangeT&& value) { m_sourcePortRangeHasBeenSet = true; m_sourcePortRange = std::forward<SourcePortRangeT>(value); }
    template<typename SourcePortRangeT = Aws::String>
    TransitGatewayPolicyRule& WithSourcePortRange(SourcePortRangeT&& value) { SetSourcePortRange(std::forward<SourcePortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination CIDR block for the transit gateway policy rule.</p>
     */
    inline const Aws::String& GetDestinationCidrBlock() const { return m_destinationCidrBlock; }
    inline bool DestinationCidrBlockHasBeenSet() const { return m_destinationCidrBlockHasBeenSet; }
    template<typename DestinationCidrBlockT = Aws::String>
    void SetDestinationCidrBlock(DestinationCidrBlockT&& value) { m_destinationCidrBlockHasBeenSet = true; m_destinationCidrBlock = std::forward<DestinationCidrBlockT>(value); }
    template<typename DestinationCidrBlockT = Aws::String>
    TransitGatewayPolicyRule& WithDestinationCidrBlock(DestinationCidrBlockT&& value) { SetDestinationCidrBlock(std::forward<DestinationCidrBlockT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port range for the transit gateway policy rule. Currently this is set to
     * * (all).</p>
     */
    inline const Aws::String& GetDestinationPortRange() const { return m_destinationPortRange; }
    inline bool DestinationPortRangeHasBeenSet() const { return m_destinationPortRangeHasBeenSet; }
    template<typename DestinationPortRangeT = Aws::String>
    void SetDestinationPortRange(DestinationPortRangeT&& value) { m_destinationPortRangeHasBeenSet = true; m_destinationPortRange = std::forward<DestinationPortRangeT>(value); }
    template<typename DestinationPortRangeT = Aws::String>
    TransitGatewayPolicyRule& WithDestinationPortRange(DestinationPortRangeT&& value) { SetDestinationPortRange(std::forward<DestinationPortRangeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol used by the transit gateway policy rule.</p>
     */
    inline const Aws::String& GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    template<typename ProtocolT = Aws::String>
    void SetProtocol(ProtocolT&& value) { m_protocolHasBeenSet = true; m_protocol = std::forward<ProtocolT>(value); }
    template<typename ProtocolT = Aws::String>
    TransitGatewayPolicyRule& WithProtocol(ProtocolT&& value) { SetProtocol(std::forward<ProtocolT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The meta data tags used for the transit gateway policy rule.</p>
     */
    inline const TransitGatewayPolicyRuleMetaData& GetMetaData() const { return m_metaData; }
    inline bool MetaDataHasBeenSet() const { return m_metaDataHasBeenSet; }
    template<typename MetaDataT = TransitGatewayPolicyRuleMetaData>
    void SetMetaData(MetaDataT&& value) { m_metaDataHasBeenSet = true; m_metaData = std::forward<MetaDataT>(value); }
    template<typename MetaDataT = TransitGatewayPolicyRuleMetaData>
    TransitGatewayPolicyRule& WithMetaData(MetaDataT&& value) { SetMetaData(std::forward<MetaDataT>(value)); return *this;}
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
