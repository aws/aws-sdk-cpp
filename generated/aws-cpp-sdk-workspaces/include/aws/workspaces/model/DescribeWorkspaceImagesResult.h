﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces/model/WorkspaceImage.h>
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
namespace WorkSpaces
{
namespace Model
{
  class AWS_WORKSPACES_API DescribeWorkspaceImagesResult
  {
  public:
    DescribeWorkspaceImagesResult();
    DescribeWorkspaceImagesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeWorkspaceImagesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the images.</p>
     */
    inline const Aws::Vector<WorkspaceImage>& GetImages() const{ return m_images; }

    /**
     * <p>Information about the images.</p>
     */
    inline void SetImages(const Aws::Vector<WorkspaceImage>& value) { m_images = value; }

    /**
     * <p>Information about the images.</p>
     */
    inline void SetImages(Aws::Vector<WorkspaceImage>&& value) { m_images = std::move(value); }

    /**
     * <p>Information about the images.</p>
     */
    inline DescribeWorkspaceImagesResult& WithImages(const Aws::Vector<WorkspaceImage>& value) { SetImages(value); return *this;}

    /**
     * <p>Information about the images.</p>
     */
    inline DescribeWorkspaceImagesResult& WithImages(Aws::Vector<WorkspaceImage>&& value) { SetImages(std::move(value)); return *this;}

    /**
     * <p>Information about the images.</p>
     */
    inline DescribeWorkspaceImagesResult& AddImages(const WorkspaceImage& value) { m_images.push_back(value); return *this; }

    /**
     * <p>Information about the images.</p>
     */
    inline DescribeWorkspaceImagesResult& AddImages(WorkspaceImage&& value) { m_images.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeWorkspaceImagesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeWorkspaceImagesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeWorkspaceImagesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<WorkspaceImage> m_images;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
