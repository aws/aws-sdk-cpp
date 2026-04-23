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
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_EC2_API ExportTransitGatewayRoutesResponse
  {
  public:
    ExportTransitGatewayRoutesResponse();
    ExportTransitGatewayRoutesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ExportTransitGatewayRoutesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The URL of the exported file in Amazon S3. For example,
     * s3://<i>bucket_name</i>/VPCTransitGateway/TransitGatewayRouteTables/<i>file_name</i>.</p>
     */
    inline const Aws::String& GetS3Location() const{ return m_s3Location; }

    /**
     * <p>The URL of the exported file in Amazon S3. For example,
     * s3://<i>bucket_name</i>/VPCTransitGateway/TransitGatewayRouteTables/<i>file_name</i>.</p>
     */
    inline void SetS3Location(const Aws::String& value) { m_s3Location = value; }

    /**
     * <p>The URL of the exported file in Amazon S3. For example,
     * s3://<i>bucket_name</i>/VPCTransitGateway/TransitGatewayRouteTables/<i>file_name</i>.</p>
     */
    inline void SetS3Location(Aws::String&& value) { m_s3Location = std::move(value); }

    /**
     * <p>The URL of the exported file in Amazon S3. For example,
     * s3://<i>bucket_name</i>/VPCTransitGateway/TransitGatewayRouteTables/<i>file_name</i>.</p>
     */
    inline void SetS3Location(const char* value) { m_s3Location.assign(value); }

    /**
     * <p>The URL of the exported file in Amazon S3. For example,
     * s3://<i>bucket_name</i>/VPCTransitGateway/TransitGatewayRouteTables/<i>file_name</i>.</p>
     */
    inline ExportTransitGatewayRoutesResponse& WithS3Location(const Aws::String& value) { SetS3Location(value); return *this;}

    /**
     * <p>The URL of the exported file in Amazon S3. For example,
     * s3://<i>bucket_name</i>/VPCTransitGateway/TransitGatewayRouteTables/<i>file_name</i>.</p>
     */
    inline ExportTransitGatewayRoutesResponse& WithS3Location(Aws::String&& value) { SetS3Location(std::move(value)); return *this;}

    /**
     * <p>The URL of the exported file in Amazon S3. For example,
     * s3://<i>bucket_name</i>/VPCTransitGateway/TransitGatewayRouteTables/<i>file_name</i>.</p>
     */
    inline ExportTransitGatewayRoutesResponse& WithS3Location(const char* value) { SetS3Location(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ExportTransitGatewayRoutesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ExportTransitGatewayRoutesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_s3Location;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
