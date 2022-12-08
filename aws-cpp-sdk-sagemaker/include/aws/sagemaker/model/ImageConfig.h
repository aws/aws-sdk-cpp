/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RepositoryAccessMode.h>
#include <aws/sagemaker/model/RepositoryAuthConfig.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>Specifies whether the model container is in Amazon ECR or a private Docker
   * registry accessible from your Amazon Virtual Private Cloud (VPC).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ImageConfig">AWS
   * API Reference</a></p>
   */
  class ImageConfig
  {
  public:
    AWS_SAGEMAKER_API ImageConfig();
    AWS_SAGEMAKER_API ImageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ImageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Set this to one of the following values:</p> <ul> <li> <p>
     * <code>Platform</code> - The model image is hosted in Amazon ECR.</p> </li> <li>
     * <p> <code>Vpc</code> - The model image is hosted in a private Docker registry in
     * your VPC.</p> </li> </ul>
     */
    inline const RepositoryAccessMode& GetRepositoryAccessMode() const{ return m_repositoryAccessMode; }

    /**
     * <p>Set this to one of the following values:</p> <ul> <li> <p>
     * <code>Platform</code> - The model image is hosted in Amazon ECR.</p> </li> <li>
     * <p> <code>Vpc</code> - The model image is hosted in a private Docker registry in
     * your VPC.</p> </li> </ul>
     */
    inline bool RepositoryAccessModeHasBeenSet() const { return m_repositoryAccessModeHasBeenSet; }

    /**
     * <p>Set this to one of the following values:</p> <ul> <li> <p>
     * <code>Platform</code> - The model image is hosted in Amazon ECR.</p> </li> <li>
     * <p> <code>Vpc</code> - The model image is hosted in a private Docker registry in
     * your VPC.</p> </li> </ul>
     */
    inline void SetRepositoryAccessMode(const RepositoryAccessMode& value) { m_repositoryAccessModeHasBeenSet = true; m_repositoryAccessMode = value; }

    /**
     * <p>Set this to one of the following values:</p> <ul> <li> <p>
     * <code>Platform</code> - The model image is hosted in Amazon ECR.</p> </li> <li>
     * <p> <code>Vpc</code> - The model image is hosted in a private Docker registry in
     * your VPC.</p> </li> </ul>
     */
    inline void SetRepositoryAccessMode(RepositoryAccessMode&& value) { m_repositoryAccessModeHasBeenSet = true; m_repositoryAccessMode = std::move(value); }

    /**
     * <p>Set this to one of the following values:</p> <ul> <li> <p>
     * <code>Platform</code> - The model image is hosted in Amazon ECR.</p> </li> <li>
     * <p> <code>Vpc</code> - The model image is hosted in a private Docker registry in
     * your VPC.</p> </li> </ul>
     */
    inline ImageConfig& WithRepositoryAccessMode(const RepositoryAccessMode& value) { SetRepositoryAccessMode(value); return *this;}

    /**
     * <p>Set this to one of the following values:</p> <ul> <li> <p>
     * <code>Platform</code> - The model image is hosted in Amazon ECR.</p> </li> <li>
     * <p> <code>Vpc</code> - The model image is hosted in a private Docker registry in
     * your VPC.</p> </li> </ul>
     */
    inline ImageConfig& WithRepositoryAccessMode(RepositoryAccessMode&& value) { SetRepositoryAccessMode(std::move(value)); return *this;}


    /**
     * <p>(Optional) Specifies an authentication configuration for the private docker
     * registry where your model image is hosted. Specify a value for this property
     * only if you specified <code>Vpc</code> as the value for the
     * <code>RepositoryAccessMode</code> field, and the private Docker registry where
     * the model image is hosted requires authentication.</p>
     */
    inline const RepositoryAuthConfig& GetRepositoryAuthConfig() const{ return m_repositoryAuthConfig; }

    /**
     * <p>(Optional) Specifies an authentication configuration for the private docker
     * registry where your model image is hosted. Specify a value for this property
     * only if you specified <code>Vpc</code> as the value for the
     * <code>RepositoryAccessMode</code> field, and the private Docker registry where
     * the model image is hosted requires authentication.</p>
     */
    inline bool RepositoryAuthConfigHasBeenSet() const { return m_repositoryAuthConfigHasBeenSet; }

    /**
     * <p>(Optional) Specifies an authentication configuration for the private docker
     * registry where your model image is hosted. Specify a value for this property
     * only if you specified <code>Vpc</code> as the value for the
     * <code>RepositoryAccessMode</code> field, and the private Docker registry where
     * the model image is hosted requires authentication.</p>
     */
    inline void SetRepositoryAuthConfig(const RepositoryAuthConfig& value) { m_repositoryAuthConfigHasBeenSet = true; m_repositoryAuthConfig = value; }

    /**
     * <p>(Optional) Specifies an authentication configuration for the private docker
     * registry where your model image is hosted. Specify a value for this property
     * only if you specified <code>Vpc</code> as the value for the
     * <code>RepositoryAccessMode</code> field, and the private Docker registry where
     * the model image is hosted requires authentication.</p>
     */
    inline void SetRepositoryAuthConfig(RepositoryAuthConfig&& value) { m_repositoryAuthConfigHasBeenSet = true; m_repositoryAuthConfig = std::move(value); }

    /**
     * <p>(Optional) Specifies an authentication configuration for the private docker
     * registry where your model image is hosted. Specify a value for this property
     * only if you specified <code>Vpc</code> as the value for the
     * <code>RepositoryAccessMode</code> field, and the private Docker registry where
     * the model image is hosted requires authentication.</p>
     */
    inline ImageConfig& WithRepositoryAuthConfig(const RepositoryAuthConfig& value) { SetRepositoryAuthConfig(value); return *this;}

    /**
     * <p>(Optional) Specifies an authentication configuration for the private docker
     * registry where your model image is hosted. Specify a value for this property
     * only if you specified <code>Vpc</code> as the value for the
     * <code>RepositoryAccessMode</code> field, and the private Docker registry where
     * the model image is hosted requires authentication.</p>
     */
    inline ImageConfig& WithRepositoryAuthConfig(RepositoryAuthConfig&& value) { SetRepositoryAuthConfig(std::move(value)); return *this;}

  private:

    RepositoryAccessMode m_repositoryAccessMode;
    bool m_repositoryAccessModeHasBeenSet = false;

    RepositoryAuthConfig m_repositoryAuthConfig;
    bool m_repositoryAuthConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
