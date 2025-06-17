/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/ModelDataSource.h>
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
  class CreateCustomModelRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreateCustomModelRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateCustomModel"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique name for the custom model.</p>
     */
    inline const Aws::String& GetModelName() const { return m_modelName; }
    inline bool ModelNameHasBeenSet() const { return m_modelNameHasBeenSet; }
    template<typename ModelNameT = Aws::String>
    void SetModelName(ModelNameT&& value) { m_modelNameHasBeenSet = true; m_modelName = std::forward<ModelNameT>(value); }
    template<typename ModelNameT = Aws::String>
    CreateCustomModelRequest& WithModelName(ModelNameT&& value) { SetModelName(std::forward<ModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source for the model. The Amazon S3 URI in the model source must be
     * for the Amazon-managed Amazon S3 bucket containing your model artifacts.</p>
     */
    inline const ModelDataSource& GetModelSourceConfig() const { return m_modelSourceConfig; }
    inline bool ModelSourceConfigHasBeenSet() const { return m_modelSourceConfigHasBeenSet; }
    template<typename ModelSourceConfigT = ModelDataSource>
    void SetModelSourceConfig(ModelSourceConfigT&& value) { m_modelSourceConfigHasBeenSet = true; m_modelSourceConfig = std::forward<ModelSourceConfigT>(value); }
    template<typename ModelSourceConfigT = ModelDataSource>
    CreateCustomModelRequest& WithModelSourceConfig(ModelSourceConfigT&& value) { SetModelSourceConfig(std::forward<ModelSourceConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the customer managed KMS key to encrypt the
     * custom model. If you don't provide a KMS key, Amazon Bedrock uses an Amazon Web
     * Services-managed KMS key to encrypt the model. </p> <p>If you provide a customer
     * managed KMS key, your Amazon Bedrock service role must have permissions to use
     * it. For more information see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/encryption-import-model.html">Encryption
     * of imported models</a>. </p>
     */
    inline const Aws::String& GetModelKmsKeyArn() const { return m_modelKmsKeyArn; }
    inline bool ModelKmsKeyArnHasBeenSet() const { return m_modelKmsKeyArnHasBeenSet; }
    template<typename ModelKmsKeyArnT = Aws::String>
    void SetModelKmsKeyArn(ModelKmsKeyArnT&& value) { m_modelKmsKeyArnHasBeenSet = true; m_modelKmsKeyArn = std::forward<ModelKmsKeyArnT>(value); }
    template<typename ModelKmsKeyArnT = Aws::String>
    CreateCustomModelRequest& WithModelKmsKeyArn(ModelKmsKeyArnT&& value) { SetModelKmsKeyArn(std::forward<ModelKmsKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of an IAM service role that Amazon Bedrock
     * assumes to perform tasks on your behalf. This role must have permissions to
     * access the Amazon S3 bucket containing your model artifacts and the KMS key (if
     * specified). For more information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-import-iam-role.html">Setting
     * up an IAM service role for importing models</a> in the Amazon Bedrock User
     * Guide.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreateCustomModelRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs to associate with the custom model resource. You
     * can use these tags to organize and identify your resources.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/tagging.html">Tagging
     * resources</a> in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
     * Bedrock User Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetModelTags() const { return m_modelTags; }
    inline bool ModelTagsHasBeenSet() const { return m_modelTagsHasBeenSet; }
    template<typename ModelTagsT = Aws::Vector<Tag>>
    void SetModelTags(ModelTagsT&& value) { m_modelTagsHasBeenSet = true; m_modelTags = std::forward<ModelTagsT>(value); }
    template<typename ModelTagsT = Aws::Vector<Tag>>
    CreateCustomModelRequest& WithModelTags(ModelTagsT&& value) { SetModelTags(std::forward<ModelTagsT>(value)); return *this;}
    template<typename ModelTagsT = Tag>
    CreateCustomModelRequest& AddModelTags(ModelTagsT&& value) { m_modelTagsHasBeenSet = true; m_modelTags.emplace_back(std::forward<ModelTagsT>(value)); return *this; }
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
    CreateCustomModelRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelName;
    bool m_modelNameHasBeenSet = false;

    ModelDataSource m_modelSourceConfig;
    bool m_modelSourceConfigHasBeenSet = false;

    Aws::String m_modelKmsKeyArn;
    bool m_modelKmsKeyArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_modelTags;
    bool m_modelTagsHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
