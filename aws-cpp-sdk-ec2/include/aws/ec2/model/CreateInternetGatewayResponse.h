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
#include <aws/ec2/model/InternetGateway.h>
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
   * <p>Contains the output of CreateInternetGateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateInternetGatewayResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API CreateInternetGatewayResponse
  {
  public:
    CreateInternetGatewayResponse();
    CreateInternetGatewayResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateInternetGatewayResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the Internet gateway.</p>
     */
    inline const InternetGateway& GetInternetGateway() const{ return m_internetGateway; }

    /**
     * <p>Information about the Internet gateway.</p>
     */
    inline void SetInternetGateway(const InternetGateway& value) { m_internetGateway = value; }

    /**
     * <p>Information about the Internet gateway.</p>
     */
    inline void SetInternetGateway(InternetGateway&& value) { m_internetGateway = std::move(value); }

    /**
     * <p>Information about the Internet gateway.</p>
     */
    inline CreateInternetGatewayResponse& WithInternetGateway(const InternetGateway& value) { SetInternetGateway(value); return *this;}

    /**
     * <p>Information about the Internet gateway.</p>
     */
    inline CreateInternetGatewayResponse& WithInternetGateway(InternetGateway&& value) { SetInternetGateway(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateInternetGatewayResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateInternetGatewayResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    InternetGateway m_internetGateway;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
