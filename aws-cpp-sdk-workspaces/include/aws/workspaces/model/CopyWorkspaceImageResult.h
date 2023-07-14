﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
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
namespace WorkSpaces
{
namespace Model
{
  class AWS_WORKSPACES_API CopyWorkspaceImageResult
  {
  public:
    CopyWorkspaceImageResult();
    CopyWorkspaceImageResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CopyWorkspaceImageResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline CopyWorkspaceImageResult& WithImageId(const Aws::String& value) { SetImageId(value); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline CopyWorkspaceImageResult& WithImageId(Aws::String&& value) { SetImageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the image.</p>
     */
    inline CopyWorkspaceImageResult& WithImageId(const char* value) { SetImageId(value); return *this;}

  private:

    Aws::String m_imageId;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
