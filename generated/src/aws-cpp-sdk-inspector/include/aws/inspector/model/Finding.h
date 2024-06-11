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
    AWS_INSPECTOR_API Finding();
    AWS_INSPECTOR_API Finding(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_INSPECTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN that specifies the finding.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline Finding& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline Finding& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline Finding& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schema version of this data type.</p>
     */
    inline int GetSchemaVersion() const{ return m_schemaVersion; }
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }
    inline void SetSchemaVersion(int value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }
    inline Finding& WithSchemaVersion(int value) { SetSchemaVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data element is set to "Inspector".</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline Finding& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline Finding& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline Finding& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This data type is used in the <a>Finding</a> data type.</p>
     */
    inline const InspectorServiceAttributes& GetServiceAttributes() const{ return m_serviceAttributes; }
    inline bool ServiceAttributesHasBeenSet() const { return m_serviceAttributesHasBeenSet; }
    inline void SetServiceAttributes(const InspectorServiceAttributes& value) { m_serviceAttributesHasBeenSet = true; m_serviceAttributes = value; }
    inline void SetServiceAttributes(InspectorServiceAttributes&& value) { m_serviceAttributesHasBeenSet = true; m_serviceAttributes = std::move(value); }
    inline Finding& WithServiceAttributes(const InspectorServiceAttributes& value) { SetServiceAttributes(value); return *this;}
    inline Finding& WithServiceAttributes(InspectorServiceAttributes&& value) { SetServiceAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the host from which the finding is generated.</p>
     */
    inline const AssetType& GetAssetType() const{ return m_assetType; }
    inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
    inline void SetAssetType(const AssetType& value) { m_assetTypeHasBeenSet = true; m_assetType = value; }
    inline void SetAssetType(AssetType&& value) { m_assetTypeHasBeenSet = true; m_assetType = std::move(value); }
    inline Finding& WithAssetType(const AssetType& value) { SetAssetType(value); return *this;}
    inline Finding& WithAssetType(AssetType&& value) { SetAssetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline const AssetAttributes& GetAssetAttributes() const{ return m_assetAttributes; }
    inline bool AssetAttributesHasBeenSet() const { return m_assetAttributesHasBeenSet; }
    inline void SetAssetAttributes(const AssetAttributes& value) { m_assetAttributesHasBeenSet = true; m_assetAttributes = value; }
    inline void SetAssetAttributes(AssetAttributes&& value) { m_assetAttributesHasBeenSet = true; m_assetAttributes = std::move(value); }
    inline Finding& WithAssetAttributes(const AssetAttributes& value) { SetAssetAttributes(value); return *this;}
    inline Finding& WithAssetAttributes(AssetAttributes&& value) { SetAssetAttributes(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the finding.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline Finding& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline Finding& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline Finding& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the finding.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }
    inline Finding& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}
    inline Finding& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}
    inline Finding& WithTitle(const char* value) { SetTitle(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the finding.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Finding& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Finding& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Finding& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation for the finding.</p>
     */
    inline const Aws::String& GetRecommendation() const{ return m_recommendation; }
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }
    inline void SetRecommendation(const Aws::String& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }
    inline void SetRecommendation(Aws::String&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::move(value); }
    inline void SetRecommendation(const char* value) { m_recommendationHasBeenSet = true; m_recommendation.assign(value); }
    inline Finding& WithRecommendation(const Aws::String& value) { SetRecommendation(value); return *this;}
    inline Finding& WithRecommendation(Aws::String&& value) { SetRecommendation(std::move(value)); return *this;}
    inline Finding& WithRecommendation(const char* value) { SetRecommendation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The finding severity. Values can be set to High, Medium, Low, and
     * Informational.</p>
     */
    inline const Severity& GetSeverity() const{ return m_severity; }
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }
    inline void SetSeverity(const Severity& value) { m_severityHasBeenSet = true; m_severity = value; }
    inline void SetSeverity(Severity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }
    inline Finding& WithSeverity(const Severity& value) { SetSeverity(value); return *this;}
    inline Finding& WithSeverity(Severity&& value) { SetSeverity(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The numeric value of the finding severity.</p>
     */
    inline double GetNumericSeverity() const{ return m_numericSeverity; }
    inline bool NumericSeverityHasBeenSet() const { return m_numericSeverityHasBeenSet; }
    inline void SetNumericSeverity(double value) { m_numericSeverityHasBeenSet = true; m_numericSeverity = value; }
    inline Finding& WithNumericSeverity(double value) { SetNumericSeverity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This data element is currently not used.</p>
     */
    inline int GetConfidence() const{ return m_confidence; }
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }
    inline void SetConfidence(int value) { m_confidenceHasBeenSet = true; m_confidence = value; }
    inline Finding& WithConfidence(int value) { SetConfidence(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This data element is currently not used.</p>
     */
    inline bool GetIndicatorOfCompromise() const{ return m_indicatorOfCompromise; }
    inline bool IndicatorOfCompromiseHasBeenSet() const { return m_indicatorOfCompromiseHasBeenSet; }
    inline void SetIndicatorOfCompromise(bool value) { m_indicatorOfCompromiseHasBeenSet = true; m_indicatorOfCompromise = value; }
    inline Finding& WithIndicatorOfCompromise(bool value) { SetIndicatorOfCompromise(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The system-defined attributes for the finding.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }
    inline Finding& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}
    inline Finding& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}
    inline Finding& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }
    inline Finding& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributes() const{ return m_userAttributes; }
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }
    inline void SetUserAttributes(const Aws::Vector<Attribute>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }
    inline void SetUserAttributes(Aws::Vector<Attribute>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::move(value); }
    inline Finding& WithUserAttributes(const Aws::Vector<Attribute>& value) { SetUserAttributes(value); return *this;}
    inline Finding& WithUserAttributes(Aws::Vector<Attribute>&& value) { SetUserAttributes(std::move(value)); return *this;}
    inline Finding& AddUserAttributes(const Attribute& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }
    inline Finding& AddUserAttributes(Attribute&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time when the finding was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline Finding& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline Finding& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when <a>AddAttributesToFindings</a> is called.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline Finding& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline Finding& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    InspectorServiceAttributes m_serviceAttributes;
    bool m_serviceAttributesHasBeenSet = false;

    AssetType m_assetType;
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

    Severity m_severity;
    bool m_severityHasBeenSet = false;

    double m_numericSeverity;
    bool m_numericSeverityHasBeenSet = false;

    int m_confidence;
    bool m_confidenceHasBeenSet = false;

    bool m_indicatorOfCompromise;
    bool m_indicatorOfCompromiseHasBeenSet = false;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<Attribute> m_userAttributes;
    bool m_userAttributesHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
