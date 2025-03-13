/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr-public/ECRPublic_EXPORTS.h>
#include <aws/ecr-public/ECRPublicRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ECRPublic
{
namespace Model
{

  /**
   */
  class BatchCheckLayerAvailabilityRequest : public ECRPublicRequest
  {
  public:
    AWS_ECRPUBLIC_API BatchCheckLayerAvailabilityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCheckLayerAvailability"; }

    AWS_ECRPUBLIC_API Aws::String SerializePayload() const override;

    AWS_ECRPUBLIC_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID, or registry alias, associated with the
     * public registry that contains the image layers to check. If you do not specify a
     * registry, the default public registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    BatchCheckLayerAvailabilityRequest& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository that's associated with the image layers to
     * check.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    BatchCheckLayerAvailabilityRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The digests of the image layers to check.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLayerDigests() const { return m_layerDigests; }
    inline bool LayerDigestsHasBeenSet() const { return m_layerDigestsHasBeenSet; }
    template<typename LayerDigestsT = Aws::Vector<Aws::String>>
    void SetLayerDigests(LayerDigestsT&& value) { m_layerDigestsHasBeenSet = true; m_layerDigests = std::forward<LayerDigestsT>(value); }
    template<typename LayerDigestsT = Aws::Vector<Aws::String>>
    BatchCheckLayerAvailabilityRequest& WithLayerDigests(LayerDigestsT&& value) { SetLayerDigests(std::forward<LayerDigestsT>(value)); return *this;}
    template<typename LayerDigestsT = Aws::String>
    BatchCheckLayerAvailabilityRequest& AddLayerDigests(LayerDigestsT&& value) { m_layerDigestsHasBeenSet = true; m_layerDigests.emplace_back(std::forward<LayerDigestsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_layerDigests;
    bool m_layerDigestsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECRPublic
} // namespace Aws
