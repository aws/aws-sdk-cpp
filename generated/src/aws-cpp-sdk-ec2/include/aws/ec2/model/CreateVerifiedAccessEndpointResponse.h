﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/VerifiedAccessEndpoint.h>
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
  class CreateVerifiedAccessEndpointResponse
  {
  public:
    AWS_EC2_API CreateVerifiedAccessEndpointResponse();
    AWS_EC2_API CreateVerifiedAccessEndpointResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateVerifiedAccessEndpointResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Details about the Verified Access endpoint.</p>
     */
    inline const VerifiedAccessEndpoint& GetVerifiedAccessEndpoint() const{ return m_verifiedAccessEndpoint; }
    inline void SetVerifiedAccessEndpoint(const VerifiedAccessEndpoint& value) { m_verifiedAccessEndpoint = value; }
    inline void SetVerifiedAccessEndpoint(VerifiedAccessEndpoint&& value) { m_verifiedAccessEndpoint = std::move(value); }
    inline CreateVerifiedAccessEndpointResponse& WithVerifiedAccessEndpoint(const VerifiedAccessEndpoint& value) { SetVerifiedAccessEndpoint(value); return *this;}
    inline CreateVerifiedAccessEndpointResponse& WithVerifiedAccessEndpoint(VerifiedAccessEndpoint&& value) { SetVerifiedAccessEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline CreateVerifiedAccessEndpointResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline CreateVerifiedAccessEndpointResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    VerifiedAccessEndpoint m_verifiedAccessEndpoint;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
