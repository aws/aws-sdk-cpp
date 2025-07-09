/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CapacityBlock.h>
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
  class DescribeCapacityBlocksResponse
  {
  public:
    AWS_EC2_API DescribeCapacityBlocksResponse() = default;
    AWS_EC2_API DescribeCapacityBlocksResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeCapacityBlocksResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Capacity Blocks.</p>
     */
    inline const Aws::Vector<CapacityBlock>& GetCapacityBlocks() const { return m_capacityBlocks; }
    template<typename CapacityBlocksT = Aws::Vector<CapacityBlock>>
    void SetCapacityBlocks(CapacityBlocksT&& value) { m_capacityBlocksHasBeenSet = true; m_capacityBlocks = std::forward<CapacityBlocksT>(value); }
    template<typename CapacityBlocksT = Aws::Vector<CapacityBlock>>
    DescribeCapacityBlocksResponse& WithCapacityBlocks(CapacityBlocksT&& value) { SetCapacityBlocks(std::forward<CapacityBlocksT>(value)); return *this;}
    template<typename CapacityBlocksT = CapacityBlock>
    DescribeCapacityBlocksResponse& AddCapacityBlocks(CapacityBlocksT&& value) { m_capacityBlocksHasBeenSet = true; m_capacityBlocks.emplace_back(std::forward<CapacityBlocksT>(value)); return *this; }
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
    DescribeCapacityBlocksResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCapacityBlocksResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CapacityBlock> m_capacityBlocks;
    bool m_capacityBlocksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
