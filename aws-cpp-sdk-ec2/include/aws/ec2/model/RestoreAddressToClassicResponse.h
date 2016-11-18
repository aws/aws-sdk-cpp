﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/Status.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>

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
   * <p>Contains the output of RestoreAddressToClassic.</p>
   */
  class AWS_EC2_API RestoreAddressToClassicResponse
  {
  public:
    RestoreAddressToClassicResponse();
    RestoreAddressToClassicResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    RestoreAddressToClassicResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The move status for the IP address.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The move status for the IP address.</p>
     */
    inline void SetStatus(const Status& value) { m_status = value; }

    /**
     * <p>The move status for the IP address.</p>
     */
    inline void SetStatus(Status&& value) { m_status = value; }

    /**
     * <p>The move status for the IP address.</p>
     */
    inline RestoreAddressToClassicResponse& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The move status for the IP address.</p>
     */
    inline RestoreAddressToClassicResponse& WithStatus(Status&& value) { SetStatus(value); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIp = value; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIp = value; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIp.assign(value); }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline RestoreAddressToClassicResponse& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline RestoreAddressToClassicResponse& WithPublicIp(Aws::String&& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline RestoreAddressToClassicResponse& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline RestoreAddressToClassicResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RestoreAddressToClassicResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Status m_status;
    Aws::String m_publicIp;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws