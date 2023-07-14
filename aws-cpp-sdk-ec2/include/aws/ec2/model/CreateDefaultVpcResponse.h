﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/Vpc.h>
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
  class AWS_EC2_API CreateDefaultVpcResponse
  {
  public:
    CreateDefaultVpcResponse();
    CreateDefaultVpcResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateDefaultVpcResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the VPC.</p>
     */
    inline const Vpc& GetVpc() const{ return m_vpc; }

    /**
     * <p>Information about the VPC.</p>
     */
    inline void SetVpc(const Vpc& value) { m_vpc = value; }

    /**
     * <p>Information about the VPC.</p>
     */
    inline void SetVpc(Vpc&& value) { m_vpc = std::move(value); }

    /**
     * <p>Information about the VPC.</p>
     */
    inline CreateDefaultVpcResponse& WithVpc(const Vpc& value) { SetVpc(value); return *this;}

    /**
     * <p>Information about the VPC.</p>
     */
    inline CreateDefaultVpcResponse& WithVpc(Vpc&& value) { SetVpc(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateDefaultVpcResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateDefaultVpcResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Vpc m_vpc;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
