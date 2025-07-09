/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/CapacityBlockStatus.h>
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
  class DescribeCapacityBlockStatusResponse
  {
  public:
    AWS_EC2_API DescribeCapacityBlockStatusResponse() = default;
    AWS_EC2_API DescribeCapacityBlockStatusResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeCapacityBlockStatusResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The availability of capacity for a Capacity Block.</p>
     */
    inline const Aws::Vector<CapacityBlockStatus>& GetCapacityBlockStatuses() const { return m_capacityBlockStatuses; }
    template<typename CapacityBlockStatusesT = Aws::Vector<CapacityBlockStatus>>
    void SetCapacityBlockStatuses(CapacityBlockStatusesT&& value) { m_capacityBlockStatusesHasBeenSet = true; m_capacityBlockStatuses = std::forward<CapacityBlockStatusesT>(value); }
    template<typename CapacityBlockStatusesT = Aws::Vector<CapacityBlockStatus>>
    DescribeCapacityBlockStatusResponse& WithCapacityBlockStatuses(CapacityBlockStatusesT&& value) { SetCapacityBlockStatuses(std::forward<CapacityBlockStatusesT>(value)); return *this;}
    template<typename CapacityBlockStatusesT = CapacityBlockStatus>
    DescribeCapacityBlockStatusResponse& AddCapacityBlockStatuses(CapacityBlockStatusesT&& value) { m_capacityBlockStatusesHasBeenSet = true; m_capacityBlockStatuses.emplace_back(std::forward<CapacityBlockStatusesT>(value)); return *this; }
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
    DescribeCapacityBlockStatusResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeCapacityBlockStatusResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<CapacityBlockStatus> m_capacityBlockStatuses;
    bool m_capacityBlockStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
