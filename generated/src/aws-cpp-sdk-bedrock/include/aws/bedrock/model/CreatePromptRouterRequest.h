/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/RoutingCriteria.h>
#include <aws/bedrock/model/PromptRouterTargetModel.h>
#include <aws/bedrock/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace Bedrock
{
namespace Model
{

  /**
   */
  class CreatePromptRouterRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreatePromptRouterRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePromptRouter"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure idempotency of
     * your requests. If not specified, the Amazon Web Services SDK automatically
     * generates one for you.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreatePromptRouterRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the prompt router. The name must be unique within your Amazon Web
     * Services account in the current region.</p>
     */
    inline const Aws::String& GetPromptRouterName() const { return m_promptRouterName; }
    inline bool PromptRouterNameHasBeenSet() const { return m_promptRouterNameHasBeenSet; }
    template<typename PromptRouterNameT = Aws::String>
    void SetPromptRouterName(PromptRouterNameT&& value) { m_promptRouterNameHasBeenSet = true; m_promptRouterName = std::forward<PromptRouterNameT>(value); }
    template<typename PromptRouterNameT = Aws::String>
    CreatePromptRouterRequest& WithPromptRouterName(PromptRouterNameT&& value) { SetPromptRouterName(std::forward<PromptRouterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of foundation models that the prompt router can route requests to. At
     * least one model must be specified.</p>
     */
    inline const Aws::Vector<PromptRouterTargetModel>& GetModels() const { return m_models; }
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }
    template<typename ModelsT = Aws::Vector<PromptRouterTargetModel>>
    void SetModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models = std::forward<ModelsT>(value); }
    template<typename ModelsT = Aws::Vector<PromptRouterTargetModel>>
    CreatePromptRouterRequest& WithModels(ModelsT&& value) { SetModels(std::forward<ModelsT>(value)); return *this;}
    template<typename ModelsT = PromptRouterTargetModel>
    CreatePromptRouterRequest& AddModels(ModelsT&& value) { m_modelsHasBeenSet = true; m_models.emplace_back(std::forward<ModelsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional description of the prompt router to help identify its
     * purpose.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreatePromptRouterRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria, which is the response quality difference, used to determine how
     * incoming requests are routed to different models.</p>
     */
    inline const RoutingCriteria& GetRoutingCriteria() const { return m_routingCriteria; }
    inline bool RoutingCriteriaHasBeenSet() const { return m_routingCriteriaHasBeenSet; }
    template<typename RoutingCriteriaT = RoutingCriteria>
    void SetRoutingCriteria(RoutingCriteriaT&& value) { m_routingCriteriaHasBeenSet = true; m_routingCriteria = std::forward<RoutingCriteriaT>(value); }
    template<typename RoutingCriteriaT = RoutingCriteria>
    CreatePromptRouterRequest& WithRoutingCriteria(RoutingCriteriaT&& value) { SetRoutingCriteria(std::forward<RoutingCriteriaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default model to use when the routing criteria is not met.</p>
     */
    inline const PromptRouterTargetModel& GetFallbackModel() const { return m_fallbackModel; }
    inline bool FallbackModelHasBeenSet() const { return m_fallbackModelHasBeenSet; }
    template<typename FallbackModelT = PromptRouterTargetModel>
    void SetFallbackModel(FallbackModelT&& value) { m_fallbackModelHasBeenSet = true; m_fallbackModel = std::forward<FallbackModelT>(value); }
    template<typename FallbackModelT = PromptRouterTargetModel>
    CreatePromptRouterRequest& WithFallbackModel(FallbackModelT&& value) { SetFallbackModel(std::forward<FallbackModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs to apply to this resource as tags. You can use
     * tags to categorize and manage your Amazon Web Services resources.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreatePromptRouterRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreatePromptRouterRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    Aws::String m_promptRouterName;
    bool m_promptRouterNameHasBeenSet = false;

    Aws::Vector<PromptRouterTargetModel> m_models;
    bool m_modelsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    RoutingCriteria m_routingCriteria;
    bool m_routingCriteriaHasBeenSet = false;

    PromptRouterTargetModel m_fallbackModel;
    bool m_fallbackModelHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
