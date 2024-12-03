/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-runtime/BedrockRuntime_EXPORTS.h>
#include <aws/bedrock-runtime/BedrockRuntimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Document.h>
#include <aws/bedrock-runtime/model/AsyncInvokeOutputDataConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-runtime/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

  /**
   */
  class StartAsyncInvokeRequest : public BedrockRuntimeRequest
  {
  public:
    AWS_BEDROCKRUNTIME_API StartAsyncInvokeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartAsyncInvoke"; }

    AWS_BEDROCKRUNTIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specify idempotency token to ensure that requests are not duplicated.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline StartAsyncInvokeRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline StartAsyncInvokeRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline StartAsyncInvokeRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model to invoke.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }
    inline StartAsyncInvokeRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}
    inline StartAsyncInvokeRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}
    inline StartAsyncInvokeRequest& WithModelId(const char* value) { SetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Input to send to the model.</p>
     */
    inline Aws::Utils::DocumentView GetModelInput() const{ return m_modelInput; }
    inline bool ModelInputHasBeenSet() const { return m_modelInputHasBeenSet; }
    inline void SetModelInput(const Aws::Utils::Document& value) { m_modelInputHasBeenSet = true; m_modelInput = value; }
    inline void SetModelInput(Aws::Utils::Document&& value) { m_modelInputHasBeenSet = true; m_modelInput = std::move(value); }
    inline StartAsyncInvokeRequest& WithModelInput(const Aws::Utils::Document& value) { SetModelInput(value); return *this;}
    inline StartAsyncInvokeRequest& WithModelInput(Aws::Utils::Document&& value) { SetModelInput(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Where to store the output.</p>
     */
    inline const AsyncInvokeOutputDataConfig& GetOutputDataConfig() const{ return m_outputDataConfig; }
    inline bool OutputDataConfigHasBeenSet() const { return m_outputDataConfigHasBeenSet; }
    inline void SetOutputDataConfig(const AsyncInvokeOutputDataConfig& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = value; }
    inline void SetOutputDataConfig(AsyncInvokeOutputDataConfig&& value) { m_outputDataConfigHasBeenSet = true; m_outputDataConfig = std::move(value); }
    inline StartAsyncInvokeRequest& WithOutputDataConfig(const AsyncInvokeOutputDataConfig& value) { SetOutputDataConfig(value); return *this;}
    inline StartAsyncInvokeRequest& WithOutputDataConfig(AsyncInvokeOutputDataConfig&& value) { SetOutputDataConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to apply to the invocation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline StartAsyncInvokeRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline StartAsyncInvokeRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline StartAsyncInvokeRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline StartAsyncInvokeRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    Aws::Utils::Document m_modelInput;
    bool m_modelInputHasBeenSet = false;

    AsyncInvokeOutputDataConfig m_outputDataConfig;
    bool m_outputDataConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
