/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/workspaces/model/ImagePermission.h>
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
  class DescribeWorkspaceImagePermissionsResult
  {
  public:
    AWS_WORKSPACES_API DescribeWorkspaceImagePermissionsResult();
    AWS_WORKSPACES_API DescribeWorkspaceImagePermissionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKSPACES_API DescribeWorkspaceImagePermissionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The identifier of the image.</p>
     */
    inline const Aws::String& GetImageId() const{ return m_imageId; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(const Aws::String& value) { m_imageId = value; }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(Aws::String&& value) { m_imageId = std::move(value); }

    /**
     * <p>The identifier of the image.</p>
     */
    inline void SetImageId(const char* value) { m_imageId.assign(value); }

    /**
     * <p>The identifier of the image.</p>
     */
    inline DescribeWorkspaceImagePermissionsResult& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline DescribeWorkspaceImagePermissionsResult& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline DescribeWorkspaceImagePermissionsResult& WithImageId(const char* value) { SetImageId(value); return *this;}


    /**
     * <p>The identifiers of the Amazon Web Services accounts that the image has been
     * shared with.</p>
     */
    inline const Aws::Vector<ImagePermission>& GetImagePermissions() const{ return m_imagePermissions; }

    /**
     * <p>The identifiers of the Amazon Web Services accounts that the image has been
     * shared with.</p>
     */
    inline void SetImagePermissions(const Aws::Vector<ImagePermission>& value) { m_imagePermissions = value; }

    /**
     * <p>The identifiers of the Amazon Web Services accounts that the image has been
     * shared with.</p>
     */
    inline void SetImagePermissions(Aws::Vector<ImagePermission>&& value) { m_imagePermissions = std::move(value); }

    /**
     * <p>The identifiers of the Amazon Web Services accounts that the image has been
     * shared with.</p>
     */
    inline DescribeWorkspaceImagePermissionsResult& WithImagePermissions(const Aws::Vector<ImagePermission>& value) { SetImagePermissions(value); return *this;}

    /**
     * <p>The identifiers of the Amazon Web Services accounts that the image has been
     * shared with.</p>
     */
    inline DescribeWorkspaceImagePermissionsResult& WithImagePermissions(Aws::Vector<ImagePermission>&& value) { SetImagePermissions(std::move(value)); return *this;}

    /**
     * <p>The identifiers of the Amazon Web Services accounts that the image has been
     * shared with.</p>
     */
    inline DescribeWorkspaceImagePermissionsResult& AddImagePermissions(const ImagePermission& value) { m_imagePermissions.push_back(value); return *this; }

    /**
     * <p>The identifiers of the Amazon Web Services accounts that the image has been
     * shared with.</p>
     */
    inline DescribeWorkspaceImagePermissionsResult& AddImagePermissions(ImagePermission&& value) { m_imagePermissions.push_back(std::move(value)); return *this; }


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
    inline DescribeWorkspaceImagePermissionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeWorkspaceImagePermissionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is null
     * when there are no more results to return. </p>
     */
    inline DescribeWorkspaceImagePermissionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_imageId;

    Aws::Vector<ImagePermission> m_imagePermissions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
