/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/ForecastServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/ExplainabilityConfig.h>
#include <aws/forecast/model/DataSource.h>
#include <aws/forecast/model/Schema.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ForecastService
{
namespace Model
{

  /**
   */
  class CreateExplainabilityRequest : public ForecastServiceRequest
  {
  public:
    AWS_FORECASTSERVICE_API CreateExplainabilityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExplainability"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A unique name for the Explainability.</p>
     */
    inline const Aws::String& GetExplainabilityName() const { return m_explainabilityName; }
    inline bool ExplainabilityNameHasBeenSet() const { return m_explainabilityNameHasBeenSet; }
    template<typename ExplainabilityNameT = Aws::String>
    void SetExplainabilityName(ExplainabilityNameT&& value) { m_explainabilityNameHasBeenSet = true; m_explainabilityName = std::forward<ExplainabilityNameT>(value); }
    template<typename ExplainabilityNameT = Aws::String>
    CreateExplainabilityRequest& WithExplainabilityName(ExplainabilityNameT&& value) { SetExplainabilityName(std::forward<ExplainabilityNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    CreateExplainabilityRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline const ExplainabilityConfig& GetExplainabilityConfig() const { return m_explainabilityConfig; }
    inline bool ExplainabilityConfigHasBeenSet() const { return m_explainabilityConfigHasBeenSet; }
    template<typename ExplainabilityConfigT = ExplainabilityConfig>
    void SetExplainabilityConfig(ExplainabilityConfigT&& value) { m_explainabilityConfigHasBeenSet = true; m_explainabilityConfig = std::forward<ExplainabilityConfigT>(value); }
    template<typename ExplainabilityConfigT = ExplainabilityConfig>
    CreateExplainabilityRequest& WithExplainabilityConfig(ExplainabilityConfigT&& value) { SetExplainabilityConfig(std::forward<ExplainabilityConfigT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    CreateExplainabilityRequest& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Schema& GetSchema() const { return m_schema; }
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }
    template<typename SchemaT = Schema>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Schema>
    CreateExplainabilityRequest& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Create an Explainability visualization that is viewable within the Amazon Web
     * Services console.</p>
     */
    inline bool GetEnableVisualization() const { return m_enableVisualization; }
    inline bool EnableVisualizationHasBeenSet() const { return m_enableVisualizationHasBeenSet; }
    inline void SetEnableVisualization(bool value) { m_enableVisualizationHasBeenSet = true; m_enableVisualization = value; }
    inline CreateExplainabilityRequest& WithEnableVisualization(bool value) { SetEnableVisualization(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the first point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline const Aws::String& GetStartDateTime() const { return m_startDateTime; }
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }
    template<typename StartDateTimeT = Aws::String>
    void SetStartDateTime(StartDateTimeT&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::forward<StartDateTimeT>(value); }
    template<typename StartDateTimeT = Aws::String>
    CreateExplainabilityRequest& WithStartDateTime(StartDateTimeT&& value) { SetStartDateTime(std::forward<StartDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the last time point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline const Aws::String& GetEndDateTime() const { return m_endDateTime; }
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }
    template<typename EndDateTimeT = Aws::String>
    void SetEndDateTime(EndDateTimeT&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::forward<EndDateTimeT>(value); }
    template<typename EndDateTimeT = Aws::String>
    CreateExplainabilityRequest& WithEndDateTime(EndDateTimeT&& value) { SetEndDateTime(std::forward<EndDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional metadata to help you categorize and organize your resources. Each
     * tag consists of a key and an optional value, both of which you define. Tag keys
     * and values are case sensitive.</p> <p>The following restrictions apply to
     * tags:</p> <ul> <li> <p>For each resource, each tag key must be unique and each
     * tag key must have one value.</p> </li> <li> <p>Maximum number of tags per
     * resource: 50.</p> </li> <li> <p>Maximum key length: 128 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Maximum value length: 256 Unicode characters in
     * UTF-8.</p> </li> <li> <p>Accepted characters: all letters and numbers, spaces
     * representable in UTF-8, and + - = . _ : / @. If your tagging schema is used
     * across other services and resources, the character restrictions of those
     * services also apply. </p> </li> <li> <p>Key prefixes cannot include any upper or
     * lowercase combination of <code>aws:</code> or <code>AWS:</code>. Values can have
     * this prefix. If a tag value has <code>aws</code> as its prefix but the key does
     * not, Forecast considers it to be a user tag and will count against the limit of
     * 50 tags. Tags with only the key prefix of <code>aws</code> do not count against
     * your tags per resource limit. You cannot edit or delete tag keys with this
     * prefix.</p> </li> </ul>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateExplainabilityRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateExplainabilityRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_explainabilityName;
    bool m_explainabilityNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ExplainabilityConfig m_explainabilityConfig;
    bool m_explainabilityConfigHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Schema m_schema;
    bool m_schemaHasBeenSet = false;

    bool m_enableVisualization{false};
    bool m_enableVisualizationHasBeenSet = false;

    Aws::String m_startDateTime;
    bool m_startDateTimeHasBeenSet = false;

    Aws::String m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
