/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/IntegrationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/IntegrationConfig.h>
#include <aws/glue/model/Tag.h>
#include <aws/glue/model/IntegrationError.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Glue
{
namespace Model
{

  /**
   * <p>Describes a zero-ETL integration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/Integration">AWS
   * API Reference</a></p>
   */
  class Integration
  {
  public:
    AWS_GLUE_API Integration() = default;
    AWS_GLUE_API Integration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Integration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN for the source of the integration.</p>
     */
    inline const Aws::String& GetSourceArn() const { return m_sourceArn; }
    inline bool SourceArnHasBeenSet() const { return m_sourceArnHasBeenSet; }
    template<typename SourceArnT = Aws::String>
    void SetSourceArn(SourceArnT&& value) { m_sourceArnHasBeenSet = true; m_sourceArn = std::forward<SourceArnT>(value); }
    template<typename SourceArnT = Aws::String>
    Integration& WithSourceArn(SourceArnT&& value) { SetSourceArn(std::forward<SourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the target of the integration.</p>
     */
    inline const Aws::String& GetTargetArn() const { return m_targetArn; }
    inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
    template<typename TargetArnT = Aws::String>
    void SetTargetArn(TargetArnT&& value) { m_targetArnHasBeenSet = true; m_targetArn = std::forward<TargetArnT>(value); }
    template<typename TargetArnT = Aws::String>
    Integration& WithTargetArn(TargetArnT&& value) { SetTargetArn(std::forward<TargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the integration.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Integration& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique name for the integration.</p>
     */
    inline const Aws::String& GetIntegrationName() const { return m_integrationName; }
    inline bool IntegrationNameHasBeenSet() const { return m_integrationNameHasBeenSet; }
    template<typename IntegrationNameT = Aws::String>
    void SetIntegrationName(IntegrationNameT&& value) { m_integrationNameHasBeenSet = true; m_integrationName = std::forward<IntegrationNameT>(value); }
    template<typename IntegrationNameT = Aws::String>
    Integration& WithIntegrationName(IntegrationNameT&& value) { SetIntegrationName(std::forward<IntegrationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the integration.</p>
     */
    inline const Aws::String& GetIntegrationArn() const { return m_integrationArn; }
    inline bool IntegrationArnHasBeenSet() const { return m_integrationArnHasBeenSet; }
    template<typename IntegrationArnT = Aws::String>
    void SetIntegrationArn(IntegrationArnT&& value) { m_integrationArnHasBeenSet = true; m_integrationArn = std::forward<IntegrationArnT>(value); }
    template<typename IntegrationArnT = Aws::String>
    Integration& WithIntegrationArn(IntegrationArnT&& value) { SetIntegrationArn(std::forward<IntegrationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a KMS key used for encrypting the channel.</p>
     */
    inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
    inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
    template<typename KmsKeyIdT = Aws::String>
    void SetKmsKeyId(KmsKeyIdT&& value) { m_kmsKeyIdHasBeenSet = true; m_kmsKeyId = std::forward<KmsKeyIdT>(value); }
    template<typename KmsKeyIdT = Aws::String>
    Integration& WithKmsKeyId(KmsKeyIdT&& value) { SetKmsKeyId(std::forward<KmsKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional set of non-secret key–value pairs that contains additional
     * contextual information for encryption. This can only be provided if
     * <code>KMSKeyId</code> is provided.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalEncryptionContext() const { return m_additionalEncryptionContext; }
    inline bool AdditionalEncryptionContextHasBeenSet() const { return m_additionalEncryptionContextHasBeenSet; }
    template<typename AdditionalEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalEncryptionContext(AdditionalEncryptionContextT&& value) { m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext = std::forward<AdditionalEncryptionContextT>(value); }
    template<typename AdditionalEncryptionContextT = Aws::Map<Aws::String, Aws::String>>
    Integration& WithAdditionalEncryptionContext(AdditionalEncryptionContextT&& value) { SetAdditionalEncryptionContext(std::forward<AdditionalEncryptionContextT>(value)); return *this;}
    template<typename AdditionalEncryptionContextKeyT = Aws::String, typename AdditionalEncryptionContextValueT = Aws::String>
    Integration& AddAdditionalEncryptionContext(AdditionalEncryptionContextKeyT&& key, AdditionalEncryptionContextValueT&& value) {
      m_additionalEncryptionContextHasBeenSet = true; m_additionalEncryptionContext.emplace(std::forward<AdditionalEncryptionContextKeyT>(key), std::forward<AdditionalEncryptionContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Metadata assigned to the resource consisting of a list of key-value
     * pairs.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    Integration& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    Integration& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The possible statuses are:</p> <ul> <li> <p>CREATING: The integration is
     * being created.</p> </li> <li> <p>ACTIVE: The integration creation succeeds.</p>
     * </li> <li> <p>MODIFYING: The integration is being modified.</p> </li> <li>
     * <p>FAILED: The integration creation fails. </p> </li> <li> <p>DELETING: The
     * integration is deleted.</p> </li> <li> <p>SYNCING: The integration is
     * synchronizing.</p> </li> <li> <p>NEEDS_ATTENTION: The integration needs
     * attention, such as synchronization.</p> </li> </ul>
     */
    inline IntegrationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IntegrationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Integration& WithStatus(IntegrationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the integration was created, in UTC.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    Integration& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Properties associated with the integration.</p>
     */
    inline const IntegrationConfig& GetIntegrationConfig() const { return m_integrationConfig; }
    inline bool IntegrationConfigHasBeenSet() const { return m_integrationConfigHasBeenSet; }
    template<typename IntegrationConfigT = IntegrationConfig>
    void SetIntegrationConfig(IntegrationConfigT&& value) { m_integrationConfigHasBeenSet = true; m_integrationConfig = std::forward<IntegrationConfigT>(value); }
    template<typename IntegrationConfigT = IntegrationConfig>
    Integration& WithIntegrationConfig(IntegrationConfigT&& value) { SetIntegrationConfig(std::forward<IntegrationConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of errors associated with the integration.</p>
     */
    inline const Aws::Vector<IntegrationError>& GetErrors() const { return m_errors; }
    inline bool ErrorsHasBeenSet() const { return m_errorsHasBeenSet; }
    template<typename ErrorsT = Aws::Vector<IntegrationError>>
    void SetErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors = std::forward<ErrorsT>(value); }
    template<typename ErrorsT = Aws::Vector<IntegrationError>>
    Integration& WithErrors(ErrorsT&& value) { SetErrors(std::forward<ErrorsT>(value)); return *this;}
    template<typename ErrorsT = IntegrationError>
    Integration& AddErrors(ErrorsT&& value) { m_errorsHasBeenSet = true; m_errors.emplace_back(std::forward<ErrorsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Selects source tables for the integration using Maxwell filter syntax.</p>
     */
    inline const Aws::String& GetDataFilter() const { return m_dataFilter; }
    inline bool DataFilterHasBeenSet() const { return m_dataFilterHasBeenSet; }
    template<typename DataFilterT = Aws::String>
    void SetDataFilter(DataFilterT&& value) { m_dataFilterHasBeenSet = true; m_dataFilter = std::forward<DataFilterT>(value); }
    template<typename DataFilterT = Aws::String>
    Integration& WithDataFilter(DataFilterT&& value) { SetDataFilter(std::forward<DataFilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceArn;
    bool m_sourceArnHasBeenSet = false;

    Aws::String m_targetArn;
    bool m_targetArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_integrationName;
    bool m_integrationNameHasBeenSet = false;

    Aws::String m_integrationArn;
    bool m_integrationArnHasBeenSet = false;

    Aws::String m_kmsKeyId;
    bool m_kmsKeyIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalEncryptionContext;
    bool m_additionalEncryptionContextHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    IntegrationStatus m_status{IntegrationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    IntegrationConfig m_integrationConfig;
    bool m_integrationConfigHasBeenSet = false;

    Aws::Vector<IntegrationError> m_errors;
    bool m_errorsHasBeenSet = false;

    Aws::String m_dataFilter;
    bool m_dataFilterHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
