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
    AWS_ECR_API UploadLayerPartRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UploadLayerPart"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry to which you
     * are uploading layer parts. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    UploadLayerPartRequest& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository to which you are uploading layer parts.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    UploadLayerPartRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the layer part upload.</p>
     */
    inline const Aws::String& GetUploadId() const { return m_uploadId; }
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }
    template<typename UploadIdT = Aws::String>
    void SetUploadId(UploadIdT&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::forward<UploadIdT>(value); }
    template<typename UploadIdT = Aws::String>
    UploadLayerPartRequest& WithUploadId(UploadIdT&& value) { SetUploadId(std::forward<UploadIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position of the first byte of the layer part witin the overall image
     * layer.</p>
     */
    inline long long GetPartFirstByte() const { return m_partFirstByte; }
    inline bool PartFirstByteHasBeenSet() const { return m_partFirstByteHasBeenSet; }
    inline void SetPartFirstByte(long long value) { m_partFirstByteHasBeenSet = true; m_partFirstByte = value; }
    inline UploadLayerPartRequest& WithPartFirstByte(long long value) { SetPartFirstByte(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position of the last byte of the layer part within the overall image
     * layer.</p>
     */
    inline long long GetPartLastByte() const { return m_partLastByte; }
    inline bool PartLastByteHasBeenSet() const { return m_partLastByteHasBeenSet; }
    inline void SetPartLastByte(long long value) { m_partLastByteHasBeenSet = true; m_partLastByte = value; }
    inline UploadLayerPartRequest& WithPartLastByte(long long value) { SetPartLastByte(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The base64-encoded layer part payload.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetLayerPartBlob() const { return m_layerPartBlob; }
    inline bool LayerPartBlobHasBeenSet() const { return m_layerPartBlobHasBeenSet; }
    template<typename LayerPartBlobT = Aws::Utils::ByteBuffer>
    void SetLayerPartBlob(LayerPartBlobT&& value) { m_layerPartBlobHasBeenSet = true; m_layerPartBlob = std::forward<LayerPartBlobT>(value); }
    template<typename LayerPartBlobT = Aws::Utils::ByteBuffer>
    UploadLayerPartRequest& WithLayerPartBlob(LayerPartBlobT&& value) { SetLayerPartBlob(std::forward<LayerPartBlobT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet = false;

    long long m_partFirstByte{0};
    bool m_partFirstByteHasBeenSet = false;

    long long m_partLastByte{0};
    bool m_partLastByteHasBeenSet = false;

    Aws::Utils::ByteBuffer m_layerPartBlob{};
    bool m_layerPartBlobHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
