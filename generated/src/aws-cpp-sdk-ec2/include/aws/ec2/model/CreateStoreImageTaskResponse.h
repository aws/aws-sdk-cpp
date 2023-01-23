/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateStoreImageTaskResponse
  {
  public:
    AWS_EC2_API CreateStoreImageTaskResponse();
    AWS_EC2_API CreateStoreImageTaskResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API CreateStoreImageTaskResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The name of the stored AMI object in the S3 bucket.</p>
     */
    inline const Aws::String& GetObjectKey() const{ return m_objectKey; }

    /**
     * <p>The name of the stored AMI object in the S3 bucket.</p>
     */
    inline void SetObjectKey(const Aws::String& value) { m_objectKey = value; }

    /**
     * <p>The name of the stored AMI object in the S3 bucket.</p>
     */
    inline void SetObjectKey(Aws::String&& value) { m_objectKey = std::move(value); }

    /**
     * <p>The name of the stored AMI object in the S3 bucket.</p>
     */
    inline void SetObjectKey(const char* value) { m_objectKey.assign(value); }

    /**
     * <p>The name of the stored AMI object in the S3 bucket.</p>
     */
    inline CreateStoreImageTaskResponse& WithObjectKey(const Aws::String& value) { SetObjectKey(value); return *this;}

    /**
     * <p>The name of the stored AMI object in the S3 bucket.</p>
     */
    inline CreateStoreImageTaskResponse& WithObjectKey(Aws::String&& value) { SetObjectKey(std::move(value)); return *this;}

    /**
     * <p>The name of the stored AMI object in the S3 bucket.</p>
     */
    inline CreateStoreImageTaskResponse& WithObjectKey(const char* value) { SetObjectKey(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateStoreImageTaskResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateStoreImageTaskResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_objectKey;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
