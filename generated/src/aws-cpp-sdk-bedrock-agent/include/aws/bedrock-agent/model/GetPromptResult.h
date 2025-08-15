/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/PromptVariant.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{
  class GetPromptResult
  {
  public:
    AWS_BEDROCKAGENT_API GetPromptResult() = default;
    AWS_BEDROCKAGENT_API GetPromptResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENT_API GetPromptResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the prompt.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetPromptResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The descriptino of the prompt.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetPromptResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the KMS key that the prompt is encrypted
     * with.</p>
     */
    inline const Aws::String& GetCustomerEncryptionKeyArn() const { return m_customerEncryptionKeyArn; }
    template<typename CustomerEncryptionKeyArnT = Aws::String>
    void SetCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) { m_customerEncryptionKeyArnHasBeenSet = true; m_customerEncryptionKeyArn = std::forward<CustomerEncryptionKeyArnT>(value); }
    template<typename CustomerEncryptionKeyArnT = Aws::String>
    GetPromptResult& WithCustomerEncryptionKeyArn(CustomerEncryptionKeyArnT&& value) { SetCustomerEncryptionKeyArn(std::forward<CustomerEncryptionKeyArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the default variant for the prompt. This value must match the
     * <code>name</code> field in the relevant <a
     * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_PromptVariant.html">PromptVariant</a>
     * object.</p>
     */
    inline const Aws::String& GetDefaultVariant() const { return m_defaultVariant; }
    template<typename DefaultVariantT = Aws::String>
    void SetDefaultVariant(DefaultVariantT&& value) { m_defaultVariantHasBeenSet = true; m_defaultVariant = std::forward<DefaultVariantT>(value); }
    template<typename DefaultVariantT = Aws::String>
    GetPromptResult& WithDefaultVariant(DefaultVariantT&& value) { SetDefaultVariant(std::forward<DefaultVariantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each containing details about a variant of the prompt.</p>
     */
    inline const Aws::Vector<PromptVariant>& GetVariants() const { return m_variants; }
    template<typename VariantsT = Aws::Vector<PromptVariant>>
    void SetVariants(VariantsT&& value) { m_variantsHasBeenSet = true; m_variants = std::forward<VariantsT>(value); }
    template<typename VariantsT = Aws::Vector<PromptVariant>>
    GetPromptResult& WithVariants(VariantsT&& value) { SetVariants(std::forward<VariantsT>(value)); return *this;}
    template<typename VariantsT = PromptVariant>
    GetPromptResult& AddVariants(VariantsT&& value) { m_variantsHasBeenSet = true; m_variants.emplace_back(std::forward<VariantsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the prompt.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetPromptResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the prompt or the prompt version (if you
     * specified a version in the request).</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetPromptResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the prompt.</p>
     */
    inline const Aws::String& GetVersion() const { return m_version; }
    template<typename VersionT = Aws::String>
    void SetVersion(VersionT&& value) { m_versionHasBeenSet = true; m_version = std::forward<VersionT>(value); }
    template<typename VersionT = Aws::String>
    GetPromptResult& WithVersion(VersionT&& value) { SetVersion(std::forward<VersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the prompt was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    GetPromptResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the prompt was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    GetPromptResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetPromptResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_customerEncryptionKeyArn;
    bool m_customerEncryptionKeyArnHasBeenSet = false;

    Aws::String m_defaultVariant;
    bool m_defaultVariantHasBeenSet = false;

    Aws::Vector<PromptVariant> m_variants;
    bool m_variantsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_version;
    bool m_versionHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
