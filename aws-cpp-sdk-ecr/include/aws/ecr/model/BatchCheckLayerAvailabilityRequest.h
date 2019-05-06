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
  class AWS_ECR_API BatchCheckLayerAvailabilityRequest : public ECRRequest
  {
  public:
    BatchCheckLayerAvailabilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCheckLayerAvailability"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS account ID associated with the registry that contains the image
     * layers to check. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry that contains the image
     * layers to check. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the registry that contains the image
     * layers to check. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that contains the image
     * layers to check. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the image
     * layers to check. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the image
     * layers to check. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline BatchCheckLayerAvailabilityRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the image
     * layers to check. If you do not specify a registry, the default registry is
     * assumed.</p>
     */
    inline BatchCheckLayerAvailabilityRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the image
     * layers to check. If you do not specify a registry, the default registry is
     * assumed.</p>
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
    bool m_registryIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    Aws::Vector<Aws::String> m_layerDigests;
    bool m_layerDigestsHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
