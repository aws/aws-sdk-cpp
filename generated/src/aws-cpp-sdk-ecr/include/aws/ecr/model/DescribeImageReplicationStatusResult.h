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


    ///@{
    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryName = value; }
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryName = std::move(value); }
    inline void SetRepositoryName(const char* value) { m_repositoryName.assign(value); }
    inline DescribeImageReplicationStatusResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}
    inline DescribeImageReplicationStatusResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}
    inline DescribeImageReplicationStatusResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}
    ///@}

    ///@{
    
    inline const ImageIdentifier& GetImageId() const{ return m_imageId; }
    inline void SetImageId(const ImageIdentifier& value) { m_imageId = value; }
    inline void SetImageId(ImageIdentifier&& value) { m_imageId = std::move(value); }
    inline DescribeImageReplicationStatusResult& WithImageId(const ImageIdentifier& value) { SetImageId(value); return *this;}
    inline DescribeImageReplicationStatusResult& WithImageId(ImageIdentifier&& value) { SetImageId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication status details for the images in the specified
     * repository.</p>
     */
    inline const Aws::Vector<ImageReplicationStatus>& GetReplicationStatuses() const{ return m_replicationStatuses; }
    inline void SetReplicationStatuses(const Aws::Vector<ImageReplicationStatus>& value) { m_replicationStatuses = value; }
    inline void SetReplicationStatuses(Aws::Vector<ImageReplicationStatus>&& value) { m_replicationStatuses = std::move(value); }
    inline DescribeImageReplicationStatusResult& WithReplicationStatuses(const Aws::Vector<ImageReplicationStatus>& value) { SetReplicationStatuses(value); return *this;}
    inline DescribeImageReplicationStatusResult& WithReplicationStatuses(Aws::Vector<ImageReplicationStatus>&& value) { SetReplicationStatuses(std::move(value)); return *this;}
    inline DescribeImageReplicationStatusResult& AddReplicationStatuses(const ImageReplicationStatus& value) { m_replicationStatuses.push_back(value); return *this; }
    inline DescribeImageReplicationStatusResult& AddReplicationStatuses(ImageReplicationStatus&& value) { m_replicationStatuses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeImageReplicationStatusResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeImageReplicationStatusResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeImageReplicationStatusResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;

    ImageIdentifier m_imageId;

    Aws::Vector<ImageReplicationStatus> m_replicationStatuses;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
