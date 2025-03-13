/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/ECRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecr/model/ImageScanningConfiguration.h>
#include <utility>

namespace Aws
{
namespace ECR
{
namespace Model
{

  /**
   */
  class PutImageScanningConfigurationRequest : public ECRRequest
  {
  public:
    AWS_ECR_API PutImageScanningConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutImageScanningConfiguration"; }

    AWS_ECR_API Aws::String SerializePayload() const override;

    AWS_ECR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID associated with the registry that contains
     * the repository in which to update the image scanning configuration setting. If
     * you do not specify a registry, the default registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const { return m_registryId; }
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }
    template<typename RegistryIdT = Aws::String>
    void SetRegistryId(RegistryIdT&& value) { m_registryIdHasBeenSet = true; m_registryId = std::forward<RegistryIdT>(value); }
    template<typename RegistryIdT = Aws::String>
    PutImageScanningConfigurationRequest& WithRegistryId(RegistryIdT&& value) { SetRegistryId(std::forward<RegistryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the repository in which to update the image scanning
     * configuration setting.</p>
     */
    inline const Aws::String& GetRepositoryName() const { return m_repositoryName; }
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }
    template<typename RepositoryNameT = Aws::String>
    void SetRepositoryName(RepositoryNameT&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::forward<RepositoryNameT>(value); }
    template<typename RepositoryNameT = Aws::String>
    PutImageScanningConfigurationRequest& WithRepositoryName(RepositoryNameT&& value) { SetRepositoryName(std::forward<RepositoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The image scanning configuration for the repository. This setting determines
     * whether images are scanned for known vulnerabilities after being pushed to the
     * repository.</p>
     */
    inline const ImageScanningConfiguration& GetImageScanningConfiguration() const { return m_imageScanningConfiguration; }
    inline bool ImageScanningConfigurationHasBeenSet() const { return m_imageScanningConfigurationHasBeenSet; }
    template<typename ImageScanningConfigurationT = ImageScanningConfiguration>
    void SetImageScanningConfiguration(ImageScanningConfigurationT&& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = std::forward<ImageScanningConfigurationT>(value); }
    template<typename ImageScanningConfigurationT = ImageScanningConfiguration>
    PutImageScanningConfigurationRequest& WithImageScanningConfiguration(ImageScanningConfigurationT&& value) { SetImageScanningConfiguration(std::forward<ImageScanningConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet = false;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet = false;

    ImageScanningConfiguration m_imageScanningConfiguration;
    bool m_imageScanningConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
