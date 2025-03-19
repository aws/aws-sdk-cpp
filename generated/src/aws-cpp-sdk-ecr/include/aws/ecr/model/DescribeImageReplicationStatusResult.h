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
    AWS_ECR_API DescribeImageReplicationStatusResult() = default;
    AWS_ECR_API DescribeImageReplicationStatusResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECR_API DescribeImageReplicationStatusResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The repository name associated with the request.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    DescribeImageReplicationStatusResult& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ImageIdentifier& GetImageId() const { return m_imageId; }
    template<typename ImageIdT = ImageIdentifier>
    void SetImageId(ImageIdT&& value) { m_imageIdHasBeenSet = true; m_imageId = std::forward<ImageIdT>(value); }
    template<typename ImageIdT = ImageIdentifier>
    DescribeImageReplicationStatusResult& WithImageId(ImageIdT&& value) { SetImageId(std::forward<ImageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The replication status details for the images in the specified
     * repository.</p>
     */
    inline const Aws::Vector<ImageReplicationStatus>& GetReplicationStatuses() const { return m_replicationStatuses; }
    template<typename ReplicationStatusesT = Aws::Vector<ImageReplicationStatus>>
    void SetReplicationStatuses(ReplicationStatusesT&& value) { m_replicationStatusesHasBeenSet = true; m_replicationStatuses = std::forward<ReplicationStatusesT>(value); }
    template<typename ReplicationStatusesT = Aws::Vector<ImageReplicationStatus>>
    DescribeImageReplicationStatusResult& WithReplicationStatuses(ReplicationStatusesT&& value) { SetReplicationStatuses(std::forward<ReplicationStatusesT>(value)); return *this;}
    template<typename ReplicationStatusesT = ImageReplicationStatus>
    DescribeImageReplicationStatusResult& AddReplicationStatuses(ReplicationStatusesT&& value) { m_replicationStatusesHasBeenSet = true; m_replicationStatuses.emplace_back(std::forward<ReplicationStatusesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeImageReplicationStatusResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    ImageIdentifier m_imageId;
    bool m_imageIdHasBeenSet = false;

    Aws::Vector<ImageReplicationStatus> m_replicationStatuses;
    bool m_replicationStatusesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
