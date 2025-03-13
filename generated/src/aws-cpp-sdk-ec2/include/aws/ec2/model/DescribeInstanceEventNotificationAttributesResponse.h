/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/InstanceTagNotificationAttribute.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class DescribeInstanceEventNotificationAttributesResponse
  {
  public:
    AWS_EC2_API DescribeInstanceEventNotificationAttributesResponse() = default;
    AWS_EC2_API DescribeInstanceEventNotificationAttributesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeInstanceEventNotificationAttributesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the registered tag keys.</p>
     */
    inline const InstanceTagNotificationAttribute& GetInstanceTagAttribute() const { return m_instanceTagAttribute; }
    template<typename InstanceTagAttributeT = InstanceTagNotificationAttribute>
    void SetInstanceTagAttribute(InstanceTagAttributeT&& value) { m_instanceTagAttributeHasBeenSet = true; m_instanceTagAttribute = std::forward<InstanceTagAttributeT>(value); }
    template<typename InstanceTagAttributeT = InstanceTagNotificationAttribute>
    DescribeInstanceEventNotificationAttributesResponse& WithInstanceTagAttribute(InstanceTagAttributeT&& value) { SetInstanceTagAttribute(std::forward<InstanceTagAttributeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeInstanceEventNotificationAttributesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    InstanceTagNotificationAttribute m_instanceTagAttribute;
    bool m_instanceTagAttributeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
