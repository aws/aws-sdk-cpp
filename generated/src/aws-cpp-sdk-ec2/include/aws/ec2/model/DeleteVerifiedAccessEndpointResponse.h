/**
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
  class DeleteVerifiedAccessEndpointResponse
  {
  public:
    AWS_EC2_API DeleteVerifiedAccessEndpointResponse();
    AWS_EC2_API DeleteVerifiedAccessEndpointResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteVerifiedAccessEndpointResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline const VerifiedAccessEndpoint& GetVerifiedAccessEndpoint() const{ return m_verifiedAccessEndpoint; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpoint(const VerifiedAccessEndpoint& value) { m_verifiedAccessEndpoint = value; }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline void SetVerifiedAccessEndpoint(VerifiedAccessEndpoint&& value) { m_verifiedAccessEndpoint = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline DeleteVerifiedAccessEndpointResponse& WithVerifiedAccessEndpoint(const VerifiedAccessEndpoint& value) { SetVerifiedAccessEndpoint(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services Verified Access endpoint.</p>
     */
    inline DeleteVerifiedAccessEndpointResponse& WithVerifiedAccessEndpoint(VerifiedAccessEndpoint&& value) { SetVerifiedAccessEndpoint(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteVerifiedAccessEndpointResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteVerifiedAccessEndpointResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    VerifiedAccessEndpoint m_verifiedAccessEndpoint;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
