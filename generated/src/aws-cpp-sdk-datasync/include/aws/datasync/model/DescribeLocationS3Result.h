/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datasync/model/S3StorageClass.h>
#include <aws/datasync/model/S3Config.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeLocationS3Result
  {
  public:
    AWS_DATASYNC_API DescribeLocationS3Result();
    AWS_DATASYNC_API DescribeLocationS3Result(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeLocationS3Result& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ARN of the Amazon S3 location.</p>
     */
    inline const Aws::String& GetLocationArn() const{ return m_locationArn; }

    /**
     * <p>The ARN of the Amazon S3 location.</p>
     */
    inline void SetLocationArn(const Aws::String& value) { m_locationArn = value; }

    /**
     * <p>The ARN of the Amazon S3 location.</p>
     */
    inline void SetLocationArn(Aws::String&& value) { m_locationArn = std::move(value); }

    /**
     * <p>The ARN of the Amazon S3 location.</p>
     */
    inline void SetLocationArn(const char* value) { m_locationArn.assign(value); }

    /**
     * <p>The ARN of the Amazon S3 location.</p>
     */
    inline DescribeLocationS3Result& WithLocationArn(const Aws::String& value) { SetLocationArn(value); return *this;}

    /**
     * <p>The ARN of the Amazon S3 location.</p>
     */
    inline DescribeLocationS3Result& WithLocationArn(Aws::String&& value) { SetLocationArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Amazon S3 location.</p>
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


    /**
     * <p>When Amazon S3 is a destination location, this is the storage class that you
     * chose for your objects.</p> <p>Some storage classes have behaviors that can
     * affect your Amazon S3 storage costs. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline const S3StorageClass& GetS3StorageClass() const{ return m_s3StorageClass; }

    /**
     * <p>When Amazon S3 is a destination location, this is the storage class that you
     * chose for your objects.</p> <p>Some storage classes have behaviors that can
     * affect your Amazon S3 storage costs. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline void SetS3StorageClass(const S3StorageClass& value) { m_s3StorageClass = value; }

    /**
     * <p>When Amazon S3 is a destination location, this is the storage class that you
     * chose for your objects.</p> <p>Some storage classes have behaviors that can
     * affect your Amazon S3 storage costs. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline void SetS3StorageClass(S3StorageClass&& value) { m_s3StorageClass = std::move(value); }

    /**
     * <p>When Amazon S3 is a destination location, this is the storage class that you
     * chose for your objects.</p> <p>Some storage classes have behaviors that can
     * affect your Amazon S3 storage costs. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline DescribeLocationS3Result& WithS3StorageClass(const S3StorageClass& value) { SetS3StorageClass(value); return *this;}

    /**
     * <p>When Amazon S3 is a destination location, this is the storage class that you
     * chose for your objects.</p> <p>Some storage classes have behaviors that can
     * affect your Amazon S3 storage costs. For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/create-s3-location.html#using-storage-classes">Storage
     * class considerations with Amazon S3 transfers</a>.</p>
     */
    inline DescribeLocationS3Result& WithS3StorageClass(S3StorageClass&& value) { SetS3StorageClass(std::move(value)); return *this;}


    
    inline const S3Config& GetS3Config() const{ return m_s3Config; }

    
    inline void SetS3Config(const S3Config& value) { m_s3Config = value; }

    
    inline void SetS3Config(S3Config&& value) { m_s3Config = std::move(value); }

    
    inline DescribeLocationS3Result& WithS3Config(const S3Config& value) { SetS3Config(value); return *this;}

    
    inline DescribeLocationS3Result& WithS3Config(S3Config&& value) { SetS3Config(std::move(value)); return *this;}


    /**
     * <p>The ARNs of the DataSync agents deployed on your Outpost when using working
     * with Amazon S3 on Outposts.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAgentArns() const{ return m_agentArns; }

    /**
     * <p>The ARNs of the DataSync agents deployed on your Outpost when using working
     * with Amazon S3 on Outposts.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline void SetAgentArns(const Aws::Vector<Aws::String>& value) { m_agentArns = value; }

    /**
     * <p>The ARNs of the DataSync agents deployed on your Outpost when using working
     * with Amazon S3 on Outposts.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline void SetAgentArns(Aws::Vector<Aws::String>&& value) { m_agentArns = std::move(value); }

    /**
     * <p>The ARNs of the DataSync agents deployed on your Outpost when using working
     * with Amazon S3 on Outposts.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline DescribeLocationS3Result& WithAgentArns(const Aws::Vector<Aws::String>& value) { SetAgentArns(value); return *this;}

    /**
     * <p>The ARNs of the DataSync agents deployed on your Outpost when using working
     * with Amazon S3 on Outposts.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline DescribeLocationS3Result& WithAgentArns(Aws::Vector<Aws::String>&& value) { SetAgentArns(std::move(value)); return *this;}

    /**
     * <p>The ARNs of the DataSync agents deployed on your Outpost when using working
     * with Amazon S3 on Outposts.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline DescribeLocationS3Result& AddAgentArns(const Aws::String& value) { m_agentArns.push_back(value); return *this; }

    /**
     * <p>The ARNs of the DataSync agents deployed on your Outpost when using working
     * with Amazon S3 on Outposts.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline DescribeLocationS3Result& AddAgentArns(Aws::String&& value) { m_agentArns.push_back(std::move(value)); return *this; }

    /**
     * <p>The ARNs of the DataSync agents deployed on your Outpost when using working
     * with Amazon S3 on Outposts.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/deploy-agents.html#outposts-agent">Deploy
     * your DataSync agent on Outposts</a>.</p>
     */
    inline DescribeLocationS3Result& AddAgentArns(const char* value) { m_agentArns.push_back(value); return *this; }


    /**
     * <p>The time that the Amazon S3 location was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time that the Amazon S3 location was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time that the Amazon S3 location was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time that the Amazon S3 location was created.</p>
     */
    inline DescribeLocationS3Result& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time that the Amazon S3 location was created.</p>
     */
    inline DescribeLocationS3Result& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeLocationS3Result& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeLocationS3Result& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeLocationS3Result& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_locationArn;

    Aws::String m_locationUri;

    S3StorageClass m_s3StorageClass;

    S3Config m_s3Config;

    Aws::Vector<Aws::String> m_agentArns;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
