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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AssociationStatus.h>
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
  class AWS_EC2_API AssociateClientVpnTargetNetworkResponse
  {
  public:
    AssociateClientVpnTargetNetworkResponse();
    AssociateClientVpnTargetNetworkResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AssociateClientVpnTargetNetworkResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The unique ID of the target network association.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The unique ID of the target network association.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationId = value; }

    /**
     * <p>The unique ID of the target network association.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationId = std::move(value); }

    /**
     * <p>The unique ID of the target network association.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationId.assign(value); }

    /**
     * <p>The unique ID of the target network association.</p>
     */
    inline AssociateClientVpnTargetNetworkResponse& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The unique ID of the target network association.</p>
     */
    inline AssociateClientVpnTargetNetworkResponse& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the target network association.</p>
     */
    inline AssociateClientVpnTargetNetworkResponse& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The current state of the target network association.</p>
     */
    inline const AssociationStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The current state of the target network association.</p>
     */
    inline void SetStatus(const AssociationStatus& value) { m_status = value; }

    /**
     * <p>The current state of the target network association.</p>
     */
    inline void SetStatus(AssociationStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The current state of the target network association.</p>
     */
    inline AssociateClientVpnTargetNetworkResponse& WithStatus(const AssociationStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The current state of the target network association.</p>
     */
    inline AssociateClientVpnTargetNetworkResponse& WithStatus(AssociationStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AssociateClientVpnTargetNetworkResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssociateClientVpnTargetNetworkResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_associationId;

    AssociationStatus m_status;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
