/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Ipam.h>
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
  class ModifyIpamResponse
  {
  public:
    AWS_EC2_API ModifyIpamResponse();
    AWS_EC2_API ModifyIpamResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyIpamResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The results of the modification.</p>
     */
    inline const Ipam& GetIpam() const{ return m_ipam; }

    /**
     * <p>The results of the modification.</p>
     */
    inline void SetIpam(const Ipam& value) { m_ipam = value; }

    /**
     * <p>The results of the modification.</p>
     */
    inline void SetIpam(Ipam&& value) { m_ipam = std::move(value); }

    /**
     * <p>The results of the modification.</p>
     */
    inline ModifyIpamResponse& WithIpam(const Ipam& value) { SetIpam(value); return *this;}

    /**
     * <p>The results of the modification.</p>
     */
    inline ModifyIpamResponse& WithIpam(Ipam&& value) { SetIpam(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ModifyIpamResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ModifyIpamResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Ipam m_ipam;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
