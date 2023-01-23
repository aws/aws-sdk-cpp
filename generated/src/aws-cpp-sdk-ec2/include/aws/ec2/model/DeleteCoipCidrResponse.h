/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/CoipCidr.h>
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
  class DeleteCoipCidrResponse
  {
  public:
    AWS_EC2_API DeleteCoipCidrResponse();
    AWS_EC2_API DeleteCoipCidrResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteCoipCidrResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p> Information about a range of customer-owned IP addresses. </p>
     */
    inline const CoipCidr& GetCoipCidr() const{ return m_coipCidr; }

    /**
     * <p> Information about a range of customer-owned IP addresses. </p>
     */
    inline void SetCoipCidr(const CoipCidr& value) { m_coipCidr = value; }

    /**
     * <p> Information about a range of customer-owned IP addresses. </p>
     */
    inline void SetCoipCidr(CoipCidr&& value) { m_coipCidr = std::move(value); }

    /**
     * <p> Information about a range of customer-owned IP addresses. </p>
     */
    inline DeleteCoipCidrResponse& WithCoipCidr(const CoipCidr& value) { SetCoipCidr(value); return *this;}

    /**
     * <p> Information about a range of customer-owned IP addresses. </p>
     */
    inline DeleteCoipCidrResponse& WithCoipCidr(CoipCidr&& value) { SetCoipCidr(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteCoipCidrResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteCoipCidrResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    CoipCidr m_coipCidr;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
