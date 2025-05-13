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
  class CreateModelCopyJobRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreateModelCopyJobRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateModelCopyJob"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the model to be copied.</p>
     */
    inline const Aws::String& GetSourceModelArn() const { return m_sourceModelArn; }
    inline bool SourceModelArnHasBeenSet() const { return m_sourceModelArnHasBeenSet; }
    template<typename SourceModelArnT = Aws::String>
    void SetSourceModelArn(SourceModelArnT&& value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn = std::forward<SourceModelArnT>(value); }
    template<typename SourceModelArnT = Aws::String>
    CreateModelCopyJobRequest& WithSourceModelArn(SourceModelArnT&& value) { SetSourceModelArn(std::forward<SourceModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the copied model.</p>
     */
    inline const Aws::String& GetTargetModelName() const { return m_targetModelName; }
    inline bool TargetModelNameHasBeenSet() const { return m_targetModelNameHasBeenSet; }
    template<typename TargetModelNameT = Aws::String>
    void SetTargetModelName(TargetModelNameT&& value) { m_targetModelNameHasBeenSet = true; m_targetModelName = std::forward<TargetModelNameT>(value); }
    template<typename TargetModelNameT = Aws::String>
    CreateModelCopyJobRequest& WithTargetModelName(TargetModelNameT&& value) { SetTargetModelName(std::forward<TargetModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key that you use to encrypt the model copy.</p>
     */
    inline const Aws::String& GetModelKmsKeyId() const { return m_modelKmsKeyId; }
    inline bool ModelKmsKeyIdHasBeenSet() const { return m_modelKmsKeyIdHasBeenSet; }
    template<typename ModelKmsKeyIdT = Aws::String>
    void SetModelKmsKeyId(ModelKmsKeyIdT&& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = std::forward<ModelKmsKeyIdT>(value); }
    template<typename ModelKmsKeyIdT = Aws::String>
    CreateModelCopyJobRequest& WithModelKmsKeyId(ModelKmsKeyIdT&& value) { SetModelKmsKeyId(std::forward<ModelKmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to associate with the target model. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tagging.html">Tag
     * resources</a> in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
     * Bedrock User Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTargetModelTags() const { return m_targetModelTags; }
    inline bool TargetModelTagsHasBeenSet() const { return m_targetModelTagsHasBeenSet; }
    template<typename TargetModelTagsT = Aws::Vector<Tag>>
    void SetTargetModelTags(TargetModelTagsT&& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags = std::forward<TargetModelTagsT>(value); }
    template<typename TargetModelTagsT = Aws::Vector<Tag>>
    CreateModelCopyJobRequest& WithTargetModelTags(TargetModelTagsT&& value) { SetTargetModelTags(std::forward<TargetModelTagsT>(value)); return *this;}
    template<typename TargetModelTagsT = Tag>
    CreateModelCopyJobRequest& AddTargetModelTags(TargetModelTagsT&& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags.emplace_back(std::forward<TargetModelTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateModelCopyJobRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceModelArn;
    bool m_sourceModelArnHasBeenSet = false;

    Aws::String m_targetModelName;
    bool m_targetModelNameHasBeenSet = false;

    Aws::String m_modelKmsKeyId;
    bool m_modelKmsKeyIdHasBeenSet = false;

    Aws::Vector<Tag> m_targetModelTags;
    bool m_targetModelTagsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
