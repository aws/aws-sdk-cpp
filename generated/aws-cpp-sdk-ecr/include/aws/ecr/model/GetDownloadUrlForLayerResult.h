﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
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
namespace ECR
{
namespace Model
{
  class AWS_ECR_API GetDownloadUrlForLayerResult
  {
  public:
    GetDownloadUrlForLayerResult();
    GetDownloadUrlForLayerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetDownloadUrlForLayerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The pre-signed Amazon S3 download URL for the requested layer.</p>
     */
    inline const Aws::String& GetDownloadUrl() const{ return m_downloadUrl; }

    /**
     * <p>The pre-signed Amazon S3 download URL for the requested layer.</p>
     */
    inline void SetDownloadUrl(const Aws::String& value) { m_downloadUrl = value; }

    /**
     * <p>The pre-signed Amazon S3 download URL for the requested layer.</p>
     */
    inline void SetDownloadUrl(Aws::String&& value) { m_downloadUrl = std::move(value); }

    /**
     * <p>The pre-signed Amazon S3 download URL for the requested layer.</p>
     */
    inline void SetDownloadUrl(const char* value) { m_downloadUrl.assign(value); }

    /**
     * <p>The pre-signed Amazon S3 download URL for the requested layer.</p>
     */
    inline GetDownloadUrlForLayerResult& WithDownloadUrl(const Aws::String& value) { SetDownloadUrl(value); return *this;}

    /**
     * <p>The pre-signed Amazon S3 download URL for the requested layer.</p>
     */
    inline GetDownloadUrlForLayerResult& WithDownloadUrl(Aws::String&& value) { SetDownloadUrl(std::move(value)); return *this;}

    /**
     * <p>The pre-signed Amazon S3 download URL for the requested layer.</p>
     */
    inline GetDownloadUrlForLayerResult& WithDownloadUrl(const char* value) { SetDownloadUrl(value); return *this;}


    /**
     * <p>The digest of the image layer to download.</p>
     */
    inline const Aws::String& GetLayerDigest() const{ return m_layerDigest; }

    /**
     * <p>The digest of the image layer to download.</p>
     */
    inline void SetLayerDigest(const Aws::String& value) { m_layerDigest = value; }

    /**
     * <p>The digest of the image layer to download.</p>
     */
    inline void SetLayerDigest(Aws::String&& value) { m_layerDigest = std::move(value); }

    /**
     * <p>The digest of the image layer to download.</p>
     */
    inline void SetLayerDigest(const char* value) { m_layerDigest.assign(value); }

    /**
     * <p>The digest of the image layer to download.</p>
     */
    inline GetDownloadUrlForLayerResult& WithLayerDigest(const Aws::String& value) { SetLayerDigest(value); return *this;}

    /**
     * <p>The digest of the image layer to download.</p>
     */
    inline GetDownloadUrlForLayerResult& WithLayerDigest(Aws::String&& value) { SetLayerDigest(std::move(value)); return *this;}

    /**
     * <p>The digest of the image layer to download.</p>
     */
    inline GetDownloadUrlForLayerResult& WithLayerDigest(const char* value) { SetLayerDigest(value); return *this;}

  private:

    Aws::String m_downloadUrl;

    Aws::String m_layerDigest;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
