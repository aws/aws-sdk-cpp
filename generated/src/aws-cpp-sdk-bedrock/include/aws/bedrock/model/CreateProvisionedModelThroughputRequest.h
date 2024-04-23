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
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the Amazon S3 User Guide.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the Amazon S3 User Guide.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the Amazon S3 User Guide.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the Amazon S3 User Guide.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the Amazon S3 User Guide.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the Amazon S3 User Guide.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the Amazon S3 User Guide.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the Amazon S3 User Guide.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


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
     * Throughput quotas</a> in the Amazon Bedrock User Guide.</p> <p>For more
     * information about what an MU specifies, contact your Amazon Web Services account
     * manager.</p>
     */
    inline int GetModelUnits() const{ return m_modelUnits; }

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
     * Throughput quotas</a> in the Amazon Bedrock User Guide.</p> <p>For more
     * information about what an MU specifies, contact your Amazon Web Services account
     * manager.</p>
     */
    inline bool ModelUnitsHasBeenSet() const { return m_modelUnitsHasBeenSet; }

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
     * Throughput quotas</a> in the Amazon Bedrock User Guide.</p> <p>For more
     * information about what an MU specifies, contact your Amazon Web Services account
     * manager.</p>
     */
    inline void SetModelUnits(int value) { m_modelUnitsHasBeenSet = true; m_modelUnits = value; }

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
     * Throughput quotas</a> in the Amazon Bedrock User Guide.</p> <p>For more
     * information about what an MU specifies, contact your Amazon Web Services account
     * manager.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithModelUnits(int value) { SetModelUnits(value); return *this;}


    /**
     * <p>The name for this Provisioned Throughput.</p>
     */
    inline const Aws::String& GetProvisionedModelName() const{ return m_provisionedModelName; }

    /**
     * <p>The name for this Provisioned Throughput.</p>
     */
    inline bool ProvisionedModelNameHasBeenSet() const { return m_provisionedModelNameHasBeenSet; }

    /**
     * <p>The name for this Provisioned Throughput.</p>
     */
    inline void SetProvisionedModelName(const Aws::String& value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName = value; }

    /**
     * <p>The name for this Provisioned Throughput.</p>
     */
    inline void SetProvisionedModelName(Aws::String&& value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName = std::move(value); }

    /**
     * <p>The name for this Provisioned Throughput.</p>
     */
    inline void SetProvisionedModelName(const char* value) { m_provisionedModelNameHasBeenSet = true; m_provisionedModelName.assign(value); }

    /**
     * <p>The name for this Provisioned Throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithProvisionedModelName(const Aws::String& value) { SetProvisionedModelName(value); return *this;}

    /**
     * <p>The name for this Provisioned Throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithProvisionedModelName(Aws::String&& value) { SetProvisionedModelName(std::move(value)); return *this;}

    /**
     * <p>The name for this Provisioned Throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithProvisionedModelName(const char* value) { SetProvisionedModelName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) or name of the model to associate with this
     * Provisioned Throughput. For a list of models for which you can purchase
     * Provisioned Throughput, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#prov-throughput-models">Amazon
     * Bedrock model IDs for purchasing Provisioned Throughput</a> in the Amazon
     * Bedrock User Guide.</p>
     */
    inline const Aws::String& GetModelId() const{ return m_modelId; }

    /**
     * <p>The Amazon Resource Name (ARN) or name of the model to associate with this
     * Provisioned Throughput. For a list of models for which you can purchase
     * Provisioned Throughput, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#prov-throughput-models">Amazon
     * Bedrock model IDs for purchasing Provisioned Throughput</a> in the Amazon
     * Bedrock User Guide.</p>
     */
    inline bool ModelIdHasBeenSet() const { return m_modelIdHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or name of the model to associate with this
     * Provisioned Throughput. For a list of models for which you can purchase
     * Provisioned Throughput, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#prov-throughput-models">Amazon
     * Bedrock model IDs for purchasing Provisioned Throughput</a> in the Amazon
     * Bedrock User Guide.</p>
     */
    inline void SetModelId(const Aws::String& value) { m_modelIdHasBeenSet = true; m_modelId = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or name of the model to associate with this
     * Provisioned Throughput. For a list of models for which you can purchase
     * Provisioned Throughput, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#prov-throughput-models">Amazon
     * Bedrock model IDs for purchasing Provisioned Throughput</a> in the Amazon
     * Bedrock User Guide.</p>
     */
    inline void SetModelId(Aws::String&& value) { m_modelIdHasBeenSet = true; m_modelId = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or name of the model to associate with this
     * Provisioned Throughput. For a list of models for which you can purchase
     * Provisioned Throughput, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#prov-throughput-models">Amazon
     * Bedrock model IDs for purchasing Provisioned Throughput</a> in the Amazon
     * Bedrock User Guide.</p>
     */
    inline void SetModelId(const char* value) { m_modelIdHasBeenSet = true; m_modelId.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or name of the model to associate with this
     * Provisioned Throughput. For a list of models for which you can purchase
     * Provisioned Throughput, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#prov-throughput-models">Amazon
     * Bedrock model IDs for purchasing Provisioned Throughput</a> in the Amazon
     * Bedrock User Guide.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithModelId(const Aws::String& value) { SetModelId(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or name of the model to associate with this
     * Provisioned Throughput. For a list of models for which you can purchase
     * Provisioned Throughput, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#prov-throughput-models">Amazon
     * Bedrock model IDs for purchasing Provisioned Throughput</a> in the Amazon
     * Bedrock User Guide.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithModelId(Aws::String&& value) { SetModelId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or name of the model to associate with this
     * Provisioned Throughput. For a list of models for which you can purchase
     * Provisioned Throughput, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/model-ids.html#prov-throughput-models">Amazon
     * Bedrock model IDs for purchasing Provisioned Throughput</a> in the Amazon
     * Bedrock User Guide.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithModelId(const char* value) { SetModelId(value); return *this;}


    /**
     * <p>The commitment duration requested for the Provisioned Throughput. Billing
     * occurs hourly and is discounted for longer commitment terms. To request a
     * no-commit Provisioned Throughput, omit this field.</p> <p>Custom models support
     * all levels of commitment. To see which base models support no commitment, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/pt-supported.html">Supported
     * regions and models for Provisioned Throughput</a> in the Amazon Bedrock User
     * Guide</p>
     */
    inline const CommitmentDuration& GetCommitmentDuration() const{ return m_commitmentDuration; }

    /**
     * <p>The commitment duration requested for the Provisioned Throughput. Billing
     * occurs hourly and is discounted for longer commitment terms. To request a
     * no-commit Provisioned Throughput, omit this field.</p> <p>Custom models support
     * all levels of commitment. To see which base models support no commitment, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/pt-supported.html">Supported
     * regions and models for Provisioned Throughput</a> in the Amazon Bedrock User
     * Guide</p>
     */
    inline bool CommitmentDurationHasBeenSet() const { return m_commitmentDurationHasBeenSet; }

    /**
     * <p>The commitment duration requested for the Provisioned Throughput. Billing
     * occurs hourly and is discounted for longer commitment terms. To request a
     * no-commit Provisioned Throughput, omit this field.</p> <p>Custom models support
     * all levels of commitment. To see which base models support no commitment, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/pt-supported.html">Supported
     * regions and models for Provisioned Throughput</a> in the Amazon Bedrock User
     * Guide</p>
     */
    inline void SetCommitmentDuration(const CommitmentDuration& value) { m_commitmentDurationHasBeenSet = true; m_commitmentDuration = value; }

    /**
     * <p>The commitment duration requested for the Provisioned Throughput. Billing
     * occurs hourly and is discounted for longer commitment terms. To request a
     * no-commit Provisioned Throughput, omit this field.</p> <p>Custom models support
     * all levels of commitment. To see which base models support no commitment, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/pt-supported.html">Supported
     * regions and models for Provisioned Throughput</a> in the Amazon Bedrock User
     * Guide</p>
     */
    inline void SetCommitmentDuration(CommitmentDuration&& value) { m_commitmentDurationHasBeenSet = true; m_commitmentDuration = std::move(value); }

    /**
     * <p>The commitment duration requested for the Provisioned Throughput. Billing
     * occurs hourly and is discounted for longer commitment terms. To request a
     * no-commit Provisioned Throughput, omit this field.</p> <p>Custom models support
     * all levels of commitment. To see which base models support no commitment, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/pt-supported.html">Supported
     * regions and models for Provisioned Throughput</a> in the Amazon Bedrock User
     * Guide</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithCommitmentDuration(const CommitmentDuration& value) { SetCommitmentDuration(value); return *this;}

    /**
     * <p>The commitment duration requested for the Provisioned Throughput. Billing
     * occurs hourly and is discounted for longer commitment terms. To request a
     * no-commit Provisioned Throughput, omit this field.</p> <p>Custom models support
     * all levels of commitment. To see which base models support no commitment, see <a
     * href="https://docs.aws.amazon.com/bedrock/latest/userguide/pt-supported.html">Supported
     * regions and models for Provisioned Throughput</a> in the Amazon Bedrock User
     * Guide</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithCommitmentDuration(CommitmentDuration&& value) { SetCommitmentDuration(std::move(value)); return *this;}


    /**
     * <p>Tags to associate with this Provisioned Throughput.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Tags to associate with this Provisioned Throughput.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Tags to associate with this Provisioned Throughput.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Tags to associate with this Provisioned Throughput.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Tags to associate with this Provisioned Throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Tags to associate with this Provisioned Throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Tags to associate with this Provisioned Throughput.</p>
     */
    inline CreateProvisionedModelThroughputRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Tags to associate with this Provisioned Throughput.</p>
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
