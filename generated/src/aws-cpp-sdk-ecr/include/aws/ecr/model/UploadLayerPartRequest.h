/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class UploadLayerPartRequest : public ECRRequest
  {
  public:
    AWS_ECR_API UploadLayerPartRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UploadLayerPart"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Web Services account ID associated with the registry to which you
     * are uploading layer parts. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which you
     * are uploading layer parts. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which you
     * are uploading layer parts. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which you
     * are uploading layer parts. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which you
     * are uploading layer parts. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which you
     * are uploading layer parts. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline UploadLayerPartRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which you
     * are uploading layer parts. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline UploadLayerPartRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry to which you
     * are uploading layer parts. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline UploadLayerPartRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository to which you are uploading layer parts.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository to which you are uploading layer parts.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository to which you are uploading layer parts.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository to which you are uploading layer parts.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository to which you are uploading layer parts.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository to which you are uploading layer parts.</p>
     */
    inline UploadLayerPartRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository to which you are uploading layer parts.</p>
     */
    inline UploadLayerPartRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository to which you are uploading layer parts.</p>
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
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the layer part upload.</p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the layer part upload.</p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }

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
    inline UploadLayerPartRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the layer part upload.</p>
     */
    inline UploadLayerPartRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}


    /**
     * <p>The position of the first byte of the layer part witin the overall image
     * layer.</p>
     */
    inline long long GetPartFirstByte() const{ return m_partFirstByte; }

    /**
     * <p>The position of the first byte of the layer part witin the overall image
     * layer.</p>
     */
    inline bool PartFirstByteHasBeenSet() const { return m_partFirstByteHasBeenSet; }

    /**
     * <p>The position of the first byte of the layer part witin the overall image
     * layer.</p>
     */
    inline void SetPartFirstByte(long long value) { m_partFirstByteHasBeenSet = true; m_partFirstByte = value; }

    /**
     * <p>The position of the first byte of the layer part witin the overall image
     * layer.</p>
     */
    inline UploadLayerPartRequest& WithPartFirstByte(long long value) { SetPartFirstByte(value); return *this;}


    /**
     * <p>The position of the last byte of the layer part within the overall image
     * layer.</p>
     */
    inline long long GetPartLastByte() const{ return m_partLastByte; }

    /**
     * <p>The position of the last byte of the layer part within the overall image
     * layer.</p>
     */
    inline bool PartLastByteHasBeenSet() const { return m_partLastByteHasBeenSet; }

    /**
     * <p>The position of the last byte of the layer part within the overall image
     * layer.</p>
     */
    inline void SetPartLastByte(long long value) { m_partLastByteHasBeenSet = true; m_partLastByte = value; }

    /**
     * <p>The position of the last byte of the layer part within the overall image
     * layer.</p>
     */
    inline UploadLayerPartRequest& WithPartLastByte(long long value) { SetPartLastByte(value); return *this;}


    /**
     * <p>The base64-encoded layer part payload.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetLayerPartBlob() const{ return m_layerPartBlob; }

    /**
     * <p>The base64-encoded layer part payload.</p>
     */
    inline bool LayerPartBlobHasBeenSet() const { return m_layerPartBlobHasBeenSet; }

    /**
     * <p>The base64-encoded layer part payload.</p>
     */
    inline void SetLayerPartBlob(const Aws::Utils::ByteBuffer& value) { m_layerPartBlobHasBeenSet = true; m_layerPartBlob = value; }

    /**
     * <p>The base64-encoded layer part payload.</p>
     */
    inline void SetLayerPartBlob(Aws::Utils::ByteBuffer&& value) { m_layerPartBlobHasBeenSet = true; m_layerPartBlob = std::move(value); }

    /**
     * <p>The base64-encoded layer part payload.</p>
     */
    inline UploadLayerPartRequest& WithLayerPartBlob(const Aws::Utils::ByteBuffer& value) { SetLayerPartBlob(value); return *this;}

    /**
     * <p>The base64-encoded layer part payload.</p>
     */
    inline UploadLayerPartRequest& WithLayerPartBlob(Aws::Utils::ByteBuffer&& value) { SetLayerPartBlob(std::move(value)); return *this;}

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    long long m_partFirstByte;
    bool m_partFirstByteHasBeenSet = false;

    long long m_partLastByte;
    bool m_partLastByteHasBeenSet = false;

    Aws::Utils::ByteBuffer m_layerPartBlob;
    bool m_layerPartBlobHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
