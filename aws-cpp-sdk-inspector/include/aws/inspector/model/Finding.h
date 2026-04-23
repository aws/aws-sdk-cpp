/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_INSPECTOR_API Finding
  {
  public:
    Finding();
    Finding(Aws::Utils::Json::JsonView jsonValue);
    Finding& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN that specifies the finding.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN that specifies the finding.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN that specifies the finding.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN that specifies the finding.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN that specifies the finding.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN that specifies the finding.</p>
     */
    inline Finding& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN that specifies the finding.</p>
     */
    inline Finding& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN that specifies the finding.</p>
     */
    inline Finding& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The schema version of this data type.</p>
     */
    inline int GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The schema version of this data type.</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The schema version of this data type.</p>
     */
    inline void SetSchemaVersion(int value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The schema version of this data type.</p>
     */
    inline Finding& WithSchemaVersion(int value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The data element is set to "Inspector".</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The data element is set to "Inspector".</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The data element is set to "Inspector".</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The data element is set to "Inspector".</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The data element is set to "Inspector".</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The data element is set to "Inspector".</p>
     */
    inline Finding& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The data element is set to "Inspector".</p>
     */
    inline Finding& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The data element is set to "Inspector".</p>
     */
    inline Finding& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>This data type is used in the <a>Finding</a> data type.</p>
     */
    inline const InspectorServiceAttributes& GetServiceAttributes() const{ return m_serviceAttributes; }

    /**
     * <p>This data type is used in the <a>Finding</a> data type.</p>
     */
    inline bool ServiceAttributesHasBeenSet() const { return m_serviceAttributesHasBeenSet; }

    /**
     * <p>This data type is used in the <a>Finding</a> data type.</p>
     */
    inline void SetServiceAttributes(const InspectorServiceAttributes& value) { m_serviceAttributesHasBeenSet = true; m_serviceAttributes = value; }

    /**
     * <p>This data type is used in the <a>Finding</a> data type.</p>
     */
    inline void SetServiceAttributes(InspectorServiceAttributes&& value) { m_serviceAttributesHasBeenSet = true; m_serviceAttributes = std::move(value); }

    /**
     * <p>This data type is used in the <a>Finding</a> data type.</p>
     */
    inline Finding& WithServiceAttributes(const InspectorServiceAttributes& value) { SetServiceAttributes(value); return *this;}

    /**
     * <p>This data type is used in the <a>Finding</a> data type.</p>
     */
    inline Finding& WithServiceAttributes(InspectorServiceAttributes&& value) { SetServiceAttributes(std::move(value)); return *this;}


    /**
     * <p>The type of the host from which the finding is generated.</p>
     */
    inline const AssetType& GetAssetType() const{ return m_assetType; }

    /**
     * <p>The type of the host from which the finding is generated.</p>
     */
    inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }

    /**
     * <p>The type of the host from which the finding is generated.</p>
     */
    inline void SetAssetType(const AssetType& value) { m_assetTypeHasBeenSet = true; m_assetType = value; }

    /**
     * <p>The type of the host from which the finding is generated.</p>
     */
    inline void SetAssetType(AssetType&& value) { m_assetTypeHasBeenSet = true; m_assetType = std::move(value); }

    /**
     * <p>The type of the host from which the finding is generated.</p>
     */
    inline Finding& WithAssetType(const AssetType& value) { SetAssetType(value); return *this;}

    /**
     * <p>The type of the host from which the finding is generated.</p>
     */
    inline Finding& WithAssetType(AssetType&& value) { SetAssetType(std::move(value)); return *this;}


    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline const AssetAttributes& GetAssetAttributes() const{ return m_assetAttributes; }

    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline bool AssetAttributesHasBeenSet() const { return m_assetAttributesHasBeenSet; }

    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline void SetAssetAttributes(const AssetAttributes& value) { m_assetAttributesHasBeenSet = true; m_assetAttributes = value; }

    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline void SetAssetAttributes(AssetAttributes&& value) { m_assetAttributesHasBeenSet = true; m_assetAttributes = std::move(value); }

    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline Finding& WithAssetAttributes(const AssetAttributes& value) { SetAssetAttributes(value); return *this;}

    /**
     * <p>A collection of attributes of the host from which the finding is
     * generated.</p>
     */
    inline Finding& WithAssetAttributes(AssetAttributes&& value) { SetAssetAttributes(std::move(value)); return *this;}


    /**
     * <p>The ID of the finding.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the finding.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the finding.</p>
     */
    inline Finding& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the finding.</p>
     */
    inline Finding& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the finding.</p>
     */
    inline Finding& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the finding.</p>
     */
    inline const Aws::String& GetTitle() const{ return m_title; }

    /**
     * <p>The name of the finding.</p>
     */
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }

    /**
     * <p>The name of the finding.</p>
     */
    inline void SetTitle(const Aws::String& value) { m_titleHasBeenSet = true; m_title = value; }

    /**
     * <p>The name of the finding.</p>
     */
    inline void SetTitle(Aws::String&& value) { m_titleHasBeenSet = true; m_title = std::move(value); }

    /**
     * <p>The name of the finding.</p>
     */
    inline void SetTitle(const char* value) { m_titleHasBeenSet = true; m_title.assign(value); }

    /**
     * <p>The name of the finding.</p>
     */
    inline Finding& WithTitle(const Aws::String& value) { SetTitle(value); return *this;}

    /**
     * <p>The name of the finding.</p>
     */
    inline Finding& WithTitle(Aws::String&& value) { SetTitle(std::move(value)); return *this;}

    /**
     * <p>The name of the finding.</p>
     */
    inline Finding& WithTitle(const char* value) { SetTitle(value); return *this;}


    /**
     * <p>The description of the finding.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the finding.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the finding.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the finding.</p>
     */
    inline Finding& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the finding.</p>
     */
    inline Finding& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the finding.</p>
     */
    inline Finding& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The recommendation for the finding.</p>
     */
    inline const Aws::String& GetRecommendation() const{ return m_recommendation; }

    /**
     * <p>The recommendation for the finding.</p>
     */
    inline bool RecommendationHasBeenSet() const { return m_recommendationHasBeenSet; }

    /**
     * <p>The recommendation for the finding.</p>
     */
    inline void SetRecommendation(const Aws::String& value) { m_recommendationHasBeenSet = true; m_recommendation = value; }

    /**
     * <p>The recommendation for the finding.</p>
     */
    inline void SetRecommendation(Aws::String&& value) { m_recommendationHasBeenSet = true; m_recommendation = std::move(value); }

    /**
     * <p>The recommendation for the finding.</p>
     */
    inline void SetRecommendation(const char* value) { m_recommendationHasBeenSet = true; m_recommendation.assign(value); }

    /**
     * <p>The recommendation for the finding.</p>
     */
    inline Finding& WithRecommendation(const Aws::String& value) { SetRecommendation(value); return *this;}

    /**
     * <p>The recommendation for the finding.</p>
     */
    inline Finding& WithRecommendation(Aws::String&& value) { SetRecommendation(std::move(value)); return *this;}

    /**
     * <p>The recommendation for the finding.</p>
     */
    inline Finding& WithRecommendation(const char* value) { SetRecommendation(value); return *this;}


    /**
     * <p>The finding severity. Values can be set to High, Medium, Low, and
     * Informational.</p>
     */
    inline const Severity& GetSeverity() const{ return m_severity; }

    /**
     * <p>The finding severity. Values can be set to High, Medium, Low, and
     * Informational.</p>
     */
    inline bool SeverityHasBeenSet() const { return m_severityHasBeenSet; }

    /**
     * <p>The finding severity. Values can be set to High, Medium, Low, and
     * Informational.</p>
     */
    inline void SetSeverity(const Severity& value) { m_severityHasBeenSet = true; m_severity = value; }

    /**
     * <p>The finding severity. Values can be set to High, Medium, Low, and
     * Informational.</p>
     */
    inline void SetSeverity(Severity&& value) { m_severityHasBeenSet = true; m_severity = std::move(value); }

    /**
     * <p>The finding severity. Values can be set to High, Medium, Low, and
     * Informational.</p>
     */
    inline Finding& WithSeverity(const Severity& value) { SetSeverity(value); return *this;}

    /**
     * <p>The finding severity. Values can be set to High, Medium, Low, and
     * Informational.</p>
     */
    inline Finding& WithSeverity(Severity&& value) { SetSeverity(std::move(value)); return *this;}


    /**
     * <p>The numeric value of the finding severity.</p>
     */
    inline double GetNumericSeverity() const{ return m_numericSeverity; }

    /**
     * <p>The numeric value of the finding severity.</p>
     */
    inline bool NumericSeverityHasBeenSet() const { return m_numericSeverityHasBeenSet; }

    /**
     * <p>The numeric value of the finding severity.</p>
     */
    inline void SetNumericSeverity(double value) { m_numericSeverityHasBeenSet = true; m_numericSeverity = value; }

    /**
     * <p>The numeric value of the finding severity.</p>
     */
    inline Finding& WithNumericSeverity(double value) { SetNumericSeverity(value); return *this;}


    /**
     * <p>This data element is currently not used.</p>
     */
    inline int GetConfidence() const{ return m_confidence; }

    /**
     * <p>This data element is currently not used.</p>
     */
    inline bool ConfidenceHasBeenSet() const { return m_confidenceHasBeenSet; }

    /**
     * <p>This data element is currently not used.</p>
     */
    inline void SetConfidence(int value) { m_confidenceHasBeenSet = true; m_confidence = value; }

    /**
     * <p>This data element is currently not used.</p>
     */
    inline Finding& WithConfidence(int value) { SetConfidence(value); return *this;}


    /**
     * <p>This data element is currently not used.</p>
     */
    inline bool GetIndicatorOfCompromise() const{ return m_indicatorOfCompromise; }

    /**
     * <p>This data element is currently not used.</p>
     */
    inline bool IndicatorOfCompromiseHasBeenSet() const { return m_indicatorOfCompromiseHasBeenSet; }

    /**
     * <p>This data element is currently not used.</p>
     */
    inline void SetIndicatorOfCompromise(bool value) { m_indicatorOfCompromiseHasBeenSet = true; m_indicatorOfCompromise = value; }

    /**
     * <p>This data element is currently not used.</p>
     */
    inline Finding& WithIndicatorOfCompromise(bool value) { SetIndicatorOfCompromise(value); return *this;}


    /**
     * <p>The system-defined attributes for the finding.</p>
     */
    inline const Aws::Vector<Attribute>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>The system-defined attributes for the finding.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>The system-defined attributes for the finding.</p>
     */
    inline void SetAttributes(const Aws::Vector<Attribute>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>The system-defined attributes for the finding.</p>
     */
    inline void SetAttributes(Aws::Vector<Attribute>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>The system-defined attributes for the finding.</p>
     */
    inline Finding& WithAttributes(const Aws::Vector<Attribute>& value) { SetAttributes(value); return *this;}

    /**
     * <p>The system-defined attributes for the finding.</p>
     */
    inline Finding& WithAttributes(Aws::Vector<Attribute>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>The system-defined attributes for the finding.</p>
     */
    inline Finding& AddAttributes(const Attribute& value) { m_attributesHasBeenSet = true; m_attributes.push_back(value); return *this; }

    /**
     * <p>The system-defined attributes for the finding.</p>
     */
    inline Finding& AddAttributes(Attribute&& value) { m_attributesHasBeenSet = true; m_attributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline const Aws::Vector<Attribute>& GetUserAttributes() const{ return m_userAttributes; }

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline bool UserAttributesHasBeenSet() const { return m_userAttributesHasBeenSet; }

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline void SetUserAttributes(const Aws::Vector<Attribute>& value) { m_userAttributesHasBeenSet = true; m_userAttributes = value; }

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline void SetUserAttributes(Aws::Vector<Attribute>&& value) { m_userAttributesHasBeenSet = true; m_userAttributes = std::move(value); }

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline Finding& WithUserAttributes(const Aws::Vector<Attribute>& value) { SetUserAttributes(value); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline Finding& WithUserAttributes(Aws::Vector<Attribute>&& value) { SetUserAttributes(std::move(value)); return *this;}

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline Finding& AddUserAttributes(const Attribute& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(value); return *this; }

    /**
     * <p>The user-defined attributes that are assigned to the finding.</p>
     */
    inline Finding& AddUserAttributes(Attribute&& value) { m_userAttributesHasBeenSet = true; m_userAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>The time when the finding was generated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time when the finding was generated.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time when the finding was generated.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time when the finding was generated.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time when the finding was generated.</p>
     */
    inline Finding& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time when the finding was generated.</p>
     */
    inline Finding& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The time when <a>AddAttributesToFindings</a> is called.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time when <a>AddAttributesToFindings</a> is called.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time when <a>AddAttributesToFindings</a> is called.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time when <a>AddAttributesToFindings</a> is called.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time when <a>AddAttributesToFindings</a> is called.</p>
     */
    inline Finding& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time when <a>AddAttributesToFindings</a> is called.</p>
     */
    inline Finding& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    int m_schemaVersion;
    bool m_schemaVersionHasBeenSet;

    Aws::String m_service;
    bool m_serviceHasBeenSet;

    InspectorServiceAttributes m_serviceAttributes;
    bool m_serviceAttributesHasBeenSet;

    AssetType m_assetType;
    bool m_assetTypeHasBeenSet;

    AssetAttributes m_assetAttributes;
    bool m_assetAttributesHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_title;
    bool m_titleHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_recommendation;
    bool m_recommendationHasBeenSet;

    Severity m_severity;
    bool m_severityHasBeenSet;

    double m_numericSeverity;
    bool m_numericSeverityHasBeenSet;

    int m_confidence;
    bool m_confidenceHasBeenSet;

    bool m_indicatorOfCompromise;
    bool m_indicatorOfCompromiseHasBeenSet;

    Aws::Vector<Attribute> m_attributes;
    bool m_attributesHasBeenSet;

    Aws::Vector<Attribute> m_userAttributes;
    bool m_userAttributesHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet;
  };

} // namespace Model
} // namespace Inspector
} // namespace Aws
