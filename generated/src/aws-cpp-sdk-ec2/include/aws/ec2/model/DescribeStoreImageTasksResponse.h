/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/StoreImageTaskResponse.h>
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
  class DescribeStoreImageTasksResponse
  {
  public:
    AWS_EC2_API DescribeStoreImageTasksResponse() = default;
    AWS_EC2_API DescribeStoreImageTasksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeStoreImageTasksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The information about the AMI store tasks.</p>
     */
    inline const Aws::Vector<StoreImageTaskResponse>& GetStoreImageTaskResults() const { return m_storeImageTaskResults; }
    template<typename StoreImageTaskResultsT = Aws::Vector<StoreImageTaskResponse>>
    void SetStoreImageTaskResults(StoreImageTaskResultsT&& value) { m_storeImageTaskResultsHasBeenSet = true; m_storeImageTaskResults = std::forward<StoreImageTaskResultsT>(value); }
    template<typename StoreImageTaskResultsT = Aws::Vector<StoreImageTaskResponse>>
    DescribeStoreImageTasksResponse& WithStoreImageTaskResults(StoreImageTaskResultsT&& value) { SetStoreImageTaskResults(std::forward<StoreImageTaskResultsT>(value)); return *this;}
    template<typename StoreImageTaskResultsT = StoreImageTaskResponse>
    DescribeStoreImageTasksResponse& AddStoreImageTaskResults(StoreImageTaskResultsT&& value) { m_storeImageTaskResultsHasBeenSet = true; m_storeImageTaskResults.emplace_back(std::forward<StoreImageTaskResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeStoreImageTasksResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeStoreImageTasksResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<StoreImageTaskResponse> m_storeImageTaskResults;
    bool m_storeImageTaskResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
