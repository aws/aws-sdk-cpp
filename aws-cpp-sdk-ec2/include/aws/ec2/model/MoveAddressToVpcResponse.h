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
  /**
   * <p>Contains the output of MoveAddressToVpc.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/MoveAddressToVpcResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API MoveAddressToVpcResponse
  {
  public:
    MoveAddressToVpcResponse();
    MoveAddressToVpcResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    MoveAddressToVpcResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
