/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Status.h>
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
  class MoveAddressToVpcResponse
  {
  public:
    AWS_EC2_API MoveAddressToVpcResponse();
    AWS_EC2_API MoveAddressToVpcResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API MoveAddressToVpcResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The allocation ID for the Elastic IP address.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>The allocation ID for the Elastic IP address.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationId = value; }

    /**
     * <p>The allocation ID for the Elastic IP address.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationId = std::move(value); }

    /**
     * <p>The allocation ID for the Elastic IP address.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationId.assign(value); }

    /**
     * <p>The allocation ID for the Elastic IP address.</p>
     */
    inline MoveAddressToVpcResponse& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>The allocation ID for the Elastic IP address.</p>
     */
    inline MoveAddressToVpcResponse& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}

    /**
     * <p>The allocation ID for the Elastic IP address.</p>
     */
    inline MoveAddressToVpcResponse& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}


    /**
     * <p>The status of the move of the IP address.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the move of the IP address.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The status of the move of the IP address.</p>
     */
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the move of the IP address.</p>
     */
    inline MoveAddressToVpcResponse& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the move of the IP address.</p>
     */
    inline MoveAddressToVpcResponse& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline MoveAddressToVpcResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline MoveAddressToVpcResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_allocationId;

    Status m_status;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
