/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Protocol.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/PathRequestFilter.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class CreateNetworkInsightsPathRequest : public EC2Request
  {
  public:
    AWS_EC2_API CreateNetworkInsightsPathRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateNetworkInsightsPath"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The IP address of the source.</p>
     */
    inline const Aws::String& GetSourceIp() const { return m_sourceIp; }
    inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }
    template<typename SourceIpT = Aws::String>
    void SetSourceIp(SourceIpT&& value) { m_sourceIpHasBeenSet = true; m_sourceIp = std::forward<SourceIpT>(value); }
    template<typename SourceIpT = Aws::String>
    CreateNetworkInsightsPathRequest& WithSourceIp(SourceIpT&& value) { SetSourceIp(std::forward<SourceIpT>(value)); return *this;}
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
    CreateNetworkInsightsPathRequest& WithDestinationIp(DestinationIpT&& value) { SetDestinationIp(std::forward<DestinationIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the source. If the resource is in another account, you must
     * specify an ARN.</p>
     */
    inline const Aws::String& GetSource() const { return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    template<typename SourceT = Aws::String>
    void SetSource(SourceT&& value) { m_sourceHasBeenSet = true; m_source = std::forward<SourceT>(value); }
    template<typename SourceT = Aws::String>
    CreateNetworkInsightsPathRequest& WithSource(SourceT&& value) { SetSource(std::forward<SourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the destination. If the resource is in another account, you
     * must specify an ARN.</p>
     */
    inline const Aws::String& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::String>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::String>
    CreateNetworkInsightsPathRequest& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol.</p>
     */
    inline Protocol GetProtocol() const { return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(Protocol value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline CreateNetworkInsightsPathRequest& WithProtocol(Protocol value) { SetProtocol(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port.</p>
     */
    inline int GetDestinationPort() const { return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }
    inline CreateNetworkInsightsPathRequest& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add to the path.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const { return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    void SetTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::forward<TagSpecificationsT>(value); }
    template<typename TagSpecificationsT = Aws::Vector<TagSpecification>>
    CreateNetworkInsightsPathRequest& WithTagSpecifications(TagSpecificationsT&& value) { SetTagSpecifications(std::forward<TagSpecificationsT>(value)); return *this;}
    template<typename TagSpecificationsT = TagSpecification>
    CreateNetworkInsightsPathRequest& AddTagSpecifications(TagSpecificationsT&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.emplace_back(std::forward<TagSpecificationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline CreateNetworkInsightsPathRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">How
     * to ensure idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateNetworkInsightsPathRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Scopes the analysis to network paths that match specific filters at the
     * source. If you specify this parameter, you can't specify the parameters for the
     * source IP address or the destination port.</p>
     */
    inline const PathRequestFilter& GetFilterAtSource() const { return m_filterAtSource; }
    inline bool FilterAtSourceHasBeenSet() const { return m_filterAtSourceHasBeenSet; }
    template<typename FilterAtSourceT = PathRequestFilter>
    void SetFilterAtSource(FilterAtSourceT&& value) { m_filterAtSourceHasBeenSet = true; m_filterAtSource = std::forward<FilterAtSourceT>(value); }
    template<typename FilterAtSourceT = PathRequestFilter>
    CreateNetworkInsightsPathRequest& WithFilterAtSource(FilterAtSourceT&& value) { SetFilterAtSource(std::forward<FilterAtSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Scopes the analysis to network paths that match specific filters at the
     * destination. If you specify this parameter, you can't specify the parameter for
     * the destination IP address.</p>
     */
    inline const PathRequestFilter& GetFilterAtDestination() const { return m_filterAtDestination; }
    inline bool FilterAtDestinationHasBeenSet() const { return m_filterAtDestinationHasBeenSet; }
    template<typename FilterAtDestinationT = PathRequestFilter>
    void SetFilterAtDestination(FilterAtDestinationT&& value) { m_filterAtDestinationHasBeenSet = true; m_filterAtDestination = std::forward<FilterAtDestinationT>(value); }
    template<typename FilterAtDestinationT = PathRequestFilter>
    CreateNetworkInsightsPathRequest& WithFilterAtDestination(FilterAtDestinationT&& value) { SetFilterAtDestination(std::forward<FilterAtDestinationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceIp;
    bool m_sourceIpHasBeenSet = false;

    Aws::String m_destinationIp;
    bool m_destinationIpHasBeenSet = false;

    Aws::String m_source;
    bool m_sourceHasBeenSet = false;

    Aws::String m_destination;
    bool m_destinationHasBeenSet = false;

    Protocol m_protocol{Protocol::NOT_SET};
    bool m_protocolHasBeenSet = false;

    int m_destinationPort{0};
    bool m_destinationPortHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    PathRequestFilter m_filterAtSource;
    bool m_filterAtSourceHasBeenSet = false;

    PathRequestFilter m_filterAtDestination;
    bool m_filterAtDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
