/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/CommitmentDuration.h>
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
  class CreateProvisionedModelThroughputRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API CreateProvisionedModelThroughputRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProvisionedModelThroughput"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    /**
     * <p>Unique token value that you can provide. If this token matches a previous
     * request, Amazon Bedrock ignores the request, but does not return an error.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>Unique token value that you can provide. If this token matches a previous
     * request, Amazon Bedrock ignores the request, but does not return an error.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>Unique token value that you can provide. If this token matches a previous
     * request, Amazon Bedrock ignores the request, but does not return an error.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>Unique token value that you can provide. If this token matches a previous
     * request, Amazon Bedrock ignores the request, but does not return an error.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>Unique token value that you can provide. If this token matches a previous
     * request, Amazon Bedrock ignores the request, but does not return an error.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>Unique token value that you can provide. If this token matches a previous
     * request, Amazon Bedrock ignores the request, but does not return an error.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>Unique token value that you can provide. If this token matches a previous
     * request, Amazon Bedrock ignores the request, but does not return an error.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>Unique token value that you can provide. If this token matches a previous
     * request, Amazon Bedrock ignores the request, but does not return an error.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Number of model units to allocate.</p>
     */
    inline int GetModelUnits() const{ return m_modelUnits; }

    /**
     * <p>Number of model units to allocate.</p>
     */
    inline bool ModelUnitsHasBeenSet() const { return m_modelUnitsHasBeenSet; }

    /**
     * <p>Number of model units to allocate.</p>
     */
    inline void SetModelUnits(int value) { m_modelUnitsHasBeenSet = true; m_modelUnits = value; }

    /**
     * <p>Number of model units to allocate.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithModelUnits(int value) { SetModelUnits(value); return *this;}


    /**
     * <p>Unique name for this provisioned throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelName() const{ return m_provisionedModelName; }

    /**
     * <p>Unique name for this provisioned throughput.</p>
     */
    inline bool ProvisionedModelNameHasBeenSet() const { return m_provisionedModelNameHasBeenSet; }

    /**
     * <p>Unique name for this provisioned throughput.</p>
     */
    inline void SetProvisionedModelName(const Aws::String& value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName = value; }

    /**
     * <p>Unique name for this provisioned throughput.</p>
     */
    inline void SetProvisionedModelName(Aws::String&& value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName = std::move(value); }

    /**
     * <p>Unique name for this provisioned throughput.</p>
     */
    inline void SetProvisionedModelName(const char* value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName.assign(value); }

    /**
     * <p>Unique name for this provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithProvisionedModelName(const Aws::String& value) { SetProvisionedModelName(value); return *this;}

    /**
     * <p>Unique name for this provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithProvisionedModelName(Aws::String&& value) { SetProvisionedModelName(std::move(value)); return *this;}

    /**
     * <p>Unique name for this provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithProvisionedModelName(const char* value) { SetProvisionedModelName(value); return *this;}


    /**
     * <p>Name or ARN of the model to associate with this provisioned throughput.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>Name or ARN of the model to associate with this provisioned throughput.</p>
     */
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }

    /**
     * <p>Name or ARN of the model to associate with this provisioned throughput.</p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }

    /**
     * <p>Name or ARN of the model to associate with this provisioned throughput.</p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }

    /**
     * <p>Name or ARN of the model to associate with this provisioned throughput.</p>
     */
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }

    /**
     * <p>Name or ARN of the model to associate with this provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>Name or ARN of the model to associate with this provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>Name or ARN of the model to associate with this provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p>Commitment duration requested for the provisioned throughput.</p>
     */
    inline const CommitmentDuration& GetCommitmentDuration() const{ return m_commitmentDuration; }

    /**
     * <p>Commitment duration requested for the provisioned throughput.</p>
     */
    inline bool CommitmentDurationHasBeenSet() const { return m_commitmentDurationHasBeenSet; }

    /**
     * <p>Commitment duration requested for the provisioned throughput.</p>
     */
    inline void SetCommitmentDuration(const CommitmentDuration& value) { m_commitmentDurationHasBeenSet = true; m_commitmentDuration = value; }

    /**
     * <p>Commitment duration requested for the provisioned throughput.</p>
     */
    inline void SetCommitmentDuration(CommitmentDuration&& value) { m_commitmentDurationHasBeenSet = true; m_commitmentDuration = std::move(value); }

    /**
     * <p>Commitment duration requested for the provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithCommitmentDuration(const CommitmentDuration& value) { SetCommitmentDuration(value); return *this;}

    /**
     * <p>Commitment duration requested for the provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithCommitmentDuration(CommitmentDuration&& value) { SetCommitmentDuration(std::move(value)); return *this;}


    /**
     * <p>Tags to associate with this provisioned throughput.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to associate with this provisioned throughput.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to associate with this provisioned throughput.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to associate with this provisioned throughput.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to associate with this provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to associate with this provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to associate with this provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to associate with this provisioned throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    int m_modelUnits;
    bool m_modelUnitsHasBeenSet = false;

    Aws::String m_provisionedModelName;
    bool m_provisionedModelNameHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    CommitmentDuration m_commitmentDuration;
    bool m_commitmentDurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
