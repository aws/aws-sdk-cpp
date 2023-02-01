/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Status.h>
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
  class RestoreAddressToClassicResponse
  {
  public:
    AWS_EC2_API RestoreAddressToClassicResponse();
    AWS_EC2_API RestoreAddressToClassicResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API RestoreAddressToClassicResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetPublicIp(Aws::String&& value) { m_publicIp = std::move(value); }

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
    inline RestoreAddressToClassicResponse& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline RestoreAddressToClassicResponse& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}


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
    inline void SetStatus(Status&& value) { m_status = std::move(value); }

    /**
     * <p>The move status for the IP address.</p>
     */
    inline RestoreAddressToClassicResponse& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The move status for the IP address.</p>
     */
    inline RestoreAddressToClassicResponse& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline RestoreAddressToClassicResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline RestoreAddressToClassicResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_publicIp;

    Status m_status;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
