﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Ec2Metadata.h>
#include <aws/inspector2/model/EcrContainerImageMetadata.h>
#include <aws/inspector2/model/EcrRepositoryMetadata.h>
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
namespace Inspector2
{
namespace Model
{

  /**
   * <p>An object that contains details about the metadata for an Amazon ECR
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/ResourceScanMetadata">AWS
   * API Reference</a></p>
   */
  class AWS_INSPECTOR2_API ResourceScanMetadata
  {
  public:
    ResourceScanMetadata();
    ResourceScanMetadata(Aws::Utils::Json::JsonView jsonValue);
    ResourceScanMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An object that contains metadata details for an Amazon EC2 instance.</p>
     */
    inline const Ec2Metadata& GetEc2() const{ return m_ec2; }

    /**
     * <p>An object that contains metadata details for an Amazon EC2 instance.</p>
     */
    inline bool Ec2HasBeenSet() const { return m_ec2HasBeenSet; }

    /**
     * <p>An object that contains metadata details for an Amazon EC2 instance.</p>
     */
    inline void SetEc2(const Ec2Metadata& value) { m_ec2HasBeenSet = true; m_ec2 = value; }

    /**
     * <p>An object that contains metadata details for an Amazon EC2 instance.</p>
     */
    inline void SetEc2(Ec2Metadata&& value) { m_ec2HasBeenSet = true; m_ec2 = std::move(value); }

    /**
     * <p>An object that contains metadata details for an Amazon EC2 instance.</p>
     */
    inline ResourceScanMetadata& WithEc2(const Ec2Metadata& value) { SetEc2(value); return *this;}

    /**
     * <p>An object that contains metadata details for an Amazon EC2 instance.</p>
     */
    inline ResourceScanMetadata& WithEc2(Ec2Metadata&& value) { SetEc2(std::move(value)); return *this;}


    /**
     * <p>An object that contains details about the container metadata for an Amazon
     * ECR image.</p>
     */
    inline const EcrContainerImageMetadata& GetEcrImage() const{ return m_ecrImage; }

    /**
     * <p>An object that contains details about the container metadata for an Amazon
     * ECR image.</p>
     */
    inline bool EcrImageHasBeenSet() const { return m_ecrImageHasBeenSet; }

    /**
     * <p>An object that contains details about the container metadata for an Amazon
     * ECR image.</p>
     */
    inline void SetEcrImage(const EcrContainerImageMetadata& value) { m_ecrImageHasBeenSet = true; m_ecrImage = value; }

    /**
     * <p>An object that contains details about the container metadata for an Amazon
     * ECR image.</p>
     */
    inline void SetEcrImage(EcrContainerImageMetadata&& value) { m_ecrImageHasBeenSet = true; m_ecrImage = std::move(value); }

    /**
     * <p>An object that contains details about the container metadata for an Amazon
     * ECR image.</p>
     */
    inline ResourceScanMetadata& WithEcrImage(const EcrContainerImageMetadata& value) { SetEcrImage(value); return *this;}

    /**
     * <p>An object that contains details about the container metadata for an Amazon
     * ECR image.</p>
     */
    inline ResourceScanMetadata& WithEcrImage(EcrContainerImageMetadata&& value) { SetEcrImage(std::move(value)); return *this;}


    /**
     * <p>An object that contains details about the repository an Amazon ECR image
     * resides in.</p>
     */
    inline const EcrRepositoryMetadata& GetEcrRepository() const{ return m_ecrRepository; }

    /**
     * <p>An object that contains details about the repository an Amazon ECR image
     * resides in.</p>
     */
    inline bool EcrRepositoryHasBeenSet() const { return m_ecrRepositoryHasBeenSet; }

    /**
     * <p>An object that contains details about the repository an Amazon ECR image
     * resides in.</p>
     */
    inline void SetEcrRepository(const EcrRepositoryMetadata& value) { m_ecrRepositoryHasBeenSet = true; m_ecrRepository = value; }

    /**
     * <p>An object that contains details about the repository an Amazon ECR image
     * resides in.</p>
     */
    inline void SetEcrRepository(EcrRepositoryMetadata&& value) { m_ecrRepositoryHasBeenSet = true; m_ecrRepository = std::move(value); }

    /**
     * <p>An object that contains details about the repository an Amazon ECR image
     * resides in.</p>
     */
    inline ResourceScanMetadata& WithEcrRepository(const EcrRepositoryMetadata& value) { SetEcrRepository(value); return *this;}

    /**
     * <p>An object that contains details about the repository an Amazon ECR image
     * resides in.</p>
     */
    inline ResourceScanMetadata& WithEcrRepository(EcrRepositoryMetadata&& value) { SetEcrRepository(std::move(value)); return *this;}

  private:

    Ec2Metadata m_ec2;
    bool m_ec2HasBeenSet;

    EcrContainerImageMetadata m_ecrImage;
    bool m_ecrImageHasBeenSet;

    EcrRepositoryMetadata m_ecrRepository;
    bool m_ecrRepositoryHasBeenSet;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
