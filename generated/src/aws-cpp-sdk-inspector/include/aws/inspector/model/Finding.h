/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/inspector/Inspector_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector/model/InspectorServiceAttributes.h>
#include <aws/inspector/model/AssetType.h>
#include <aws/inspector/model/AssetAttributes.h>
#include <aws/inspector/model/Severity.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/inspector/model/Attribute.h>
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
namespace Inspector
{
namespace Model
{

  /**
   * <p>Contains information about an Amazon Inspector finding. This data type is
   * used as the response element in the <a>DescribeFindings</a>
   * action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/inspector-2016-02-16/Finding">AWS
   * API Reference</a></p>
   */
  class Finding
  {
  public:
    AWS_INSPECTOR_API Finding() = default;
    AWS_INSPECTOR_API Finding(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN that specifies the finding.</p>
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
     * <p>The schema version of this data type.</p>
     */
    inline int GetSchemaVersion() const { return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(int value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline Finding& WithSchemaVersion(int value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data element is set to "Inspector".</p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    Finding& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This data type is used in the <a>Finding</a> data type.</p>
     */
    inline const InspectorServiceAttributes& GetServiceAttributes() const { return m_serviceAttributes; }
    inline bool ServiceAttributesHasBeenSet() const { return m_serviceAttributesHasBeenSet; }
    template<typename ServiceAttributesT = InspectorServiceAttributes>
    void SetServiceAttributes(ServiceAttributesT&& value) { m_serviceAttributesHasBeenSet = true; m_serviceAttributes = std::forward<ServiceAttributesT>(value); }
    template<typename ServiceAttributesT = InspectorServiceAttributes>
    Finding& WithServiceAttributes(ServiceAttributesT&& value) { SetServiceAttributes(std::forward<ServiceAttributesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the host from which the finding is generated.</p>
     */
    inline AssetType GetAssetType() const { return m_assetType; }
    inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
    inline void SetAssetType(AssetType value) { m_assetTypeHasBeenSet = true; m_assetType = value; }
    inline Finding& WithAssetType(AssetType value) { SetAssetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline const AssetAttributes& GetAssetAttributes() const { return m_assetAttributes; }
    inline bool AssetAttributesHasBeenSet() const { return m_assetAttributesHasBeenSet; }
    template<typename AssetAttributesT = AssetAttributes>
    void SetAssetAttributes(AssetAttributesT&& value) { m_assetAttributesHasBeenSet = true; m_assetAttributes = std::forward<AssetAttributesT>(value); }
    template<typename AssetAttributesT = AssetAttributes>
    Finding& WithAssetAttributes(AssetAttributesT&& value) { SetAssetAttributes(std::forward<AssetAttributesT>(value)); return *this;}
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
     * <p>The name of the finding.</p>
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
     * <p>The recommendation for the finding.</p>
     */
    inline const Aws::String& GetRecommendation() const { return m_recommendation; }
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
    template<typename RecommendationT = Aws::String>
    void SetRecommendation(RecommendationT&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::forward<RecommendationT>(value); }
    template<typename RecommendationT = Aws::String>
    Finding& WithRecommendation(RecommendationT&& value) { SetRecommendation(std::forward<RecommendationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding severity. Values can be set to High, Medium, Low, and
     * Informational.</p>
     */
    inline Severity GetSeverity() const { return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(Severity value) { m_severityHasBeenSet = true; m_severity = value; }
    inline Finding& WithSeverity(Severity value) { SetSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric value of the finding severity.</p>
     */
    inline double GetNumericSeverity() const { return m_numericSeverity; }
    inline bool NumericSeverityHasBeenSet() const { return m_numericSeverityHasBeenSet; }
    inline void SetNumericSeverity(double value) { m_numericSeverityHasBeenSet = true; m_numericSeverity = value; }
    inline Finding& WithNumericSeverity(double value) { SetNumericSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This data element is currently not used.</p>
     */
    inline int GetConfidence() const { return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(int value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline Finding& WithConfidence(int value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This data element is currently not used.</p>
     */
    inline bool GetIndicatorOfCompromise() const { return m_indicatorOfCompromise; }
    inline bool IndicatorOfCompromiseHasBeenSet() const { return m_indicatorOfCompromiseHasBeenSet; }
    inline void SetIndicatorOfCompromise(bool value) { m_indicatorOfCompromiseHasBeenSet = true; m_indicatorOfCompromise = value; }
    inline Finding& WithIndicatorOfCompromise(bool value) { SetIndicatorOfCompromise(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-defined attributes for the finding.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Vector<Attribute>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Vector<Attribute>>
    Finding& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesT = Attribute>
    Finding& AddAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes.emplace_back(std::forward<AttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributes() const { return m_userAttributes; }
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }
    template<typename UserAttributesT = Aws::Vector<Attribute>>
    void SetUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::forward<UserAttributesT>(value); }
    template<typename UserAttributesT = Aws::Vector<Attribute>>
    Finding& WithUserAttributes(UserAttributesT&& value) { SetUserAttributes(std::forward<UserAttributesT>(value)); return *this;}
    template<typename UserAttributesT = Attribute>
    Finding& AddUserAttributes(UserAttributesT&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.emplace_back(std::forward<UserAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the finding was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    Finding& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when <a>AddAttributesToFindings</a> is called.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    Finding& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_schemaVersion{0};
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    InspectorServiceAttributes m_serviceAttributes;
    bool m_serviceAttributesHasBeenSet = false;

    AssetType m_assetType{AssetType::NOT_SET};
    bool m_assetTypeHasBeenSet = false;

    AssetAttributes m_assetAttributes;
    bool m_assetAttributesHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_recommendation;
    bool m_recommendationHasBeenSet = false;

    Severity m_severity{Severity::NOT_SET};
    bool m_severityHasBeenSet = false;

    double m_numericSeverity{0.0};
    bool m_numericSeverityHasBeenSet = false;

    int m_confidence{0};
    bool m_confidenceHasBeenSet = false;

    bool m_indicatorOfCompromise{false};
    bool m_indicatorOfCompromiseHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<Attribute> m_userAttributes;
    bool m_userAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
