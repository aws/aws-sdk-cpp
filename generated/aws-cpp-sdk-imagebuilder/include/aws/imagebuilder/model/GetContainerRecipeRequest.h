﻿/**
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
  class AWS_IMAGEBUILDER_API GetContainerRecipeRequest : public ImagebuilderRequest
  {
  public:
    GetContainerRecipeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetContainerRecipe"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe to retrieve.</p>
     */
    inline const Aws::String& GetContainerRecipeArn() const{ return m_containerRecipeArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe to retrieve.</p>
     */
    inline bool ContainerRecipeArnHasBeenSet() const { return m_containerRecipeArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe to retrieve.</p>
     */
    inline void SetContainerRecipeArn(const Aws::String& value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe to retrieve.</p>
     */
    inline void SetContainerRecipeArn(Aws::String&& value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe to retrieve.</p>
     */
    inline void SetContainerRecipeArn(const char* value) { m_containerRecipeArnHasBeenSet = true; m_containerRecipeArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe to retrieve.</p>
     */
    inline GetContainerRecipeRequest& WithContainerRecipeArn(const Aws::String& value) { SetContainerRecipeArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe to retrieve.</p>
     */
    inline GetContainerRecipeRequest& WithContainerRecipeArn(Aws::String&& value) { SetContainerRecipeArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the container recipe to retrieve.</p>
     */
    inline GetContainerRecipeRequest& WithContainerRecipeArn(const char* value) { SetContainerRecipeArn(value); return *this;}

  private:

    Aws::String m_containerRecipeArn;
    bool m_containerRecipeArnHasBeenSet;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
