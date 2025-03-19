/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/UnsuccessfulItem.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  class CreateFlowLogsResponse
  {
  public:
    AWS_EC2_API CreateFlowLogsResponse() = default;
    AWS_EC2_API CreateFlowLogsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateFlowLogsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateFlowLogsResponse& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the flow logs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFlowLogIds() const { return m_flowLogIds; }
    template<typename FlowLogIdsT = Aws::Vector<Aws::String>>
    void SetFlowLogIds(FlowLogIdsT&& value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds = std::forward<FlowLogIdsT>(value); }
    template<typename FlowLogIdsT = Aws::Vector<Aws::String>>
    CreateFlowLogsResponse& WithFlowLogIds(FlowLogIdsT&& value) { SetFlowLogIds(std::forward<FlowLogIdsT>(value)); return *this;}
    template<typename FlowLogIdsT = Aws::String>
    CreateFlowLogsResponse& AddFlowLogIds(FlowLogIdsT&& value) { m_flowLogIdsHasBeenSet = true; m_flowLogIds.emplace_back(std::forward<FlowLogIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Information about the flow logs that could not be created successfully.</p>
     */
    inline const Aws::Vector<UnsuccessfulItem>& GetUnsuccessful() const { return m_unsuccessful; }
    template<typename UnsuccessfulT = Aws::Vector<UnsuccessfulItem>>
    void SetUnsuccessful(UnsuccessfulT&& value) { m_unsuccessfulHasBeenSet = true; m_unsuccessful = std::forward<UnsuccessfulT>(value); }
    template<typename UnsuccessfulT = Aws::Vector<UnsuccessfulItem>>
    CreateFlowLogsResponse& WithUnsuccessful(UnsuccessfulT&& value) { SetUnsuccessful(std::forward<UnsuccessfulT>(value)); return *this;}
    template<typename UnsuccessfulT = UnsuccessfulItem>
    CreateFlowLogsResponse& AddUnsuccessful(UnsuccessfulT&& value) { m_unsuccessfulHasBeenSet = true; m_unsuccessful.emplace_back(std::forward<UnsuccessfulT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    CreateFlowLogsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_flowLogIds;
    bool m_flowLogIdsHasBeenSet = false;

    Aws::Vector<UnsuccessfulItem> m_unsuccessful;
    bool m_unsuccessfulHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
