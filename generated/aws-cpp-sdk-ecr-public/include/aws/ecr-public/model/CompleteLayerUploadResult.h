﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
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
namespace ECRPublic
{
namespace Model
{
  class AWS_ECRPUBLIC_API CompleteLayerUploadResult
  {
  public:
    CompleteLayerUploadResult();
    CompleteLayerUploadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CompleteLayerUploadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The public registry ID associated with the request.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The public registry ID associated with the request.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryId = value; }

    /**
     * <p>The public registry ID associated with the request.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryId = std::move(value); }

    /**
     * <p>The public registry ID associated with the request.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryId.assign(value); }

    /**
     * <p>The public registry ID associated with the request.</p>
     */
    inline CompleteLayerUploadResult& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The public registry ID associated with the request.</p>
     */
    inline CompleteLayerUploadResult& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The public registry ID associated with the request.</p>
     */
    inline CompleteLayerUploadResult& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


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
    inline CompleteLayerUploadResult& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline CompleteLayerUploadResult& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The repository name associated with the request.</p>
     */
    inline CompleteLayerUploadResult& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The upload ID associated with the layer.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p>The upload ID associated with the layer.</p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadId = value; }

    /**
     * <p>The upload ID associated with the layer.</p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadId = std::move(value); }

    /**
     * <p>The upload ID associated with the layer.</p>
     */
    inline void SetUploadId(const char* value) { m_uploadId.assign(value); }

    /**
     * <p>The upload ID associated with the layer.</p>
     */
    inline CompleteLayerUploadResult& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p>The upload ID associated with the layer.</p>
     */
    inline CompleteLayerUploadResult& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p>The upload ID associated with the layer.</p>
     */
    inline CompleteLayerUploadResult& WithUploadId(const char* value) { SetUploadId(value); return *this;}


    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline const Aws::String& GetLayerDigest() const{ return m_layerDigest; }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline void SetLayerDigest(const Aws::String& value) { m_layerDigest = value; }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline void SetLayerDigest(Aws::String&& value) { m_layerDigest = std::move(value); }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline void SetLayerDigest(const char* value) { m_layerDigest.assign(value); }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline CompleteLayerUploadResult& WithLayerDigest(const Aws::String& value) { SetLayerDigest(value); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline CompleteLayerUploadResult& WithLayerDigest(Aws::String&& value) { SetLayerDigest(std::move(value)); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline CompleteLayerUploadResult& WithLayerDigest(const char* value) { SetLayerDigest(value); return *this;}

  private:

    Aws::String m_registryId;

    Aws::String m_repositoryName;

    Aws::String m_uploadId;

    Aws::String m_layerDigest;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
