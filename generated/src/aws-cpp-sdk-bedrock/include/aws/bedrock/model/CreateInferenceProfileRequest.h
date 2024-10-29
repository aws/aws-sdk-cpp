/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/InferenceProfileModelSource.h>
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
  class CreateInferenceProfileRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreateInferenceProfileRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInferenceProfile"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A name for the inference profile.</p>
     */
    inline const Aws::String& GetInferenceProfileName() const{ return m_inferenceProfileName; }
    inline bool InferenceProfileNameHasBeenSet() const { return m_inferenceProfileNameHasBeenSet; }
    inline void SetInferenceProfileName(const Aws::String& value) { m_inferenceProfileNameHasBeenSet = true; m_inferenceProfileName = value; }
    inline void SetInferenceProfileName(Aws::String&& value) { m_inferenceProfileNameHasBeenSet = true; m_inferenceProfileName = std::move(value); }
    inline void SetInferenceProfileName(const char* value) { m_inferenceProfileNameHasBeenSet = true; m_inferenceProfileName.assign(value); }
    inline CreateInferenceProfileRequest& WithInferenceProfileName(const Aws::String& value) { SetInferenceProfileName(value); return *this;}
    inline CreateInferenceProfileRequest& WithInferenceProfileName(Aws::String&& value) { SetInferenceProfileName(std::move(value)); return *this;}
    inline CreateInferenceProfileRequest& WithInferenceProfileName(const char* value) { SetInferenceProfileName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the inference profile.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateInferenceProfileRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateInferenceProfileRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateInferenceProfileRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
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
    inline CreateInferenceProfileRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreateInferenceProfileRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreateInferenceProfileRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The foundation model or system-defined inference profile that the inference
     * profile will track metrics and costs for.</p>
     */
    inline const InferenceProfileModelSource& GetModelSource() const{ return m_modelSource; }
    inline bool ModelSourceHasBeenSet() const { return m_modelSourceHasBeenSet; }
    inline void SetModelSource(const InferenceProfileModelSource& value) { m_modelSourceHasBeenSet = true; m_modelSource = value; }
    inline void SetModelSource(InferenceProfileModelSource&& value) { m_modelSourceHasBeenSet = true; m_modelSource = std::move(value); }
    inline CreateInferenceProfileRequest& WithModelSource(const InferenceProfileModelSource& value) { SetModelSource(value); return *this;}
    inline CreateInferenceProfileRequest& WithModelSource(InferenceProfileModelSource&& value) { SetModelSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of objects, each of which contains a tag and its value. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Tagging
     * resources</a> in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
     * Bedrock User Guide</a>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateInferenceProfileRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateInferenceProfileRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateInferenceProfileRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateInferenceProfileRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_inferenceProfileName;
    bool m_inferenceProfileNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    InferenceProfileModelSource m_modelSource;
    bool m_modelSourceHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
