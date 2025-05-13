/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrassv2/GreengrassV2_EXPORTS.h>
#include <aws/greengrassv2/GreengrassV2Request.h>
#include <aws/core/utils/Array.h>
#include <aws/greengrassv2/model/LambdaFunctionRecipeSource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace GreengrassV2
{
namespace Model
{

  /**
   */
  class CreateComponentVersionRequest : public GreengrassV2Request
  {
  public:
    AWS_GREENGRASSV2_API CreateComponentVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateComponentVersion"; }

    AWS_GREENGRASSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The recipe to use to create the component. The recipe defines the component's
     * metadata, parameters, dependencies, lifecycle, artifacts, and platform
     * compatibility.</p> <p>You must specify either <code>inlineRecipe</code> or
     * <code>lambdaFunction</code>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetInlineRecipe() const { return m_inlineRecipe; }
    inline bool InlineRecipeHasBeenSet() const { return m_inlineRecipeHasBeenSet; }
    template<typename InlineRecipeT = Aws::Utils::ByteBuffer>
    void SetInlineRecipe(InlineRecipeT&& value) { m_inlineRecipeHasBeenSet = true; m_inlineRecipe = std::forward<InlineRecipeT>(value); }
    template<typename InlineRecipeT = Aws::Utils::ByteBuffer>
    CreateComponentVersionRequest& WithInlineRecipe(InlineRecipeT&& value) { SetInlineRecipe(std::forward<InlineRecipeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters to create a component from a Lambda function.</p> <p>You must
     * specify either <code>inlineRecipe</code> or <code>lambdaFunction</code>.</p>
     */
    inline const LambdaFunctionRecipeSource& GetLambdaFunction() const { return m_lambdaFunction; }
    inline bool LambdaFunctionHasBeenSet() const { return m_lambdaFunctionHasBeenSet; }
    template<typename LambdaFunctionT = LambdaFunctionRecipeSource>
    void SetLambdaFunction(LambdaFunctionT&& value) { m_lambdaFunctionHasBeenSet = true; m_lambdaFunction = std::forward<LambdaFunctionT>(value); }
    template<typename LambdaFunctionT = LambdaFunctionRecipeSource>
    CreateComponentVersionRequest& WithLambdaFunction(LambdaFunctionT&& value) { SetLambdaFunction(std::forward<LambdaFunctionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the resource. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/greengrass/v2/developerguide/tag-resources.html">Tag
     * your resources</a> in the <i>IoT Greengrass V2 Developer Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateComponentVersionRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateComponentVersionRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you can provide to ensure that the
     * request is idempotent. Idempotency means that the request is successfully
     * processed only once, even if you send the request multiple times. When a request
     * succeeds, and you specify the same client token for subsequent successful
     * requests, the IoT Greengrass V2 service returns the successful response that it
     * caches from the previous request. IoT Greengrass V2 caches successful responses
     * for idempotent requests for up to 8 hours.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateComponentVersionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::ByteBuffer m_inlineRecipe{};
    bool m_inlineRecipeHasBeenSet = false;

    LambdaFunctionRecipeSource m_lambdaFunction;
    bool m_lambdaFunctionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace GreengrassV2
} // namespace Aws
