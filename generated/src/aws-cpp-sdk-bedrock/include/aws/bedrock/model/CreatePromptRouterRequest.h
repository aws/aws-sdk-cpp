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
    AWS_BEDROCK_API CreatePromptRouterRequest();

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
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreatePromptRouterRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreatePromptRouterRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreatePromptRouterRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the prompt router. The name must be unique within your Amazon Web
     * Services account in the current region.</p>
     */
    inline const Aws::String& GetPromptRouterName() const{ return m_promptRouterName; }
    inline bool PromptRouterNameHasBeenSet() const { return m_promptRouterNameHasBeenSet; }
    inline void SetPromptRouterName(const Aws::String& value) { m_promptRouterNameHasBeenSet = true; m_promptRouterName = value; }
    inline void SetPromptRouterName(Aws::String&& value) { m_promptRouterNameHasBeenSet = true; m_promptRouterName = std::move(value); }
    inline void SetPromptRouterName(const char* value) { m_promptRouterNameHasBeenSet = true; m_promptRouterName.assign(value); }
    inline CreatePromptRouterRequest& WithPromptRouterName(const Aws::String& value) { SetPromptRouterName(value); return *this;}
    inline CreatePromptRouterRequest& WithPromptRouterName(Aws::String&& value) { SetPromptRouterName(std::move(value)); return *this;}
    inline CreatePromptRouterRequest& WithPromptRouterName(const char* value) { SetPromptRouterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of foundation models that the prompt router can route requests to. At
     * least one model must be specified.</p>
     */
    inline const Aws::Vector<PromptRouterTargetModel>& GetModels() const{ return m_models; }
    inline bool ModelsHasBeenSet() const { return m_modelsHasBeenSet; }
    inline void SetModels(const Aws::Vector<PromptRouterTargetModel>& value) { m_modelsHasBeenSet = true; m_models = value; }
    inline void SetModels(Aws::Vector<PromptRouterTargetModel>&& value) { m_modelsHasBeenSet = true; m_models = std::move(value); }
    inline CreatePromptRouterRequest& WithModels(const Aws::Vector<PromptRouterTargetModel>& value) { SetModels(value); return *this;}
    inline CreatePromptRouterRequest& WithModels(Aws::Vector<PromptRouterTargetModel>&& value) { SetModels(std::move(value)); return *this;}
    inline CreatePromptRouterRequest& AddModels(const PromptRouterTargetModel& value) { m_modelsHasBeenSet = true; m_models.push_back(value); return *this; }
    inline CreatePromptRouterRequest& AddModels(PromptRouterTargetModel&& value) { m_modelsHasBeenSet = true; m_models.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An optional description of the prompt router to help identify its
     * purpose.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreatePromptRouterRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreatePromptRouterRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreatePromptRouterRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria, which is the response quality difference, used to determine how
     * incoming requests are routed to different models.</p>
     */
    inline const RoutingCriteria& GetRoutingCriteria() const{ return m_routingCriteria; }
    inline bool RoutingCriteriaHasBeenSet() const { return m_routingCriteriaHasBeenSet; }
    inline void SetRoutingCriteria(const RoutingCriteria& value) { m_routingCriteriaHasBeenSet = true; m_routingCriteria = value; }
    inline void SetRoutingCriteria(RoutingCriteria&& value) { m_routingCriteriaHasBeenSet = true; m_routingCriteria = std::move(value); }
    inline CreatePromptRouterRequest& WithRoutingCriteria(const RoutingCriteria& value) { SetRoutingCriteria(value); return *this;}
    inline CreatePromptRouterRequest& WithRoutingCriteria(RoutingCriteria&& value) { SetRoutingCriteria(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default model to use when the routing criteria is not met.</p>
     */
    inline const PromptRouterTargetModel& GetFallbackModel() const{ return m_fallbackModel; }
    inline bool FallbackModelHasBeenSet() const { return m_fallbackModelHasBeenSet; }
    inline void SetFallbackModel(const PromptRouterTargetModel& value) { m_fallbackModelHasBeenSet = true; m_fallbackModel = value; }
    inline void SetFallbackModel(PromptRouterTargetModel&& value) { m_fallbackModelHasBeenSet = true; m_fallbackModel = std::move(value); }
    inline CreatePromptRouterRequest& WithFallbackModel(const PromptRouterTargetModel& value) { SetFallbackModel(value); return *this;}
    inline CreatePromptRouterRequest& WithFallbackModel(PromptRouterTargetModel&& value) { SetFallbackModel(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs to apply to this resource as tags. You can use
     * tags to categorize and manage your Amazon Web Services resources.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreatePromptRouterRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreatePromptRouterRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreatePromptRouterRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreatePromptRouterRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

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
