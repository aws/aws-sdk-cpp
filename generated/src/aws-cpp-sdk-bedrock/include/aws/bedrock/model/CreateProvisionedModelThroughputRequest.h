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
    AWS_BEDROCK_API CreateProvisionedModelThroughputRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateProvisionedModelThroughput"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the Amazon S3 User Guide.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreateProvisionedModelThroughputRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Number of model units to allocate. A model unit delivers a specific
     * throughput level for the specified model. The throughput level of a model unit
     * specifies the total number of input and output tokens that it can process and
     * generate within a span of one minute. By default, your account has no model
     * units for purchasing Provisioned Throughputs with commitment. You must first
     * visit the <a
     * href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase">Amazon
     * Web Services support center</a> to request MUs.</p> <p>For model unit quotas,
     * see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/quotas.html#prov-thru-quotas">Provisioned
     * Throughput quotas</a> in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
     * Bedrock User Guide</a>.</p> <p>For more information about what an MU specifies,
     * contact your Amazon Web Services account manager.</p>
     */
    inline int GetModelUnits() const { return m_modelUnits; }
    inline bool ModelUnitsHasBeenSet() const { return m_modelUnitsHasBeenSet; }
    inline void SetModelUnits(int value) { m_modelUnitsHasBeenSet = true; m_modelUnits = value; }
    inline CreateProvisionedModelThroughputRequest& WithModelUnits(int value) { SetModelUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for this Provisioned Throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelName() const { return m_provisionedModelName; }
    inline bool ProvisionedModelNameHasBeenSet() const { return m_provisionedModelNameHasBeenSet; }
    template<typename ProvisionedModelNameT = Aws::String>
    void SetProvisionedModelName(ProvisionedModelNameT&& value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName = std::forward<ProvisionedModelNameT>(value); }
    template<typename ProvisionedModelNameT = Aws::String>
    CreateProvisionedModelThroughputRequest& WithProvisionedModelName(ProvisionedModelNameT&& value) { SetProvisionedModelName(std::forward<ProvisionedModelNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or name of the model to associate with this
     * Provisioned Throughput. For a list of models for which you can purchase
     * Provisioned Throughput, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#prov-throughput-models">Amazon
     * Bedrock model IDs for purchasing Provisioned Throughput</a> in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
     * Bedrock User Guide</a>.</p>
     */
    inline const Aws::String& GetModelId() const { return m_modelId; }
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }
    template<typename ModelIdT = Aws::String>
    void SetModelId(ModelIdT&& value) { m_modelIdHasBeenSet = true; m_modelId = std::forward<ModelIdT>(value); }
    template<typename ModelIdT = Aws::String>
    CreateProvisionedModelThroughputRequest& WithModelId(ModelIdT&& value) { SetModelId(std::forward<ModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The commitment duration requested for the Provisioned Throughput. Billing
     * occurs hourly and is discounted for longer commitment terms. To request a
     * no-commit Provisioned Throughput, omit this field.</p> <p>Custom models support
     * all levels of commitment. To see which base models support no commitment, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/pt-supported.html">Supported
     * regions and models for Provisioned Throughput</a> in the <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/what-is-service.html">Amazon
     * Bedrock User Guide</a> </p>
     */
    inline CommitmentDuration GetCommitmentDuration() const { return m_commitmentDuration; }
    inline bool CommitmentDurationHasBeenSet() const { return m_commitmentDurationHasBeenSet; }
    inline void SetCommitmentDuration(CommitmentDuration value) { m_commitmentDurationHasBeenSet = true; m_commitmentDuration = value; }
    inline CreateProvisionedModelThroughputRequest& WithCommitmentDuration(CommitmentDuration value) { SetCommitmentDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags to associate with this Provisioned Throughput.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateProvisionedModelThroughputRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateProvisionedModelThroughputRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    int m_modelUnits{0};
    bool m_modelUnitsHasBeenSet = false;

    Aws::String m_provisionedModelName;
    bool m_provisionedModelNameHasBeenSet = false;

    Aws::String m_modelId;
    bool m_modelIdHasBeenSet = false;

    CommitmentDuration m_commitmentDuration{CommitmentDuration::NOT_SET};
    bool m_commitmentDurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
