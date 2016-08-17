/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class AWS_ECR_API UploadLayerPartRequest : public ECRRequest
  {
  public:
    UploadLayerPartRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The AWS account ID associated with the registry that you are uploading layer
     * parts to. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry that you are uploading layer
     * parts to. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that you are uploading layer
     * parts to. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that you are uploading layer
     * parts to. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry that you are uploading layer
     * parts to. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline UploadLayerPartRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that you are uploading layer
     * parts to. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline UploadLayerPartRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that you are uploading layer
     * parts to. If you do not specify a registry, the default registry is assumed.</p>
     */
    inline UploadLayerPartRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}

    /**
     * <p>The name of the repository that you are uploading layer parts to.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that you are uploading layer parts to.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that you are uploading layer parts to.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that you are uploading layer parts to.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that you are uploading layer parts to.</p>
     */
    inline UploadLayerPartRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that you are uploading layer parts to.</p>
     */
    inline UploadLayerPartRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that you are uploading layer parts to.</p>
     */
    inline UploadLayerPartRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the layer part upload.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the layer part upload.</p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the layer part upload.</p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the layer part upload.</p>
     */
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the layer part upload.</p>
     */
    inline UploadLayerPartRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the layer part upload.</p>
     */
    inline UploadLayerPartRequest& WithUploadId(Aws::String&& value) { SetUploadId(value); return *this;}

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the layer part upload.</p>
     */
    inline UploadLayerPartRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}

    /**
     * <p>The integer value of the first byte of the layer part.</p>
     */
    inline long long GetPartFirstByte() const{ return m_partFirstByte; }

    /**
     * <p>The integer value of the first byte of the layer part.</p>
     */
    inline void SetPartFirstByte(long long value) { m_partFirstByteHasBeenSet = true; m_partFirstByte = value; }

    /**
     * <p>The integer value of the first byte of the layer part.</p>
     */
    inline UploadLayerPartRequest& WithPartFirstByte(long long value) { SetPartFirstByte(value); return *this;}

    /**
     * <p>The integer value of the last byte of the layer part.</p>
     */
    inline long long GetPartLastByte() const{ return m_partLastByte; }

    /**
     * <p>The integer value of the last byte of the layer part.</p>
     */
    inline void SetPartLastByte(long long value) { m_partLastByteHasBeenSet = true; m_partLastByte = value; }

    /**
     * <p>The integer value of the last byte of the layer part.</p>
     */
    inline UploadLayerPartRequest& WithPartLastByte(long long value) { SetPartLastByte(value); return *this;}

    /**
     * <p>The base64-encoded layer part payload.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetLayerPartBlob() const{ return m_layerPartBlob; }

    /**
     * <p>The base64-encoded layer part payload.</p>
     */
    inline void SetLayerPartBlob(const Aws::Utils::ByteBuffer& value) { m_layerPartBlobHasBeenSet = true; m_layerPartBlob = value; }

    /**
     * <p>The base64-encoded layer part payload.</p>
     */
    inline void SetLayerPartBlob(Aws::Utils::ByteBuffer&& value) { m_layerPartBlobHasBeenSet = true; m_layerPartBlob = value; }

    /**
     * <p>The base64-encoded layer part payload.</p>
     */
    inline UploadLayerPartRequest& WithLayerPartBlob(const Aws::Utils::ByteBuffer& value) { SetLayerPartBlob(value); return *this;}

    /**
     * <p>The base64-encoded layer part payload.</p>
     */
    inline UploadLayerPartRequest& WithLayerPartBlob(Aws::Utils::ByteBuffer&& value) { SetLayerPartBlob(value); return *this;}

  private:
    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;
    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;
    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet;
    long long m_partFirstByte;
    bool m_partFirstByteHasBeenSet;
    long long m_partLastByte;
    bool m_partLastByteHasBeenSet;
    Aws::Utils::ByteBuffer m_layerPartBlob;
    bool m_layerPartBlobHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
