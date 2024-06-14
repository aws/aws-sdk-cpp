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
    AWS_EC2_API CreateNetworkInsightsPathRequest();

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
    inline const Aws::String& GetSourceIp() const{ return m_sourceIp; }
    inline bool SourceIpHasBeenSet() const { return m_sourceIpHasBeenSet; }
    inline void SetSourceIp(const Aws::String& value) { m_sourceIpHasBeenSet = true; m_sourceIp = value; }
    inline void SetSourceIp(Aws::String&& value) { m_sourceIpHasBeenSet = true; m_sourceIp = std::move(value); }
    inline void SetSourceIp(const char* value) { m_sourceIpHasBeenSet = true; m_sourceIp.assign(value); }
    inline CreateNetworkInsightsPathRequest& WithSourceIp(const Aws::String& value) { SetSourceIp(value); return *this;}
    inline CreateNetworkInsightsPathRequest& WithSourceIp(Aws::String&& value) { SetSourceIp(std::move(value)); return *this;}
    inline CreateNetworkInsightsPathRequest& WithSourceIp(const char* value) { SetSourceIp(value); return *this;}
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
    inline CreateNetworkInsightsPathRequest& WithDestinationIp(const Aws::String& value) { SetDestinationIp(value); return *this;}
    inline CreateNetworkInsightsPathRequest& WithDestinationIp(Aws::String&& value) { SetDestinationIp(std::move(value)); return *this;}
    inline CreateNetworkInsightsPathRequest& WithDestinationIp(const char* value) { SetDestinationIp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the source. If the resource is in another account, you must
     * specify an ARN.</p>
     */
    inline const Aws::String& GetSource() const{ return m_source; }
    inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
    inline void SetSource(const Aws::String& value) { m_sourceHasBeenSet = true; m_source = value; }
    inline void SetSource(Aws::String&& value) { m_sourceHasBeenSet = true; m_source = std::move(value); }
    inline void SetSource(const char* value) { m_sourceHasBeenSet = true; m_source.assign(value); }
    inline CreateNetworkInsightsPathRequest& WithSource(const Aws::String& value) { SetSource(value); return *this;}
    inline CreateNetworkInsightsPathRequest& WithSource(Aws::String&& value) { SetSource(std::move(value)); return *this;}
    inline CreateNetworkInsightsPathRequest& WithSource(const char* value) { SetSource(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID or ARN of the destination. If the resource is in another account, you
     * must specify an ARN.</p>
     */
    inline const Aws::String& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline void SetDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.assign(value); }
    inline CreateNetworkInsightsPathRequest& WithDestination(const Aws::String& value) { SetDestination(value); return *this;}
    inline CreateNetworkInsightsPathRequest& WithDestination(Aws::String&& value) { SetDestination(std::move(value)); return *this;}
    inline CreateNetworkInsightsPathRequest& WithDestination(const char* value) { SetDestination(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The protocol.</p>
     */
    inline const Protocol& GetProtocol() const{ return m_protocol; }
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }
    inline void SetProtocol(const Protocol& value) { m_protocolHasBeenSet = true; m_protocol = value; }
    inline void SetProtocol(Protocol&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }
    inline CreateNetworkInsightsPathRequest& WithProtocol(const Protocol& value) { SetProtocol(value); return *this;}
    inline CreateNetworkInsightsPathRequest& WithProtocol(Protocol&& value) { SetProtocol(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destination port.</p>
     */
    inline int GetDestinationPort() const{ return m_destinationPort; }
    inline bool DestinationPortHasBeenSet() const { return m_destinationPortHasBeenSet; }
    inline void SetDestinationPort(int value) { m_destinationPortHasBeenSet = true; m_destinationPort = value; }
    inline CreateNetworkInsightsPathRequest& WithDestinationPort(int value) { SetDestinationPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags to add to the path.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }
    inline CreateNetworkInsightsPathRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}
    inline CreateNetworkInsightsPathRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}
    inline CreateNetworkInsightsPathRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }
    inline CreateNetworkInsightsPathRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateNetworkInsightsPathRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateNetworkInsightsPathRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateNetworkInsightsPathRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Scopes the analysis to network paths that match specific filters at the
     * source. If you specify this parameter, you can't specify the parameters for the
     * source IP address or the destination port.</p>
     */
    inline const PathRequestFilter& GetFilterAtSource() const{ return m_filterAtSource; }
    inline bool FilterAtSourceHasBeenSet() const { return m_filterAtSourceHasBeenSet; }
    inline void SetFilterAtSource(const PathRequestFilter& value) { m_filterAtSourceHasBeenSet = true; m_filterAtSource = value; }
    inline void SetFilterAtSource(PathRequestFilter&& value) { m_filterAtSourceHasBeenSet = true; m_filterAtSource = std::move(value); }
    inline CreateNetworkInsightsPathRequest& WithFilterAtSource(const PathRequestFilter& value) { SetFilterAtSource(value); return *this;}
    inline CreateNetworkInsightsPathRequest& WithFilterAtSource(PathRequestFilter&& value) { SetFilterAtSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Scopes the analysis to network paths that match specific filters at the
     * destination. If you specify this parameter, you can't specify the parameter for
     * the destination IP address.</p>
     */
    inline const PathRequestFilter& GetFilterAtDestination() const{ return m_filterAtDestination; }
    inline bool FilterAtDestinationHasBeenSet() const { return m_filterAtDestinationHasBeenSet; }
    inline void SetFilterAtDestination(const PathRequestFilter& value) { m_filterAtDestinationHasBeenSet = true; m_filterAtDestination = value; }
    inline void SetFilterAtDestination(PathRequestFilter&& value) { m_filterAtDestinationHasBeenSet = true; m_filterAtDestination = std::move(value); }
    inline CreateNetworkInsightsPathRequest& WithFilterAtDestination(const PathRequestFilter& value) { SetFilterAtDestination(value); return *this;}
    inline CreateNetworkInsightsPathRequest& WithFilterAtDestination(PathRequestFilter&& value) { SetFilterAtDestination(std::move(value)); return *this;}
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

    Protocol m_protocol;
    bool m_protocolHasBeenSet = false;

    int m_destinationPort;
    bool m_destinationPortHasBeenSet = false;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    PathRequestFilter m_filterAtSource;
    bool m_filterAtSourceHasBeenSet = false;

    PathRequestFilter m_filterAtDestination;
    bool m_filterAtDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
