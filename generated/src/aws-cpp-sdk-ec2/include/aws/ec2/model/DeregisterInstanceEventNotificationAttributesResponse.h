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
  class DeregisterInstanceEventNotificationAttributesResponse
  {
  public:
    AWS_EC2_API DeregisterInstanceEventNotificationAttributesResponse();
    AWS_EC2_API DeregisterInstanceEventNotificationAttributesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeregisterInstanceEventNotificationAttributesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The resulting set of tag keys.</p>
     */
    inline const InstanceTagNotificationAttribute& GetInstanceTagAttribute() const{ return m_instanceTagAttribute; }

    /**
     * <p>The resulting set of tag keys.</p>
     */
    inline void SetInstanceTagAttribute(const InstanceTagNotificationAttribute& value) { m_instanceTagAttribute = value; }

    /**
     * <p>The resulting set of tag keys.</p>
     */
    inline void SetInstanceTagAttribute(InstanceTagNotificationAttribute&& value) { m_instanceTagAttribute = std::move(value); }

    /**
     * <p>The resulting set of tag keys.</p>
     */
    inline DeregisterInstanceEventNotificationAttributesResponse& WithInstanceTagAttribute(const InstanceTagNotificationAttribute& value) { SetInstanceTagAttribute(value); return *this;}

    /**
     * <p>The resulting set of tag keys.</p>
     */
    inline DeregisterInstanceEventNotificationAttributesResponse& WithInstanceTagAttribute(InstanceTagNotificationAttribute&& value) { SetInstanceTagAttribute(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeregisterInstanceEventNotificationAttributesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeregisterInstanceEventNotificationAttributesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    InstanceTagNotificationAttribute m_instanceTagAttribute;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
