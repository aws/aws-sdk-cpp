/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TransitGatewayMulticastRegisteredGroupMembers.h>
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
  class AWS_EC2_API RegisterTransitGatewayMulticastGroupMembersResponse
  {
  public:
    RegisterTransitGatewayMulticastGroupMembersResponse();
    RegisterTransitGatewayMulticastGroupMembersResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    RegisterTransitGatewayMulticastGroupMembersResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the registered transit gateway multicast group members.</p>
     */
    inline const TransitGatewayMulticastRegisteredGroupMembers& GetRegisteredMulticastGroupMembers() const{ return m_registeredMulticastGroupMembers; }

    /**
     * <p>Information about the registered transit gateway multicast group members.</p>
     */
    inline void SetRegisteredMulticastGroupMembers(const TransitGatewayMulticastRegisteredGroupMembers& value) { m_registeredMulticastGroupMembers = value; }

    /**
     * <p>Information about the registered transit gateway multicast group members.</p>
     */
    inline void SetRegisteredMulticastGroupMembers(TransitGatewayMulticastRegisteredGroupMembers&& value) { m_registeredMulticastGroupMembers = std::move(value); }

    /**
     * <p>Information about the registered transit gateway multicast group members.</p>
     */
    inline RegisterTransitGatewayMulticastGroupMembersResponse& WithRegisteredMulticastGroupMembers(const TransitGatewayMulticastRegisteredGroupMembers& value) { SetRegisteredMulticastGroupMembers(value); return *this;}

    /**
     * <p>Information about the registered transit gateway multicast group members.</p>
     */
    inline RegisterTransitGatewayMulticastGroupMembersResponse& WithRegisteredMulticastGroupMembers(TransitGatewayMulticastRegisteredGroupMembers&& value) { SetRegisteredMulticastGroupMembers(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RegisterTransitGatewayMulticastGroupMembersResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RegisterTransitGatewayMulticastGroupMembersResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    TransitGatewayMulticastRegisteredGroupMembers m_registeredMulticastGroupMembers;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
