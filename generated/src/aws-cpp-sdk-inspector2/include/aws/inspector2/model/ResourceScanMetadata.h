/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/Ec2Metadata.h>
#include <aws/inspector2/model/EcrContainerImageMetadata.h>
#include <aws/inspector2/model/EcrRepositoryMetadata.h>
#include <aws/inspector2/model/LambdaFunctionMetadata.h>
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
  class ResourceScanMetadata
  {
  public:
    AWS_INSPECTOR2_API ResourceScanMetadata();
    AWS_INSPECTOR2_API ResourceScanMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API ResourceScanMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains metadata details for an Amazon EC2 instance.</p>
     */
    inline const Ec2Metadata& GetEc2() const{ return m_ec2; }
    inline bool Ec2HasBeenSet() const { return m_ec2HasBeenSet; }
    inline void SetEc2(const Ec2Metadata& value) { m_ec2HasBeenSet = true; m_ec2 = value; }
    inline void SetEc2(Ec2Metadata&& value) { m_ec2HasBeenSet = true; m_ec2 = std::move(value); }
    inline ResourceScanMetadata& WithEc2(const Ec2Metadata& value) { SetEc2(value); return *this;}
    inline ResourceScanMetadata& WithEc2(Ec2Metadata&& value) { SetEc2(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about the container metadata for an Amazon
     * ECR image.</p>
     */
    inline const EcrContainerImageMetadata& GetEcrImage() const{ return m_ecrImage; }
    inline bool EcrImageHasBeenSet() const { return m_ecrImageHasBeenSet; }
    inline void SetEcrImage(const EcrContainerImageMetadata& value) { m_ecrImageHasBeenSet = true; m_ecrImage = value; }
    inline void SetEcrImage(EcrContainerImageMetadata&& value) { m_ecrImageHasBeenSet = true; m_ecrImage = std::move(value); }
    inline ResourceScanMetadata& WithEcrImage(const EcrContainerImageMetadata& value) { SetEcrImage(value); return *this;}
    inline ResourceScanMetadata& WithEcrImage(EcrContainerImageMetadata&& value) { SetEcrImage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains details about the repository an Amazon ECR image
     * resides in.</p>
     */
    inline const EcrRepositoryMetadata& GetEcrRepository() const{ return m_ecrRepository; }
    inline bool EcrRepositoryHasBeenSet() const { return m_ecrRepositoryHasBeenSet; }
    inline void SetEcrRepository(const EcrRepositoryMetadata& value) { m_ecrRepositoryHasBeenSet = true; m_ecrRepository = value; }
    inline void SetEcrRepository(EcrRepositoryMetadata&& value) { m_ecrRepositoryHasBeenSet = true; m_ecrRepository = std::move(value); }
    inline ResourceScanMetadata& WithEcrRepository(const EcrRepositoryMetadata& value) { SetEcrRepository(value); return *this;}
    inline ResourceScanMetadata& WithEcrRepository(EcrRepositoryMetadata&& value) { SetEcrRepository(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains metadata details for an Amazon Web Services Lambda
     * function.</p>
     */
    inline const LambdaFunctionMetadata& GetLambdaFunction() const{ return m_lambdaFunction; }
    inline bool LambdaFunctionHasBeenSet() const { return m_lambdaFunctionHasBeenSet; }
    inline void SetLambdaFunction(const LambdaFunctionMetadata& value) { m_lambdaFunctionHasBeenSet = true; m_lambdaFunction = value; }
    inline void SetLambdaFunction(LambdaFunctionMetadata&& value) { m_lambdaFunctionHasBeenSet = true; m_lambdaFunction = std::move(value); }
    inline ResourceScanMetadata& WithLambdaFunction(const LambdaFunctionMetadata& value) { SetLambdaFunction(value); return *this;}
    inline ResourceScanMetadata& WithLambdaFunction(LambdaFunctionMetadata&& value) { SetLambdaFunction(std::move(value)); return *this;}
    ///@}
  private:

    Ec2Metadata m_ec2;
    bool m_ec2HasBeenSet = false;

    EcrContainerImageMetadata m_ecrImage;
    bool m_ecrImageHasBeenSet = false;

    EcrRepositoryMetadata m_ecrRepository;
    bool m_ecrRepositoryHasBeenSet = false;

    LambdaFunctionMetadata m_lambdaFunction;
    bool m_lambdaFunctionHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector2
} // namespace Aws
