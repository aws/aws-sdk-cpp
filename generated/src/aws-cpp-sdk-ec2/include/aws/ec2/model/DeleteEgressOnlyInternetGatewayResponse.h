/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
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
  class DeleteEgressOnlyInternetGatewayResponse
  {
  public:
    AWS_EC2_API DeleteEgressOnlyInternetGatewayResponse();
    AWS_EC2_API DeleteEgressOnlyInternetGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteEgressOnlyInternetGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an
     * error.</p>
     */
    inline bool GetReturnCode() const{ return m_returnCode; }

    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an
     * error.</p>
     */
    inline void SetReturnCode(bool value) { m_returnCode = value; }

    /**
     * <p>Returns <code>true</code> if the request succeeds; otherwise, it returns an
     * error.</p>
     */
    inline DeleteEgressOnlyInternetGatewayResponse& WithReturnCode(bool value) { SetReturnCode(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DeleteEgressOnlyInternetGatewayResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DeleteEgressOnlyInternetGatewayResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    bool m_returnCode;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
