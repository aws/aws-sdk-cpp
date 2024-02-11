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
    AWS_DATASYNC_API DescribeStorageSystemResourcesResult();
    AWS_DATASYNC_API DescribeStorageSystemResourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATASYNC_API DescribeStorageSystemResourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The information collected about your storage system's resources. A response
     * can also include Amazon Web Services storage service recommendations.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-findings.html">storage
     * resource information</a> collected by and <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">recommendations</a>
     * provided by DataSync Discovery.</p>
     */
    inline const ResourceDetails& GetResourceDetails() const{ return m_resourceDetails; }

    /**
     * <p>The information collected about your storage system's resources. A response
     * can also include Amazon Web Services storage service recommendations.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-findings.html">storage
     * resource information</a> collected by and <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">recommendations</a>
     * provided by DataSync Discovery.</p>
     */
    inline void SetResourceDetails(const ResourceDetails& value) { m_resourceDetails = value; }

    /**
     * <p>The information collected about your storage system's resources. A response
     * can also include Amazon Web Services storage service recommendations.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-findings.html">storage
     * resource information</a> collected by and <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">recommendations</a>
     * provided by DataSync Discovery.</p>
     */
    inline void SetResourceDetails(ResourceDetails&& value) { m_resourceDetails = std::move(value); }

    /**
     * <p>The information collected about your storage system's resources. A response
     * can also include Amazon Web Services storage service recommendations.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-findings.html">storage
     * resource information</a> collected by and <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">recommendations</a>
     * provided by DataSync Discovery.</p>
     */
    inline DescribeStorageSystemResourcesResult& WithResourceDetails(const ResourceDetails& value) { SetResourceDetails(value); return *this;}

    /**
     * <p>The information collected about your storage system's resources. A response
     * can also include Amazon Web Services storage service recommendations.</p> <p>For
     * more information, see <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-findings.html">storage
     * resource information</a> collected by and <a
     * href="https://docs.aws.amazon.com/datasync/latest/userguide/discovery-understand-recommendations.html">recommendations</a>
     * provided by DataSync Discovery.</p>
     */
    inline DescribeStorageSystemResourcesResult& WithResourceDetails(ResourceDetails&& value) { SetResourceDetails(std::move(value)); return *this;}


    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline DescribeStorageSystemResourcesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline DescribeStorageSystemResourcesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The opaque string that indicates the position to begin the next list of
     * results in the response.</p>
     */
    inline DescribeStorageSystemResourcesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeStorageSystemResourcesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeStorageSystemResourcesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeStorageSystemResourcesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ResourceDetails m_resourceDetails;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataSync
} // namespace Aws
