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
    AWS_BEDROCK_API CreateModelCopyJobRequest();

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
    inline const Aws::String& GetSourceModelArn() const{ return m_sourceModelArn; }
    inline bool SourceModelArnHasBeenSet() const { return m_sourceModelArnHasBeenSet; }
    inline void SetSourceModelArn(const Aws::String& value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn = value; }
    inline void SetSourceModelArn(Aws::String&& value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn = std::move(value); }
    inline void SetSourceModelArn(const char* value) { m_sourceModelArnHasBeenSet = true; m_sourceModelArn.assign(value); }
    inline CreateModelCopyJobRequest& WithSourceModelArn(const Aws::String& value) { SetSourceModelArn(value); return *this;}
    inline CreateModelCopyJobRequest& WithSourceModelArn(Aws::String&& value) { SetSourceModelArn(std::move(value)); return *this;}
    inline CreateModelCopyJobRequest& WithSourceModelArn(const char* value) { SetSourceModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A name for the copied model.</p>
     */
    inline const Aws::String& GetTargetModelName() const{ return m_targetModelName; }
    inline bool TargetModelNameHasBeenSet() const { return m_targetModelNameHasBeenSet; }
    inline void SetTargetModelName(const Aws::String& value) { m_targetModelNameHasBeenSet = true; m_targetModelName = value; }
    inline void SetTargetModelName(Aws::String&& value) { m_targetModelNameHasBeenSet = true; m_targetModelName = std::move(value); }
    inline void SetTargetModelName(const char* value) { m_targetModelNameHasBeenSet = true; m_targetModelName.assign(value); }
    inline CreateModelCopyJobRequest& WithTargetModelName(const Aws::String& value) { SetTargetModelName(value); return *this;}
    inline CreateModelCopyJobRequest& WithTargetModelName(Aws::String&& value) { SetTargetModelName(std::move(value)); return *this;}
    inline CreateModelCopyJobRequest& WithTargetModelName(const char* value) { SetTargetModelName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the KMS key that you use to encrypt the model copy.</p>
     */
    inline const Aws::String& GetModelKmsKeyId() const{ return m_modelKmsKeyId; }
    inline bool ModelKmsKeyIdHasBeenSet() const { return m_modelKmsKeyIdHasBeenSet; }
    inline void SetModelKmsKeyId(const Aws::String& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = value; }
    inline void SetModelKmsKeyId(Aws::String&& value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId = std::move(value); }
    inline void SetModelKmsKeyId(const char* value) { m_modelKmsKeyIdHasBeenSet = true; m_modelKmsKeyId.assign(value); }
    inline CreateModelCopyJobRequest& WithModelKmsKeyId(const Aws::String& value) { SetModelKmsKeyId(value); return *this;}
    inline CreateModelCopyJobRequest& WithModelKmsKeyId(Aws::String&& value) { SetModelKmsKeyId(std::move(value)); return *this;}
    inline CreateModelCopyJobRequest& WithModelKmsKeyId(const char* value) { SetModelKmsKeyId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to associate with the target model. For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tagging.html">Tag
     * resources</a> in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
     * Bedrock User Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTargetModelTags() const{ return m_targetModelTags; }
    inline bool TargetModelTagsHasBeenSet() const { return m_targetModelTagsHasBeenSet; }
    inline void SetTargetModelTags(const Aws::Vector<Tag>& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags = value; }
    inline void SetTargetModelTags(Aws::Vector<Tag>&& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags = std::move(value); }
    inline CreateModelCopyJobRequest& WithTargetModelTags(const Aws::Vector<Tag>& value) { SetTargetModelTags(value); return *this;}
    inline CreateModelCopyJobRequest& WithTargetModelTags(Aws::Vector<Tag>&& value) { SetTargetModelTags(std::move(value)); return *this;}
    inline CreateModelCopyJobRequest& AddTargetModelTags(const Tag& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags.push_back(value); return *this; }
    inline CreateModelCopyJobRequest& AddTargetModelTags(Tag&& value) { m_targetModelTagsHasBeenSet = true; m_targetModelTags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreateModelCopyJobRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateModelCopyJobRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateModelCopyJobRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
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

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
