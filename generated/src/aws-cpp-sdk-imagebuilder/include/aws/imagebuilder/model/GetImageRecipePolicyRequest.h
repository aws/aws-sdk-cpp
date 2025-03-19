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
  class GetImageRecipePolicyRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API GetImageRecipePolicyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetImageRecipePolicy"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the image recipe whose policy you want to
     * retrieve.</p>
     */
    inline const Aws::String& GetImageRecipeArn() const { return m_imageRecipeArn; }
    inline bool ImageRecipeArnHasBeenSet() const { return m_imageRecipeArnHasBeenSet; }
    template<typename ImageRecipeArnT = Aws::String>
    void SetImageRecipeArn(ImageRecipeArnT&& value) { m_imageRecipeArnHasBeenSet = true; m_imageRecipeArn = std::forward<ImageRecipeArnT>(value); }
    template<typename ImageRecipeArnT = Aws::String>
    GetImageRecipePolicyRequest& WithImageRecipeArn(ImageRecipeArnT&& value) { SetImageRecipeArn(std::forward<ImageRecipeArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_imageRecipeArn;
    bool m_imageRecipeArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
