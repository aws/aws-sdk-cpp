/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Request.h>
#include <aws/greengrassv2/model/RecipeOutputFormat.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GreengrassV2
{
namespace Model
{

  /**
   */
  class GetComponentRequest : public GreengrassV2Request
  {
  public:
    AWS_GREENGRASSV2_API GetComponentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetComponent"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;

    AWS_GREENGRASSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The format of the recipe.</p>
     */
    inline const RecipeOutputFormat& GetRecipeOutputFormat() const{ return m_recipeOutputFormat; }

    /**
     * <p>The format of the recipe.</p>
     */
    inline bool RecipeOutputFormatHasBeenSet() const { return m_recipeOutputFormatHasBeenSet; }

    /**
     * <p>The format of the recipe.</p>
     */
    inline void SetRecipeOutputFormat(const RecipeOutputFormat& value) { m_recipeOutputFormatHasBeenSet = true; m_recipeOutputFormat = value; }

    /**
     * <p>The format of the recipe.</p>
     */
    inline void SetRecipeOutputFormat(RecipeOutputFormat&& value) { m_recipeOutputFormatHasBeenSet = true; m_recipeOutputFormat = std::move(value); }

    /**
     * <p>The format of the recipe.</p>
     */
    inline GetComponentRequest& WithRecipeOutputFormat(const RecipeOutputFormat& value) { SetRecipeOutputFormat(value); return *this;}

    /**
     * <p>The format of the recipe.</p>
     */
    inline GetComponentRequest& WithRecipeOutputFormat(RecipeOutputFormat&& value) { SetRecipeOutputFormat(std::move(value)); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline GetComponentRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline GetComponentRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the component version.</p>
     */
    inline GetComponentRequest& WithArn(const char* value) { SetArn(value); return *this;}

  private:

    RecipeOutputFormat m_recipeOutputFormat;
    bool m_recipeOutputFormatHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
