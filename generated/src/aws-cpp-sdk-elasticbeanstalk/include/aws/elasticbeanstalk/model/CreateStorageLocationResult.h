/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticbeanstalk/ElasticBeanstalk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticbeanstalk/model/ResponseMetadata.h>
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
namespace ElasticBeanstalk
{
namespace Model
{
  /**
   * <p>Results of a <a>CreateStorageLocationResult</a> call.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticbeanstalk-2010-12-01/CreateStorageLocationResultMessage">AWS
   * API Reference</a></p>
   */
  class CreateStorageLocationResult
  {
  public:
    AWS_ELASTICBEANSTALK_API CreateStorageLocationResult();
    AWS_ELASTICBEANSTALK_API CreateStorageLocationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_ELASTICBEANSTALK_API CreateStorageLocationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetS3Bucket(Aws::String&& value) { m_s3Bucket = std::move(value); }

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
    inline CreateStorageLocationResult& WithS3Bucket(Aws::String&& value) { SetS3Bucket(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon S3 bucket created.</p>
     */
    inline CreateStorageLocationResult& WithS3Bucket(const char* value) { SetS3Bucket(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline CreateStorageLocationResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline CreateStorageLocationResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_s3Bucket;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
