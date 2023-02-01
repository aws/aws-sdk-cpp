/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class StartImagePipelineExecutionRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API StartImagePipelineExecutionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartImagePipelineExecution"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * manually invoke.</p>
     */
    inline const Aws::String& GetImagePipelineArn() const{ return m_imagePipelineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * manually invoke.</p>
     */
    inline bool ImagePipelineArnHasBeenSet() const { return m_imagePipelineArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * manually invoke.</p>
     */
    inline void SetImagePipelineArn(const Aws::String& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * manually invoke.</p>
     */
    inline void SetImagePipelineArn(Aws::String&& value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * manually invoke.</p>
     */
    inline void SetImagePipelineArn(const char* value) { m_imagePipelineArnHasBeenSet = true; m_imagePipelineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * manually invoke.</p>
     */
    inline StartImagePipelineExecutionRequest& WithImagePipelineArn(const Aws::String& value) { SetImagePipelineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * manually invoke.</p>
     */
    inline StartImagePipelineExecutionRequest& WithImagePipelineArn(Aws::String&& value) { SetImagePipelineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image pipeline that you want to
     * manually invoke.</p>
     */
    inline StartImagePipelineExecutionRequest& WithImagePipelineArn(const char* value) { SetImagePipelineArn(value); return *this;}


    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline StartImagePipelineExecutionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline StartImagePipelineExecutionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>The idempotency token used to make this request idempotent.</p>
     */
    inline StartImagePipelineExecutionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_imagePipelineArn;
    bool m_imagePipelineArnHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
