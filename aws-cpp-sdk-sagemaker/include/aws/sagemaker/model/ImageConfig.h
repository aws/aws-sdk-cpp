/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/RepositoryAccessMode.h>
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
  class AWS_SAGEMAKER_API ImageConfig
  {
  public:
    ImageConfig();
    ImageConfig(Aws::Utils::Json::JsonView jsonValue);
    ImageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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

  private:

    RepositoryAccessMode m_repositoryAccessMode;
    bool m_repositoryAccessModeHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
