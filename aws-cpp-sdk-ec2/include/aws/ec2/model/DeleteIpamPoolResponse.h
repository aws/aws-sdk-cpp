﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/IpamPool.h>
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
  class AWS_EC2_API DeleteIpamPoolResponse
  {
  public:
    DeleteIpamPoolResponse();
    DeleteIpamPoolResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DeleteIpamPoolResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the results of the deletion.</p>
     */
    inline const IpamPool& GetIpamPool() const{ return m_ipamPool; }

    /**
     * <p>Information about the results of the deletion.</p>
     */
    inline void SetIpamPool(const IpamPool& value) { m_ipamPool = value; }

    /**
     * <p>Information about the results of the deletion.</p>
     */
    inline void SetIpamPool(IpamPool&& value) { m_ipamPool = std::move(value); }

    /**
     * <p>Information about the results of the deletion.</p>
     */
    inline DeleteIpamPoolResponse& WithIpamPool(const IpamPool& value) { SetIpamPool(value); return *this;}

    /**
     * <p>Information about the results of the deletion.</p>
     */
    inline DeleteIpamPoolResponse& WithIpamPool(IpamPool&& value) { SetIpamPool(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteIpamPoolResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteIpamPoolResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    IpamPool m_ipamPool;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
