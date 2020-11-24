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
   * instances in the compute environment. If the <code>Ec2Configuration</code> is
   * not specified, the default is <code>ECS_AL1</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/batch-2016-08-10/Ec2Configuration">AWS
   * API Reference</a></p>
   */
  class AWS_BATCH_API Ec2Configuration
  {
  public:
    Ec2Configuration();
    Ec2Configuration(Aws::Utils::Json::JsonView jsonValue);
    Ec2Configuration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The image type to match with the instance type to pick an AMI. If the
     * <code>imageIdOverride</code> parameter is not specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized AMI</a> will be used.</p> <dl> <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>− Default for all AWS Graviton-based instance families (for example,
     * <code>C6g</code>, <code>M6g</code>, <code>R6g</code>, and <code>T4g</code>) and
     * can be used for all non-GPU instance types.</p> </dd> <dt>ECS_AL2_NVIDIA</dt>
     * <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>−Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non-AWS
     * Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>−Default for all non-GPU, non-AWS-Graviton instance families. Amazon
     * Linux is reaching the end-of-life of standard support. For more information, see
     * <a href="https://aws.amazon.com/amazon-linux-ami/">Amazon Linux AMI</a>.</p>
     * </dd> </dl>
     */
    inline const Aws::String& GetImageType() const{ return m_imageType; }

    /**
     * <p>The image type to match with the instance type to pick an AMI. If the
     * <code>imageIdOverride</code> parameter is not specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized AMI</a> will be used.</p> <dl> <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>− Default for all AWS Graviton-based instance families (for example,
     * <code>C6g</code>, <code>M6g</code>, <code>R6g</code>, and <code>T4g</code>) and
     * can be used for all non-GPU instance types.</p> </dd> <dt>ECS_AL2_NVIDIA</dt>
     * <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>−Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non-AWS
     * Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>−Default for all non-GPU, non-AWS-Graviton instance families. Amazon
     * Linux is reaching the end-of-life of standard support. For more information, see
     * <a href="https://aws.amazon.com/amazon-linux-ami/">Amazon Linux AMI</a>.</p>
     * </dd> </dl>
     */
    inline bool ImageTypeHasBeenSet() const { return m_imageTypeHasBeenSet; }

    /**
     * <p>The image type to match with the instance type to pick an AMI. If the
     * <code>imageIdOverride</code> parameter is not specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized AMI</a> will be used.</p> <dl> <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>− Default for all AWS Graviton-based instance families (for example,
     * <code>C6g</code>, <code>M6g</code>, <code>R6g</code>, and <code>T4g</code>) and
     * can be used for all non-GPU instance types.</p> </dd> <dt>ECS_AL2_NVIDIA</dt>
     * <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>−Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non-AWS
     * Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>−Default for all non-GPU, non-AWS-Graviton instance families. Amazon
     * Linux is reaching the end-of-life of standard support. For more information, see
     * <a href="https://aws.amazon.com/amazon-linux-ami/">Amazon Linux AMI</a>.</p>
     * </dd> </dl>
     */
    inline void SetImageType(const Aws::String& value) { m_imageTypeHasBeenSet = true; m_imageType = value; }

    /**
     * <p>The image type to match with the instance type to pick an AMI. If the
     * <code>imageIdOverride</code> parameter is not specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized AMI</a> will be used.</p> <dl> <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>− Default for all AWS Graviton-based instance families (for example,
     * <code>C6g</code>, <code>M6g</code>, <code>R6g</code>, and <code>T4g</code>) and
     * can be used for all non-GPU instance types.</p> </dd> <dt>ECS_AL2_NVIDIA</dt>
     * <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>−Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non-AWS
     * Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>−Default for all non-GPU, non-AWS-Graviton instance families. Amazon
     * Linux is reaching the end-of-life of standard support. For more information, see
     * <a href="https://aws.amazon.com/amazon-linux-ami/">Amazon Linux AMI</a>.</p>
     * </dd> </dl>
     */
    inline void SetImageType(Aws::String&& value) { m_imageTypeHasBeenSet = true; m_imageType = std::move(value); }

    /**
     * <p>The image type to match with the instance type to pick an AMI. If the
     * <code>imageIdOverride</code> parameter is not specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized AMI</a> will be used.</p> <dl> <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>− Default for all AWS Graviton-based instance families (for example,
     * <code>C6g</code>, <code>M6g</code>, <code>R6g</code>, and <code>T4g</code>) and
     * can be used for all non-GPU instance types.</p> </dd> <dt>ECS_AL2_NVIDIA</dt>
     * <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>−Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non-AWS
     * Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>−Default for all non-GPU, non-AWS-Graviton instance families. Amazon
     * Linux is reaching the end-of-life of standard support. For more information, see
     * <a href="https://aws.amazon.com/amazon-linux-ami/">Amazon Linux AMI</a>.</p>
     * </dd> </dl>
     */
    inline void SetImageType(const char* value) { m_imageTypeHasBeenSet = true; m_imageType.assign(value); }

    /**
     * <p>The image type to match with the instance type to pick an AMI. If the
     * <code>imageIdOverride</code> parameter is not specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized AMI</a> will be used.</p> <dl> <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>− Default for all AWS Graviton-based instance families (for example,
     * <code>C6g</code>, <code>M6g</code>, <code>R6g</code>, and <code>T4g</code>) and
     * can be used for all non-GPU instance types.</p> </dd> <dt>ECS_AL2_NVIDIA</dt>
     * <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>−Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non-AWS
     * Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>−Default for all non-GPU, non-AWS-Graviton instance families. Amazon
     * Linux is reaching the end-of-life of standard support. For more information, see
     * <a href="https://aws.amazon.com/amazon-linux-ami/">Amazon Linux AMI</a>.</p>
     * </dd> </dl>
     */
    inline Ec2Configuration& WithImageType(const Aws::String& value) { SetImageType(value); return *this;}

    /**
     * <p>The image type to match with the instance type to pick an AMI. If the
     * <code>imageIdOverride</code> parameter is not specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized AMI</a> will be used.</p> <dl> <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>− Default for all AWS Graviton-based instance families (for example,
     * <code>C6g</code>, <code>M6g</code>, <code>R6g</code>, and <code>T4g</code>) and
     * can be used for all non-GPU instance types.</p> </dd> <dt>ECS_AL2_NVIDIA</dt>
     * <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>−Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non-AWS
     * Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>−Default for all non-GPU, non-AWS-Graviton instance families. Amazon
     * Linux is reaching the end-of-life of standard support. For more information, see
     * <a href="https://aws.amazon.com/amazon-linux-ami/">Amazon Linux AMI</a>.</p>
     * </dd> </dl>
     */
    inline Ec2Configuration& WithImageType(Aws::String&& value) { SetImageType(std::move(value)); return *this;}

    /**
     * <p>The image type to match with the instance type to pick an AMI. If the
     * <code>imageIdOverride</code> parameter is not specified, then a recent <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html">Amazon
     * ECS-optimized AMI</a> will be used.</p> <dl> <dt>ECS_AL2</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#al2ami">Amazon
     * Linux 2</a>− Default for all AWS Graviton-based instance families (for example,
     * <code>C6g</code>, <code>M6g</code>, <code>R6g</code>, and <code>T4g</code>) and
     * can be used for all non-GPU instance types.</p> </dd> <dt>ECS_AL2_NVIDIA</dt>
     * <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#gpuami">Amazon
     * Linux 2 (GPU)</a>−Default for all GPU instance families (for example
     * <code>P4</code> and <code>G4</code>) and can be used for all non-AWS
     * Graviton-based instance types.</p> </dd> <dt>ECS_AL1</dt> <dd> <p> <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-optimized_AMI.html#alami">Amazon
     * Linux</a>−Default for all non-GPU, non-AWS-Graviton instance families. Amazon
     * Linux is reaching the end-of-life of standard support. For more information, see
     * <a href="https://aws.amazon.com/amazon-linux-ami/">Amazon Linux AMI</a>.</p>
     * </dd> </dl>
     */
    inline Ec2Configuration& WithImageType(const char* value) { SetImageType(value); return *this;}


    /**
     * <p>The AMI ID used for instances launched in the compute environment that match
     * the image type. This setting overrides the <code>imageId</code> set in the
     * <code>computeResource</code> object.</p>
     */
    inline const Aws::String& GetImageIdOverride() const{ return m_imageIdOverride; }

    /**
     * <p>The AMI ID used for instances launched in the compute environment that match
     * the image type. This setting overrides the <code>imageId</code> set in the
     * <code>computeResource</code> object.</p>
     */
    inline bool ImageIdOverrideHasBeenSet() const { return m_imageIdOverrideHasBeenSet; }

    /**
     * <p>The AMI ID used for instances launched in the compute environment that match
     * the image type. This setting overrides the <code>imageId</code> set in the
     * <code>computeResource</code> object.</p>
     */
    inline void SetImageIdOverride(const Aws::String& value) { m_imageIdOverrideHasBeenSet = true; m_imageIdOverride = value; }

    /**
     * <p>The AMI ID used for instances launched in the compute environment that match
     * the image type. This setting overrides the <code>imageId</code> set in the
     * <code>computeResource</code> object.</p>
     */
    inline void SetImageIdOverride(Aws::String&& value) { m_imageIdOverrideHasBeenSet = true; m_imageIdOverride = std::move(value); }

    /**
     * <p>The AMI ID used for instances launched in the compute environment that match
     * the image type. This setting overrides the <code>imageId</code> set in the
     * <code>computeResource</code> object.</p>
     */
    inline void SetImageIdOverride(const char* value) { m_imageIdOverrideHasBeenSet = true; m_imageIdOverride.assign(value); }

    /**
     * <p>The AMI ID used for instances launched in the compute environment that match
     * the image type. This setting overrides the <code>imageId</code> set in the
     * <code>computeResource</code> object.</p>
     */
    inline Ec2Configuration& WithImageIdOverride(const Aws::String& value) { SetImageIdOverride(value); return *this;}

    /**
     * <p>The AMI ID used for instances launched in the compute environment that match
     * the image type. This setting overrides the <code>imageId</code> set in the
     * <code>computeResource</code> object.</p>
     */
    inline Ec2Configuration& WithImageIdOverride(Aws::String&& value) { SetImageIdOverride(std::move(value)); return *this;}

    /**
     * <p>The AMI ID used for instances launched in the compute environment that match
     * the image type. This setting overrides the <code>imageId</code> set in the
     * <code>computeResource</code> object.</p>
     */
    inline Ec2Configuration& WithImageIdOverride(const char* value) { SetImageIdOverride(value); return *this;}

  private:

    Aws::String m_imageType;
    bool m_imageTypeHasBeenSet;

    Aws::String m_imageIdOverride;
    bool m_imageIdOverrideHasBeenSet;
  };

} // namespace Model
} // namespace Batch
} // namespace Aws
