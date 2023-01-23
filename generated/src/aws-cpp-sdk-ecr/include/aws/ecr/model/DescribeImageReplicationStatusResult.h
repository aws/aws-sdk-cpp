/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ImageIdentifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecr/model/ImageReplicationStatus.h>
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
namespace ECR
{
namespace Model
{
  class DescribeImageReplicationStatusResult
  {
  public:
    AWS_ECR_API DescribeImageReplicationStatusResult();
    AWS_ECR_API DescribeImageReplicationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DescribeImageReplicationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline DescribeImageReplicationStatusResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline DescribeImageReplicationStatusResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline DescribeImageReplicationStatusResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    
    inline const ImageIdentifier& GetImageId() const{ return m_imageId; }

    
    inline void SetImageId(const ImageIdentifier& value) { m_imageId = value; }

    
    inline void SetImageId(ImageIdentifier&& value) { m_imageId = std::move(value); }

    
    inline DescribeImageReplicationStatusResult& WithImageId(const ImageIdentifier& value) { SetImageId(value); return *this;}

    
    inline DescribeImageReplicationStatusResult& WithImageId(ImageIdentifier&& value) { SetImageId(std::move(value)); return *this;}


    /**
     * <p>The replication status details for the images in the specified
     * repository.</p>
     */
    inline const Aws::Vector<ImageReplicationStatus>& GetReplicationStatuses() const{ return m_replicationStatuses; }

    /**
     * <p>The replication status details for the images in the specified
     * repository.</p>
     */
    inline void SetReplicationStatuses(const Aws::Vector<ImageReplicationStatus>& value) { m_replicationStatuses = value; }

    /**
     * <p>The replication status details for the images in the specified
     * repository.</p>
     */
    inline void SetReplicationStatuses(Aws::Vector<ImageReplicationStatus>&& value) { m_replicationStatuses = std::move(value); }

    /**
     * <p>The replication status details for the images in the specified
     * repository.</p>
     */
    inline DescribeImageReplicationStatusResult& WithReplicationStatuses(const Aws::Vector<ImageReplicationStatus>& value) { SetReplicationStatuses(value); return *this;}

    /**
     * <p>The replication status details for the images in the specified
     * repository.</p>
     */
    inline DescribeImageReplicationStatusResult& WithReplicationStatuses(Aws::Vector<ImageReplicationStatus>&& value) { SetReplicationStatuses(std::move(value)); return *this;}

    /**
     * <p>The replication status details for the images in the specified
     * repository.</p>
     */
    inline DescribeImageReplicationStatusResult& AddReplicationStatuses(const ImageReplicationStatus& value) { m_replicationStatuses.push_back(value); return *this; }

    /**
     * <p>The replication status details for the images in the specified
     * repository.</p>
     */
    inline DescribeImageReplicationStatusResult& AddReplicationStatuses(ImageReplicationStatus&& value) { m_replicationStatuses.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_repositoryName;

    ImageIdentifier m_imageId;

    Aws::Vector<ImageReplicationStatus> m_replicationStatuses;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
