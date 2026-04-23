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
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/S3Config.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataSync
{
namespace Model
{
  /**
   * <p>DescribeLocationS3Response</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datasync-2018-11-09/DescribeLocationS3Response">AWS
   * API Reference</a></p>
   */
  class AWS_DATASYNC_API DescribeLocationS3Result
  {
  public:
    DescribeLocationS3Result();
    DescribeLocationS3Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeLocationS3Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline DescribeLocationS3Result& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline DescribeLocationS3Result& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon S3 bucket location.</p>
     */
    inline DescribeLocationS3Result& WithLocationArn(const char* value) { SetLocationArn(value); return *this;}


    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline const Aws::String& GetLocationUri() const{ return m_locationUri; }

    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline void SetLocationUri(const Aws::String& value) { m_locationUri = value; }

    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline void SetLocationUri(Aws::String&& value) { m_locationUri = std::move(value); }

    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline void SetLocationUri(const char* value) { m_locationUri.assign(value); }

    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline DescribeLocationS3Result& WithLocationUri(const Aws::String& value) { SetLocationUri(value); return *this;}

    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline DescribeLocationS3Result& WithLocationUri(Aws::String&& value) { SetLocationUri(std::move(value)); return *this;}

    /**
     * <p>The URL of the Amazon S3 location that was described.</p>
     */
    inline DescribeLocationS3Result& WithLocationUri(const char* value) { SetLocationUri(value); return *this;}


    
    inline const S3Config& GetS3Config() const{ return m_s3Config; }

    
    inline void SetS3Config(const S3Config& value) { m_s3Config = value; }

    
    inline void SetS3Config(S3Config&& value) { m_s3Config = std::move(value); }

    
    inline DescribeLocationS3Result& WithS3Config(const S3Config& value) { SetS3Config(value); return *this;}

    
    inline DescribeLocationS3Result& WithS3Config(S3Config&& value) { SetS3Config(std::move(value)); return *this;}


    /**
     * <p>The time that the Amazon S3 bucket location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the Amazon S3 bucket location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the Amazon S3 bucket location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the Amazon S3 bucket location was created.</p>
     */
    inline DescribeLocationS3Result& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the Amazon S3 bucket location was created.</p>
     */
    inline DescribeLocationS3Result& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    S3Config m_s3Config;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
