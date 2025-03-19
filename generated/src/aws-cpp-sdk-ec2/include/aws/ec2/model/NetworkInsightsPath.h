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
    AWS_EC2_API NetworkInsightsPath() = default;
    AWS_EC2_API NetworkInsightsPath(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API NetworkInsightsPath& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the path.</p>
     */
    inline const Aws::String& GetNetworkInsightsPathId() const { return m_networkInsightsPathId; }
    inline bool NetworkInsightsPathIdHasBeenSet() const { return m_networkInsightsPathIdHasBeenSet; }
    template<typename NetworkInsightsPathIdT = Aws::String>
    void SetNetworkInsightsPathId(NetworkInsightsPathIdT&& value) { m_networkInsightsPathIdHasBeenSet = true; m_networkInsightsPathId = std::forward<NetworkInsightsPathIdT>(value); }
    template<typename NetworkInsightsPathIdT = Aws::String>
    NetworkInsightsPath& WithNetworkInsightsPathId(NetworkInsightsPathIdT&& value) { SetNetworkInsightsPathId(std::forward<NetworkInsightsPathIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the path.</p>
     */
    inline const Aws::String& GetNetworkInsightsPathArn() const { return m_networkInsightsPathArn; }
    inline bool NetworkInsightsPathArnHasBeenSet() const { return m_networkInsightsPathArnHasBeenSet; }
    template<typename NetworkInsightsPathArnT = Aws::String>
    void SetNetworkInsightsPathArn(NetworkInsightsPathArnT&& value) { m_networkInsightsPathArnHasBeenSet = true; m_networkInsightsPathArn = std::forward<NetworkInsightsPathArnT>(value); }
    template<typename NetworkInsightsPathArnT = Aws::String>
    NetworkInsightsPath& WithNetworkInsightsPathArn(NetworkInsightsPathArnT&& value) { SetNetworkInsightsPathArn(std::forward<NetworkInsightsPathArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time stamp when the path was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    NetworkInsightsPath& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the source.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    NetworkInsightsPath& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the destination.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    NetworkInsightsPath& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the source.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    NetworkInsightsPath& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the destination.</p>
     */
    inline const Aws::String& GetDestinationArn() const { return m_destinationArn; }
    inline bool DestinationArnHasBeenSet() const { return m_destinationArnHasBeenSet; }
    template<typename DestinationArnT = Aws::String>
    void SetDestinationArn(DestinationArnT&& value) { m_destinationArnHasBeenSet = true; m_destinationArn = std::forward<DestinationArnT>(value); }
    template<typename DestinationArnT = Aws::String>
    NetworkInsightsPath& WithDestinationArn(DestinationArnT&& value) { SetDestinationArn(std::forward<DestinationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the source.</p>
     */
    inline const Aws::String& GetSourceIp() const { return m_sourceIp; }
    inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }
    template<typename SourceIpT = Aws::String>
    void SetSourceIp(SourceIpT&& value) { m_sourceIpHasBeenSet = true; m_sourceIp = std::forward<SourceIpT>(value); }
    template<typename SourceIpT = Aws::String>
    NetworkInsightsPath& WithSourceIp(SourceIpT&& value) { SetSourceIp(std::forward<SourceIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address of the destination.</p>
     */
    inline const Aws::String& GetDestinationIp() const { return m_destinationIp; }
    inline bool DestinationIpHasBeenSet() const { return m_destinationIpHasBeenSet; }
    template<typename DestinationIpT = Aws::String>
    void SetDestinationIp(DestinationIpT&& value) { m_destinationIpHasBeenSet = true; m_destinationIp = std::forward<DestinationIpT>(value); }
    template<typename DestinationIpT = Aws::String>
    NetworkInsightsPath& WithDestinationIp(DestinationIpT&& value) { SetDestinationIp(std::forward<DestinationIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol.</p>
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline NetworkInsightsPath& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port.</p>
     */
    inline int GetDestinationPort() const { return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }
    inline NetworkInsightsPath& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags associated with the path.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    NetworkInsightsPath& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    NetworkInsightsPath& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Scopes the analysis to network paths that match specific filters at the
     * source.</p>
     */
    inline const PathFilter& GetFilterAtSource() const { return m_filterAtSource; }
    inline bool FilterAtSourceHasBeenSet() const { return m_filterAtSourceHasBeenSet; }
    template<typename FilterAtSourceT = PathFilter>
    void SetFilterAtSource(FilterAtSourceT&& value) { m_filterAtSourceHasBeenSet = true; m_filterAtSource = std::forward<FilterAtSourceT>(value); }
    template<typename FilterAtSourceT = PathFilter>
    NetworkInsightsPath& WithFilterAtSource(FilterAtSourceT&& value) { SetFilterAtSource(std::forward<FilterAtSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Scopes the analysis to network paths that match specific filters at the
     * destination.</p>
     */
    inline const PathFilter& GetFilterAtDestination() const { return m_filterAtDestination; }
    inline bool FilterAtDestinationHasBeenSet() const { return m_filterAtDestinationHasBeenSet; }
    template<typename FilterAtDestinationT = PathFilter>
    void SetFilterAtDestination(FilterAtDestinationT&& value) { m_filterAtDestinationHasBeenSet = true; m_filterAtDestination = std::forward<FilterAtDestinationT>(value); }
    template<typename FilterAtDestinationT = PathFilter>
    NetworkInsightsPath& WithFilterAtDestination(FilterAtDestinationT&& value) { SetFilterAtDestination(std::forward<FilterAtDestinationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_networkInsightsPathId;
    bool m_networkInsightsPathIdHasBeenSet = false;

    Aws::String m_networkInsightsPathArn;
    bool m_networkInsightsPathArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
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

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    int m_destinationPort{0};
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
