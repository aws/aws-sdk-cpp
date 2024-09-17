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
#include <aws/ec2/model/PathFilter.h>
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


    ///@{
    /**
     * <p>The ID of the path.</p>
     */
    inline const Aws::String& GetNetworkInsightsPathId() const{ return m_networkInsightsPathId; }
    inline bool NetworkInsightsPathIdHasBeenSet() const { return m_networkInsightsPathIdHasBeenSet; }
    inline void SetNetworkInsightsPathId(const Aws::String& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = value; }
    inline void SetNetworkInsightsPathId(Aws::String&& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = std::move(value); }
    inline void SetNetworkInsightsPathId(const char* value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId.assign(value); }
    inline NetworkInsightsPath& WithNetworkInsightsPathId(const Aws::String& value) { SetNetworkInsightsPathId(value); return *this;}
    inline NetworkInsightsPath& WithNetworkInsightsPathId(Aws::String&& value) { SetNetworkInsightsPathId(std::move(value)); return *this;}
    inline NetworkInsightsPath& WithNetworkInsightsPathId(const char* value) { SetNetworkInsightsPathId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the path.</p>
     */
    inline const Aws::String& GetNetworkInsightsPathArn() const{ return m_networkInsightsPathArn; }
    inline bool NetworkInsightsPathArnHasBeenSet() const { return m_networkInsightsPathArnHasBeenSet; }
    inline void SetNetworkInsightsPathArn(const Aws::String& value) { m_networkInsightsPathArnHasBeenSet = true; m_networkInsightsPathArn = value; }
    inline void SetNetworkInsightsPathArn(Aws::String&& value) { m_networkInsightsPathArnHasBeenSet = true; m_networkInsightsPathArn = std::move(value); }
    inline void SetNetworkInsightsPathArn(const char* value) { m_networkInsightsPathArnHasBeenSet = true; m_networkInsightsPathArn.assign(value); }
    inline NetworkInsightsPath& WithNetworkInsightsPathArn(const Aws::String& value) { SetNetworkInsightsPathArn(value); return *this;}
    inline NetworkInsightsPath& WithNetworkInsightsPathArn(Aws::String&& value) { SetNetworkInsightsPathArn(std::move(value)); return *this;}
    inline NetworkInsightsPath& WithNetworkInsightsPathArn(const char* value) { SetNetworkInsightsPathArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the path was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline NetworkInsightsPath& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline NetworkInsightsPath& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the source.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline NetworkInsightsPath& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline NetworkInsightsPath& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline NetworkInsightsPath& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the destination.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline NetworkInsightsPath& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline NetworkInsightsPath& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline NetworkInsightsPath& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source.</p>
     */
    inline const Aws::String& GetSourceArn() const{ return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    inline void SetSourceArn(const Aws::String& value) { m_sourceArnHasBeenSet = true; m_sourceArn = value; }
    inline void SetSourceArn(Aws::String&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::move(value); }
    inline void SetSourceArn(const char* value) { m_sourceArnHasBeenSet = true; m_sourceArn.assign(value); }
    inline NetworkInsightsPath& WithSourceArn(const Aws::String& value) { SetSourceArn(value); return *this;}
    inline NetworkInsightsPath& WithSourceArn(Aws::String&& value) { SetSourceArn(std::move(value)); return *this;}
    inline NetworkInsightsPath& WithSourceArn(const char* value) { SetSourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline const Aws::String& GetDestinationArn() const{ return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    inline void SetDestinationArn(const Aws::String& value) { m_destinationArnHasBeenSet = true; m_destinationArn = value; }
    inline void SetDestinationArn(Aws::String&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::move(value); }
    inline void SetDestinationArn(const char* value) { m_destinationArnHasBeenSet = true; m_destinationArn.assign(value); }
    inline NetworkInsightsPath& WithDestinationArn(const Aws::String& value) { SetDestinationArn(value); return *this;}
    inline NetworkInsightsPath& WithDestinationArn(Aws::String&& value) { SetDestinationArn(std::move(value)); return *this;}
    inline NetworkInsightsPath& WithDestinationArn(const char* value) { SetDestinationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the source.</p>
     */
    inline const Aws::String& GetSourceIp() const{ return m_sourceIp; }
    inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }
    inline void SetSourceIp(const Aws::String& value) { m_sourceIpHasBeenSet = true; m_sourceIp = value; }
    inline void SetSourceIp(Aws::String&& value) { m_sourceIpHasBeenSet = true; m_sourceIp = std::move(value); }
    inline void SetSourceIp(const char* value) { m_sourceIpHasBeenSet = true; m_sourceIp.assign(value); }
    inline NetworkInsightsPath& WithSourceIp(const Aws::String& value) { SetSourceIp(value); return *this;}
    inline NetworkInsightsPath& WithSourceIp(Aws::String&& value) { SetSourceIp(std::move(value)); return *this;}
    inline NetworkInsightsPath& WithSourceIp(const char* value) { SetSourceIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the destination.</p>
     */
    inline const Aws::String& GetDestinationIp() const{ return m_destinationIp; }
    inline bool DestinationIpHasBeenSet() const { return m_destinationIpHasBeenSet; }
    inline void SetDestinationIp(const Aws::String& value) { m_destinationIpHasBeenSet = true; m_destinationIp = value; }
    inline void SetDestinationIp(Aws::String&& value) { m_destinationIpHasBeenSet = true; m_destinationIp = std::move(value); }
    inline void SetDestinationIp(const char* value) { m_destinationIpHasBeenSet = true; m_destinationIp.assign(value); }
    inline NetworkInsightsPath& WithDestinationIp(const Aws::String& value) { SetDestinationIp(value); return *this;}
    inline NetworkInsightsPath& WithDestinationIp(Aws::String&& value) { SetDestinationIp(std::move(value)); return *this;}
    inline NetworkInsightsPath& WithDestinationIp(const char* value) { SetDestinationIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline NetworkInsightsPath& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline NetworkInsightsPath& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port.</p>
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }
    inline NetworkInsightsPath& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the path.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline NetworkInsightsPath& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline NetworkInsightsPath& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline NetworkInsightsPath& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline NetworkInsightsPath& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Scopes the analysis to network paths that match specific filters at the
     * source.</p>
     */
    inline const PathFilter& GetFilterAtSource() const{ return m_filterAtSource; }
    inline bool FilterAtSourceHasBeenSet() const { return m_filterAtSourceHasBeenSet; }
    inline void SetFilterAtSource(const PathFilter& value) { m_filterAtSourceHasBeenSet = true; m_filterAtSource = value; }
    inline void SetFilterAtSource(PathFilter&& value) { m_filterAtSourceHasBeenSet = true; m_filterAtSource = std::move(value); }
    inline NetworkInsightsPath& WithFilterAtSource(const PathFilter& value) { SetFilterAtSource(value); return *this;}
    inline NetworkInsightsPath& WithFilterAtSource(PathFilter&& value) { SetFilterAtSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Scopes the analysis to network paths that match specific filters at the
     * destination.</p>
     */
    inline const PathFilter& GetFilterAtDestination() const{ return m_filterAtDestination; }
    inline bool FilterAtDestinationHasBeenSet() const { return m_filterAtDestinationHasBeenSet; }
    inline void SetFilterAtDestination(const PathFilter& value) { m_filterAtDestinationHasBeenSet = true; m_filterAtDestination = value; }
    inline void SetFilterAtDestination(PathFilter&& value) { m_filterAtDestinationHasBeenSet = true; m_filterAtDestination = std::move(value); }
    inline NetworkInsightsPath& WithFilterAtDestination(const PathFilter& value) { SetFilterAtDestination(value); return *this;}
    inline NetworkInsightsPath& WithFilterAtDestination(PathFilter&& value) { SetFilterAtDestination(std::move(value)); return *this;}
    ///@}
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

    PathFilter m_filterAtSource;
    bool m_filterAtSourceHasBeenSet = false;

    PathFilter m_filterAtDestination;
    bool m_filterAtDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
