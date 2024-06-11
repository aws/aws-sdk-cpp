/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/ecr/model/AwsEcrContainerImageDetails.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>Contains details about the resource involved in the finding.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/ResourceDetails">AWS
   * API Reference</a></p>
   */
  class ResourceDetails
  {
  public:
    AWS_ECR_API ResourceDetails();
    AWS_ECR_API ResourceDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API ResourceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that contains details about the Amazon ECR container image involved
     * in the finding.</p>
     */
    inline const AwsEcrContainerImageDetails& GetAwsEcrContainerImage() const{ return m_awsEcrContainerImage; }
    inline bool AwsEcrContainerImageHasBeenSet() const { return m_awsEcrContainerImageHasBeenSet; }
    inline void SetAwsEcrContainerImage(const AwsEcrContainerImageDetails& value) { m_awsEcrContainerImageHasBeenSet = true; m_awsEcrContainerImage = value; }
    inline void SetAwsEcrContainerImage(AwsEcrContainerImageDetails&& value) { m_awsEcrContainerImageHasBeenSet = true; m_awsEcrContainerImage = std::move(value); }
    inline ResourceDetails& WithAwsEcrContainerImage(const AwsEcrContainerImageDetails& value) { SetAwsEcrContainerImage(value); return *this;}
    inline ResourceDetails& WithAwsEcrContainerImage(AwsEcrContainerImageDetails&& value) { SetAwsEcrContainerImage(std::move(value)); return *this;}
    ///@}
  private:

    AwsEcrContainerImageDetails m_awsEcrContainerImage;
    bool m_awsEcrContainerImageHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
