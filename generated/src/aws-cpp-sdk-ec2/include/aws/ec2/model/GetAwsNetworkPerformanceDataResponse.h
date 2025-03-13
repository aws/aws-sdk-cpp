/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/DataResponse.h>
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
  class GetAwsNetworkPerformanceDataResponse
  {
  public:
    AWS_EC2_API GetAwsNetworkPerformanceDataResponse() = default;
    AWS_EC2_API GetAwsNetworkPerformanceDataResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API GetAwsNetworkPerformanceDataResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The list of data responses.</p>
     */
    inline const Aws::Vector<DataResponse>& GetDataResponses() const { return m_dataResponses; }
    template<typename DataResponsesT = Aws::Vector<DataResponse>>
    void SetDataResponses(DataResponsesT&& value) { m_dataResponsesHasBeenSet = true; m_dataResponses = std::forward<DataResponsesT>(value); }
    template<typename DataResponsesT = Aws::Vector<DataResponse>>
    GetAwsNetworkPerformanceDataResponse& WithDataResponses(DataResponsesT&& value) { SetDataResponses(std::forward<DataResponsesT>(value)); return *this;}
    template<typename DataResponsesT = DataResponse>
    GetAwsNetworkPerformanceDataResponse& AddDataResponses(DataResponsesT&& value) { m_dataResponsesHasBeenSet = true; m_dataResponses.emplace_back(std::forward<DataResponsesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetAwsNetworkPerformanceDataResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetAwsNetworkPerformanceDataResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DataResponse> m_dataResponses;
    bool m_dataResponsesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
