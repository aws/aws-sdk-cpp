/*
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
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>

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
namespace ElasticBeanstalk
{
namespace Model
{
  /**
   * <p>Results of a <a>CreateStorageLocationResult</a> call.</p>
   */
  class AWS_ELASTICBEANSTALK_API CreateStorageLocationResult
  {
  public:
    CreateStorageLocationResult();
    CreateStorageLocationResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    CreateStorageLocationResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>The name of the Amazon S3 bucket created.</p>
     */
    inline const Aws::String& GetS3Bucket() const{ return m_s3Bucket; }

    /**
     * <p>The name of the Amazon S3 bucket created.</p>
     */
    inline void SetS3Bucket(const Aws::String& value) { m_s3Bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket created.</p>
     */
    inline void SetS3Bucket(Aws::String&& value) { m_s3Bucket = value; }

    /**
     * <p>The name of the Amazon S3 bucket created.</p>
     */
    inline void SetS3Bucket(const char* value) { m_s3Bucket.assign(value); }

    /**
     * <p>The name of the Amazon S3 bucket created.</p>
     */
    inline CreateStorageLocationResult& WithS3Bucket(const Aws::String& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket created.</p>
     */
    inline CreateStorageLocationResult& WithS3Bucket(Aws::String&& value) { SetS3Bucket(value); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket created.</p>
     */
    inline CreateStorageLocationResult& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline CreateStorageLocationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateStorageLocationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_s3Bucket;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws