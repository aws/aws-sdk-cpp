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
  class AWS_ECR_API PutImageScanningConfigurationRequest : public ECRRequest
  {
  public:
    PutImageScanningConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutImageScanningConfiguration"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to update the image scanning configuration setting. If you do not
     * specify a registry, the default registry is assumed.</p>
     */
    inline const Aws::String& GetRegistryId() const{ return m_registryId; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to update the image scanning configuration setting. If you do not
     * specify a registry, the default registry is assumed.</p>
     */
    inline bool RegistryIdHasBeenSet() const { return m_registryIdHasBeenSet; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to update the image scanning configuration setting. If you do not
     * specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const Aws::String& value) { m_registryIdHasBeenSet = true; m_registryId = value; }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to update the image scanning configuration setting. If you do not
     * specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(Aws::String&& value) { m_registryIdHasBeenSet = true; m_registryId = std::move(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to update the image scanning configuration setting. If you do not
     * specify a registry, the default registry is assumed.</p>
     */
    inline void SetRegistryId(const char* value) { m_registryIdHasBeenSet = true; m_registryId.assign(value); }

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to update the image scanning configuration setting. If you do not
     * specify a registry, the default registry is assumed.</p>
     */
    inline PutImageScanningConfigurationRequest& WithRegistryId(const Aws::String& value) { SetRegistryId(value); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to update the image scanning configuration setting. If you do not
     * specify a registry, the default registry is assumed.</p>
     */
    inline PutImageScanningConfigurationRequest& WithRegistryId(Aws::String&& value) { SetRegistryId(std::move(value)); return *this;}

    /**
     * <p>The AWS account ID associated with the registry that contains the repository
     * in which to update the image scanning configuration setting. If you do not
     * specify a registry, the default registry is assumed.</p>
     */
    inline PutImageScanningConfigurationRequest& WithRegistryId(const char* value) { SetRegistryId(value); return *this;}


    /**
     * <p>The name of the repository in which to update the image scanning
     * configuration setting.</p>
     */
    inline const Aws::String& GetRepositoryName() const{ return m_repositoryName; }

    /**
     * <p>The name of the repository in which to update the image scanning
     * configuration setting.</p>
     */
    inline bool RepositoryNameHasBeenSet() const { return m_repositoryNameHasBeenSet; }

    /**
     * <p>The name of the repository in which to update the image scanning
     * configuration setting.</p>
     */
    inline void SetRepositoryName(const Aws::String& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = value; }

    /**
     * <p>The name of the repository in which to update the image scanning
     * configuration setting.</p>
     */
    inline void SetRepositoryName(Aws::String&& value) { m_repositoryNameHasBeenSet = true; m_repositoryName = std::move(value); }

    /**
     * <p>The name of the repository in which to update the image scanning
     * configuration setting.</p>
     */
    inline void SetRepositoryName(const char* value) { m_repositoryNameHasBeenSet = true; m_repositoryName.assign(value); }

    /**
     * <p>The name of the repository in which to update the image scanning
     * configuration setting.</p>
     */
    inline PutImageScanningConfigurationRequest& WithRepositoryName(const Aws::String& value) { SetRepositoryName(value); return *this;}

    /**
     * <p>The name of the repository in which to update the image scanning
     * configuration setting.</p>
     */
    inline PutImageScanningConfigurationRequest& WithRepositoryName(Aws::String&& value) { SetRepositoryName(std::move(value)); return *this;}

    /**
     * <p>The name of the repository in which to update the image scanning
     * configuration setting.</p>
     */
    inline PutImageScanningConfigurationRequest& WithRepositoryName(const char* value) { SetRepositoryName(value); return *this;}


    /**
     * <p>The image scanning configuration for the repository. This setting determines
     * whether images are scanned for known vulnerabilities after being pushed to the
     * repository.</p>
     */
    inline const ImageScanningConfiguration& GetImageScanningConfiguration() const{ return m_imageScanningConfiguration; }

    /**
     * <p>The image scanning configuration for the repository. This setting determines
     * whether images are scanned for known vulnerabilities after being pushed to the
     * repository.</p>
     */
    inline bool ImageScanningConfigurationHasBeenSet() const { return m_imageScanningConfigurationHasBeenSet; }

    /**
     * <p>The image scanning configuration for the repository. This setting determines
     * whether images are scanned for known vulnerabilities after being pushed to the
     * repository.</p>
     */
    inline void SetImageScanningConfiguration(const ImageScanningConfiguration& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = value; }

    /**
     * <p>The image scanning configuration for the repository. This setting determines
     * whether images are scanned for known vulnerabilities after being pushed to the
     * repository.</p>
     */
    inline void SetImageScanningConfiguration(ImageScanningConfiguration&& value) { m_imageScanningConfigurationHasBeenSet = true; m_imageScanningConfiguration = std::move(value); }

    /**
     * <p>The image scanning configuration for the repository. This setting determines
     * whether images are scanned for known vulnerabilities after being pushed to the
     * repository.</p>
     */
    inline PutImageScanningConfigurationRequest& WithImageScanningConfiguration(const ImageScanningConfiguration& value) { SetImageScanningConfiguration(value); return *this;}

    /**
     * <p>The image scanning configuration for the repository. This setting determines
     * whether images are scanned for known vulnerabilities after being pushed to the
     * repository.</p>
     */
    inline PutImageScanningConfigurationRequest& WithImageScanningConfiguration(ImageScanningConfiguration&& value) { SetImageScanningConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_registryId;
    bool m_registryIdHasBeenSet;

    Aws::String m_repositoryName;
    bool m_repositoryNameHasBeenSet;

    ImageScanningConfiguration m_imageScanningConfiguration;
    bool m_imageScanningConfigurationHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
