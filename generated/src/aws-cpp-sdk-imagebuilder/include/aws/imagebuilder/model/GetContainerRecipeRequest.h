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
  class GetContainerRecipeRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API GetContainerRecipeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContainerRecipe"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;

    AWS_IMAGEBUILDER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe to retrieve.</p>
     */
    inline const Aws::String& GetContainerRecipeArn() const { return m_containerRecipeArn; }
    inline bool ContainerRecipeArnHasBeenSet() const { return m_containerRecipeArnHasBeenSet; }
    template<typename ContainerRecipeArnT = Aws::String>
    void SetContainerRecipeArn(ContainerRecipeArnT&& value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn = std::forward<ContainerRecipeArnT>(value); }
    template<typename ContainerRecipeArnT = Aws::String>
    GetContainerRecipeRequest& WithContainerRecipeArn(ContainerRecipeArnT&& value) { SetContainerRecipeArn(std::forward<ContainerRecipeArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_containerRecipeArn;
    bool m_containerRecipeArnHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
