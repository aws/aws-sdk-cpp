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
#include <aws/ec2/model/ByoipCidr.h>
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
  class AWS_EC2_API WithdrawByoipCidrResponse
  {
  public:
    WithdrawByoipCidrResponse();
    WithdrawByoipCidrResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    WithdrawByoipCidrResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the address pool.</p>
     */
    inline const ByoipCidr& GetByoipCidr() const{ return m_byoipCidr; }

    /**
     * <p>Information about the address pool.</p>
     */
    inline void SetByoipCidr(const ByoipCidr& value) { m_byoipCidr = value; }

    /**
     * <p>Information about the address pool.</p>
     */
    inline void SetByoipCidr(ByoipCidr&& value) { m_byoipCidr = std::move(value); }

    /**
     * <p>Information about the address pool.</p>
     */
    inline WithdrawByoipCidrResponse& WithByoipCidr(const ByoipCidr& value) { SetByoipCidr(value); return *this;}

    /**
     * <p>Information about the address pool.</p>
     */
    inline WithdrawByoipCidrResponse& WithByoipCidr(ByoipCidr&& value) { SetByoipCidr(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline WithdrawByoipCidrResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline WithdrawByoipCidrResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    ByoipCidr m_byoipCidr;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
