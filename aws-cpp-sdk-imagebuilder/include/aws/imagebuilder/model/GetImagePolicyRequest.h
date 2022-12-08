/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class GetImagePolicyRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API GetImagePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetImagePolicy"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the image whose policy you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetImageArn() const{ return m_imageArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image whose policy you want to
     * retrieve.</p>
     */
    inline bool ImageArnHasBeenSet() const { return m_imageArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image whose policy you want to
     * retrieve.</p>
     */
    inline void SetImageArn(const Aws::String& value) { m_imageArnHasBeenSet = true; m_imageArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the image whose policy you want to
     * retrieve.</p>
     */
    inline void SetImageArn(Aws::String&& value) { m_imageArnHasBeenSet = true; m_imageArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image whose policy you want to
     * retrieve.</p>
     */
    inline void SetImageArn(const char* value) { m_imageArnHasBeenSet = true; m_imageArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the image whose policy you want to
     * retrieve.</p>
     */
    inline GetImagePolicyRequest& WithImageArn(const Aws::String& value) { SetImageArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image whose policy you want to
     * retrieve.</p>
     */
    inline GetImagePolicyRequest& WithImageArn(Aws::String&& value) { SetImageArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the image whose policy you want to
     * retrieve.</p>
     */
    inline GetImagePolicyRequest& WithImageArn(const char* value) { SetImageArn(value); return *this;}

  private:

    Aws::String m_imageArn;
    bool m_imageArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
