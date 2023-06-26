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
    AWS_BATCH_API Ec2Configuration();
    AWS_BATCH_API Ec2Configuration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Ec2Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BATCH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The image type to match with the instance type to select an AMI. The
     * supported values are different for <code>ECS</code> and <code>EKS</code>
     * resources.</p> <dl> <dt>ECS</dt> <dd> <p>If the <code>imageIdOverride</code>
     * parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * ECS-optimized Amazon Linux 2 AMI</a> (<code>ECS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon ECS
     * optimized AMI for that image type that's supported by Batch is used.</p> <dl>
     * <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>ECS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>: Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>. Amazon Linux has reached the end-of-life of standard support. For
     * more information, see <a href="http://aws.amazon.com/amazon-linux-ami/">Amazon
     * Linux AMI</a>.</p> </dd> </dl> </dd> <dt>EKS</dt> <dd> <p>If the
     * <code>imageIdOverride</code> parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * EKS-optimized Amazon Linux AMI</a> (<code>EKS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon EKS
     * optimized AMI for that image type that Batch supports is used.</p> <dl>
     * <dt>EKS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>EKS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2 (accelerated)</a>: Default for all GPU instance families (for example,
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> </dl> </dd> </dl>
     */
    inline const Aws::String& GetImageType() const{ return m_imageType; }

    /**
     * <p>The image type to match with the instance type to select an AMI. The
     * supported values are different for <code>ECS</code> and <code>EKS</code>
     * resources.</p> <dl> <dt>ECS</dt> <dd> <p>If the <code>imageIdOverride</code>
     * parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * ECS-optimized Amazon Linux 2 AMI</a> (<code>ECS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon ECS
     * optimized AMI for that image type that's supported by Batch is used.</p> <dl>
     * <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>ECS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>: Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>. Amazon Linux has reached the end-of-life of standard support. For
     * more information, see <a href="http://aws.amazon.com/amazon-linux-ami/">Amazon
     * Linux AMI</a>.</p> </dd> </dl> </dd> <dt>EKS</dt> <dd> <p>If the
     * <code>imageIdOverride</code> parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * EKS-optimized Amazon Linux AMI</a> (<code>EKS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon EKS
     * optimized AMI for that image type that Batch supports is used.</p> <dl>
     * <dt>EKS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>EKS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2 (accelerated)</a>: Default for all GPU instance families (for example,
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> </dl> </dd> </dl>
     */
    inline bool ImageTypeHasBeenSet() const { return m_imageTypeHasBeenSet; }

    /**
     * <p>The image type to match with the instance type to select an AMI. The
     * supported values are different for <code>ECS</code> and <code>EKS</code>
     * resources.</p> <dl> <dt>ECS</dt> <dd> <p>If the <code>imageIdOverride</code>
     * parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * ECS-optimized Amazon Linux 2 AMI</a> (<code>ECS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon ECS
     * optimized AMI for that image type that's supported by Batch is used.</p> <dl>
     * <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>ECS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>: Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>. Amazon Linux has reached the end-of-life of standard support. For
     * more information, see <a href="http://aws.amazon.com/amazon-linux-ami/">Amazon
     * Linux AMI</a>.</p> </dd> </dl> </dd> <dt>EKS</dt> <dd> <p>If the
     * <code>imageIdOverride</code> parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * EKS-optimized Amazon Linux AMI</a> (<code>EKS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon EKS
     * optimized AMI for that image type that Batch supports is used.</p> <dl>
     * <dt>EKS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>EKS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2 (accelerated)</a>: Default for all GPU instance families (for example,
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> </dl> </dd> </dl>
     */
    inline void SetImageType(const Aws::String& value) { m_imageTypeHasBeenSet = true; m_imageType = value; }

    /**
     * <p>The image type to match with the instance type to select an AMI. The
     * supported values are different for <code>ECS</code> and <code>EKS</code>
     * resources.</p> <dl> <dt>ECS</dt> <dd> <p>If the <code>imageIdOverride</code>
     * parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * ECS-optimized Amazon Linux 2 AMI</a> (<code>ECS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon ECS
     * optimized AMI for that image type that's supported by Batch is used.</p> <dl>
     * <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>ECS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>: Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>. Amazon Linux has reached the end-of-life of standard support. For
     * more information, see <a href="http://aws.amazon.com/amazon-linux-ami/">Amazon
     * Linux AMI</a>.</p> </dd> </dl> </dd> <dt>EKS</dt> <dd> <p>If the
     * <code>imageIdOverride</code> parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * EKS-optimized Amazon Linux AMI</a> (<code>EKS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon EKS
     * optimized AMI for that image type that Batch supports is used.</p> <dl>
     * <dt>EKS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>EKS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2 (accelerated)</a>: Default for all GPU instance families (for example,
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> </dl> </dd> </dl>
     */
    inline void SetImageType(Aws::String&& value) { m_imageTypeHasBeenSet = true; m_imageType = std::move(value); }

    /**
     * <p>The image type to match with the instance type to select an AMI. The
     * supported values are different for <code>ECS</code> and <code>EKS</code>
     * resources.</p> <dl> <dt>ECS</dt> <dd> <p>If the <code>imageIdOverride</code>
     * parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * ECS-optimized Amazon Linux 2 AMI</a> (<code>ECS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon ECS
     * optimized AMI for that image type that's supported by Batch is used.</p> <dl>
     * <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>ECS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>: Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>. Amazon Linux has reached the end-of-life of standard support. For
     * more information, see <a href="http://aws.amazon.com/amazon-linux-ami/">Amazon
     * Linux AMI</a>.</p> </dd> </dl> </dd> <dt>EKS</dt> <dd> <p>If the
     * <code>imageIdOverride</code> parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * EKS-optimized Amazon Linux AMI</a> (<code>EKS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon EKS
     * optimized AMI for that image type that Batch supports is used.</p> <dl>
     * <dt>EKS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>EKS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2 (accelerated)</a>: Default for all GPU instance families (for example,
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> </dl> </dd> </dl>
     */
    inline void SetImageType(const char* value) { m_imageTypeHasBeenSet = true; m_imageType.assign(value); }

    /**
     * <p>The image type to match with the instance type to select an AMI. The
     * supported values are different for <code>ECS</code> and <code>EKS</code>
     * resources.</p> <dl> <dt>ECS</dt> <dd> <p>If the <code>imageIdOverride</code>
     * parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * ECS-optimized Amazon Linux 2 AMI</a> (<code>ECS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon ECS
     * optimized AMI for that image type that's supported by Batch is used.</p> <dl>
     * <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>ECS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>: Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>. Amazon Linux has reached the end-of-life of standard support. For
     * more information, see <a href="http://aws.amazon.com/amazon-linux-ami/">Amazon
     * Linux AMI</a>.</p> </dd> </dl> </dd> <dt>EKS</dt> <dd> <p>If the
     * <code>imageIdOverride</code> parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * EKS-optimized Amazon Linux AMI</a> (<code>EKS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon EKS
     * optimized AMI for that image type that Batch supports is used.</p> <dl>
     * <dt>EKS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>EKS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2 (accelerated)</a>: Default for all GPU instance families (for example,
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> </dl> </dd> </dl>
     */
    inline Ec2Configuration& WithImageType(const Aws::String& value) { SetImageType(value); return *this;}

    /**
     * <p>The image type to match with the instance type to select an AMI. The
     * supported values are different for <code>ECS</code> and <code>EKS</code>
     * resources.</p> <dl> <dt>ECS</dt> <dd> <p>If the <code>imageIdOverride</code>
     * parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * ECS-optimized Amazon Linux 2 AMI</a> (<code>ECS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon ECS
     * optimized AMI for that image type that's supported by Batch is used.</p> <dl>
     * <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>ECS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>: Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>. Amazon Linux has reached the end-of-life of standard support. For
     * more information, see <a href="http://aws.amazon.com/amazon-linux-ami/">Amazon
     * Linux AMI</a>.</p> </dd> </dl> </dd> <dt>EKS</dt> <dd> <p>If the
     * <code>imageIdOverride</code> parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * EKS-optimized Amazon Linux AMI</a> (<code>EKS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon EKS
     * optimized AMI for that image type that Batch supports is used.</p> <dl>
     * <dt>EKS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>EKS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2 (accelerated)</a>: Default for all GPU instance families (for example,
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> </dl> </dd> </dl>
     */
    inline Ec2Configuration& WithImageType(Aws::String&& value) { SetImageType(std::move(value)); return *this;}

    /**
     * <p>The image type to match with the instance type to select an AMI. The
     * supported values are different for <code>ECS</code> and <code>EKS</code>
     * resources.</p> <dl> <dt>ECS</dt> <dd> <p>If the <code>imageIdOverride</code>
     * parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * ECS-optimized Amazon Linux 2 AMI</a> (<code>ECS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon ECS
     * optimized AMI for that image type that's supported by Batch is used.</p> <dl>
     * <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>ECS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>: Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>. Amazon Linux has reached the end-of-life of standard support. For
     * more information, see <a href="http://aws.amazon.com/amazon-linux-ami/">Amazon
     * Linux AMI</a>.</p> </dd> </dl> </dd> <dt>EKS</dt> <dd> <p>If the
     * <code>imageIdOverride</code> parameter isn't specified, then a recent <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * EKS-optimized Amazon Linux AMI</a> (<code>EKS_AL2</code>) is used. If a new
     * image type is specified in an update, but neither an <code>imageId</code> nor a
     * <code>imageIdOverride</code> parameter is specified, then the latest Amazon EKS
     * optimized AMI for that image type that Batch supports is used.</p> <dl>
     * <dt>EKS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2</a>: Default for all non-GPU instance families.</p> </dd>
     * <dt>EKS_AL2_NVIDIA</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-optimized-ami.html">Amazon
     * Linux 2 (accelerated)</a>: Default for all GPU instance families (for example,
     * <code>P4</code> and <code>G4</code>) and can be used for all non Amazon Web
     * Services Graviton-based instance types.</p> </dd> </dl> </dd> </dl>
     */
    inline Ec2Configuration& WithImageType(const char* value) { SetImageType(value); return *this;}


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
    inline const Aws::String& GetImageIdOverride() const{ return m_imageIdOverride; }

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
    inline bool ImageIdOverrideHasBeenSet() const { return m_imageIdOverrideHasBeenSet; }

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
    inline void SetImageIdOverride(const Aws::String& value) { m_imageIdOverrideHasBeenSet = true; m_imageIdOverride = value; }

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
    inline void SetImageIdOverride(Aws::String&& value) { m_imageIdOverrideHasBeenSet = true; m_imageIdOverride = std::move(value); }

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
    inline void SetImageIdOverride(const char* value) { m_imageIdOverrideHasBeenSet = true; m_imageIdOverride.assign(value); }

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
    inline Ec2Configuration& WithImageIdOverride(const Aws::String& value) { SetImageIdOverride(value); return *this;}

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
    inline Ec2Configuration& WithImageIdOverride(Aws::String&& value) { SetImageIdOverride(std::move(value)); return *this;}

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
    inline Ec2Configuration& WithImageIdOverride(const char* value) { SetImageIdOverride(value); return *this;}


    /**
     * <p>The Kubernetes version for the compute environment. If you don't specify a
     * value, the latest version that Batch supports is used.</p>
     */
    inline const Aws::String& GetImageKubernetesVersion() const{ return m_imageKubernetesVersion; }

    /**
     * <p>The Kubernetes version for the compute environment. If you don't specify a
     * value, the latest version that Batch supports is used.</p>
     */
    inline bool ImageKubernetesVersionHasBeenSet() const { return m_imageKubernetesVersionHasBeenSet; }

    /**
     * <p>The Kubernetes version for the compute environment. If you don't specify a
     * value, the latest version that Batch supports is used.</p>
     */
    inline void SetImageKubernetesVersion(const Aws::String& value) { m_imageKubernetesVersionHasBeenSet = true; m_imageKubernetesVersion = value; }

    /**
     * <p>The Kubernetes version for the compute environment. If you don't specify a
     * value, the latest version that Batch supports is used.</p>
     */
    inline void SetImageKubernetesVersion(Aws::String&& value) { m_imageKubernetesVersionHasBeenSet = true; m_imageKubernetesVersion = std::move(value); }

    /**
     * <p>The Kubernetes version for the compute environment. If you don't specify a
     * value, the latest version that Batch supports is used.</p>
     */
    inline void SetImageKubernetesVersion(const char* value) { m_imageKubernetesVersionHasBeenSet = true; m_imageKubernetesVersion.assign(value); }

    /**
     * <p>The Kubernetes version for the compute environment. If you don't specify a
     * value, the latest version that Batch supports is used.</p>
     */
    inline Ec2Configuration& WithImageKubernetesVersion(const Aws::String& value) { SetImageKubernetesVersion(value); return *this;}

    /**
     * <p>The Kubernetes version for the compute environment. If you don't specify a
     * value, the latest version that Batch supports is used.</p>
     */
    inline Ec2Configuration& WithImageKubernetesVersion(Aws::String&& value) { SetImageKubernetesVersion(std::move(value)); return *this;}

    /**
     * <p>The Kubernetes version for the compute environment. If you don't specify a
     * value, the latest version that Batch supports is used.</p>
     */
    inline Ec2Configuration& WithImageKubernetesVersion(const char* value) { SetImageKubernetesVersion(value); return *this;}

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
