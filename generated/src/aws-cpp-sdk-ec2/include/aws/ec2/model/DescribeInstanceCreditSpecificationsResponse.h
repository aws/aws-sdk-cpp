/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceCreditSpecification.h>
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
  class DescribeInstanceCreditSpecificationsResponse
  {
  public:
    AWS_EC2_API DescribeInstanceCreditSpecificationsResponse() = default;
    AWS_EC2_API DescribeInstanceCreditSpecificationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeInstanceCreditSpecificationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the credit option for CPU usage of an instance.</p>
     */
    inline const Aws::Vector<InstanceCreditSpecification>& GetInstanceCreditSpecifications() const { return m_instanceCreditSpecifications; }
    template<typename InstanceCreditSpecificationsT = Aws::Vector<InstanceCreditSpecification>>
    void SetInstanceCreditSpecifications(InstanceCreditSpecificationsT&& value) { m_instanceCreditSpecificationsHasBeenSet = true; m_instanceCreditSpecifications = std::forward<InstanceCreditSpecificationsT>(value); }
    template<typename InstanceCreditSpecificationsT = Aws::Vector<InstanceCreditSpecification>>
    DescribeInstanceCreditSpecificationsResponse& WithInstanceCreditSpecifications(InstanceCreditSpecificationsT&& value) { SetInstanceCreditSpecifications(std::forward<InstanceCreditSpecificationsT>(value)); return *this;}
    template<typename InstanceCreditSpecificationsT = InstanceCreditSpecification>
    DescribeInstanceCreditSpecificationsResponse& AddInstanceCreditSpecifications(InstanceCreditSpecificationsT&& value) { m_instanceCreditSpecificationsHasBeenSet = true; m_instanceCreditSpecifications.emplace_back(std::forward<InstanceCreditSpecificationsT>(value)); return *this; }
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
    DescribeInstanceCreditSpecificationsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeInstanceCreditSpecificationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceCreditSpecification> m_instanceCreditSpecifications;
    bool m_instanceCreditSpecificationsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
