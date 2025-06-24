/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/model/Resource.h>
#include <aws/guardduty/model/Service.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the finding that is generated when abnormal or
   * suspicious activity is detected.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/Finding">AWS
   * API Reference</a></p>
   */
  class Finding
  {
  public:
    AWS_GUARDDUTY_API Finding() = default;
    AWS_GUARDDUTY_API Finding(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the account in which the finding was generated.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    Finding& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the finding.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Finding& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The confidence score for the finding.</p>
     */
    inline double GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(double value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline Finding& WithConfidence(double value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date when the finding was created.</p>
     */
    inline const Aws::String& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::String>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::String>
    Finding& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the finding.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Finding& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the finding.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Finding& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The partition associated with the finding.</p>
     */
    inline const Aws::String& GetPartition() const { return m_partition; }
    inline bool PartitionHasBeenSet() const { return m_partitionHasBeenSet; }
    template<typename PartitionT = Aws::String>
    void SetPartition(PartitionT&& value) { m_partitionHasBeenSet = true; m_partition = std::forward<PartitionT>(value); }
    template<typename PartitionT = Aws::String>
    Finding& WithPartition(PartitionT&& value) { SetPartition(std::forward<PartitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Region where the finding was generated. For findings generated from <a
     * href="https://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html#cloudtrail-concepts-global-service-events">Global
     * Service Events</a>, the Region value in the finding might differ from the Region
     * where GuardDuty identifies the potential threat. For more information, see <a
     * href="https://docs.aws.amazon.com/guardduty/latest/ug/guardduty_data-sources.html#cloudtrail_global">How
     * GuardDuty handles Amazon Web Services CloudTrail global events</a> in the
     * <i>Amazon GuardDuty User Guide</i>.</p>
     */
    inline const Aws::String& GetRegion() const { return m_region; }
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }
    template<typename RegionT = Aws::String>
    void SetRegion(RegionT&& value) { m_regionHasBeenSet = true; m_region = std::forward<RegionT>(value); }
    template<typename RegionT = Aws::String>
    Finding& WithRegion(RegionT&& value) { SetRegion(std::forward<RegionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Resource& GetResource() const { return m_resource; }
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
    template<typename ResourceT = Resource>
    void SetResource(ResourceT&& value) { m_resourceHasBeenSet = true; m_resource = std::forward<ResourceT>(value); }
    template<typename ResourceT = Resource>
    Finding& WithResource(ResourceT&& value) { SetResource(std::forward<ResourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the schema used for the finding.</p>
     */
    inline const Aws::String& GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    template<typename SchemaVersionT = Aws::String>
    void SetSchemaVersion(SchemaVersionT&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::forward<SchemaVersionT>(value); }
    template<typename SchemaVersionT = Aws::String>
    Finding& WithSchemaVersion(SchemaVersionT&& value) { SetSchemaVersion(std::forward<SchemaVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Service& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Service>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Service>
    Finding& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The severity of the finding.</p>
     */
    inline double GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(double value) { m_severityHasBeenSet = true; m_severity = value; }
    inline Finding& WithSeverity(double value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The title of the finding.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    Finding& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of finding.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    Finding& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time and date when the finding was last updated.</p>
     */
    inline const Aws::String& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::String>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::String>
    Finding& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) associated with the attack sequence finding.</p>
     */
    inline const Aws::String& GetAssociatedAttackSequenceArn() const { return m_associatedAttackSequenceArn; }
    inline bool AssociatedAttackSequenceArnHasBeenSet() const { return m_associatedAttackSequenceArnHasBeenSet; }
    template<typename AssociatedAttackSequenceArnT = Aws::String>
    void SetAssociatedAttackSequenceArn(AssociatedAttackSequenceArnT&& value) { m_associatedAttackSequenceArnHasBeenSet = true; m_associatedAttackSequenceArn = std::forward<AssociatedAttackSequenceArnT>(value); }
    template<typename AssociatedAttackSequenceArnT = Aws::String>
    Finding& WithAssociatedAttackSequenceArn(AssociatedAttackSequenceArnT&& value) { SetAssociatedAttackSequenceArn(std::forward<AssociatedAttackSequenceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    double m_confidence{0.0};
    bool m_confidenceHasBeenSet = false;

    Aws::String m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_partition;
    bool m_partitionHasBeenSet = false;

    Aws::String m_region;
    bool m_regionHasBeenSet = false;

    Resource m_resource;
    bool m_resourceHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Service m_service;
    bool m_serviceHasBeenSet = false;

    double m_severity{0.0};
    bool m_severityHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_associatedAttackSequenceArn;
    bool m_associatedAttackSequenceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
