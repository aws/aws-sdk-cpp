/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Subnet.h>
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
  class CreateDefaultSubnetResponse
  {
  public:
    AWS_EC2_API CreateDefaultSubnetResponse();
    AWS_EC2_API CreateDefaultSubnetResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateDefaultSubnetResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the subnet.</p>
     */
    inline const Subnet& GetSubnet() const{ return m_subnet; }

    /**
     * <p>Information about the subnet.</p>
     */
    inline void SetSubnet(const Subnet& value) { m_subnet = value; }

    /**
     * <p>Information about the subnet.</p>
     */
    inline void SetSubnet(Subnet&& value) { m_subnet = std::move(value); }

    /**
     * <p>Information about the subnet.</p>
     */
    inline CreateDefaultSubnetResponse& WithSubnet(const Subnet& value) { SetSubnet(value); return *this;}

    /**
     * <p>Information about the subnet.</p>
     */
    inline CreateDefaultSubnetResponse& WithSubnet(Subnet&& value) { SetSubnet(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateDefaultSubnetResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateDefaultSubnetResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Subnet m_subnet;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
