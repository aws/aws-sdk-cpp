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
#include <aws/ec2/model/DomainType.h>
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
   * <p>Contains the output of AllocateAddress.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/AllocateAddressResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API AllocateAddressResponse
  {
  public:
    AllocateAddressResponse();
    AllocateAddressResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AllocateAddressResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The Elastic IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIp = value; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIp = std::move(value); }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIp.assign(value); }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline AllocateAddressResponse& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline AllocateAddressResponse& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline AllocateAddressResponse& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}


    /**
     * <p>[EC2-VPC] The ID that AWS assigns to represent the allocation of the Elastic
     * IP address for use with instances in a VPC.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>[EC2-VPC] The ID that AWS assigns to represent the allocation of the Elastic
     * IP address for use with instances in a VPC.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationId = value; }

    /**
     * <p>[EC2-VPC] The ID that AWS assigns to represent the allocation of the Elastic
     * IP address for use with instances in a VPC.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationId = std::move(value); }

    /**
     * <p>[EC2-VPC] The ID that AWS assigns to represent the allocation of the Elastic
     * IP address for use with instances in a VPC.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationId.assign(value); }

    /**
     * <p>[EC2-VPC] The ID that AWS assigns to represent the allocation of the Elastic
     * IP address for use with instances in a VPC.</p>
     */
    inline AllocateAddressResponse& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>[EC2-VPC] The ID that AWS assigns to represent the allocation of the Elastic
     * IP address for use with instances in a VPC.</p>
     */
    inline AllocateAddressResponse& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}

    /**
     * <p>[EC2-VPC] The ID that AWS assigns to represent the allocation of the Elastic
     * IP address for use with instances in a VPC.</p>
     */
    inline AllocateAddressResponse& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}


    /**
     * <p>Indicates whether this Elastic IP address is for use with instances in
     * EC2-Classic (<code>standard</code>) or instances in a VPC
     * (<code>vpc</code>).</p>
     */
    inline const DomainType& GetDomain() const{ return m_domain; }

    /**
     * <p>Indicates whether this Elastic IP address is for use with instances in
     * EC2-Classic (<code>standard</code>) or instances in a VPC
     * (<code>vpc</code>).</p>
     */
    inline void SetDomain(const DomainType& value) { m_domain = value; }

    /**
     * <p>Indicates whether this Elastic IP address is for use with instances in
     * EC2-Classic (<code>standard</code>) or instances in a VPC
     * (<code>vpc</code>).</p>
     */
    inline void SetDomain(DomainType&& value) { m_domain = std::move(value); }

    /**
     * <p>Indicates whether this Elastic IP address is for use with instances in
     * EC2-Classic (<code>standard</code>) or instances in a VPC
     * (<code>vpc</code>).</p>
     */
    inline AllocateAddressResponse& WithDomain(const DomainType& value) { SetDomain(value); return *this;}

    /**
     * <p>Indicates whether this Elastic IP address is for use with instances in
     * EC2-Classic (<code>standard</code>) or instances in a VPC
     * (<code>vpc</code>).</p>
     */
    inline AllocateAddressResponse& WithDomain(DomainType&& value) { SetDomain(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AllocateAddressResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AllocateAddressResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_publicIp;

    Aws::String m_allocationId;

    DomainType m_domain;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
