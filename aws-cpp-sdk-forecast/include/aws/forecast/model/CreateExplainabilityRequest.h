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
    AWS_FORECASTSERVICE_API CreateExplainabilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateExplainability"; }

    AWS_FORECASTSERVICE_API Aws::String SerializePayload() const override;

    AWS_FORECASTSERVICE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique name for the Explainability.</p>
     */
    inline const Aws::String& GetExplainabilityName() const{ return m_explainabilityName; }

    /**
     * <p>A unique name for the Explainability.</p>
     */
    inline bool ExplainabilityNameHasBeenSet() const { return m_explainabilityNameHasBeenSet; }

    /**
     * <p>A unique name for the Explainability.</p>
     */
    inline void SetExplainabilityName(const Aws::String& value) { m_explainabilityNameHasBeenSet = true; m_explainabilityName = value; }

    /**
     * <p>A unique name for the Explainability.</p>
     */
    inline void SetExplainabilityName(Aws::String&& value) { m_explainabilityNameHasBeenSet = true; m_explainabilityName = std::move(value); }

    /**
     * <p>A unique name for the Explainability.</p>
     */
    inline void SetExplainabilityName(const char* value) { m_explainabilityNameHasBeenSet = true; m_explainabilityName.assign(value); }

    /**
     * <p>A unique name for the Explainability.</p>
     */
    inline CreateExplainabilityRequest& WithExplainabilityName(const Aws::String& value) { SetExplainabilityName(value); return *this;}

    /**
     * <p>A unique name for the Explainability.</p>
     */
    inline CreateExplainabilityRequest& WithExplainabilityName(Aws::String&& value) { SetExplainabilityName(std::move(value)); return *this;}

    /**
     * <p>A unique name for the Explainability.</p>
     */
    inline CreateExplainabilityRequest& WithExplainabilityName(const char* value) { SetExplainabilityName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline CreateExplainabilityRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline CreateExplainabilityRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability.</p>
     */
    inline CreateExplainabilityRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline const ExplainabilityConfig& GetExplainabilityConfig() const{ return m_explainabilityConfig; }

    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline bool ExplainabilityConfigHasBeenSet() const { return m_explainabilityConfigHasBeenSet; }

    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline void SetExplainabilityConfig(const ExplainabilityConfig& value) { m_explainabilityConfigHasBeenSet = true; m_explainabilityConfig = value; }

    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline void SetExplainabilityConfig(ExplainabilityConfig&& value) { m_explainabilityConfigHasBeenSet = true; m_explainabilityConfig = std::move(value); }

    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline CreateExplainabilityRequest& WithExplainabilityConfig(const ExplainabilityConfig& value) { SetExplainabilityConfig(value); return *this;}

    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline CreateExplainabilityRequest& WithExplainabilityConfig(ExplainabilityConfig&& value) { SetExplainabilityConfig(std::move(value)); return *this;}


    
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    
    inline CreateExplainabilityRequest& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    
    inline CreateExplainabilityRequest& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    
    inline const Schema& GetSchema() const{ return m_schema; }

    
    inline bool SchemaHasBeenSet() const { return m_schemaHasBeenSet; }

    
    inline void SetSchema(const Schema& value) { m_schemaHasBeenSet = true; m_schema = value; }

    
    inline void SetSchema(Schema&& value) { m_schemaHasBeenSet = true; m_schema = std::move(value); }

    
    inline CreateExplainabilityRequest& WithSchema(const Schema& value) { SetSchema(value); return *this;}

    
    inline CreateExplainabilityRequest& WithSchema(Schema&& value) { SetSchema(std::move(value)); return *this;}


    /**
     * <p>Create an Explainability visualization that is viewable within the AWS
     * console.</p>
     */
    inline bool GetEnableVisualization() const{ return m_enableVisualization; }

    /**
     * <p>Create an Explainability visualization that is viewable within the AWS
     * console.</p>
     */
    inline bool EnableVisualizationHasBeenSet() const { return m_enableVisualizationHasBeenSet; }

    /**
     * <p>Create an Explainability visualization that is viewable within the AWS
     * console.</p>
     */
    inline void SetEnableVisualization(bool value) { m_enableVisualizationHasBeenSet = true; m_enableVisualization = value; }

    /**
     * <p>Create an Explainability visualization that is viewable within the AWS
     * console.</p>
     */
    inline CreateExplainabilityRequest& WithEnableVisualization(bool value) { SetEnableVisualization(value); return *this;}


    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the first point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline const Aws::String& GetStartDateTime() const{ return m_startDateTime; }

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the first point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline bool StartDateTimeHasBeenSet() const { return m_startDateTimeHasBeenSet; }

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the first point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline void SetStartDateTime(const Aws::String& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = value; }

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the first point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline void SetStartDateTime(Aws::String&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::move(value); }

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the first point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline void SetStartDateTime(const char* value) { m_startDateTimeHasBeenSet = true; m_startDateTime.assign(value); }

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the first point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline CreateExplainabilityRequest& WithStartDateTime(const Aws::String& value) { SetStartDateTime(value); return *this;}

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the first point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline CreateExplainabilityRequest& WithStartDateTime(Aws::String&& value) { SetStartDateTime(std::move(value)); return *this;}

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the first point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline CreateExplainabilityRequest& WithStartDateTime(const char* value) { SetStartDateTime(value); return *this;}


    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the last time point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline const Aws::String& GetEndDateTime() const{ return m_endDateTime; }

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the last time point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline bool EndDateTimeHasBeenSet() const { return m_endDateTimeHasBeenSet; }

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the last time point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline void SetEndDateTime(const Aws::String& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = value; }

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the last time point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline void SetEndDateTime(Aws::String&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::move(value); }

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the last time point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline void SetEndDateTime(const char* value) { m_endDateTimeHasBeenSet = true; m_endDateTime.assign(value); }

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the last time point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline CreateExplainabilityRequest& WithEndDateTime(const Aws::String& value) { SetEndDateTime(value); return *this;}

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the last time point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline CreateExplainabilityRequest& WithEndDateTime(Aws::String&& value) { SetEndDateTime(std::move(value)); return *this;}

    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, define
     * the last time point for the Explainability.</p> <p>Use the following timestamp
     * format: yyyy-MM-ddTHH:mm:ss (example: 2015-01-01T20:00:00)</p>
     */
    inline CreateExplainabilityRequest& WithEndDateTime(const char* value) { SetEndDateTime(value); return *this;}


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
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

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
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

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
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

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
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

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
    inline CreateExplainabilityRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

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
    inline CreateExplainabilityRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

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
    inline CreateExplainabilityRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

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
    inline CreateExplainabilityRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

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

    bool m_enableVisualization;
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
