/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class AWS_SAGEMAKER_API CreateImageVersionRequest : public SageMakerRequest
  {
  public:
    CreateImageVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateImageVersion"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The registry path of the container image to use as the starting point for
     * this version. The path is an Amazon Container Registry (ECR) URI in the
     * following format:</p> <p>
     * <code>&lt;acct-id&gt;.dkr.ecr.&lt;region&gt;.amazonaws.com/&lt;repo-name[:tag]
     * or [@digest]&gt;</code> </p>
     */
    inline const Aws::String& GetBaseImage() const{ return m_baseImage; }

    /**
     * <p>The registry path of the container image to use as the starting point for
     * this version. The path is an Amazon Container Registry (ECR) URI in the
     * following format:</p> <p>
     * <code>&lt;acct-id&gt;.dkr.ecr.&lt;region&gt;.amazonaws.com/&lt;repo-name[:tag]
     * or [@digest]&gt;</code> </p>
     */
    inline bool BaseImageHasBeenSet() const { return m_baseImageHasBeenSet; }

    /**
     * <p>The registry path of the container image to use as the starting point for
     * this version. The path is an Amazon Container Registry (ECR) URI in the
     * following format:</p> <p>
     * <code>&lt;acct-id&gt;.dkr.ecr.&lt;region&gt;.amazonaws.com/&lt;repo-name[:tag]
     * or [@digest]&gt;</code> </p>
     */
    inline void SetBaseImage(const Aws::String& value) { m_baseImageHasBeenSet = true; m_baseImage = value; }

    /**
     * <p>The registry path of the container image to use as the starting point for
     * this version. The path is an Amazon Container Registry (ECR) URI in the
     * following format:</p> <p>
     * <code>&lt;acct-id&gt;.dkr.ecr.&lt;region&gt;.amazonaws.com/&lt;repo-name[:tag]
     * or [@digest]&gt;</code> </p>
     */
    inline void SetBaseImage(Aws::String&& value) { m_baseImageHasBeenSet = true; m_baseImage = std::move(value); }

    /**
     * <p>The registry path of the container image to use as the starting point for
     * this version. The path is an Amazon Container Registry (ECR) URI in the
     * following format:</p> <p>
     * <code>&lt;acct-id&gt;.dkr.ecr.&lt;region&gt;.amazonaws.com/&lt;repo-name[:tag]
     * or [@digest]&gt;</code> </p>
     */
    inline void SetBaseImage(const char* value) { m_baseImageHasBeenSet = true; m_baseImage.assign(value); }

    /**
     * <p>The registry path of the container image to use as the starting point for
     * this version. The path is an Amazon Container Registry (ECR) URI in the
     * following format:</p> <p>
     * <code>&lt;acct-id&gt;.dkr.ecr.&lt;region&gt;.amazonaws.com/&lt;repo-name[:tag]
     * or [@digest]&gt;</code> </p>
     */
    inline CreateImageVersionRequest& WithBaseImage(const Aws::String& value) { SetBaseImage(value); return *this;}

    /**
     * <p>The registry path of the container image to use as the starting point for
     * this version. The path is an Amazon Container Registry (ECR) URI in the
     * following format:</p> <p>
     * <code>&lt;acct-id&gt;.dkr.ecr.&lt;region&gt;.amazonaws.com/&lt;repo-name[:tag]
     * or [@digest]&gt;</code> </p>
     */
    inline CreateImageVersionRequest& WithBaseImage(Aws::String&& value) { SetBaseImage(std::move(value)); return *this;}

    /**
     * <p>The registry path of the container image to use as the starting point for
     * this version. The path is an Amazon Container Registry (ECR) URI in the
     * following format:</p> <p>
     * <code>&lt;acct-id&gt;.dkr.ecr.&lt;region&gt;.amazonaws.com/&lt;repo-name[:tag]
     * or [@digest]&gt;</code> </p>
     */
    inline CreateImageVersionRequest& WithBaseImage(const char* value) { SetBaseImage(value); return *this;}


    /**
     * <p>A unique ID. If not specified, the AWS CLI and AWS SDKs, such as the SDK for
     * Python (Boto3), add a unique value to the call.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique ID. If not specified, the AWS CLI and AWS SDKs, such as the SDK for
     * Python (Boto3), add a unique value to the call.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique ID. If not specified, the AWS CLI and AWS SDKs, such as the SDK for
     * Python (Boto3), add a unique value to the call.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique ID. If not specified, the AWS CLI and AWS SDKs, such as the SDK for
     * Python (Boto3), add a unique value to the call.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique ID. If not specified, the AWS CLI and AWS SDKs, such as the SDK for
     * Python (Boto3), add a unique value to the call.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique ID. If not specified, the AWS CLI and AWS SDKs, such as the SDK for
     * Python (Boto3), add a unique value to the call.</p>
     */
    inline CreateImageVersionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique ID. If not specified, the AWS CLI and AWS SDKs, such as the SDK for
     * Python (Boto3), add a unique value to the call.</p>
     */
    inline CreateImageVersionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique ID. If not specified, the AWS CLI and AWS SDKs, such as the SDK for
     * Python (Boto3), add a unique value to the call.</p>
     */
    inline CreateImageVersionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The <code>ImageName</code> of the <code>Image</code> to create a version
     * of.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The <code>ImageName</code> of the <code>Image</code> to create a version
     * of.</p>
     */
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }

    /**
     * <p>The <code>ImageName</code> of the <code>Image</code> to create a version
     * of.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The <code>ImageName</code> of the <code>Image</code> to create a version
     * of.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The <code>ImageName</code> of the <code>Image</code> to create a version
     * of.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The <code>ImageName</code> of the <code>Image</code> to create a version
     * of.</p>
     */
    inline CreateImageVersionRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The <code>ImageName</code> of the <code>Image</code> to create a version
     * of.</p>
     */
    inline CreateImageVersionRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The <code>ImageName</code> of the <code>Image</code> to create a version
     * of.</p>
     */
    inline CreateImageVersionRequest& WithImageName(const char* value) { SetImageName(value); return *this;}

  private:

    Aws::String m_baseImage;
    bool m_baseImageHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
