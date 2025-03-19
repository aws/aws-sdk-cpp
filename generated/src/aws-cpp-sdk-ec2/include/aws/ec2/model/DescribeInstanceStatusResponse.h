/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceStatus.h>
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
  class DescribeInstanceStatusResponse
  {
  public:
    AWS_EC2_API DescribeInstanceStatusResponse() = default;
    AWS_EC2_API DescribeInstanceStatusResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeInstanceStatusResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the status of the instances.</p>
     */
    inline const Aws::Vector<InstanceStatus>& GetInstanceStatuses() const { return m_instanceStatuses; }
    template<typename InstanceStatusesT = Aws::Vector<InstanceStatus>>
    void SetInstanceStatuses(InstanceStatusesT&& value) { m_instanceStatusesHasBeenSet = true; m_instanceStatuses = std::forward<InstanceStatusesT>(value); }
    template<typename InstanceStatusesT = Aws::Vector<InstanceStatus>>
    DescribeInstanceStatusResponse& WithInstanceStatuses(InstanceStatusesT&& value) { SetInstanceStatuses(std::forward<InstanceStatusesT>(value)); return *this;}
    template<typename InstanceStatusesT = InstanceStatus>
    DescribeInstanceStatusResponse& AddInstanceStatuses(InstanceStatusesT&& value) { m_instanceStatusesHasBeenSet = true; m_instanceStatuses.emplace_back(std::forward<InstanceStatusesT>(value)); return *this; }
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
    DescribeInstanceStatusResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeInstanceStatusResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceStatus> m_instanceStatuses;
    bool m_instanceStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
