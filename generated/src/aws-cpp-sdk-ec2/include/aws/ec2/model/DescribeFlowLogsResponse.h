/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/FlowLog.h>
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
  class DescribeFlowLogsResponse
  {
  public:
    AWS_EC2_API DescribeFlowLogsResponse() = default;
    AWS_EC2_API DescribeFlowLogsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeFlowLogsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the flow logs.</p>
     */
    inline const Aws::Vector<FlowLog>& GetFlowLogs() const { return m_flowLogs; }
    template<typename FlowLogsT = Aws::Vector<FlowLog>>
    void SetFlowLogs(FlowLogsT&& value) { m_flowLogsHasBeenSet = true; m_flowLogs = std::forward<FlowLogsT>(value); }
    template<typename FlowLogsT = Aws::Vector<FlowLog>>
    DescribeFlowLogsResponse& WithFlowLogs(FlowLogsT&& value) { SetFlowLogs(std::forward<FlowLogsT>(value)); return *this;}
    template<typename FlowLogsT = FlowLog>
    DescribeFlowLogsResponse& AddFlowLogs(FlowLogsT&& value) { m_flowLogsHasBeenSet = true; m_flowLogs.emplace_back(std::forward<FlowLogsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to request the next page of items. This value is <code>null</code>
     * when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFlowLogsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeFlowLogsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FlowLog> m_flowLogs;
    bool m_flowLogsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
