/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateCustomModelDeploymentRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreateCustomModelDeploymentRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomModelDeployment"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name for the custom model deployment. The name must be unique within your
     * Amazon Web Services account and Region.</p>
     */
    inline const Aws::String& GetModelDeploymentName() const { return m_modelDeploymentName; }
    inline bool ModelDeploymentNameHasBeenSet() const { return m_modelDeploymentNameHasBeenSet; }
    template<typename ModelDeploymentNameT = Aws::String>
    void SetModelDeploymentName(ModelDeploymentNameT&& value) { m_modelDeploymentNameHasBeenSet = true; m_modelDeploymentName = std::forward<ModelDeploymentNameT>(value); }
    template<typename ModelDeploymentNameT = Aws::String>
    CreateCustomModelDeploymentRequest& WithModelDeploymentName(ModelDeploymentNameT&& value) { SetModelDeploymentName(std::forward<ModelDeploymentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the custom model to deploy for on-demand
     * inference. The custom model must be in the <code>Active</code> state.</p>
     */
    inline const Aws::String& GetModelArn() const { return m_modelArn; }
    inline bool ModelArnHasBeenSet() const { return m_modelArnHasBeenSet; }
    template<typename ModelArnT = Aws::String>
    void SetModelArn(ModelArnT&& value) { m_modelArnHasBeenSet = true; m_modelArn = std::forward<ModelArnT>(value); }
    template<typename ModelArnT = Aws::String>
    CreateCustomModelDeploymentRequest& WithModelArn(ModelArnT&& value) { SetModelArn(std::forward<ModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the custom model deployment to help you identify its
     * purpose.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateCustomModelDeploymentRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to assign to the custom model deployment. You can use tags to organize
     * and track your Amazon Web Services resources for cost allocation and management
     * purposes.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateCustomModelDeploymentRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateCustomModelDeploymentRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the operation completes no
     * more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-customization-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateCustomModelDeploymentRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelDeploymentName;
    bool m_modelDeploymentNameHasBeenSet = false;

    Aws::String m_modelArn;
    bool m_modelArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
