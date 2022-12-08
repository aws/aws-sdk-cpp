/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DescribeArtifactRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeArtifactRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeArtifact"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to describe.</p>
     */
    inline const Aws::String& GetArtifactArn() const{ return m_artifactArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to describe.</p>
     */
    inline bool ArtifactArnHasBeenSet() const { return m_artifactArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to describe.</p>
     */
    inline void SetArtifactArn(const Aws::String& value) { m_artifactArnHasBeenSet = true; m_artifactArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to describe.</p>
     */
    inline void SetArtifactArn(Aws::String&& value) { m_artifactArnHasBeenSet = true; m_artifactArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to describe.</p>
     */
    inline void SetArtifactArn(const char* value) { m_artifactArnHasBeenSet = true; m_artifactArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to describe.</p>
     */
    inline DescribeArtifactRequest& WithArtifactArn(const Aws::String& value) { SetArtifactArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to describe.</p>
     */
    inline DescribeArtifactRequest& WithArtifactArn(Aws::String&& value) { SetArtifactArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the artifact to describe.</p>
     */
    inline DescribeArtifactRequest& WithArtifactArn(const char* value) { SetArtifactArn(value); return *this;}

  private:

    Aws::String m_artifactArn;
    bool m_artifactArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
