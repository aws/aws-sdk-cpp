﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ImageIdentifier.h>
#include <aws/ecr/model/ImageScanStatus.h>
#include <aws/ecr/model/ImageScanFindings.h>
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
  class AWS_ECR_API DescribeImageScanFindingsResult
  {
  public:
    DescribeImageScanFindingsResult();
    DescribeImageScanFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeImageScanFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline DescribeImageScanFindingsResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline DescribeImageScanFindingsResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The registry ID associated with the request.</p>
     */
    inline DescribeImageScanFindingsResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


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
    inline DescribeImageScanFindingsResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline DescribeImageScanFindingsResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline DescribeImageScanFindingsResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    
    inline const ImageIdentifier& GetImageId() const{ return m_imageId; }

    
    inline void SetImageId(const ImageIdentifier& value) { m_imageId = value; }

    
    inline void SetImageId(ImageIdentifier&& value) { m_imageId = std::move(value); }

    
    inline DescribeImageScanFindingsResult& WithImageId(const ImageIdentifier& value) { SetImageId(value); return *this;}

    
    inline DescribeImageScanFindingsResult& WithImageId(ImageIdentifier&& value) { SetImageId(std::move(value)); return *this;}


    /**
     * <p>The current state of the scan.</p>
     */
    inline const ImageScanStatus& GetImageScanStatus() const{ return m_imageScanStatus; }

    /**
     * <p>The current state of the scan.</p>
     */
    inline void SetImageScanStatus(const ImageScanStatus& value) { m_imageScanStatus = value; }

    /**
     * <p>The current state of the scan.</p>
     */
    inline void SetImageScanStatus(ImageScanStatus&& value) { m_imageScanStatus = std::move(value); }

    /**
     * <p>The current state of the scan.</p>
     */
    inline DescribeImageScanFindingsResult& WithImageScanStatus(const ImageScanStatus& value) { SetImageScanStatus(value); return *this;}

    /**
     * <p>The current state of the scan.</p>
     */
    inline DescribeImageScanFindingsResult& WithImageScanStatus(ImageScanStatus&& value) { SetImageScanStatus(std::move(value)); return *this;}


    /**
     * <p>The information contained in the image scan findings.</p>
     */
    inline const ImageScanFindings& GetImageScanFindings() const{ return m_imageScanFindings; }

    /**
     * <p>The information contained in the image scan findings.</p>
     */
    inline void SetImageScanFindings(const ImageScanFindings& value) { m_imageScanFindings = value; }

    /**
     * <p>The information contained in the image scan findings.</p>
     */
    inline void SetImageScanFindings(ImageScanFindings&& value) { m_imageScanFindings = std::move(value); }

    /**
     * <p>The information contained in the image scan findings.</p>
     */
    inline DescribeImageScanFindingsResult& WithImageScanFindings(const ImageScanFindings& value) { SetImageScanFindings(value); return *this;}

    /**
     * <p>The information contained in the image scan findings.</p>
     */
    inline DescribeImageScanFindingsResult& WithImageScanFindings(ImageScanFindings&& value) { SetImageScanFindings(std::move(value)); return *this;}


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageScanFindings</code> request. When the results of a
     * <code>DescribeImageScanFindings</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageScanFindings</code> request. When the results of a
     * <code>DescribeImageScanFindings</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageScanFindings</code> request. When the results of a
     * <code>DescribeImageScanFindings</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageScanFindings</code> request. When the results of a
     * <code>DescribeImageScanFindings</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageScanFindings</code> request. When the results of a
     * <code>DescribeImageScanFindings</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline DescribeImageScanFindingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageScanFindings</code> request. When the results of a
     * <code>DescribeImageScanFindings</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline DescribeImageScanFindingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>DescribeImageScanFindings</code> request. When the results of a
     * <code>DescribeImageScanFindings</code> request exceed <code>maxResults</code>,
     * this value can be used to retrieve the next page of results. This value is null
     * when there are no more results to return.</p>
     */
    inline DescribeImageScanFindingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_registryId;

    Aws::String m_repositoryName;

    ImageIdentifier m_imageId;

    ImageScanStatus m_imageScanStatus;

    ImageScanFindings m_imageScanFindings;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
