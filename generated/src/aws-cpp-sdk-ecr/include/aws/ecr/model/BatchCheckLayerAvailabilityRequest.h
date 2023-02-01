/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class BatchCheckLayerAvailabilityRequest : public ECRRequest
  {
  public:
    AWS_ECR_API BatchCheckLayerAvailabilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCheckLayerAvailability"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image layers to check. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image layers to check. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image layers to check. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image layers to check. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image layers to check. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image layers to check. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline BatchCheckLayerAvailabilityRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image layers to check. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline BatchCheckLayerAvailabilityRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the image layers to check. If you do not specify a registry, the default
     * registry is assumed.</p>
     */
    inline BatchCheckLayerAvailabilityRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository that is associated with the image layers to
     * check.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository that is associated with the image layers to
     * check.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository that is associated with the image layers to
     * check.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository that is associated with the image layers to
     * check.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository that is associated with the image layers to
     * check.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository that is associated with the image layers to
     * check.</p>
     */
    inline BatchCheckLayerAvailabilityRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository that is associated with the image layers to
     * check.</p>
     */
    inline BatchCheckLayerAvailabilityRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository that is associated with the image layers to
     * check.</p>
     */
    inline BatchCheckLayerAvailabilityRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The digests of the image layers to check.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerDigests() const{ return m_layerDigests; }

    /**
     * <p>The digests of the image layers to check.</p>
     */
    inline bool LayerDigestsHasBeenSet() const { return m_layerDigestsHasBeenSet; }

    /**
     * <p>The digests of the image layers to check.</p>
     */
    inline void SetLayerDigests(const Aws::Vector<Aws::String>& value) { m_layerDigestsHasBeenSet = true; m_layerDigests = value; }

    /**
     * <p>The digests of the image layers to check.</p>
     */
    inline void SetLayerDigests(Aws::Vector<Aws::String>&& value) { m_layerDigestsHasBeenSet = true; m_layerDigests = std::move(value); }

    /**
     * <p>The digests of the image layers to check.</p>
     */
    inline BatchCheckLayerAvailabilityRequest& WithLayerDigests(const Aws::Vector<Aws::String>& value) { SetLayerDigests(value); return *this;}

    /**
     * <p>The digests of the image layers to check.</p>
     */
    inline BatchCheckLayerAvailabilityRequest& WithLayerDigests(Aws::Vector<Aws::String>&& value) { SetLayerDigests(std::move(value)); return *this;}

    /**
     * <p>The digests of the image layers to check.</p>
     */
    inline BatchCheckLayerAvailabilityRequest& AddLayerDigests(const Aws::String& value) { m_layerDigestsHasBeenSet = true; m_layerDigests.push_back(value); return *this; }

    /**
     * <p>The digests of the image layers to check.</p>
     */
    inline BatchCheckLayerAvailabilityRequest& AddLayerDigests(Aws::String&& value) { m_layerDigestsHasBeenSet = true; m_layerDigests.push_back(std::move(value)); return *this; }

    /**
     * <p>The digests of the image layers to check.</p>
     */
    inline BatchCheckLayerAvailabilityRequest& AddLayerDigests(const char* value) { m_layerDigestsHasBeenSet = true; m_layerDigests.push_back(value); return *this; }

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_layerDigests;
    bool m_layerDigestsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
