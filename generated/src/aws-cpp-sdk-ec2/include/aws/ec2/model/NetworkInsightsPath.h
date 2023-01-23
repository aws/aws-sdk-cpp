/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/Protocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a path.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInsightsPath">AWS
   * API Reference</a></p>
   */
  class NetworkInsightsPath
  {
  public:
    AWS_EC2_API NetworkInsightsPath();
    AWS_EC2_API NetworkInsightsPath(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInsightsPath& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the path.</p>
     */
    inline const Aws::String& GetNetworkInsightsPathId() const{ return m_networkInsightsPathId; }

    /**
     * <p>The ID of the path.</p>
     */
    inline bool NetworkInsightsPathIdHasBeenSet() const { return m_networkInsightsPathIdHasBeenSet; }

    /**
     * <p>The ID of the path.</p>
     */
    inline void SetNetworkInsightsPathId(const Aws::String& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = value; }

    /**
     * <p>The ID of the path.</p>
     */
    inline void SetNetworkInsightsPathId(Aws::String&& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = std::move(value); }

    /**
     * <p>The ID of the path.</p>
     */
    inline void SetNetworkInsightsPathId(const char* value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId.assign(value); }

    /**
     * <p>The ID of the path.</p>
     */
    inline NetworkInsightsPath& WithNetworkInsightsPathId(const Aws::String& value) { SetNetworkInsightsPathId(value); return *this;}

    /**
     * <p>The ID of the path.</p>
     */
    inline NetworkInsightsPath& WithNetworkInsightsPathId(Aws::String&& value) { SetNetworkInsightsPathId(std::move(value)); return *this;}

    /**
     * <p>The ID of the path.</p>
     */
    inline NetworkInsightsPath& WithNetworkInsightsPathId(const char* value) { SetNetworkInsightsPathId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the path.</p>
     */
    inline const Aws::String& GetNetworkInsightsPathArn() const{ return m_networkInsightsPathArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the path.</p>
     */
    inline bool NetworkInsightsPathArnHasBeenSet() const { return m_networkInsightsPathArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the path.</p>
     */
    inline void SetNetworkInsightsPathArn(const Aws::String& value) { m_networkInsightsPathArnHasBeenSet = true; m_networkInsightsPathArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the path.</p>
     */
    inline void SetNetworkInsightsPathArn(Aws::String&& value) { m_networkInsightsPathArnHasBeenSet = true; m_networkInsightsPathArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the path.</p>
     */
    inline void SetNetworkInsightsPathArn(const char* value) { m_networkInsightsPathArnHasBeenSet = true; m_networkInsightsPathArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the path.</p>
     */
    inline NetworkInsightsPath& WithNetworkInsightsPathArn(const Aws::String& value) { SetNetworkInsightsPathArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the path.</p>
     */
    inline NetworkInsightsPath& WithNetworkInsightsPathArn(Aws::String&& value) { SetNetworkInsightsPathArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the path.</p>
     */
    inline NetworkInsightsPath& WithNetworkInsightsPathArn(const char* value) { SetNetworkInsightsPathArn(value); return *this;}


    /**
     * <p>The time stamp when the path was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The time stamp when the path was created.</p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The time stamp when the path was created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The time stamp when the path was created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The time stamp when the path was created.</p>
     */
    inline NetworkInsightsPath& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The time stamp when the path was created.</p>
     */
    inline NetworkInsightsPath& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services resource that is the source of the path.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }

    /**
     * <p>The Amazon Web Services resource that is the source of the path.</p>
     */
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }

    /**
     * <p>The Amazon Web Services resource that is the source of the path.</p>
     */
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }

    /**
     * <p>The Amazon Web Services resource that is the source of the path.</p>
     */
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }

    /**
     * <p>The Amazon Web Services resource that is the source of the path.</p>
     */
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }

    /**
     * <p>The Amazon Web Services resource that is the source of the path.</p>
     */
    inline NetworkInsightsPath& WithSource(const Aws::String& value) { SetSource(value); return *this;}

    /**
     * <p>The Amazon Web Services resource that is the source of the path.</p>
     */
    inline NetworkInsightsPath& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services resource that is the source of the path.</p>
     */
    inline NetworkInsightsPath& WithSource(const char* value) { SetSource(value); return *this;}


    /**
     * <p>The Amazon Web Services resource that is the destination of the path.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }

    /**
     * <p>The Amazon Web Services resource that is the destination of the path.</p>
     */
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }

    /**
     * <p>The Amazon Web Services resource that is the destination of the path.</p>
     */
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }

    /**
     * <p>The Amazon Web Services resource that is the destination of the path.</p>
     */
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }

    /**
     * <p>The Amazon Web Services resource that is the destination of the path.</p>
     */
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }

    /**
     * <p>The Amazon Web Services resource that is the destination of the path.</p>
     */
    inline NetworkInsightsPath& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}

    /**
     * <p>The Amazon Web Services resource that is the destination of the path.</p>
     */
    inline NetworkInsightsPath& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services resource that is the destination of the path.</p>
     */
    inline NetworkInsightsPath& WithDestination(const char* value) { SetDestination(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the source.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source.</p>
     */
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source.</p>
     */
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the source.</p>
     */
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source.</p>
     */
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the source.</p>
     */
    inline NetworkInsightsPath& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source.</p>
     */
    inline NetworkInsightsPath& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the source.</p>
     */
    inline NetworkInsightsPath& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline NetworkInsightsPath& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline NetworkInsightsPath& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline NetworkInsightsPath& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}


    /**
     * <p>The IP address of the Amazon Web Services resource that is the source of the
     * path.</p>
     */
    inline const Aws::String& GetSourceIp() const{ return m_sourceIp; }

    /**
     * <p>The IP address of the Amazon Web Services resource that is the source of the
     * path.</p>
     */
    inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }

    /**
     * <p>The IP address of the Amazon Web Services resource that is the source of the
     * path.</p>
     */
    inline void SetSourceIp(const Aws::String& value) { m_sourceIpHasBeenSet = true; m_sourceIp = value; }

    /**
     * <p>The IP address of the Amazon Web Services resource that is the source of the
     * path.</p>
     */
    inline void SetSourceIp(Aws::String&& value) { m_sourceIpHasBeenSet = true; m_sourceIp = std::move(value); }

    /**
     * <p>The IP address of the Amazon Web Services resource that is the source of the
     * path.</p>
     */
    inline void SetSourceIp(const char* value) { m_sourceIpHasBeenSet = true; m_sourceIp.assign(value); }

    /**
     * <p>The IP address of the Amazon Web Services resource that is the source of the
     * path.</p>
     */
    inline NetworkInsightsPath& WithSourceIp(const Aws::String& value) { SetSourceIp(value); return *this;}

    /**
     * <p>The IP address of the Amazon Web Services resource that is the source of the
     * path.</p>
     */
    inline NetworkInsightsPath& WithSourceIp(Aws::String&& value) { SetSourceIp(std::move(value)); return *this;}

    /**
     * <p>The IP address of the Amazon Web Services resource that is the source of the
     * path.</p>
     */
    inline NetworkInsightsPath& WithSourceIp(const char* value) { SetSourceIp(value); return *this;}


    /**
     * <p>The IP address of the Amazon Web Services resource that is the destination of
     * the path.</p>
     */
    inline const Aws::String& GetDestinationIp() const{ return m_destinationIp; }

    /**
     * <p>The IP address of the Amazon Web Services resource that is the destination of
     * the path.</p>
     */
    inline bool DestinationIpHasBeenSet() const { return m_destinationIpHasBeenSet; }

    /**
     * <p>The IP address of the Amazon Web Services resource that is the destination of
     * the path.</p>
     */
    inline void SetDestinationIp(const Aws::String& value) { m_destinationIpHasBeenSet = true; m_destinationIp = value; }

    /**
     * <p>The IP address of the Amazon Web Services resource that is the destination of
     * the path.</p>
     */
    inline void SetDestinationIp(Aws::String&& value) { m_destinationIpHasBeenSet = true; m_destinationIp = std::move(value); }

    /**
     * <p>The IP address of the Amazon Web Services resource that is the destination of
     * the path.</p>
     */
    inline void SetDestinationIp(const char* value) { m_destinationIpHasBeenSet = true; m_destinationIp.assign(value); }

    /**
     * <p>The IP address of the Amazon Web Services resource that is the destination of
     * the path.</p>
     */
    inline NetworkInsightsPath& WithDestinationIp(const Aws::String& value) { SetDestinationIp(value); return *this;}

    /**
     * <p>The IP address of the Amazon Web Services resource that is the destination of
     * the path.</p>
     */
    inline NetworkInsightsPath& WithDestinationIp(Aws::String&& value) { SetDestinationIp(std::move(value)); return *this;}

    /**
     * <p>The IP address of the Amazon Web Services resource that is the destination of
     * the path.</p>
     */
    inline NetworkInsightsPath& WithDestinationIp(const char* value) { SetDestinationIp(value); return *this;}


    /**
     * <p>The protocol.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol.</p>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol.</p>
     */
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol.</p>
     */
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol.</p>
     */
    inline NetworkInsightsPath& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol.</p>
     */
    inline NetworkInsightsPath& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}


    /**
     * <p>The destination port.</p>
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }

    /**
     * <p>The destination port.</p>
     */
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }

    /**
     * <p>The destination port.</p>
     */
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }

    /**
     * <p>The destination port.</p>
     */
    inline NetworkInsightsPath& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}


    /**
     * <p>The tags associated with the path.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags associated with the path.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags associated with the path.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags associated with the path.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags associated with the path.</p>
     */
    inline NetworkInsightsPath& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags associated with the path.</p>
     */
    inline NetworkInsightsPath& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags associated with the path.</p>
     */
    inline NetworkInsightsPath& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags associated with the path.</p>
     */
    inline NetworkInsightsPath& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_networkInsightsPathId;
    bool m_networkInsightsPathIdHasBeenSet = false;

    Aws::String m_networkInsightsPathArn;
    bool m_networkInsightsPathArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_destinationArn;
    bool m_destinationArnHasBeenSet = false;

    Aws::String m_sourceIp;
    bool m_sourceIpHasBeenSet = false;

    Aws::String m_destinationIp;
    bool m_destinationIpHasBeenSet = false;

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_destinationPort;
    bool m_destinationPortHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
