/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/batch/Batch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Batch
{
namespace Model
{

  /**
   * <p>Provides information used to select Amazon Machine Images (AMIs) for
   * instances in the compute environment. If <code>Ec2Configuration</code> isn't
   * specified, the default is <code>ECS_AL2</code> (<a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
   * Linux 2</a>).</p>  <p>This object isn't applicable to jobs that are
   * running on Fargate resources.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/Ec2Configuration">AWS
   * API Reference</a></p>
   */
  class Ec2Configuration
  {
  public:
    AWS_BATCH_API Ec2Configuration() = default;
    AWS_BATCH_API Ec2Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Ec2Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The image type to match with the instance type to select an AMI. The
     * supported values are different for <code>ECS</code> and <code>EKS</code>
     * resources.</p> <dl> <dt>ECS</dt> <dd> <p>If the <code>imageIdOverride</code>
     * parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * ECS-optimized Amazon Linux 2 AMI</a> (<code>ECS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon ECS
     * optimized AMI for that image type that's supported by Batch is used.</p>
     *  <p>Amazon Web Services will end support for Amazon ECS optimized
     * AL2-optimized and AL2-accelerated AMIs. Starting in January 2026, Batch will
     * change the default AMI for new Amazon ECS compute environments from Amazon Linux
     * 2 to Amazon Linux 2023. We recommend migrating Batch Amazon ECS compute
     * environments to Amazon Linux 2023 to maintain optimal performance and security.
     * For more information on upgrading from AL2 to AL2023, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/ecs-migration-2023.html">How
     * to migrate from ECS AL2 to ECS AL2023</a> in the <i>Batch User Guide</i>.</p>
     *  <dl> <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>ECS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>: Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> <dt>ECS_AL2023</dt> <dd> <p>
     * <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * Linux 2023</a>: Batch supports Amazon Linux 2023.</p>  <p>Amazon Linux
     * 2023 does not support <code>A1</code> instances.</p>  </dd>
     * <dt>ECS_AL2023_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2023 (GPU)</a>: For all GPU instance families and can be used for all non
     * Amazon Web Services Graviton-based instance types.</p> 
     * <p>ECS_AL2023_NVIDIA doesn't support <code>p3</code> and <code>g3</code>
     * instance types.</p>  </dd> </dl> </dd> <dt>EKS</dt> <dd> <p>If the
     * <code>imageIdOverride</code> parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * EKS-optimized Amazon Linux AMI</a> (<code>EKS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon EKS
     * optimized AMI for that image type that Batch supports is used.</p> 
     * <p>Starting end of October 2025 Amazon EKS optimized Amazon Linux 2023 AMIs will
     * be the default on Batch for EKS versions prior to 1.33. Starting from Kubernetes
     * version 1.33, EKS optimized Amazon Linux 2023 AMIs will be the default when it
     * becomes supported on Batch.</p> <p>Amazon Web Services will end support for
     * Amazon EKS AL2-optimized and AL2-accelerated AMIs, starting 11/26/25. You can
     * continue using Batch-provided Amazon EKS optimized Amazon Linux 2 AMIs on your
     * Amazon EKS compute environments beyond the 11/26/25 end-of-support date, these
     * compute environments will no longer receive any new software updates, security
     * patches, or bug fixes from Amazon Web Services. For more information on
     * upgrading from AL2 to AL2023, see <a
     * href="https://docs.aws.amazon.com/batch/latest/userguide/eks-migration-2023.html">How
     * to upgrade from EKS AL2 to EKS AL2023</a> in the <i>Batch User Guide</i>.</p>
     *  <dl> <dt>EKS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>EKS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2 (accelerated)</a>: Default for all GPU instance families (for example,
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> <dt>EKS_AL2023</dt> <dd> <p>
     * <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2023</a>: Batch supports Amazon Linux 2023.</p>  <p>Amazon Linux
     * 2023 does not support <code>A1</code> instances.</p>  </dd>
     * <dt>EKS_AL2023_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2023 (accelerated)</a>: GPU instance families and can be used for all non
     * Amazon Web Services Graviton-based instance types.</p> </dd> </dl> </dd> </dl>
     */
    inline const Aws::String& GetImageType() const { return m_imageType; }
    inline bool ImageTypeHasBeenSet() const { return m_imageTypeHasBeenSet; }
    template<typename ImageTypeT = Aws::String>
    void SetImageType(ImageTypeT&& value) { m_imageTypeHasBeenSet = true; m_imageType = std::forward<ImageTypeT>(value); }
    template<typename ImageTypeT = Aws::String>
    Ec2Configuration& WithImageType(ImageTypeT&& value) { SetImageType(std::forward<ImageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AMI ID used for instances launched in the compute environment that match
     * the image type. This setting overrides the <code>imageId</code> set in the
     * <code>computeResource</code> object.</p>  <p>The AMI that you choose for a
     * compute environment must match the architecture of the instance types that you
     * intend to use for that compute environment. For example, if your compute
     * environment uses A1 instance types, the compute resource AMI that you choose
     * must support ARM instances. Amazon ECS vends both x86 and ARM versions of the
     * Amazon ECS-optimized Amazon Linux 2 AMI. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#ecs-optimized-ami-linux-variants.html">Amazon
     * ECS-optimized Amazon Linux 2 AMI</a> in the <i>Amazon Elastic Container Service
     * Developer Guide</i>.</p> 
     */
    inline const Aws::String& GetImageIdOverride() const { return m_imageIdOverride; }
    inline bool ImageIdOverrideHasBeenSet() const { return m_imageIdOverrideHasBeenSet; }
    template<typename ImageIdOverrideT = Aws::String>
    void SetImageIdOverride(ImageIdOverrideT&& value) { m_imageIdOverrideHasBeenSet = true; m_imageIdOverride = std::forward<ImageIdOverrideT>(value); }
    template<typename ImageIdOverrideT = Aws::String>
    Ec2Configuration& WithImageIdOverride(ImageIdOverrideT&& value) { SetImageIdOverride(std::forward<ImageIdOverrideT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Kubernetes version for the compute environment. If you don't specify a
     * value, the latest version that Batch supports is used.</p>
     */
    inline const Aws::String& GetImageKubernetesVersion() const { return m_imageKubernetesVersion; }
    inline bool ImageKubernetesVersionHasBeenSet() const { return m_imageKubernetesVersionHasBeenSet; }
    template<typename ImageKubernetesVersionT = Aws::String>
    void SetImageKubernetesVersion(ImageKubernetesVersionT&& value) { m_imageKubernetesVersionHasBeenSet = true; m_imageKubernetesVersion = std::forward<ImageKubernetesVersionT>(value); }
    template<typename ImageKubernetesVersionT = Aws::String>
    Ec2Configuration& WithImageKubernetesVersion(ImageKubernetesVersionT&& value) { SetImageKubernetesVersion(std::forward<ImageKubernetesVersionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageType;
    bool m_imageTypeHasBeenSet = false;

    Aws::String m_imageIdOverride;
    bool m_imageIdOverrideHasBeenSet = false;

    Aws::String m_imageKubernetesVersion;
    bool m_imageKubernetesVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
