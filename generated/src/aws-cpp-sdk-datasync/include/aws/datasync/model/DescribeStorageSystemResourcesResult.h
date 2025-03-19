/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datasync/DataSync_EXPORTS.h>
#include <aws/datasync/model/ResourceDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeStorageSystemResourcesResult
  {
  public:
    AWS_DATASYNC_API DescribeStorageSystemResourcesResult() = default;
    AWS_DATASYNC_API DescribeStorageSystemResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeStorageSystemResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The information collected about your storage system's resources. A response
     * can also include Amazon Web Services storage service recommendations.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-findings.html">storage
     * resource information</a> collected by and <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">recommendations</a>
     * provided by DataSync Discovery.</p>
     */
    inline const ResourceDetails& GetResourceDetails() const { return m_resourceDetails; }
    template<typename ResourceDetailsT = ResourceDetails>
    void SetResourceDetails(ResourceDetailsT&& value) { m_resourceDetailsHasBeenSet = true; m_resourceDetails = std::forward<ResourceDetailsT>(value); }
    template<typename ResourceDetailsT = ResourceDetails>
    DescribeStorageSystemResourcesResult& WithResourceDetails(ResourceDetailsT&& value) { SetResourceDetails(std::forward<ResourceDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeStorageSystemResourcesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeStorageSystemResourcesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ResourceDetails m_resourceDetails;
    bool m_resourceDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
