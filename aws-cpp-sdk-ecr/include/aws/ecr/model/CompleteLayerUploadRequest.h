/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class AWS_ECR_API CompleteLayerUploadRequest : public ECRRequest
  {
  public:
    CompleteLayerUploadRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CompleteLayerUpload"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS account ID associated with the registry to which to upload layers. If
     * you do not specify a registry, the default registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry to which to upload layers. If
     * you do not specify a registry, the default registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the registry to which to upload layers. If
     * you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry to which to upload layers. If
     * you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the registry to which to upload layers. If
     * you do not specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry to which to upload layers. If
     * you do not specify a registry, the default registry is assumed.</p>
     */
    inline CompleteLayerUploadRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry to which to upload layers. If
     * you do not specify a registry, the default registry is assumed.</p>
     */
    inline CompleteLayerUploadRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the registry to which to upload layers. If
     * you do not specify a registry, the default registry is assumed.</p>
     */
    inline CompleteLayerUploadRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository to associate with the image layer.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository to associate with the image layer.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository to associate with the image layer.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository to associate with the image layer.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository to associate with the image layer.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository to associate with the image layer.</p>
     */
    inline CompleteLayerUploadRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository to associate with the image layer.</p>
     */
    inline CompleteLayerUploadRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository to associate with the image layer.</p>
     */
    inline CompleteLayerUploadRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the image layer.</p>
     */
    inline const Aws::String& GetUploadId() const{ return m_uploadId; }

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the image layer.</p>
     */
    inline bool UploadIdHasBeenSet() const { return m_uploadIdHasBeenSet; }

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the image layer.</p>
     */
    inline void SetUploadId(const Aws::String& value) { m_uploadIdHasBeenSet = true; m_uploadId = value; }

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the image layer.</p>
     */
    inline void SetUploadId(Aws::String&& value) { m_uploadIdHasBeenSet = true; m_uploadId = std::move(value); }

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the image layer.</p>
     */
    inline void SetUploadId(const char* value) { m_uploadIdHasBeenSet = true; m_uploadId.assign(value); }

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the image layer.</p>
     */
    inline CompleteLayerUploadRequest& WithUploadId(const Aws::String& value) { SetUploadId(value); return *this;}

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the image layer.</p>
     */
    inline CompleteLayerUploadRequest& WithUploadId(Aws::String&& value) { SetUploadId(std::move(value)); return *this;}

    /**
     * <p>The upload ID from a previous <a>InitiateLayerUpload</a> operation to
     * associate with the image layer.</p>
     */
    inline CompleteLayerUploadRequest& WithUploadId(const char* value) { SetUploadId(value); return *this;}


    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerDigests() const{ return m_layerDigests; }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline bool LayerDigestsHasBeenSet() const { return m_layerDigestsHasBeenSet; }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline void SetLayerDigests(const Aws::Vector<Aws::String>& value) { m_layerDigestsHasBeenSet = true; m_layerDigests = value; }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline void SetLayerDigests(Aws::Vector<Aws::String>&& value) { m_layerDigestsHasBeenSet = true; m_layerDigests = std::move(value); }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline CompleteLayerUploadRequest& WithLayerDigests(const Aws::Vector<Aws::String>& value) { SetLayerDigests(value); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline CompleteLayerUploadRequest& WithLayerDigests(Aws::Vector<Aws::String>&& value) { SetLayerDigests(std::move(value)); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline CompleteLayerUploadRequest& AddLayerDigests(const Aws::String& value) { m_layerDigestsHasBeenSet = true; m_layerDigests.push_back(value); return *this; }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline CompleteLayerUploadRequest& AddLayerDigests(Aws::String&& value) { m_layerDigestsHasBeenSet = true; m_layerDigests.push_back(std::move(value)); return *this; }

    /**
     * <p>The <code>sha256</code> digest of the image layer.</p>
     */
    inline CompleteLayerUploadRequest& AddLayerDigests(const char* value) { m_layerDigestsHasBeenSet = true; m_layerDigests.push_back(value); return *this; }

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::String m_uploadId;
    bool m_uploadIdHasBeenSet;

    Aws::Vector<Aws::String> m_layerDigests;
    bool m_layerDigestsHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
